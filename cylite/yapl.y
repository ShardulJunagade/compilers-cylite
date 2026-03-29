
%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

extern char *yytext;
extern int yylineno;

int global_declarations=0;
int func_definitions=0;
int int_consts=0;
int pointer_decls=0;
int ifs_wo_else=0;
int ladder_len=0,hold=0;
int max=-1;

#define MAX_DERIVATION_STEPS 200000
static char *derivation_steps[MAX_DERIVATION_STEPS];
static int derivation_count = 0;

static void record_derivation(const char *rule);
static void print_reverse_derivation(void);
static void free_derivation_steps(void);

/* Prototypes for lexer and error handler so generated parser sees them */
int yylex(void);
void yyerror(const char *s);
%}

%token 	ELIF PASS TRY EXCEPT PRINT RANGE IN FOREACH
%token	IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL FUNC_NAME SIZEOF
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

%token	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token	ALIGNAS ALIGNOF ATOMIC GENERIC NORETURN STATIC_ASSERT THREAD_LOCAL

%start translation_unit



%union
{
	int val;
	struct symtab *symp;
}

%%

primary_expression
	: IDENTIFIER
	| constant
	| string
	| '(' expression ')'
	| generic_selection
	;

constant
	: I_CONSTANT {int_consts++;}	/* includes character_constant */
	| F_CONSTANT
	| ENUMERATION_CONSTANT	/* after it has been defined as such */
	;

enumeration_constant		/* before it has been defined as such */
	: IDENTIFIER
	;

string
	: STRING_LITERAL
	| FUNC_NAME
	;

generic_selection
	: GENERIC '(' assignment_expression ',' generic_assoc_list ')'
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
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	| '(' type_name ')' '{' initializer_list '}'
	| '(' type_name ')' '{' initializer_list ',' '}'
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	| ALIGNOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	| relational_expression TH_OP shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
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
	: specifier_qualifier_list abstract_declarator
	| specifier_qualifier_list
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


statement
	: unmatched_statement
		{ record_derivation("statement -> unmatched_statement"); }
	| matched_statement
		{ record_derivation("statement -> matched_statement"); }
	;

matched_labeled_statement
	: IDENTIFIER ':' matched_statement
		{ record_derivation("matched_labeled_statement -> IDENTIFIER : matched_statement"); }
	| CASE constant_expression ':' matched_statement
		{ record_derivation("matched_labeled_statement -> CASE constant_expression : matched_statement"); }
	| DEFAULT ':' matched_statement
		{ record_derivation("matched_labeled_statement -> DEFAULT : matched_statement"); }
	;

unmatched_labeled_statement
	: IDENTIFIER ':' unmatched_statement
		{ record_derivation("unmatched_labeled_statement -> IDENTIFIER : unmatched_statement"); }
	| CASE constant_expression ':' unmatched_statement
		{ record_derivation("unmatched_labeled_statement -> CASE constant_expression : unmatched_statement"); }
	| DEFAULT ':' unmatched_statement
		{ record_derivation("unmatched_labeled_statement -> DEFAULT : unmatched_statement"); }
	;

compound_statement
	: '{' '}'
		{ record_derivation("compound_statement -> { }"); }
	| '{'  block_item_list '}'
		{ record_derivation("compound_statement -> { block_item_list }"); }
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
	: ';'
		{ record_derivation("expression_statement -> ;"); }
	| expression ';'
		{ record_derivation("expression_statement -> expression ;"); }
	;

/* Matched / Unmatched statements to resolve dangling-else (including labels). */
non_if_statement
	: compound_statement
		{ record_derivation("non_if_statement -> compound_statement"); }
	| expression_statement
		{ record_derivation("non_if_statement -> expression_statement"); }
	| matched_iteration_statement
		{ record_derivation("non_if_statement -> matched_iteration_statement"); }
	| jump_statement
		{ record_derivation("non_if_statement -> jump_statement"); }
	| PASS ';'
		{ record_derivation("non_if_statement -> PASS ;"); }
	| PRINT '(' ')' ';'
		{ record_derivation("non_if_statement -> PRINT ( ) ;"); }
	| PRINT '(' argument_expression_list ')' ';'
		{ record_derivation("non_if_statement -> PRINT ( argument_expression_list ) ;"); }
	| TRY compound_statement EXCEPT compound_statement
		{ record_derivation("non_if_statement -> TRY compound_statement EXCEPT compound_statement"); }
	| FOREACH '(' IDENTIFIER IN expression ')' matched_statement
		{ record_derivation("non_if_statement -> FOREACH ( IDENTIFIER IN expression ) matched_statement"); }
	| FOR '(' IDENTIFIER IN RANGE '(' assignment_expression ',' assignment_expression ')' ')' matched_statement
		{ record_derivation("non_if_statement -> FOR ( IDENTIFIER IN RANGE ( assignment_expression , assignment_expression ) ) matched_statement"); }
	;

