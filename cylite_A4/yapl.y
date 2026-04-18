
%{
#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
extern char *yytext;
extern int yytok_line;
extern int yytok_col;
int yylex(void);
void yyerror(const char *s);
int global_declarations=0;
int func_definitions=0;
int int_consts=0;
int pointer_decls=0;
int ifs_wo_else=0;
int ladder_len=0,hold=0;
int max=-1;
int label_count = 0;

struct quadruple {
    char op[10];
    char arg1[50];
    char arg2[50];
    char result[50];
};

struct quadruple quad_table[1000];
int quad_idx = 0;
int temp_count = 0;

/* Generates t1, t2, t3... */
char* new_temp() {
    char* t = (char*)malloc(10);
    sprintf(t, "t%d", ++temp_count);
    return t;
}

char* new_label() {
    char* l = (char*)malloc(10);
    sprintf(l, "L%d", ++label_count);
    return l;
}

/* Records a new row in our table */
void emit(char* op, char* arg1, char* arg2, char* res) {
    strcpy(quad_table[quad_idx].op, op);
    strcpy(quad_table[quad_idx].arg1, arg1);
    strcpy(quad_table[quad_idx].arg2, arg2);
    strcpy(quad_table[quad_idx].result, res);
    quad_idx++;
}

#define YYDEBUG 1
#define YYFPRINTF yytrace_fprintf

typedef struct {
	char lhs[128];
	int rhs_count;
	char rhs[64][128];
} ReductionStep;

typedef struct {
	int active;
	char lhs[128];
	int rhs_count;
	char rhs[64][128];
} PendingReduction;

static ReductionStep *g_steps = NULL;
static int g_step_count = 0;
static int g_step_cap = 0;
static PendingReduction g_pending = {0};
static char g_trace_line[8192];
static int g_trace_line_len = 0;

static void reset_pending(void);
static void parse_debug_line(const char *line);
static int yytrace_fprintf(FILE *stream, const char *fmt, ...);
static void append_step(const char *lhs, char rhs[][128], int rhs_count);
static void print_reverse_derivation(void);
static int write_reverse_derivation_dot(const char *dot_path);
static int write_reverse_derivation_svg(const char *svg_path);
static int looks_like_nonterminal(const char *sym);
static void free_derivation_steps(void);
%}

%union {
    char name[50];  /* Holds variable names or temp names like 't1' */
    int val;
    struct symtab *symp; /* Added from your second union */
}

%type <name> expression assignment_expression additive_expression multiplicative_expression 
%type <name> unary_expression primary_expression cast_expression constant
%type <name> postfix_expression string generic_selection
%type <name> shift_expression relational_expression equality_expression
%type <name> and_expression exclusive_or_expression inclusive_or_expression
%type <name> logical_and_expression logical_or_expression conditional_expression
%type <name> unary_operator assignment_operator expression_statement type_name
%type <name> if_prefix while_prefix while_cond


%token 	ELIF PASS TRY EXCEPT PRINT RANGE IN FOREACH
%token <name> IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL FUNC_NAME
%token SIZEOF
%token	PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP TH_OP
%token	AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token	SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token	XOR_ASSIGN OR_ASSIGN
%token	TYPEDEF_NAME ENUMERATION_CONSTANT

%token	TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token	CONST RESTRICT VOLATILE
%token	BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token	COMPLEX IMAGINARY 
%token	STRUCT UNION ENUM ELLIPSIS

%token <val> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token	ALIGNAS ALIGNOF ATOMIC GENERIC NORETURN STATIC_ASSERT THREAD_LOCAL

%define parse.error verbose

/* Precedence for Comma to fix the Reduce/Reduce conflict */
%left ','

/* Precedence for If/Elif/Else to fix the Shift/Reduce conflicts */
%nonassoc LOWER_THAN_ELSE
%nonassoc ELIF
%nonassoc ELSE

%start translation_unit

%right '('

%%

primary_expression
    : IDENTIFIER           { strcpy($$, $1); }
    | constant             { strcpy($$, $1); }
    | string               { strcpy($$, $1); } 
    | '(' expression ')'   { strcpy($$, $2); } 
    | generic_selection    { strcpy($$, $1); } 
    ;

constant
	: I_CONSTANT {int_consts++;}	
	| F_CONSTANT
	| ENUMERATION_CONSTANT { strcpy($$, "enum_const"); } 
	;
enumeration_constant		/* before it has been defined as such */
	: IDENTIFIER
	;

string
	: STRING_LITERAL
	| FUNC_NAME
	;

generic_selection
	: GENERIC '(' assignment_expression ',' generic_assoc_list ')' { strcpy($$, ""); }
	;

generic_assoc_list
	: generic_association
	| generic_assoc_list ',' generic_association
	;