matched_statement
	: matched_labeled_statement
		{ record_derivation("matched_statement -> matched_labeled_statement"); }
	| non_if_statement
		{ record_derivation("matched_statement -> non_if_statement"); }
	| IF '(' expression ')' matched_statement ELSE matched_statement
		{
			record_derivation("matched_statement -> IF ( expression ) matched_statement ELSE matched_statement");
			ladder_len++; if(ladder_len>max) max=ladder_len; ladder_len--;
		}
	| IF '(' expression ')' matched_statement elif_matched_list ELSE matched_statement
		{
			record_derivation("matched_statement -> IF ( expression ) matched_statement elif_matched_list ELSE matched_statement");
			ladder_len++; if(ladder_len>max) max=ladder_len; ladder_len--;
		}
	| SWITCH '(' expression ')' matched_statement
		{ record_derivation("matched_statement -> SWITCH ( expression ) matched_statement"); }
	;

elif_matched_list
	: ELIF '(' expression ')' matched_statement elif_matched_list_tail
		{ record_derivation("elif_matched_list -> ELIF ( expression ) matched_statement elif_matched_list_tail"); }
	;

elif_matched_list_tail
	: /* empty */
		{ record_derivation("elif_matched_list_tail -> epsilon"); }
	| ELIF '(' expression ')' matched_statement elif_matched_list_tail
		{ record_derivation("elif_matched_list_tail -> ELIF ( expression ) matched_statement elif_matched_list_tail"); }
	;

elif_unmatched_tail
	: ELIF '(' expression ')' statement
		{ record_derivation("elif_unmatched_tail -> ELIF ( expression ) statement"); }
	| ELIF '(' expression ')' matched_statement elif_unmatched_tail
		{ record_derivation("elif_unmatched_tail -> ELIF ( expression ) matched_statement elif_unmatched_tail"); }
	;

unmatched_statement
	: unmatched_labeled_statement
		{ record_derivation("unmatched_statement -> unmatched_labeled_statement"); }
	| IF '(' expression ')' statement
		{
			record_derivation("unmatched_statement -> IF ( expression ) statement");
			ifs_wo_else++;
		}
	| IF '(' expression ')' matched_statement elif_unmatched_tail
		{ record_derivation("unmatched_statement -> IF ( expression ) matched_statement elif_unmatched_tail"); }
	| IF '(' expression ')' matched_statement ELSE unmatched_statement
		{ record_derivation("unmatched_statement -> IF ( expression ) matched_statement ELSE unmatched_statement"); }
	| IF '(' expression ')' matched_statement elif_matched_list ELSE unmatched_statement
		{ record_derivation("unmatched_statement -> IF ( expression ) matched_statement elif_matched_list ELSE unmatched_statement"); }
	| SWITCH '(' expression ')' unmatched_statement
		{ record_derivation("unmatched_statement -> SWITCH ( expression ) unmatched_statement"); }
	| unmatched_iteration_statement
		{ record_derivation("unmatched_statement -> unmatched_iteration_statement"); }
	| FOREACH '(' IDENTIFIER IN expression ')' unmatched_statement
		{ record_derivation("unmatched_statement -> FOREACH ( IDENTIFIER IN expression ) unmatched_statement"); }
	| FOR '(' IDENTIFIER IN RANGE '(' assignment_expression ',' assignment_expression ')' ')' unmatched_statement
		{ record_derivation("unmatched_statement -> FOR ( IDENTIFIER IN RANGE ( assignment_expression , assignment_expression ) ) unmatched_statement"); }
	;


matched_iteration_statement
	: WHILE '(' expression ')' matched_statement
		{ record_derivation("matched_iteration_statement -> WHILE ( expression ) matched_statement"); }
	| DO matched_statement WHILE '(' expression ')' ';'
		{ record_derivation("matched_iteration_statement -> DO matched_statement WHILE ( expression ) ;"); }
	| FOR '(' expression_statement expression_statement ')' matched_statement
		{ record_derivation("matched_iteration_statement -> FOR ( expression_statement expression_statement ) matched_statement"); }
	| FOR '(' expression_statement expression_statement expression ')' matched_statement
		{ record_derivation("matched_iteration_statement -> FOR ( expression_statement expression_statement expression ) matched_statement"); }
	| FOR '(' declaration expression_statement ')' matched_statement
		{ record_derivation("matched_iteration_statement -> FOR ( declaration expression_statement ) matched_statement"); }
	| FOR '(' declaration expression_statement expression ')' matched_statement
		{ record_derivation("matched_iteration_statement -> FOR ( declaration expression_statement expression ) matched_statement"); }
	;