generic_association
	: type_name ':' assignment_expression
	| DEFAULT ':' assignment_expression
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' expression ')'  /* Use expression here */
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	| '(' type_name ')' '{' initializer_list '}'      { strcpy($$, ""); }
	| '(' type_name ')' '{' initializer_list ',' '}'  { strcpy($$, ""); }
	| PRINT '(' ')'                                   { strcpy($$, ""); }
	| PRINT '(' expression ')'                        { strcpy($$, ""); }
	;


unary_expression
	: postfix_expression { strcpy($$, $1); }
	| INC_OP unary_expression
	{
		char* t = new_temp();
		emit("+", $2, "1", t);   /* Increment the value */
		emit("=", t, "", $2);    /* Update the original variable */
		strcpy($$, $2);          /* Return the updated variable name */
	}
	| DEC_OP unary_expression
	{
		char* t = new_temp();
		emit("-", $2, "1", t);   /* Decrement the value */
		emit("=", t, "", $2);    /* Update the original variable */
		strcpy($$, $2);
	}
	| unary_operator cast_expression
	{
		char* t = new_temp();
		/* The PDF example explicitly uses "minus" for unary negation  */
		if (strcmp($1, "-") == 0) {
			emit("minus", $2, "", t);
		} else {
			emit($1, $2, "", t);
		}
		strcpy($$, t);
	}
	| SIZEOF unary_expression
	{
		char* t = new_temp();
		emit("sizeof", $2, "", t);
		strcpy($$, t);
	}
	| SIZEOF '(' type_name ')'
	{
		char* t = new_temp();
		emit("sizeof", $3, "", t);
		strcpy($$, t);
	}
	| ALIGNOF '(' type_name ')'
	{
		char* t = new_temp();
		emit("alignof", $3, "", t);
		strcpy($$, t);
	}
	;

unary_operator
	: '&' { strcpy($$, "&"); }
	| '*' { strcpy($$, "*"); }
	| '+' { strcpy($$, "+"); }
	| '-' { strcpy($$, "-"); }
	| '~' { strcpy($$, "~"); }
	| '!' { strcpy($$, "!"); }
	;

cast_expression
	: unary_expression { strcpy($$, $1); }
	| '(' type_name ')' cast_expression { strcpy($$, $4); } /* ADD ACTION to pass $4 up */
	;

multiplicative_expression
    : cast_expression 
    { 
        strcpy($$, $1); 
    }
    | multiplicative_expression '*' cast_expression
    {
        char* t = new_temp();      /* Create t1, t2, etc.  */
        emit("*", $1, $3, t);     /* op: *, arg1: left, arg2: right, result: temp [cite: 34] */
        strcpy($$, t);            /* Pass result name up the tree  */
    }
    | multiplicative_expression '/' cast_expression
    {
        char* t = new_temp();
        emit("/", $1, $3, t);     /* Emit row for division [cite: 53] */
        strcpy($$, t);
    }
    | multiplicative_expression '%' cast_expression
    {
        char* t = new_temp();
        emit("%", $1, $3, t);     /* Emit row for modulo [cite: 53] */
        strcpy($$, t);
    }
    ;

additive_expression
    : multiplicative_expression 
    { 
        strcpy($$, $1); 
    }
    | additive_expression '+' multiplicative_expression
    {
        char* t = new_temp();      /* Generate next temporary (e.g., t5) */
        emit("+", $1, $3, t);     /* Create quadruple: op, arg1, arg2, result */
        strcpy($$, t);            /* Pass temporary name to parent rule */
    }
    | additive_expression '-' multiplicative_expression
    {
        char* t = new_temp();
        emit("-", $1, $3, t);     /* Record subtraction in the table */
        strcpy($$, t);
    }
    ;

shift_expression
	: additive_expression {strcpy($$, $1); };
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
    : shift_expression 
    { 
        strcpy($$, $1); 
    }
    | relational_expression '<' shift_expression
    {
        char* t = new_temp();
        emit("<", $1, $3, t);
        strcpy($$, t);
    }
    | relational_expression '>' shift_expression
    {
        char* t = new_temp();
        emit(">", $1, $3, t);
        strcpy($$, t);
    }
    | relational_expression LE_OP shift_expression
    {
        char* t = new_temp();
        emit("<=", $1, $3, t);
        strcpy($$, t);
    }
    | relational_expression GE_OP shift_expression
    {
        char* t = new_temp();
        emit(">=", $1, $3, t);
        strcpy($$, t);
    }
    | relational_expression TH_OP shift_expression
    {
        char* t = new_temp();
        emit("<=>", $1, $3, t);
        strcpy($$, t);
    }
    ;