unmatched_iteration_statement
	: WHILE '(' expression ')' unmatched_statement
		{ record_derivation("unmatched_iteration_statement -> WHILE ( expression ) unmatched_statement"); }
	| DO unmatched_statement WHILE '(' expression ')' ';'
		{ record_derivation("unmatched_iteration_statement -> DO unmatched_statement WHILE ( expression ) ;"); }
	| FOR '(' expression_statement expression_statement ')' unmatched_statement
		{ record_derivation("unmatched_iteration_statement -> FOR ( expression_statement expression_statement ) unmatched_statement"); }
	| FOR '(' expression_statement expression_statement expression ')' unmatched_statement
		{ record_derivation("unmatched_iteration_statement -> FOR ( expression_statement expression_statement expression ) unmatched_statement"); }
	| FOR '(' declaration expression_statement ')' unmatched_statement
		{ record_derivation("unmatched_iteration_statement -> FOR ( declaration expression_statement ) unmatched_statement"); }
	| FOR '(' declaration expression_statement expression ')' unmatched_statement
		{ record_derivation("unmatched_iteration_statement -> FOR ( declaration expression_statement expression ) unmatched_statement"); }
	;

jump_statement
	: GOTO IDENTIFIER ';'
		{ record_derivation("jump_statement -> GOTO IDENTIFIER ;"); }
	| CONTINUE ';'
		{ record_derivation("jump_statement -> CONTINUE ;"); }
	| BREAK ';'
		{ record_derivation("jump_statement -> BREAK ;"); }
	| RETURN ';'
		{ record_derivation("jump_statement -> RETURN ;"); }
	| RETURN expression ';'
		{ record_derivation("jump_statement -> RETURN expression ;"); }
	;

translation_unit
	: external_declaration
		{
			record_derivation("translation_unit -> external_declaration");
			global_declarations++;
		}
	| translation_unit external_declaration
		{
			record_derivation("translation_unit -> translation_unit external_declaration");
			global_declarations++;
		}
	;

external_declaration
	: function_definition
		{
			record_derivation("external_declaration -> function_definition");
			func_definitions++;
		}
	| declaration
		{ record_derivation("external_declaration -> declaration"); }
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
		{ record_derivation("function_definition -> declaration_specifiers declarator declaration_list compound_statement"); }
	| declaration_specifiers declarator compound_statement
		{ record_derivation("function_definition -> declaration_specifiers declarator compound_statement"); }
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

%%
char buff[2048];

int yylex(void);
int mode=-1;

void yyerror(const char *s)
{
	fflush(stdout);
	
	if(mode==-1)
	{
		if (s && strstr(s, "syntax error") != NULL)
			printf("***parsing terminated*** [syntax error] at line %d near token \"%s\"\nDetails: %s\n", yylineno, (yytext && yytext[0] != '\0') ? yytext : "<end-of-input>", s);
		else
			printf("***parsing terminated*** [syntax error] at line %d near token \"%s\"\n", yylineno, (yytext && yytext[0] != '\0') ? yytext : "<end-of-input>");
	}
	else if(mode==0 || mode==1)
		printf("%s\n",s);
		
	free_derivation_steps();
	exit(-1);
}

static void record_derivation(const char *rule)
{
	if (derivation_count >= MAX_DERIVATION_STEPS)
		return;

	derivation_steps[derivation_count] = strdup(rule);
	if (derivation_steps[derivation_count] != NULL)
		derivation_count++;
}

static void print_reverse_derivation(void)
{
	int i;

	printf("=== Reverse Derivation (high-level reductions) ===\n");
	if (derivation_count == 0)
	{
		printf("(no derivation steps recorded)\n");
		return;
	}

	for (i = derivation_count - 1; i >= 0; --i)
		printf("%s\n", derivation_steps[i]);
}

static void free_derivation_steps(void)
{
	int i;
	for (i = 0; i < derivation_count; ++i)
	{
		free(derivation_steps[i]);
		derivation_steps[i] = NULL;
	}
	derivation_count = 0;
}

int main(int argc, char **argv)
{
    extern FILE *yyin;

	if(argc<2)
	{
		sprintf(buff,"***process terminated*** [input error]: invalid number of command-line arguments");
		mode=1;
		yyerror(buff);
		exit(1);
	}

	yyin=fopen(argv[1],"r");

	if(yyin==NULL)
	{
		sprintf(buff,"***process terminated*** [input error]: no such file \"%s\" exists",argv[1]);
		mode=1;
		yyerror(buff);
		exit(1);
	}
	else
	{
		do
		{
			yyparse();
		}
		while(!feof(yyin));
	}

	printf("***parsing successful***\n");
	printf("#global_declarations = %d\n",global_declarations);
	printf("#function_definitions = %d\n",func_definitions);
	printf("#integer_constants = %d\n",int_consts);
	printf("#pointers_declarations = %d\n",pointer_decls);
	printf("#ifs_without_else = %d\n",ifs_wo_else);
	printf("if-else max-depth = %d\n",((max<0)?0:max));
	print_reverse_derivation();
	free_derivation_steps();

	return(0);
}