equality_expression
    : relational_expression 
    { 
        strcpy($$, $1); 
    }
    | equality_expression EQ_OP relational_expression
    {
        char* t = new_temp();
        emit("==", $1, $3, t);
        strcpy($$, t);
    }
    | equality_expression NE_OP relational_expression
    {
        char* t = new_temp();
        emit("!=", $1, $3, t);
        strcpy($$, t);
    }
    ;

and_expression
	: equality_expression { strcpy($$, $1); };
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression { strcpy($$, $1); };
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression { strcpy($$, $1); };
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
    : inclusive_or_expression 
    { 
        strcpy($$, $1); 
    }
    | logical_and_expression AND_OP inclusive_or_expression
    {
        char* t = new_temp();
        emit("&&", $1, $3, t);
        strcpy($$, t);
    }
    ;

logical_or_expression
    : logical_and_expression 
    { 
        strcpy($$, $1); 
    }
    | logical_or_expression OR_OP logical_and_expression
    {
        char* t = new_temp();
        emit("||", $1, $3, t);
        strcpy($$, t);
    }
    ;

conditional_expression
	: logical_or_expression { strcpy($$, $1); };
	;

assignment_expression
	: conditional_expression
	{ 
		strcpy($$, $1); 
	}
        | unary_expression assignment_operator assignment_expression
        {
                char target[50];
                strcpy(target, $1);
                
                // VALIDATION CHECK: Eliminate unary ops on LHS
                if (target[0] == 't' || target[0] == 'T') {
                    for (int i = quad_idx - 1; i >= 0; i--) {
                        if (strcmp(quad_table[i].result, target) == 0) {
                            if (strcmp(quad_table[i].op, "minus") == 0 || strcmp(quad_table[i].op, "-") == 0 || strcmp(quad_table[i].op, "+") == 0 || strcmp(quad_table[i].op, "*") == 0 || strcmp(quad_table[i].op, "&") == 0 || strcmp(quad_table[i].op, "!") == 0 || strcmp(quad_table[i].op, "~") == 0) {
                                strcpy(target, quad_table[i].arg1);
                                for (int k = i; k < quad_idx - 1; k++) {
                                    quad_table[k] = quad_table[k + 1];
                                }
                                quad_idx--;
                                temp_count--; // Decrement temp to maintain sequential count
                            }
                            break;
                        }
                    }
                }

                if (strcmp($2, "=") == 0) {
                        emit("=", $3, "", target);
                } else {
                        char op[3];
                        strncpy(op, $2, strlen($2)-1);
                        op[strlen($2)-1] = '\0';
                        char* t = new_temp();
                        emit(op, target, $3, t);
                        emit("=", t, "", target);
                }
                strcpy($$, target);
        }
	;

assignment_operator
	: '='          { strcpy($$, "="); }
	| MUL_ASSIGN   { strcpy($$, "*="); }
	| DIV_ASSIGN   { strcpy($$, "/="); }
	| MOD_ASSIGN   { strcpy($$, "%="); }
	| ADD_ASSIGN   { strcpy($$, "+="); }
	| SUB_ASSIGN   { strcpy($$, "-="); }
	| LEFT_ASSIGN  { strcpy($$, "<<="); }
	| RIGHT_ASSIGN { strcpy($$, ">>="); }
	| AND_ASSIGN   { strcpy($$, "&="); }
	| XOR_ASSIGN   { strcpy($$, "^="); }
	| OR_ASSIGN    { strcpy($$, "|="); }
	;

expression
	: assignment_expression { strcpy($$, $1); }
	| expression ',' assignment_expression { strcpy($$, $3); }
	;

constant_expression
	: conditional_expression	/* with constraints */
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	| static_assert_declaration
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers
	| storage_class_specifier
	| type_specifier declaration_specifiers
	| type_specifier
	| type_qualifier declaration_specifiers
	| type_qualifier
	| function_specifier declaration_specifiers
	| function_specifier
	| alignment_specifier declaration_specifiers
	| alignment_specifier
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator '=' initializer
	| declarator
	;

storage_class_specifier
	: TYPEDEF	/* identifiers must be flagged as TYPEDEF_NAME */
	| EXTERN
	| STATIC
	| THREAD_LOCAL
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| BOOL
	| COMPLEX
	| IMAGINARY	  	/* non-mandated extension */
	| atomic_type_specifier
	| struct_or_union_specifier
	| enum_specifier
	| TYPEDEF_NAME		/* after it has been defined as such */
	;

struct_or_union_specifier
	: struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list ';'	/* for anonymous struct/union */
	| specifier_qualifier_list struct_declarator_list ';'
	| static_assert_declaration
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: ':' constant_expression
	| declarator ':' constant_expression
	| declarator
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator	/* identifiers must be flagged as ENUMERATION_CONSTANT */
	: enumeration_constant '=' constant_expression
	| enumeration_constant
	;

atomic_type_specifier
	: ATOMIC '(' type_name ')'
	;

type_qualifier
	: CONST
	| RESTRICT
	| VOLATILE
	| ATOMIC %prec LOWER_THAN_ELSE  /* Forces 'ATOMIC' as a qualifier to have lower priority than '(' */
	;

function_specifier
	: INLINE
	| NORETURN
	;

alignment_specifier
	: ALIGNAS '(' type_name ')'
	| ALIGNAS '(' constant_expression ')'
	;

declarator
	: pointer direct_declarator {pointer_decls++;}
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER
	| '(' declarator ')'
	| direct_declarator '[' ']'
	| direct_declarator '[' '*' ']'
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_declarator '[' STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list '*' ']'
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_declarator '[' type_qualifier_list ']'
	| direct_declarator '[' assignment_expression ']'
	| direct_declarator '(' parameter_type_list ')' 
	| direct_declarator '(' ')'
	| direct_declarator '(' identifier_list ')'
	;

pointer
	: '*' type_qualifier_list pointer
	| '*' type_qualifier_list
	| '*' pointer
	| '*'
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list ',' ELLIPSIS
	| parameter_list
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list abstract_declarator { strcpy($$, "type"); }
	| specifier_qualifier_list                     { strcpy($$, "type"); }
	;

abstract_declarator
	: pointer direct_abstract_declarator
	| pointer
	| direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' '*' ']'
	| '[' STATIC type_qualifier_list assignment_expression ']'
	| '[' STATIC assignment_expression ']'
	| '[' type_qualifier_list STATIC assignment_expression ']'
	| '[' type_qualifier_list assignment_expression ']'
	| '[' type_qualifier_list ']'
	| '[' assignment_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' '*' ']'
	| direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_abstract_declarator '[' STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list ']'
	| direct_abstract_declarator '[' assignment_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	| assignment_expression
	;

initializer_list
	: designation initializer
	| initializer
	| initializer_list ',' designation initializer
	| initializer_list ',' initializer
	;

designation
	: designator_list '='
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'
	| '.' IDENTIFIER
	;

static_assert_declaration
	: STATIC_ASSERT '(' constant_expression ',' STRING_LITERAL ')' ';'
	;

try_except_statement
	: TRY compound_statement EXCEPT compound_statement
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	| try_except_statement
	| PASS ';'
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	| '{'  block_item_list '}'
	;

block_item_list
	: block_item
	| block_item_list block_item
	;

block_item
	: declaration
	| statement
	;

expression_statement
	: ';' { strcpy($$, ""); }
	| expression ';' { strcpy($$, $1); }
	;

elif_list
	: ELIF '(' expression ')' statement { ladder_len++; }
	| elif_list ELIF '(' expression ')' statement { ladder_len++; }
	;

if_prefix
    : IF '(' expression ')'
    {
        char *l_false = new_label();
        emit("ifFalse", $3, "", l_false);
        strcpy($$, l_false); /* FIX: strcpy instead of = */
    }
    ;

while_prefix
    : WHILE
    {
        char *l_start = new_label();
		emit("LABEL", "", "", l_start);
        strcpy($$, l_start); /* FIX: strcpy */
    }
    ;

while_cond
    : while_prefix '(' expression ')'
    {
        char *l_end = new_label();
        emit("ifFalse", $3, "", l_end);
        sprintf($$, "%s %s", $1, l_end); /* Pack start and end labels */
    }
    ;

selection_statement
    /* RULE 1: IF-ELSE */
    : if_prefix statement ELSE 
      {
          char *l_end = new_label();
					emit("goto", "", "", l_end);
					emit("LABEL", "", "", $1); /* $1 is the label from if_prefix */
          
          ladder_len++; 
          $<val>$ = (ladder_len - 1); 
          strcpy($<name>$, l_end); /* FIX: strcpy */
      }
      statement 
      {
		  emit("LABEL", "", "", $<name>4); 
          if(ladder_len >= max) { max = ladder_len; } 
          ladder_len = $<val>4; 
      }

    /* RULE 2: IF ONLY */
    | if_prefix statement %prec LOWER_THAN_ELSE 
      {
					emit("LABEL", "", "", $1);
          ifs_wo_else++;
      }

    /* RULE 3: IF-ELIF-ELSE */
    | if_prefix statement elif_list ELSE 
      {
          char *l_end = new_label();
					emit("goto", "", "", l_end);
					emit("LABEL", "", "", $1);
          
          ladder_len++; 
          $<val>$ = (ladder_len - 1); 
          strcpy($<name>$, l_end); /* FIX: strcpy */
      } 
      statement 
      { 
		  emit("LABEL", "", "", $<name>5);
          if(ladder_len >= max) { max = ladder_len; } 
          ladder_len = $<val>5; 
      }

    /* RULE 4: IF-ELIF (No final else) */
    | if_prefix statement elif_list %prec LOWER_THAN_ELSE
      { 
					emit("LABEL", "", "", $1);
      }
    | SWITCH '(' expression ')' statement
    ;

iteration_statement
    /* RULE 1: WHILE Loop */
    : while_cond statement
      {
          char l_start[10], l_end[10];
          sscanf($1, "%s %s", l_start, l_end); /* Unpack labels from while_cond */
					emit("goto", "", "", l_start);
					emit("LABEL", "", "", l_end);
      }

    /* RULE 2: DO-WHILE Loop */
    | DO 
      {
          char *l_start = new_label();
					emit("LABEL", "", "", l_start);
          strcpy($<name>$, l_start); /* FIX: strcpy */
      }
      statement WHILE '(' expression ')' ';'
      {
          char *l_end = new_label();
          emit("ifFalse", $6, "", l_end);
		  emit("goto", "", "", $<name>2); 
		  emit("LABEL", "", "", l_end);  
      }

    /* RULE 3: Standard FOR Loop */
    | FOR '(' expression_statement 
      {
          char *l_cond = new_label();
					emit("LABEL", "", "", l_cond);
          strcpy($<name>$, l_cond); /* FIX: strcpy */
      }
      expression_statement 
      {
          char *l_body = new_label();
          char *l_inc = new_label();
          char *l_end = new_label();
          
          emit("ifFalse", $5, "", l_end); 
		  emit("goto", "", "", l_body);
		  emit("LABEL", "", "", l_inc);
          sprintf($<name>$, "%s %s %s", l_body, l_inc, l_end);
      }
      expression 
      {
		  emit("goto", "", "", $<name>4); 
          
          char l_body[10], l_inc[10], l_end[10];
          sscanf($<name>6, "%s %s %s", l_body, l_inc, l_end);
          
		  emit("LABEL", "", "", l_body);
          sprintf($<name>$, "%s %s", l_inc, l_end); 
      }
      ')' statement
      {
          char l_inc[10], l_end[10];
          sscanf($<name>8, "%s %s", l_inc, l_end);
          
		  emit("goto", "", "", l_inc);
		  emit("LABEL", "", "", l_end);
      }

    /* RULE 4: Python-style RANGE Loop */
    | FOR '(' IDENTIFIER IN RANGE '(' assignment_expression ',' assignment_expression ')' ')' 
      {
          emit("=", $7, "", $3);
          char *l_cond = new_label();
          char *l_end = new_label();
		  emit("LABEL", "", "", l_cond);
          
          char *t_cond = new_temp();
          emit("<=", $3, $9, t_cond);
          emit("ifFalse", t_cond, "", l_end);
          
          sprintf($<name>$, "%s %s %s", l_cond, l_end, $3);
      }
      statement
      {
          char l_cond[10], l_end[10], id_name[50];
          sscanf($<name>12, "%s %s %s", l_cond, l_end, id_name);
          
          char *t_inc = new_temp();
          emit("+", id_name, "1", t_inc);
          emit("=", t_inc, "", id_name);
          
		  emit("goto", "", "", l_cond);
		  emit("LABEL", "", "", l_end);
      }
    /* | FOR '(' expression_statement expression_statement ')' statement */
    /* | FOR '(' declaration expression_statement ')' statement */
    /* | FOR '(' declaration expression_statement expression ')' statement */ 
    | FOREACH '(' IDENTIFIER IN expression ')' compound_statement
    ;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

translation_unit
	: external_declaration {global_declarations++;}
	| translation_unit external_declaration {global_declarations++;}
	;

external_declaration
	: function_definition {func_definitions++;}
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

%%
char buff[2048];

int yylex(void);
int mode=-1;

static void reset_pending(void)
{
	g_pending.active = 0;
	g_pending.lhs[0] = '\0';
	g_pending.rhs_count = 0;
}

static void append_step(const char *lhs, char rhs[][128], int rhs_count)
{
	int i;

	if (g_step_count == g_step_cap)
	{
		int new_cap = (g_step_cap == 0) ? 256 : (g_step_cap * 2);
		ReductionStep *tmp = (ReductionStep *)realloc(g_steps, (size_t)new_cap * sizeof(ReductionStep));
		if (tmp == NULL)
		{
			return;
		}
		g_steps = tmp;
		g_step_cap = new_cap;
	}

	strncpy(g_steps[g_step_count].lhs, lhs, sizeof(g_steps[g_step_count].lhs) - 1);
	g_steps[g_step_count].lhs[sizeof(g_steps[g_step_count].lhs) - 1] = '\0';
	g_steps[g_step_count].rhs_count = rhs_count;

	for (i = 0; i < rhs_count && i < 64; i++)
	{
		strncpy(g_steps[g_step_count].rhs[i], rhs[i], sizeof(g_steps[g_step_count].rhs[i]) - 1);
		g_steps[g_step_count].rhs[i][sizeof(g_steps[g_step_count].rhs[i]) - 1] = '\0';
	}

	g_step_count++;
}

static void parse_debug_line(const char *line)
{
	const char *p;
	char symbol[128];
	int i = 0;

	if (strncmp(line, "Reducing stack by rule ", 23) == 0)
	{
		reset_pending();
		g_pending.active = 1;
		return;
	}

	if (!g_pending.active)
	{
		return;
	}

	p = strstr(line, "-> $$ = nterm ");
	if (p != NULL)
	{
		p += 14;
		while (*p != '\0' && *p != ' ' && *p != '\t' && *p != '\n' && i < 127)
		{
			symbol[i++] = *p;
			p++;
		}
		symbol[i] = '\0';
		if (symbol[0] != '\0')
		{
			strncpy(g_pending.lhs, symbol, sizeof(g_pending.lhs) - 1);
			g_pending.lhs[sizeof(g_pending.lhs) - 1] = '\0';
			append_step(g_pending.lhs, g_pending.rhs, g_pending.rhs_count);
		}
		reset_pending();
		return;
	}

	p = strstr(line, " = token ");
	if (p == NULL)
	{
		p = strstr(line, " = nterm ");
	}
	if (p == NULL)
	{
		return;
	}

	p += 9;
	i = 0;
	while (*p != '\0' && *p != ' ' && *p != '\t' && *p != '\n' && i < 127)
	{
		symbol[i++] = *p;
		p++;
	}
	symbol[i] = '\0';

	if (symbol[0] != '\0' && g_pending.rhs_count < 64)
	{
		strncpy(g_pending.rhs[g_pending.rhs_count], symbol, sizeof(g_pending.rhs[g_pending.rhs_count]) - 1);
		g_pending.rhs[g_pending.rhs_count][sizeof(g_pending.rhs[g_pending.rhs_count]) - 1] = '\0';
		g_pending.rhs_count++;
	}
}

static int yytrace_fprintf(FILE *stream, const char *fmt, ...)
{
	char chunk[2048];
	va_list ap;
	int i;
	(void)stream;

	va_start(ap, fmt);
	vsnprintf(chunk, sizeof(chunk), fmt, ap);
	va_end(ap);

	for (i = 0; chunk[i] != '\0'; i++)
	{
		if (chunk[i] == '\n')
		{
			g_trace_line[g_trace_line_len] = '\0';
			parse_debug_line(g_trace_line);
			g_trace_line_len = 0;
			continue;
		}

		if (g_trace_line_len < (int)sizeof(g_trace_line) - 1)
		{
			g_trace_line[g_trace_line_len++] = chunk[i];
		}
	}

	return 0;
}

static void print_reverse_derivation(void)
{
	int i, j;

	printf("\nReverse derivation (top-down)\n");
	printf("================================\n");

	for (i = g_step_count - 1, j = 1; i >= 0; i--, j++)
	{
		int k;
		printf("%d. %s ->", j, g_steps[i].lhs);
		if (g_steps[i].rhs_count == 0)
		{
			printf(" epsilon");
		}
		else
		{
			for (k = 0; k < g_steps[i].rhs_count; k++)
			{
				printf(" %s", g_steps[i].rhs[k]);
			}
		}
		printf("\n");
	}
}

static int looks_like_nonterminal(const char *sym)
{
	if (sym == NULL || sym[0] == '\0')
	{
		return 0;
	}
	if (sym[0] >= 'a' && sym[0] <= 'z')
	{
		return 1;
	}
	return 0;
}

static int write_reverse_derivation_dot(const char *dot_path)
{
	FILE *f;
	int node_id = 0;
	int *labels;
	int *leaf_nodes;
	int leaf_count = 0;
	int leaf_cap = 0;
	int i;

	if (g_step_count <= 0)
	{
		return -1;
	}

	f = fopen(dot_path, "w");
	if (f == NULL)
	{
		return -1;
	}

	labels = (int *)calloc((size_t)g_step_count * 2 + 1024, sizeof(int));
	if (labels == NULL)
	{
		fclose(f);
		return -1;
	}

	leaf_cap = 1024;
	leaf_nodes = (int *)malloc((size_t)leaf_cap * sizeof(int));
	if (leaf_nodes == NULL)
	{
		free(labels);
		fclose(f);
		return -1;
	}

	fprintf(f, "digraph ReverseDerivationTree {\n");
	fprintf(f, "  rankdir=TB;\n");
	fprintf(f, "  node [shape=box, style=rounded, fontsize=10];\n");

	fprintf(f, "  n%d [label=\"%s\"];\n", node_id, g_steps[g_step_count - 1].lhs);
	leaf_nodes[leaf_count++] = node_id;
	node_id++;

	for (i = g_step_count - 1; i >= 0; i--)
	{
		int target = -1;
		int li;
		int k;

		for (li = leaf_count - 1; li >= 0; li--)
		{
			if (strcmp(g_steps[i].lhs, g_steps[g_step_count - 1].lhs) == 0 && i == g_step_count - 1)
			{
				target = leaf_nodes[li];
				break;
			}
			if (labels[leaf_nodes[li]] == i + 1)
			{
				target = leaf_nodes[li];
				break;
			}
		}

		if (target == -1)
		{
			for (li = leaf_count - 1; li >= 0; li--)
			{
				target = leaf_nodes[li];
				if (looks_like_nonterminal(g_steps[i].lhs))
				{
					break;
				}
			}
		}

		if (target == -1)
		{
			continue;
		}

		for (li = 0; li < leaf_count; li++)
		{
			if (leaf_nodes[li] == target)
			{
				for (; li < leaf_count - 1; li++)
				{
					leaf_nodes[li] = leaf_nodes[li + 1];
				}
				leaf_count--;
				break;
			}
		}

		if (g_steps[i].rhs_count == 0)
		{
			fprintf(f, "  n%d [label=\"epsilon\"];\n", node_id);
			fprintf(f, "  n%d -> n%d;\n", target, node_id);
			node_id++;
			continue;
		}

		for (k = 0; k < g_steps[i].rhs_count; k++)
		{
			fprintf(f, "  n%d [label=\"%s\"];\n", node_id, g_steps[i].rhs[k]);
			fprintf(f, "  n%d -> n%d;\n", target, node_id);
			if (looks_like_nonterminal(g_steps[i].rhs[k]))
			{
				if (leaf_count == leaf_cap)
				{
					int new_cap = leaf_cap * 2;
					int *tmp = (int *)realloc(leaf_nodes, (size_t)new_cap * sizeof(int));
					if (tmp == NULL)
					{
						free(leaf_nodes);
						free(labels);
						fclose(f);
						return -1;
					}
					leaf_nodes = tmp;
					leaf_cap = new_cap;
				}
				leaf_nodes[leaf_count++] = node_id;
			}
			labels[node_id] = i;
			node_id++;
		}
	}

	fprintf(f, "}\n");

	free(leaf_nodes);
	free(labels);
	fclose(f);
	return 0;
}

static int write_reverse_derivation_svg(const char *svg_path)
{
	int status;
	pid_t pid;
	char dot_path[4096];

	snprintf(dot_path, sizeof(dot_path), "%s.dot", svg_path);
	if (write_reverse_derivation_dot(dot_path) != 0)
	{
		return -1;
	}

	pid = fork();
	if (pid < 0)
	{
		return -1;
	}

	if (pid == 0)
	{
		execlp("dot", "dot", "-Tsvg", dot_path, "-o", svg_path, (char *)NULL);
		_exit(127);
	}

	if (waitpid(pid, &status, 0) < 0)
	{
		return -1;
	}

	if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
	{
		return 0;
	}

	return -1;
}

static void free_derivation_steps(void)
{
	if (g_steps != NULL)
	{
		free(g_steps);
		g_steps = NULL;
	}
	g_step_count = 0;
	g_step_cap = 0;
	reset_pending();
}

static void print_syntax_diagnostics(const char *s)
{
	const char *tok = "<end-of-input>";
	const char *expecting = NULL;

	if (yytext != NULL && yytext[0] != '\0')
	{
		tok = yytext;
	}

	printf("***parsing terminated*** [syntax error]\n");
	printf("line %d, column %d: unexpected token \"%s\"\n", yytok_line, yytok_col, tok);

	if (s != NULL)
	{
		expecting = strstr(s, "expecting ");
		if (expecting != NULL)
		{
			printf("expected: %s\n", expecting + 10);
		}
	}
}

void yyerror(const char *s)
{
	fflush(stdout);
	
	if(mode==-1)
		print_syntax_diagnostics(s);
	else if(mode==0 || mode==1)
		printf("%s\n",s);
		
	exit(-1);
}

static void format_quad_statement(const struct quadruple *q, char *out, size_t out_sz)
{
	if (strcmp(q->op, "=") == 0)
	{
		snprintf(out, out_sz, "%s=%s", q->result, q->arg1);
	}
	else if (strcmp(q->op, "minus") == 0)
	{
		snprintf(out, out_sz, "%s=minus %s", q->result, q->arg1);
	}
	else if (strcmp(q->op, "ifFalse") == 0)
	{
		snprintf(out, out_sz, "ifFalse %s goto %s", q->arg1, q->result);
	}
	else if (strcmp(q->op, "goto") == 0)
	{
		const char *target = (q->result[0] != '\0') ? q->result : q->arg1;
		snprintf(out, out_sz, "goto %s", target);
	}
	else if (strcmp(q->op, "LABEL") == 0)
	{
		const char *target = (q->result[0] != '\0') ? q->result : q->arg1;
		snprintf(out, out_sz, "LABEL %s", target);
	}
	else if (q->arg2[0] != '\0')
	{
		snprintf(out, out_sz, "%s=%s%s%s", q->result, q->arg1, q->op, q->arg2);
	}
	else
	{
		snprintf(out, out_sz, "%s=%s %s", q->result, q->op, q->arg1);
	}
}

void print_quad_table() {
	char stmt[128];

    printf("\n--- Generated Intermediate Code (Quadruples) ---\n");
	printf("%-18s | %-10s | %-10s | %-10s | %-10s\n", "statement", "op", "arg1", "arg2", "result");
	printf("--------------------------------------------------------------------------------\n");
    for(int i = 0; i < quad_idx; i++) {
		format_quad_statement(&quad_table[i], stmt, sizeof(stmt));
		printf("%-18s | %-10s | %-10s | %-10s | %-10s\n", 
			   stmt,
               quad_table[i].op, quad_table[i].arg1, 
               quad_table[i].arg2, quad_table[i].result);
    }
}

int main(int argc, char **argv)
{
    extern FILE *yyin;
	int i;
	const char *input_file = NULL;
	const char *svg_file = NULL;

	if (argc == 2 && (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0))
	{
		printf("Usage: ./yapl <input_file> [--svg out.svg]\n");
		printf("\n");
		printf("Options:\n");
		printf("  -h, --help       Show this help message and exit\n");
		printf("  --svg <path>     Write reverse derivation graph as SVG\n");
		return 0;
	}

	for (i = 1; i < argc; i++)
	{
		if (strcmp(argv[i], "--svg") == 0)
		{
			if (i + 1 >= argc)
			{
				sprintf(buff, "***process terminated*** [input error]: missing path after --svg");
				mode = 1;
				yyerror(buff);
			}
			svg_file = argv[++i];
		}
		else if (input_file == NULL)
		{
			input_file = argv[i];
		}
		else
		{
			sprintf(buff, "***process terminated*** [input error]: unexpected argument \"%s\"", argv[i]);
			mode = 1;
			yyerror(buff);
		}
	}

	if(input_file == NULL)
	{
		sprintf(buff,"***process terminated*** [input error]: usage ./yapl <input_file> [--svg out.svg]");
		mode=1;
		yyerror(buff);
		exit(1);
	}

	yyin=fopen(input_file,"r");

	if(yyin==NULL)
	{
		sprintf(buff,"***process terminated*** [input error]: no such file \"%s\" exists",input_file);
		mode=1;
		yyerror(buff);
		exit(1);
	}
	else
	{
		/* 1. Explicitly show the Input Source Program  */
		char line[1024];
		printf("\n--- Input Source Program ---\n");
		while (fgets(line, sizeof(line), yyin)) {
			printf("%s", line);
		}
		printf("\n----------------------------\n");
		
		/* 2. Reset file pointer so the parser can read it from the start */
		rewind(yyin);

		/* 3. Execute the Parser */
		yydebug = 1;
		if (yyparse() == 0) 
		{
			/* 4. Explicitly show the Generated Intermediate Code (Quadruples)  */
			printf("\n*** Parsing Successful ***\n");
			
			/* Standard diagnostics from Lab 3 */
			printf("#global_declarations = %d\n", global_declarations);
			printf("#function_definitions = %d\n", func_definitions);
			printf("#integer_constants = %d\n", int_consts);
			printf("#pointers_declarations = %d\n", pointer_decls);
			printf("#ifs_without_else = %d\n", ifs_wo_else);
			printf("if-else max-depth = %d\n", ((max < 0) ? 0 : max));
			
			/* Call your tabular output function [cite: 50, 53] */
			print_quad_table(); 
			
			print_reverse_derivation();
		}
	}


	if (svg_file != NULL)
	{
		if (write_reverse_derivation_svg(svg_file) == 0)
		{
			printf("Reverse derivation SVG written to %s\n", svg_file);
		}
		else
		{
			printf("Failed to write SVG file: %s\n", svg_file);
		}
	}

	free_derivation_steps();

	return(0);
}
