/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "yapl.y"

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

#line 160 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ELIF = 258,                    /* ELIF  */
    PASS = 259,                    /* PASS  */
    TRY = 260,                     /* TRY  */
    EXCEPT = 261,                  /* EXCEPT  */
    PRINT = 262,                   /* PRINT  */
    RANGE = 263,                   /* RANGE  */
    IN = 264,                      /* IN  */
    FOREACH = 265,                 /* FOREACH  */
    IDENTIFIER = 266,              /* IDENTIFIER  */
    I_CONSTANT = 267,              /* I_CONSTANT  */
    F_CONSTANT = 268,              /* F_CONSTANT  */
    STRING_LITERAL = 269,          /* STRING_LITERAL  */
    FUNC_NAME = 270,               /* FUNC_NAME  */
    SIZEOF = 271,                  /* SIZEOF  */
    PTR_OP = 272,                  /* PTR_OP  */
    INC_OP = 273,                  /* INC_OP  */
    DEC_OP = 274,                  /* DEC_OP  */
    LEFT_OP = 275,                 /* LEFT_OP  */
    RIGHT_OP = 276,                /* RIGHT_OP  */
    LE_OP = 277,                   /* LE_OP  */
    GE_OP = 278,                   /* GE_OP  */
    EQ_OP = 279,                   /* EQ_OP  */
    NE_OP = 280,                   /* NE_OP  */
    TH_OP = 281,                   /* TH_OP  */
    AND_OP = 282,                  /* AND_OP  */
    OR_OP = 283,                   /* OR_OP  */
    MUL_ASSIGN = 284,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 285,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 286,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 287,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 288,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 289,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 290,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 291,              /* AND_ASSIGN  */
    XOR_ASSIGN = 292,              /* XOR_ASSIGN  */
    OR_ASSIGN = 293,               /* OR_ASSIGN  */
    TYPEDEF_NAME = 294,            /* TYPEDEF_NAME  */
    ENUMERATION_CONSTANT = 295,    /* ENUMERATION_CONSTANT  */
    TYPEDEF = 296,                 /* TYPEDEF  */
    EXTERN = 297,                  /* EXTERN  */
    STATIC = 298,                  /* STATIC  */
    AUTO = 299,                    /* AUTO  */
    REGISTER = 300,                /* REGISTER  */
    INLINE = 301,                  /* INLINE  */
    CONST = 302,                   /* CONST  */
    RESTRICT = 303,                /* RESTRICT  */
    VOLATILE = 304,                /* VOLATILE  */
    BOOL = 305,                    /* BOOL  */
    CHAR = 306,                    /* CHAR  */
    SHORT = 307,                   /* SHORT  */
    INT = 308,                     /* INT  */
    LONG = 309,                    /* LONG  */
    SIGNED = 310,                  /* SIGNED  */
    UNSIGNED = 311,                /* UNSIGNED  */
    FLOAT = 312,                   /* FLOAT  */
    DOUBLE = 313,                  /* DOUBLE  */
    VOID = 314,                    /* VOID  */
    COMPLEX = 315,                 /* COMPLEX  */
    IMAGINARY = 316,               /* IMAGINARY  */
    STRUCT = 317,                  /* STRUCT  */
    UNION = 318,                   /* UNION  */
    ENUM = 319,                    /* ENUM  */
    ELLIPSIS = 320,                /* ELLIPSIS  */
    CASE = 321,                    /* CASE  */
    DEFAULT = 322,                 /* DEFAULT  */
    IF = 323,                      /* IF  */
    ELSE = 324,                    /* ELSE  */
    SWITCH = 325,                  /* SWITCH  */
    WHILE = 326,                   /* WHILE  */
    DO = 327,                      /* DO  */
    FOR = 328,                     /* FOR  */
    GOTO = 329,                    /* GOTO  */
    CONTINUE = 330,                /* CONTINUE  */
    BREAK = 331,                   /* BREAK  */
    RETURN = 332,                  /* RETURN  */
    ALIGNAS = 333,                 /* ALIGNAS  */
    ALIGNOF = 334,                 /* ALIGNOF  */
    ATOMIC = 335,                  /* ATOMIC  */
    GENERIC = 336,                 /* GENERIC  */
    NORETURN = 337,                /* NORETURN  */
    STATIC_ASSERT = 338,           /* STATIC_ASSERT  */
    THREAD_LOCAL = 339,            /* THREAD_LOCAL  */
    LOWER_THAN_ELSE = 340          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 91 "yapl.y"

    char name[50];  /* Holds variable names or temp names like 't1' */
    int val;
    struct symtab *symp; /* Added from your second union */

#line 301 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ELIF = 3,                       /* ELIF  */
  YYSYMBOL_PASS = 4,                       /* PASS  */
  YYSYMBOL_TRY = 5,                        /* TRY  */
  YYSYMBOL_EXCEPT = 6,                     /* EXCEPT  */
  YYSYMBOL_PRINT = 7,                      /* PRINT  */
  YYSYMBOL_RANGE = 8,                      /* RANGE  */
  YYSYMBOL_IN = 9,                         /* IN  */
  YYSYMBOL_FOREACH = 10,                   /* FOREACH  */
  YYSYMBOL_IDENTIFIER = 11,                /* IDENTIFIER  */
  YYSYMBOL_I_CONSTANT = 12,                /* I_CONSTANT  */
  YYSYMBOL_F_CONSTANT = 13,                /* F_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 14,            /* STRING_LITERAL  */
  YYSYMBOL_FUNC_NAME = 15,                 /* FUNC_NAME  */
  YYSYMBOL_SIZEOF = 16,                    /* SIZEOF  */
  YYSYMBOL_PTR_OP = 17,                    /* PTR_OP  */
  YYSYMBOL_INC_OP = 18,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 19,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 20,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 21,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 22,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 23,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 24,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 25,                     /* NE_OP  */
  YYSYMBOL_TH_OP = 26,                     /* TH_OP  */
  YYSYMBOL_AND_OP = 27,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 28,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 29,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 30,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 31,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 32,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 33,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 34,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 35,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 36,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 37,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 38,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPEDEF_NAME = 39,              /* TYPEDEF_NAME  */
  YYSYMBOL_ENUMERATION_CONSTANT = 40,      /* ENUMERATION_CONSTANT  */
  YYSYMBOL_TYPEDEF = 41,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 42,                    /* EXTERN  */
  YYSYMBOL_STATIC = 43,                    /* STATIC  */
  YYSYMBOL_AUTO = 44,                      /* AUTO  */
  YYSYMBOL_REGISTER = 45,                  /* REGISTER  */
  YYSYMBOL_INLINE = 46,                    /* INLINE  */
  YYSYMBOL_CONST = 47,                     /* CONST  */
  YYSYMBOL_RESTRICT = 48,                  /* RESTRICT  */
  YYSYMBOL_VOLATILE = 49,                  /* VOLATILE  */
  YYSYMBOL_BOOL = 50,                      /* BOOL  */
  YYSYMBOL_CHAR = 51,                      /* CHAR  */
  YYSYMBOL_SHORT = 52,                     /* SHORT  */
  YYSYMBOL_INT = 53,                       /* INT  */
  YYSYMBOL_LONG = 54,                      /* LONG  */
  YYSYMBOL_SIGNED = 55,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 56,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 57,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 58,                    /* DOUBLE  */
  YYSYMBOL_VOID = 59,                      /* VOID  */
  YYSYMBOL_COMPLEX = 60,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 61,                 /* IMAGINARY  */
  YYSYMBOL_STRUCT = 62,                    /* STRUCT  */
  YYSYMBOL_UNION = 63,                     /* UNION  */
  YYSYMBOL_ENUM = 64,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 65,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 66,                      /* CASE  */
  YYSYMBOL_DEFAULT = 67,                   /* DEFAULT  */
  YYSYMBOL_IF = 68,                        /* IF  */
  YYSYMBOL_ELSE = 69,                      /* ELSE  */
  YYSYMBOL_SWITCH = 70,                    /* SWITCH  */
  YYSYMBOL_WHILE = 71,                     /* WHILE  */
  YYSYMBOL_DO = 72,                        /* DO  */
  YYSYMBOL_FOR = 73,                       /* FOR  */
  YYSYMBOL_GOTO = 74,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 75,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 76,                     /* BREAK  */
  YYSYMBOL_RETURN = 77,                    /* RETURN  */
  YYSYMBOL_ALIGNAS = 78,                   /* ALIGNAS  */
  YYSYMBOL_ALIGNOF = 79,                   /* ALIGNOF  */
  YYSYMBOL_ATOMIC = 80,                    /* ATOMIC  */
  YYSYMBOL_GENERIC = 81,                   /* GENERIC  */
  YYSYMBOL_NORETURN = 82,                  /* NORETURN  */
  YYSYMBOL_STATIC_ASSERT = 83,             /* STATIC_ASSERT  */
  YYSYMBOL_THREAD_LOCAL = 84,              /* THREAD_LOCAL  */
  YYSYMBOL_85_ = 85,                       /* ','  */
  YYSYMBOL_LOWER_THAN_ELSE = 86,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_87_ = 87,                       /* '('  */
  YYSYMBOL_88_ = 88,                       /* ')'  */
  YYSYMBOL_89_ = 89,                       /* ':'  */
  YYSYMBOL_90_ = 90,                       /* '['  */
  YYSYMBOL_91_ = 91,                       /* ']'  */
  YYSYMBOL_92_ = 92,                       /* '.'  */
  YYSYMBOL_93_ = 93,                       /* '{'  */
  YYSYMBOL_94_ = 94,                       /* '}'  */
  YYSYMBOL_95_ = 95,                       /* '&'  */
  YYSYMBOL_96_ = 96,                       /* '*'  */
  YYSYMBOL_97_ = 97,                       /* '+'  */
  YYSYMBOL_98_ = 98,                       /* '-'  */
  YYSYMBOL_99_ = 99,                       /* '~'  */
  YYSYMBOL_100_ = 100,                     /* '!'  */
  YYSYMBOL_101_ = 101,                     /* '/'  */
  YYSYMBOL_102_ = 102,                     /* '%'  */
  YYSYMBOL_103_ = 103,                     /* '<'  */
  YYSYMBOL_104_ = 104,                     /* '>'  */
  YYSYMBOL_105_ = 105,                     /* '^'  */
  YYSYMBOL_106_ = 106,                     /* '|'  */
  YYSYMBOL_107_ = 107,                     /* '='  */
  YYSYMBOL_108_ = 108,                     /* ';'  */
  YYSYMBOL_YYACCEPT = 109,                 /* $accept  */
  YYSYMBOL_primary_expression = 110,       /* primary_expression  */
  YYSYMBOL_constant = 111,                 /* constant  */
  YYSYMBOL_enumeration_constant = 112,     /* enumeration_constant  */
  YYSYMBOL_string = 113,                   /* string  */
  YYSYMBOL_generic_selection = 114,        /* generic_selection  */
  YYSYMBOL_generic_assoc_list = 115,       /* generic_assoc_list  */
  YYSYMBOL_generic_association = 116,      /* generic_association  */
  YYSYMBOL_postfix_expression = 117,       /* postfix_expression  */
  YYSYMBOL_unary_expression = 118,         /* unary_expression  */
  YYSYMBOL_unary_operator = 119,           /* unary_operator  */
  YYSYMBOL_cast_expression = 120,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 121, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 122,      /* additive_expression  */
  YYSYMBOL_shift_expression = 123,         /* shift_expression  */
  YYSYMBOL_relational_expression = 124,    /* relational_expression  */
  YYSYMBOL_equality_expression = 125,      /* equality_expression  */
  YYSYMBOL_and_expression = 126,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 127,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 128,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 129,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 130,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 131,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 132,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 133,      /* assignment_operator  */
  YYSYMBOL_expression = 134,               /* expression  */
  YYSYMBOL_constant_expression = 135,      /* constant_expression  */
  YYSYMBOL_declaration = 136,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 137,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 138,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 139,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 140,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 141,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 142, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 143,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 144,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 145,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 146, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 147,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 148,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 149,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 150,          /* enumerator_list  */
  YYSYMBOL_enumerator = 151,               /* enumerator  */
  YYSYMBOL_atomic_type_specifier = 152,    /* atomic_type_specifier  */
  YYSYMBOL_type_qualifier = 153,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 154,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 155,      /* alignment_specifier  */
  YYSYMBOL_declarator = 156,               /* declarator  */
  YYSYMBOL_direct_declarator = 157,        /* direct_declarator  */
  YYSYMBOL_pointer = 158,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 159,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 160,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 161,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 162,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 163,          /* identifier_list  */
  YYSYMBOL_type_name = 164,                /* type_name  */
  YYSYMBOL_abstract_declarator = 165,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 166, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 167,              /* initializer  */
  YYSYMBOL_initializer_list = 168,         /* initializer_list  */
  YYSYMBOL_designation = 169,              /* designation  */
  YYSYMBOL_designator_list = 170,          /* designator_list  */
  YYSYMBOL_designator = 171,               /* designator  */
  YYSYMBOL_static_assert_declaration = 172, /* static_assert_declaration  */
  YYSYMBOL_try_except_statement = 173,     /* try_except_statement  */
  YYSYMBOL_statement = 174,                /* statement  */
  YYSYMBOL_labeled_statement = 175,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 176,       /* compound_statement  */
  YYSYMBOL_block_item_list = 177,          /* block_item_list  */
  YYSYMBOL_block_item = 178,               /* block_item  */
  YYSYMBOL_expression_statement = 179,     /* expression_statement  */
  YYSYMBOL_elif_list = 180,                /* elif_list  */
  YYSYMBOL_if_prefix = 181,                /* if_prefix  */
  YYSYMBOL_while_prefix = 182,             /* while_prefix  */
  YYSYMBOL_while_cond = 183,               /* while_cond  */
  YYSYMBOL_selection_statement = 184,      /* selection_statement  */
  YYSYMBOL_185_1 = 185,                    /* @1  */
  YYSYMBOL_186_2 = 186,                    /* @2  */
  YYSYMBOL_iteration_statement = 187,      /* iteration_statement  */
  YYSYMBOL_188_3 = 188,                    /* @3  */
  YYSYMBOL_189_4 = 189,                    /* @4  */
  YYSYMBOL_190_5 = 190,                    /* @5  */
  YYSYMBOL_191_6 = 191,                    /* @6  */
  YYSYMBOL_192_7 = 192,                    /* @7  */
  YYSYMBOL_jump_statement = 193,           /* jump_statement  */
  YYSYMBOL_translation_unit = 194,         /* translation_unit  */
  YYSYMBOL_external_declaration = 195,     /* external_declaration  */
  YYSYMBOL_function_definition = 196,      /* function_definition  */
  YYSYMBOL_declaration_list = 197          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2595

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  291
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  518

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   340


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   100,     2,     2,     2,   102,    95,     2,
      87,    88,    96,    97,    85,    98,    92,   101,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,   108,
     103,   107,   104,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    90,     2,    91,   105,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    93,   106,    94,    99,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      86
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   143,   143,   144,   145,   146,   147,   151,   152,   153,
     156,   160,   161,   165,   169,   170,   174,   175,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     195,   196,   203,   210,   221,   227,   233,   242,   243,   244,
     245,   246,   247,   251,   252,   256,   260,   266,   272,   281,
     285,   291,   300,   301,   302,   306,   310,   316,   322,   328,
     334,   343,   347,   353,   362,   363,   367,   368,   372,   373,
     377,   381,   390,   394,   403,   407,   411,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   462,   463,
     467,   471,   472,   473,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   490,   491,   495,   496,   500,   501,
     502,   503,   504,   505,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     528,   529,   530,   534,   535,   539,   540,   544,   545,   546,
     550,   551,   552,   553,   557,   558,   562,   563,   564,   568,
     569,   570,   571,   572,   576,   577,   581,   582,   586,   590,
     591,   592,   593,   597,   598,   602,   603,   607,   608,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   629,   630,   631,   632,   636,   637,   642,
     643,   647,   648,   652,   653,   654,   658,   659,   663,   664,
     668,   669,   670,   674,   675,   676,   677,   678,   679,   680,
     681,   682,   683,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   698,   699,   700,   704,   705,   706,
     707,   711,   715,   716,   720,   721,   725,   729,   733,   734,
     735,   736,   737,   738,   739,   740,   744,   745,   746,   750,
     751,   755,   756,   760,   761,   765,   766,   770,   771,   775,
     784,   793,   804,   803,   821,   829,   828,   846,   850,   855,
     865,   864,   880,   886,   897,   879,   917,   916,   944,   948,
     949,   950,   951,   952,   956,   957,   961,   962,   966,   967,
     971,   972
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ELIF", "PASS", "TRY",
  "EXCEPT", "PRINT", "RANGE", "IN", "FOREACH", "IDENTIFIER", "I_CONSTANT",
  "F_CONSTANT", "STRING_LITERAL", "FUNC_NAME", "SIZEOF", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "TH_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF_NAME",
  "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE", "BOOL", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "VOID",
  "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF", "ATOMIC", "GENERIC",
  "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "','", "LOWER_THAN_ELSE",
  "'('", "')'", "':'", "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'='", "';'", "$accept", "primary_expression", "constant",
  "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "try_except_statement", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "elif_list", "if_prefix",
  "while_prefix", "while_cond", "selection_statement", "@1", "@2",
  "iteration_statement", "@3", "@4", "@5", "@6", "@7", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-388)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2316,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,
    -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,
    -388,  -388,  -388,  -388,  -388,     8,   -18,    40,  -388,    76,
    -388,  -388,    54,  2406,  2406,  -388,    18,  -388,  -388,  2406,
    2406,  2406,  -388,  1894,  -388,  -388,    63,   163,   874,  2515,
    1645,  -388,   137,   139,  -388,   -63,  -388,  1996,    91,    46,
    -388,  -388,    87,  2444,  -388,  -388,  -388,  -388,  -388,   163,
    -388,    86,   -53,  -388,   112,  -388,  -388,  -388,  -388,  -388,
    1739,  1762,  1762,  -388,   116,   118,   874,  -388,  -388,  -388,
    -388,  -388,  -388,  -388,  -388,  -388,  -388,   166,  -388,  1645,
    -388,    96,   -45,   218,   143,   220,   115,   110,   122,   195,
     222,  -388,   167,  2515,    83,  2515,   173,   175,   180,   184,
    -388,  -388,  -388,   139,   137,  -388,   517,  1482,  -388,    54,
    -388,  2215,  1948,   968,    91,  2444,  2113,  -388,    39,  -388,
     -51,  1645,    27,  -388,  1505,   874,  -388,   874,  -388,  -388,
    2515,  1645,   511,  -388,  -388,   106,   194,   277,  -388,  -388,
    1599,  1645,   294,  -388,  1645,  1645,  1645,  1645,  1645,  1645,
    1645,  1645,  1645,  1645,  1645,  1645,  1645,  1645,  1645,  1645,
    1645,  1645,  1645,  -388,  -388,  2063,   991,   127,  -388,   133,
    -388,  -388,  -388,   295,  -388,  -388,  -388,  -388,   205,   207,
     223,   226,   228,  1645,   229,   232,   234,  -388,  -388,   235,
     312,   221,   230,   410,  -388,  -388,   -54,  -388,  -388,  -388,
    -388,  -388,   631,  -388,  -388,   730,   239,   730,  -388,  -388,
    -388,  1459,  -388,  -388,  -388,  -388,  -388,  -388,    59,   240,
     245,  -388,   141,  1319,  -388,   243,   246,  1085,  2161,  -388,
    -388,  1645,  -388,   -49,  -388,   251,    31,  -388,  -388,  -388,
    -388,  -388,   149,   254,   257,   258,   265,  -388,  -388,  -388,
    -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  1645,  1645,
    -388,  1622,  -388,  -388,   155,   -61,  -388,  -388,  -388,  -388,
      96,    96,   -45,   -45,   218,   218,   218,   218,   218,   143,
     143,   220,   115,   110,   122,   195,  -388,   264,   266,  1319,
    -388,   262,   267,  1108,   133,  2268,  1202,   269,  -388,   349,
     350,   730,   271,   730,  1645,  1645,   730,   753,   256,  -388,
    -388,  -388,   -48,  -388,  -388,  -388,    84,  1645,  -388,  1645,
     355,  -388,   -27,  1482,    69,  -388,  1829,  -388,   140,  -388,
    -388,  2362,   356,  -388,   278,  1319,  -388,  -388,  1645,  -388,
     279,   280,  -388,  -388,    71,  -388,  1645,  -388,  -388,   275,
     275,  -388,  2481,  -388,  -388,  1459,  -388,  -388,  -388,  -388,
    -388,   282,  1319,  -388,  -388,  1645,  -388,   283,  -388,   287,
    1319,  -388,   285,   286,  1225,   270,   223,   370,  -388,   730,
    -388,   164,   172,   309,   375,  -388,  -388,  -388,   298,  -388,
     120,   182,   296,  -388,  1342,  -388,  -388,  -388,  -388,  -388,
    -388,  -388,  -388,   297,   299,  -388,  -388,  -388,  -388,   302,
     186,  -388,   303,   -22,  -388,   304,   305,  -388,  -388,   307,
    1319,  -388,  -388,  1645,  -388,   308,  -388,  -388,  1645,  -388,
    -388,   730,   316,   378,   776,  1645,   730,   317,  -388,  -388,
    -388,  -388,  -388,  1482,  -388,  -388,  1645,  2481,  -388,  1645,
    1365,  -388,  -388,  -388,  -388,   314,   315,  -388,   191,  -388,
    1645,   320,  -388,   192,  -388,  1645,   730,  -388,  -388,  -388,
    -388,  -388,  -388,  -388,   223,   196,  1645,  1645,   730,   201,
    -388,  -388,   300,   324,   325,  -388,   730,  -388,  1645,   306,
    -388,   323,   730,   327,  -388,  -388,   730,  -388
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   129,   108,   109,   110,   112,   113,   163,   159,   160,
     161,   123,   115,   116,   117,   118,   121,   122,   119,   120,
     114,   124,   125,   133,   134,     0,     0,   162,   164,     0,
     111,   287,     0,    95,    97,   127,     0,   128,   126,    99,
     101,   103,    93,     0,   284,   286,   153,     0,     0,     0,
       0,   169,     0,   186,    91,     0,   104,   107,   168,     0,
      94,    96,   132,     0,    98,   100,   102,     1,   285,     0,
      10,   157,     0,   154,     0,     2,     7,     8,    11,    12,
       0,     0,     0,     9,     0,     0,     0,    37,    38,    39,
      40,    41,    42,    18,     3,     4,     6,    30,    43,     0,
      45,    49,    52,    55,    61,    64,    66,    68,    70,    72,
      74,    90,     0,   141,   199,   143,     0,     0,     0,     0,
     162,   187,   185,   184,     0,    92,     0,     0,   290,     0,
     289,     0,     0,     0,   167,     0,     0,   135,     0,   139,
       0,     0,     0,   149,     0,     0,    34,     0,    31,    32,
       0,     0,    43,    75,    88,     0,     0,     0,    24,    25,
       0,     0,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   166,   140,     0,     0,   201,   198,   202,
     142,   165,   158,     0,   170,   188,   183,   105,   107,     0,
       0,     0,     2,     0,     0,     0,     0,   260,   270,     0,
       0,     0,     0,     0,   249,   255,     0,   253,   244,   254,
     238,   239,     0,   251,   240,     0,     0,     0,   241,   242,
     243,     0,   226,   106,   291,   288,   196,   181,   195,     0,
     190,   191,     0,     0,   171,    38,     0,     0,     0,   130,
     136,     0,   137,     0,   144,   148,     0,   151,   156,   150,
     155,    28,     0,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    77,     0,     0,
       5,     0,    23,    20,     0,     0,    22,    46,    47,    48,
      50,    51,    53,    54,    58,    59,    60,    56,    57,    62,
      63,    65,    67,    69,    71,    73,   220,     0,     0,     0,
     204,    38,     0,     0,   200,     0,     0,     0,   245,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   280,
     281,   282,     0,   256,   250,   252,   264,     0,   269,     0,
       0,   228,     0,     0,     0,   232,     0,   193,   201,   194,
     180,     0,     0,   182,     0,     0,   172,   179,     0,   178,
      38,     0,   131,   146,     0,   138,     0,   152,    29,    35,
       0,    36,     0,    76,    89,     0,    44,    21,    19,   221,
     203,     0,     0,   205,   211,     0,   210,     0,   222,     0,
       0,   212,    38,     0,     0,     0,     0,     0,   246,     0,
     248,     0,     0,     0,     2,   272,   279,   283,     0,   262,
     267,     0,     0,   235,     0,   224,   227,   231,   233,   189,
     192,   197,   174,     0,     0,   175,   177,   145,   147,     0,
       0,    14,     0,     0,   207,     0,     0,   209,   223,     0,
       0,   213,   219,     0,   218,     0,   236,   237,     0,   247,
     259,     0,     0,     0,     0,     0,     0,     0,   265,   261,
     234,   225,   230,     0,   173,   176,     0,     0,    13,     0,
       0,    26,   206,   208,   215,     0,     0,   216,     0,   268,
       0,     0,   273,     0,   263,     0,     0,   229,    17,    15,
      16,    27,   214,   217,     0,     0,     0,     0,     0,     0,
     266,   278,     0,     0,   274,   257,     0,   271,     0,     0,
     258,     0,     0,     0,   275,   276,     0,   277
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -388,  -388,  -388,  -388,  -388,  -388,  -388,   -37,  -388,   301,
    -388,   -50,   123,   132,   124,   134,   238,   233,   252,   237,
     231,  -388,   -35,  -107,  -388,   -83,   -39,    -9,    51,  -388,
     310,  -388,   -40,  -388,  -388,   284,  -111,   -16,  -388,    67,
    -388,   364,  -124,  -388,   -47,  -388,  -388,   -20,   -55,   -43,
    -105,  -125,  -388,    85,  -388,     7,   -93,  -173,  -122,    60,
    -387,  -388,    94,   -23,  -388,  -192,  -388,   -57,  -388,   217,
    -310,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,
    -388,  -388,  -388,  -388,  -388,  -388,   397,  -388,  -388
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    93,    94,    71,    95,    96,   430,   431,    97,   152,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   153,   154,   278,   216,   112,    31,   238,    55,
      56,    33,    34,    35,    36,   136,   137,   114,   253,   254,
      37,    72,    73,    38,    39,    40,    41,   119,    58,    59,
     123,   307,   240,   241,   242,   432,   308,   189,   341,   342,
     343,   344,   345,    42,   218,   219,   220,   221,   222,   223,
     224,   410,   225,   226,   227,   228,   456,   486,   229,   326,
     454,   497,   509,   516,   230,    43,    44,    45,   131
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     130,   115,   115,   155,   134,   233,   121,   239,   113,   113,
     122,   118,    57,   111,   314,   111,   115,   405,   260,    46,
     232,   188,   124,   113,   279,   250,   246,   463,   247,    62,
     378,   279,   142,   336,   256,   338,   364,   279,    70,   115,
     139,   143,    70,   257,   266,   125,   113,   138,   128,   163,
      51,    32,   167,   168,   333,   116,   117,    51,   414,   365,
     407,   262,   155,   470,   155,    51,   115,   415,   115,    48,
      51,   187,   471,   113,   235,   113,   195,   284,   285,   312,
     196,   313,    51,   463,    60,    61,   121,   408,   115,   115,
      64,    65,    66,   156,    32,   113,   113,   184,   115,   190,
     115,    47,   258,   115,   198,   113,   111,   113,   129,   198,
     113,    63,   139,   139,   287,   288,   289,   217,   255,   138,
     138,   259,   234,   457,   232,   367,    52,    49,   251,   398,
     332,   400,   260,    52,   403,    53,   354,   250,   355,   121,
     361,    52,   187,   319,   482,   349,   346,   252,    51,   186,
      53,    51,   263,   409,   264,    53,    69,   265,    52,   339,
     251,   340,    54,    50,   322,   171,   172,    53,   111,   173,
     185,   373,   374,   186,    70,   314,   417,   129,   132,    53,
     135,   133,   129,   157,   158,   159,     8,     9,    10,   458,
     389,   279,   164,   141,   280,   348,   121,   165,   166,   144,
     195,   115,   381,   150,   382,   151,   387,   449,   113,   393,
     178,   394,   363,   217,   185,   179,   111,   186,   347,   120,
     315,   416,   181,   316,    52,   139,   352,   346,   180,   353,
     186,   376,   138,    53,   279,    53,   232,   368,   169,   170,
     279,   401,   402,   377,   176,   177,   174,   175,   423,   279,
     182,   424,   450,   160,   411,   183,   161,   279,   162,   479,
     451,   191,   121,   192,   484,   193,   195,   279,   232,   121,
     459,   467,   194,   129,   468,   435,   279,   279,   436,   494,
     498,   279,   281,   439,   502,   440,   279,   445,   282,   506,
     290,   291,   462,   134,   500,   294,   295,   296,   297,   298,
     412,   292,   293,   348,   111,   286,   505,   232,   195,   317,
     299,   300,   127,   320,   510,   318,   126,   321,   323,   324,
     514,   325,   327,   328,   517,   115,   337,   428,   350,   329,
     351,   111,   113,   475,   356,   195,   476,   357,   330,   447,
     366,   487,   369,   121,   255,   370,   371,   195,   462,    98,
     372,    98,   379,   383,   380,   396,   232,   395,   384,   488,
     399,   397,   490,   232,   406,   478,   413,   421,   375,   422,
     425,   426,   483,   434,   437,   438,   441,   442,   446,   448,
     452,   146,   148,   149,   453,   455,   481,   460,   464,   503,
     465,   466,   469,   195,   512,   472,   473,   495,   474,   477,
      98,   511,   499,   480,   485,   492,   493,   496,   507,   508,
     279,   513,   302,   305,   504,   515,   301,    74,   304,   248,
     115,    75,    76,    77,    78,    79,    80,   113,    81,    82,
     489,   427,   303,   140,   197,   433,   420,   501,   418,   335,
      68,     0,    98,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,     0,     0,     0,     0,     0,    84,
       0,    85,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,    98,    87,    88,    89,    90,    91,
      92,     0,     0,     0,     0,     0,     0,     0,   331,     0,
       0,   199,   200,     0,    74,     0,     0,   201,   202,    76,
      77,    78,    79,    80,     0,    81,    82,     0,     0,     0,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
       0,     0,    98,     0,     0,     0,     1,    83,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    98,   203,   204,   205,     0,   206,   207,   208,
     209,   210,   211,   212,   213,    26,    84,    27,    85,    28,
      29,    30,     0,     0,    86,     0,     0,     0,     0,     0,
     126,   214,    87,    88,    89,    90,    91,    92,   277,     0,
       0,     0,     0,     0,     0,   215,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   199,   200,     0,    74,     0,
      98,   201,   202,    76,    77,    78,    79,    80,     0,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
       1,    83,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,   203,   204,   205,
       0,   206,   207,   208,   209,   210,   211,   212,   213,    26,
      84,    27,    85,    28,    29,    30,     0,     0,    86,     0,
       0,     0,     0,     0,   126,   334,    87,    88,    89,    90,
      91,    92,     0,     0,   199,   200,     0,    74,     0,   215,
     201,   202,    76,    77,    78,    79,    80,     0,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,     0,     0,     0,   404,    76,    77,    78,    79,    80,
      83,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    83,    81,    82,   203,   204,   205,     0,
     206,   207,   208,   209,   210,   211,   212,   213,     0,    84,
       0,    85,     0,     0,     0,     0,    83,    86,     0,     0,
       0,     0,     0,   126,     0,    87,    88,    89,    90,    91,
      92,     0,    84,     0,    85,     0,     0,     0,   215,     0,
      86,     0,     0,     0,     0,     0,     0,     0,    87,    88,
      89,    90,    91,    92,     0,    84,     0,    85,     0,     0,
       0,   215,     0,    86,     0,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,    92,     0,     0,     0,
       0,    74,     0,     0,   215,    75,    76,    77,    78,    79,
      80,     0,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,    83,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,    27,    85,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,    92,    74,     0,     0,     0,    75,
      76,    77,    78,    79,    80,     0,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    83,    81,
      82,   243,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,   309,     0,     0,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,    84,   120,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,   244,
       0,     0,     0,    87,   245,    89,    90,    91,    92,     0,
      84,   120,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,   310,     0,     0,     0,    87,   311,    89,    90,
      91,    92,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    83,    81,    82,   358,     0,
       0,     0,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,   385,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,    84,   120,    85,     0,     0,     0,
       0,     0,    86,     0,     0,     0,   359,     0,     0,     0,
      87,   360,    89,    90,    91,    92,     0,    84,   120,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,   386,
       0,     0,     0,    87,    88,    89,    90,    91,    92,    74,
       0,     0,     0,    75,    76,    77,    78,    79,    80,     0,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    83,    81,    82,   390,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,   443,     0,
       0,     0,     8,     9,    10,     0,     0,     0,     0,     0,
       0,    84,   120,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,   391,     0,     0,     0,    87,   392,    89,
      90,    91,    92,     0,    84,   120,    85,     0,     0,     0,
       0,     0,    86,     0,     0,     0,   444,     0,     0,     0,
      87,    88,    89,    90,    91,    92,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,     0,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    83,
      81,    82,     0,     0,     0,     0,     8,     9,    10,     0,
       0,     0,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    83,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,   120,
      85,     0,     0,     0,     0,    83,    86,     0,     0,     0,
       0,     0,     0,     0,    87,    88,    89,    90,    91,    92,
       0,    84,     0,    85,     0,     0,     0,     0,     0,    86,
       0,     0,   339,     0,   340,   231,   461,    87,    88,    89,
      90,    91,    92,     0,    84,     0,    85,     0,     0,     0,
       0,     0,    86,     0,     0,   339,     0,   340,   231,   491,
      87,    88,    89,    90,    91,    92,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,     0,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    83,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    83,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
      85,     0,     0,     0,     0,    83,    86,     0,     0,   339,
       0,   340,   231,     0,    87,    88,    89,    90,    91,    92,
       0,    84,     0,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,   231,     0,    87,    88,    89,
      90,    91,    92,     0,    84,     0,    85,     0,     0,     0,
       0,     0,    86,   261,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,     0,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    83,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    83,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
      85,     0,     0,     0,     0,    83,    86,   283,     0,     0,
       0,     0,     0,     0,    87,    88,    89,    90,    91,    92,
       0,    84,     0,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,   375,     0,    87,    88,    89,
      90,    91,    92,     0,    84,     0,    85,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,     0,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    83,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
      85,     0,     0,     0,     0,     0,   145,     0,     0,     0,
       0,     0,     0,     0,    87,    88,    89,    90,    91,    92,
      51,    84,     0,    85,     0,     0,     0,     0,     0,   147,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,    92,     0,     0,     0,     0,     0,     1,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    67,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,     0,    30,     0,     0,   346,   306,     0,   186,
       0,     0,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     0,    30,     0,     0,     1,   237,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,   126,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,   127,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,     0,    30,     0,     0,
     185,   306,     1,   186,     0,     0,     0,     0,     0,    53,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,    29,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,   249,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,   362,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     1,   126,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     0,    30,     0,     0,     1,   388,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,    29,
      30,     1,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   419,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,     1,    30,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,    26,     0,    27,     0,    28,     0,
      30,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,    27,     0,     0,    29,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,   429,     0,
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,    27,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      57,    48,    49,    86,    59,   127,    53,   132,    48,    49,
      53,    50,    32,    48,   187,    50,    63,   327,   142,    11,
     127,   114,    85,    63,    85,   136,   133,   414,   133,    11,
      91,    85,    85,   225,    85,   227,    85,    85,    11,    86,
      63,    94,    11,    94,   151,   108,    86,    63,    57,    99,
      11,     0,    97,    98,   108,    48,    49,    11,    85,   108,
     108,   144,   145,    85,   147,    11,   113,    94,   115,    87,
      11,   114,    94,   113,   131,   115,   123,   160,   161,   186,
     123,   186,    11,   470,    33,    34,   133,     3,   135,   136,
      39,    40,    41,    86,    43,   135,   136,   113,   145,   115,
     147,    93,   141,   150,   124,   145,   141,   147,    57,   129,
     150,    93,   135,   136,   164,   165,   166,   126,   138,   135,
     136,    94,   131,     3,   231,    94,    87,    87,    89,   321,
     213,   323,   256,    87,   326,    96,   243,   248,   243,   186,
     247,    87,   185,   200,   454,   238,    87,   108,    11,    90,
      96,    11,   145,    69,   147,    96,    93,   150,    87,    90,
      89,    92,   108,    87,   203,    22,    23,    96,   203,    26,
      87,   278,   279,    90,    11,   348,   107,   126,    87,    96,
      93,    90,   131,    17,    18,    19,    47,    48,    49,    69,
     315,    85,    96,   107,    88,   238,   243,   101,   102,    87,
     247,   248,   309,    87,   309,    87,   313,   399,   248,   316,
      95,   316,   251,   222,    87,   105,   251,    90,   238,    80,
      87,   343,    27,    90,    87,   248,    85,    87,   106,    88,
      90,   281,   248,    96,    85,    96,   343,    88,    20,    21,
      85,   324,   325,    88,    24,    25,   103,   104,   355,    85,
      28,   358,    88,    87,   337,    88,    90,    85,    92,   451,
      88,    88,   309,    88,   456,    85,   313,    85,   375,   316,
      88,    85,    88,   222,    88,   382,    85,    85,   385,    88,
      88,    85,    88,   390,    88,   390,    85,   394,    11,    88,
     167,   168,   414,   348,   486,   171,   172,   173,   174,   175,
     339,   169,   170,   346,   339,    11,   498,   414,   355,    14,
     176,   177,   107,    87,   506,   108,    93,    89,    89,    87,
     512,    87,    87,    11,   516,   372,    87,   366,    88,   108,
      85,   366,   372,   440,    91,   382,   443,    91,   108,   396,
      89,   463,    88,   390,   364,    88,    88,   394,   470,    48,
      85,    50,    88,    91,    88,     6,   463,    88,    91,   466,
      89,    11,   469,   470,   108,   448,    11,    11,    93,    91,
      91,    91,   455,    91,    91,    88,    91,    91,   108,     9,
      71,    80,    81,    82,     9,    87,     8,    91,    91,   496,
      91,    89,    89,   440,    88,    91,    91,   480,    91,    91,
      99,   508,   485,    87,    87,    91,    91,    87,   108,    85,
      85,    88,   179,   182,   497,    88,   178,     7,   181,   135,
     467,    11,    12,    13,    14,    15,    16,   467,    18,    19,
     467,   364,   180,    69,   124,   375,   351,   494,   344,   222,
      43,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    95,    96,    97,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,     4,     5,    -1,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,   251,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,   281,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   107,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,    -1,     7,    -1,
     339,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   366,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    66,    67,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,    -1,    -1,     4,     5,    -1,     7,    -1,   108,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
      40,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    40,    18,    19,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    40,    87,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    95,    96,    97,    98,    99,
     100,    -1,    79,    -1,    81,    -1,    -1,    -1,   108,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,    99,   100,    -1,    79,    -1,    81,    -1,    -1,
      -1,   108,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,     7,    -1,    -1,   108,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,     7,    -1,    -1,    -1,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    40,    18,
      19,    43,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
      79,    80,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,     7,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    11,
      12,    13,    14,    15,    16,    40,    18,    19,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    43,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,    -1,    79,    80,    81,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,     7,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    40,    18,    19,    43,    -1,    -1,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,    -1,    79,    80,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,     7,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    40,
      18,    19,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    40,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    -1,    -1,    -1,    -1,    40,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,     7,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    40,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    40,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    40,    87,    -1,    -1,    90,
      -1,    92,    93,    -1,    95,    96,    97,    98,    99,   100,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    95,    96,    97,
      98,    99,   100,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,     7,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    40,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    40,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    40,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    95,    96,    97,
      98,    99,   100,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,     7,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    40,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
      11,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,
      -1,    82,    -1,    84,    -1,    -1,    87,    88,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    80,    -1,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,
      82,    -1,    84,    -1,    -1,    39,    88,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,   107,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    80,    -1,    82,    -1,    84,    -1,    -1,
      87,    88,    39,    90,    -1,    -1,    -1,    -1,    -1,    96,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    94,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    94,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    80,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    93,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,
      82,    -1,    84,    -1,    -1,    39,    88,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,    83,
      84,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    80,    -1,    82,    39,    84,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    78,    -1,    80,    -1,    82,    -1,
      84,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    80,    -1,    -1,    83,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    39,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    78,    80,    82,    83,
      84,   136,   137,   140,   141,   142,   143,   149,   152,   153,
     154,   155,   172,   194,   195,   196,    11,    93,    87,    87,
      87,    11,    87,    96,   108,   138,   139,   156,   157,   158,
     137,   137,    11,    93,   137,   137,   137,     0,   195,    93,
      11,   112,   150,   151,     7,    11,    12,    13,    14,    15,
      16,    18,    19,    40,    79,    81,    87,    95,    96,    97,
      98,    99,   100,   110,   111,   113,   114,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   135,   141,   146,   153,   164,   164,   135,   156,
      80,   153,   158,   159,    85,   108,    93,   107,   136,   137,
     176,   197,    87,    90,   157,    93,   144,   145,   146,   172,
     150,   107,    85,    94,    87,    87,   118,    87,   118,   118,
      87,    87,   118,   131,   132,   134,   164,    17,    18,    19,
      87,    90,    92,   120,    96,   101,   102,    97,    98,    20,
      21,    22,    23,    26,   103,   104,    24,    25,    95,   105,
     106,    27,    28,    88,   146,    87,    90,   158,   165,   166,
     146,    88,    88,    85,    88,   153,   158,   139,   156,     4,
       5,    10,    11,    66,    67,    68,    70,    71,    72,    73,
      74,    75,    76,    77,    94,   108,   134,   136,   173,   174,
     175,   176,   177,   178,   179,   181,   182,   183,   184,   187,
     193,    93,   132,   167,   136,   176,    11,    88,   137,   160,
     161,   162,   163,    43,    91,    96,   132,   159,   144,    94,
     145,    89,   108,   147,   148,   156,    85,    94,   135,    94,
     151,    88,   134,   164,   164,   164,   132,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,   107,   133,    85,
      88,    88,    11,    88,   134,   134,    11,   120,   120,   120,
     121,   121,   122,   122,   123,   123,   123,   123,   123,   124,
     124,   125,   126,   127,   128,   129,    88,   160,   165,    43,
      91,    96,   132,   159,   166,    87,    90,    14,   108,   176,
      87,    89,   135,    89,    87,    87,   188,    87,    11,   108,
     108,   108,   134,   108,    94,   178,   174,    87,   174,    90,
      92,   167,   168,   169,   170,   171,    87,   156,   158,   165,
      88,    85,    85,    88,   132,   159,    91,    91,    43,    91,
      96,   132,    94,   135,    85,   108,    89,    94,    88,    88,
      88,    88,    85,   132,   132,    93,   120,    88,    91,    88,
      88,   132,   159,    91,    91,    43,    91,   132,    88,   160,
      43,    91,    96,   132,   159,    88,     6,    11,   174,    89,
     174,   134,   134,   174,    11,   179,   108,   108,     3,    69,
     180,   134,   135,    11,    85,    94,   167,   107,   171,    65,
     162,    11,    91,   132,   132,    91,    91,   148,   135,    67,
     115,   116,   164,   168,    91,   132,   132,    91,    88,   132,
     159,    91,    91,    43,    91,   132,   108,   176,     9,   174,
      88,    88,    71,     9,   189,    87,   185,     3,    69,    88,
      91,    94,   167,   169,    91,    91,    89,    85,    88,    89,
      85,    94,    91,    91,    91,   132,   132,    91,   134,   174,
      87,     8,   179,   134,   174,    87,   186,   167,   132,   116,
     132,    94,    91,    91,    88,   134,    87,   190,    88,   134,
     174,   176,    88,   132,   134,   174,    88,   108,    85,   191,
     174,   132,    88,    88,   174,    88,   192,   174
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   110,   110,   110,   110,   111,   111,   111,
     112,   113,   113,   114,   115,   115,   116,   116,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     118,   118,   118,   118,   118,   118,   118,   119,   119,   119,
     119,   119,   119,   120,   120,   121,   121,   121,   121,   122,
     122,   122,   123,   123,   123,   124,   124,   124,   124,   124,
     124,   125,   125,   125,   126,   126,   127,   127,   128,   128,
     129,   129,   130,   130,   131,   132,   132,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   134,   134,
     135,   136,   136,   136,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   138,   138,   139,   139,   140,   140,
     140,   140,   140,   140,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     142,   142,   142,   143,   143,   144,   144,   145,   145,   145,
     146,   146,   146,   146,   147,   147,   148,   148,   148,   149,
     149,   149,   149,   149,   150,   150,   151,   151,   152,   153,
     153,   153,   153,   154,   154,   155,   155,   156,   156,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   158,   158,   158,   158,   159,   159,   160,
     160,   161,   161,   162,   162,   162,   163,   163,   164,   164,
     165,   165,   165,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   167,   167,   167,   168,   168,   168,
     168,   169,   170,   170,   171,   171,   172,   173,   174,   174,
     174,   174,   174,   174,   174,   174,   175,   175,   175,   176,
     176,   177,   177,   178,   178,   179,   179,   180,   180,   181,
     182,   183,   185,   184,   184,   186,   184,   184,   184,   187,
     188,   187,   189,   190,   191,   187,   192,   187,   187,   193,
     193,   193,   193,   193,   194,   194,   195,   195,   196,   196,
     197,   197
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     3,     4,
       1,     2,     2,     2,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     2,     1,     1,     1,     2,     2,     3,     1,
       2,     1,     2,     1,     1,     3,     2,     3,     1,     4,
       5,     5,     6,     2,     1,     3,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     4,     4,     2,     1,     1,
       3,     3,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     3,     2,     2,     1,     1,     2,     3,
       1,     1,     3,     2,     2,     1,     1,     3,     2,     1,
       2,     1,     1,     3,     2,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     3,     4,     1,     2,     1,     4,
       3,     2,     1,     2,     3,     2,     7,     4,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     4,     3,     2,
       3,     1,     2,     1,     1,     1,     2,     5,     6,     4,
       1,     4,     0,     5,     2,     0,     6,     3,     5,     2,
       0,     8,     0,     0,     0,    10,     0,    13,     7,     3,
       2,     2,     2,     3,     1,     2,     1,     1,     4,     3,
       1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* primary_expression: IDENTIFIER  */
#line 143 "yapl.y"
                           { strcpy((yyval.name), (yyvsp[0].name)); }
#line 2558 "y.tab.c"
    break;

  case 3: /* primary_expression: constant  */
#line 144 "yapl.y"
                           { strcpy((yyval.name), (yyvsp[0].name)); }
#line 2564 "y.tab.c"
    break;

  case 4: /* primary_expression: string  */
#line 145 "yapl.y"
                           { strcpy((yyval.name), (yyvsp[0].name)); }
#line 2570 "y.tab.c"
    break;

  case 5: /* primary_expression: '(' expression ')'  */
#line 146 "yapl.y"
                           { strcpy((yyval.name), (yyvsp[-1].name)); }
#line 2576 "y.tab.c"
    break;

  case 6: /* primary_expression: generic_selection  */
#line 147 "yapl.y"
                           { strcpy((yyval.name), (yyvsp[0].name)); }
#line 2582 "y.tab.c"
    break;

  case 7: /* constant: I_CONSTANT  */
#line 151 "yapl.y"
                     {int_consts++;}
#line 2588 "y.tab.c"
    break;

  case 9: /* constant: ENUMERATION_CONSTANT  */
#line 153 "yapl.y"
                               { strcpy((yyval.name), "enum_const"); }
#line 2594 "y.tab.c"
    break;

  case 13: /* generic_selection: GENERIC '(' assignment_expression ',' generic_assoc_list ')'  */
#line 165 "yapl.y"
                                                                       { strcpy((yyval.name), ""); }
#line 2600 "y.tab.c"
    break;

  case 26: /* postfix_expression: '(' type_name ')' '{' initializer_list '}'  */
#line 187 "yapl.y"
                                                          { strcpy((yyval.name), ""); }
#line 2606 "y.tab.c"
    break;

  case 27: /* postfix_expression: '(' type_name ')' '{' initializer_list ',' '}'  */
#line 188 "yapl.y"
                                                          { strcpy((yyval.name), ""); }
#line 2612 "y.tab.c"
    break;

  case 28: /* postfix_expression: PRINT '(' ')'  */
#line 189 "yapl.y"
                                                          { strcpy((yyval.name), ""); }
#line 2618 "y.tab.c"
    break;

  case 29: /* postfix_expression: PRINT '(' expression ')'  */
#line 190 "yapl.y"
                                                          { strcpy((yyval.name), ""); }
#line 2624 "y.tab.c"
    break;

  case 30: /* unary_expression: postfix_expression  */
#line 195 "yapl.y"
                             { strcpy((yyval.name), (yyvsp[0].name)); }
#line 2630 "y.tab.c"
    break;

  case 31: /* unary_expression: INC_OP unary_expression  */
#line 197 "yapl.y"
        {
		char* t = new_temp();
		emit("+", (yyvsp[0].name), "1", t);   /* Increment the value */
		emit("=", t, "", (yyvsp[0].name));    /* Update the original variable */
		strcpy((yyval.name), (yyvsp[0].name));          /* Return the updated variable name */
	}
#line 2641 "y.tab.c"
    break;

  case 32: /* unary_expression: DEC_OP unary_expression  */
#line 204 "yapl.y"
        {
		char* t = new_temp();
		emit("-", (yyvsp[0].name), "1", t);   /* Decrement the value */
		emit("=", t, "", (yyvsp[0].name));    /* Update the original variable */
		strcpy((yyval.name), (yyvsp[0].name));
	}
#line 2652 "y.tab.c"
    break;

  case 33: /* unary_expression: unary_operator cast_expression  */
#line 211 "yapl.y"
        {
		char* t = new_temp();
		/* The PDF example explicitly uses "minus" for unary negation  */
		if (strcmp((yyvsp[-1].name), "-") == 0) {
			emit("minus", (yyvsp[0].name), "", t);
		} else {
			emit((yyvsp[-1].name), (yyvsp[0].name), "", t);
		}
		strcpy((yyval.name), t);
	}
#line 2667 "y.tab.c"
    break;

  case 34: /* unary_expression: SIZEOF unary_expression  */
#line 222 "yapl.y"
        {
		char* t = new_temp();
		emit("sizeof", (yyvsp[0].name), "", t);
		strcpy((yyval.name), t);
	}
#line 2677 "y.tab.c"
    break;

  case 35: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 228 "yapl.y"
        {
		char* t = new_temp();
		emit("sizeof", (yyvsp[-1].name), "", t);
		strcpy((yyval.name), t);
	}
#line 2687 "y.tab.c"
    break;

  case 36: /* unary_expression: ALIGNOF '(' type_name ')'  */
#line 234 "yapl.y"
        {
		char* t = new_temp();
		emit("alignof", (yyvsp[-1].name), "", t);
		strcpy((yyval.name), t);
	}
#line 2697 "y.tab.c"
    break;

  case 37: /* unary_operator: '&'  */
#line 242 "yapl.y"
              { strcpy((yyval.name), "&"); }
#line 2703 "y.tab.c"
    break;

  case 38: /* unary_operator: '*'  */
#line 243 "yapl.y"
              { strcpy((yyval.name), "*"); }
#line 2709 "y.tab.c"
    break;

  case 39: /* unary_operator: '+'  */
#line 244 "yapl.y"
              { strcpy((yyval.name), "+"); }
#line 2715 "y.tab.c"
    break;

  case 40: /* unary_operator: '-'  */
#line 245 "yapl.y"
              { strcpy((yyval.name), "-"); }
#line 2721 "y.tab.c"
    break;

  case 41: /* unary_operator: '~'  */
#line 246 "yapl.y"
              { strcpy((yyval.name), "~"); }
#line 2727 "y.tab.c"
    break;

  case 42: /* unary_operator: '!'  */
#line 247 "yapl.y"
              { strcpy((yyval.name), "!"); }
#line 2733 "y.tab.c"
    break;

  case 43: /* cast_expression: unary_expression  */
#line 251 "yapl.y"
                           { strcpy((yyval.name), (yyvsp[0].name)); }
#line 2739 "y.tab.c"
    break;

  case 44: /* cast_expression: '(' type_name ')' cast_expression  */
#line 252 "yapl.y"
                                            { strcpy((yyval.name), (yyvsp[0].name)); }
#line 2745 "y.tab.c"
    break;

  case 45: /* multiplicative_expression: cast_expression  */
#line 257 "yapl.y"
    { 
        strcpy((yyval.name), (yyvsp[0].name)); 
    }
#line 2753 "y.tab.c"
    break;

  case 46: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 261 "yapl.y"
    {
        char* t = new_temp();      /* Create t1, t2, etc.  */
        emit("*", (yyvsp[-2].name), (yyvsp[0].name), t);     /* op: *, arg1: left, arg2: right, result: temp [cite: 34] */
        strcpy((yyval.name), t);            /* Pass result name up the tree  */
    }
#line 2763 "y.tab.c"
    break;

  case 47: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 267 "yapl.y"
    {
        char* t = new_temp();
        emit("/", (yyvsp[-2].name), (yyvsp[0].name), t);     /* Emit row for division [cite: 53] */
        strcpy((yyval.name), t);
    }
#line 2773 "y.tab.c"
    break;

  case 48: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 273 "yapl.y"
    {
        char* t = new_temp();
        emit("%", (yyvsp[-2].name), (yyvsp[0].name), t);     /* Emit row for modulo [cite: 53] */
        strcpy((yyval.name), t);
    }
#line 2783 "y.tab.c"
    break;

  case 49: /* additive_expression: multiplicative_expression  */
#line 282 "yapl.y"
    { 
        strcpy((yyval.name), (yyvsp[0].name)); 
    }
#line 2791 "y.tab.c"
    break;

  case 50: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 286 "yapl.y"
    {
        char* t = new_temp();      /* Generate next temporary (e.g., t5) */
        emit("+", (yyvsp[-2].name), (yyvsp[0].name), t);     /* Create quadruple: op, arg1, arg2, result */
        strcpy((yyval.name), t);            /* Pass temporary name to parent rule */
    }
#line 2801 "y.tab.c"
    break;

  case 51: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 292 "yapl.y"
    {
        char* t = new_temp();
        emit("-", (yyvsp[-2].name), (yyvsp[0].name), t);     /* Record subtraction in the table */
        strcpy((yyval.name), t);
    }
#line 2811 "y.tab.c"
    break;

  case 52: /* shift_expression: additive_expression  */
#line 300 "yapl.y"
                              {strcpy((yyval.name), (yyvsp[0].name)); }
#line 2817 "y.tab.c"
    break;

  case 55: /* relational_expression: shift_expression  */
#line 307 "yapl.y"
    { 
        strcpy((yyval.name), (yyvsp[0].name)); 
    }
#line 2825 "y.tab.c"
    break;

  case 56: /* relational_expression: relational_expression '<' shift_expression  */
#line 311 "yapl.y"
    {
        char* t = new_temp();
        emit("<", (yyvsp[-2].name), (yyvsp[0].name), t);
        strcpy((yyval.name), t);
    }
#line 2835 "y.tab.c"
    break;

  case 57: /* relational_expression: relational_expression '>' shift_expression  */
#line 317 "yapl.y"
    {
        char* t = new_temp();
        emit(">", (yyvsp[-2].name), (yyvsp[0].name), t);
        strcpy((yyval.name), t);
    }
#line 2845 "y.tab.c"
    break;

  case 58: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 323 "yapl.y"
    {
        char* t = new_temp();
        emit("<=", (yyvsp[-2].name), (yyvsp[0].name), t);
        strcpy((yyval.name), t);
    }
#line 2855 "y.tab.c"
    break;

  case 59: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 329 "yapl.y"
    {
        char* t = new_temp();
        emit(">=", (yyvsp[-2].name), (yyvsp[0].name), t);
        strcpy((yyval.name), t);
    }
#line 2865 "y.tab.c"
    break;

  case 60: /* relational_expression: relational_expression TH_OP shift_expression  */
#line 335 "yapl.y"
    {
        char* t = new_temp();
        emit("<=>", (yyvsp[-2].name), (yyvsp[0].name), t);
        strcpy((yyval.name), t);
    }
#line 2875 "y.tab.c"
    break;

  case 61: /* equality_expression: relational_expression  */
#line 344 "yapl.y"
    { 
        strcpy((yyval.name), (yyvsp[0].name)); 
    }
#line 2883 "y.tab.c"
    break;

  case 62: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 348 "yapl.y"
    {
        char* t = new_temp();
        emit("==", (yyvsp[-2].name), (yyvsp[0].name), t);
        strcpy((yyval.name), t);
    }
#line 2893 "y.tab.c"
    break;

  case 63: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 354 "yapl.y"
    {
        char* t = new_temp();
        emit("!=", (yyvsp[-2].name), (yyvsp[0].name), t);
        strcpy((yyval.name), t);
    }
#line 2903 "y.tab.c"
    break;

  case 64: /* and_expression: equality_expression  */
#line 362 "yapl.y"
                              { strcpy((yyval.name), (yyvsp[0].name)); }
#line 2909 "y.tab.c"
    break;

  case 66: /* exclusive_or_expression: and_expression  */
#line 367 "yapl.y"
                         { strcpy((yyval.name), (yyvsp[0].name)); }
#line 2915 "y.tab.c"
    break;

  case 68: /* inclusive_or_expression: exclusive_or_expression  */
#line 372 "yapl.y"
                                  { strcpy((yyval.name), (yyvsp[0].name)); }
#line 2921 "y.tab.c"
    break;

  case 70: /* logical_and_expression: inclusive_or_expression  */
#line 378 "yapl.y"
    { 
        strcpy((yyval.name), (yyvsp[0].name)); 
    }
#line 2929 "y.tab.c"
    break;

  case 71: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 382 "yapl.y"
    {
        char* t = new_temp();
        emit("&&", (yyvsp[-2].name), (yyvsp[0].name), t);
        strcpy((yyval.name), t);
    }
#line 2939 "y.tab.c"
    break;

  case 72: /* logical_or_expression: logical_and_expression  */
#line 391 "yapl.y"
    { 
        strcpy((yyval.name), (yyvsp[0].name)); 
    }
#line 2947 "y.tab.c"
    break;

  case 73: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 395 "yapl.y"
    {
        char* t = new_temp();
        emit("||", (yyvsp[-2].name), (yyvsp[0].name), t);
        strcpy((yyval.name), t);
    }
#line 2957 "y.tab.c"
    break;

  case 74: /* conditional_expression: logical_or_expression  */
#line 403 "yapl.y"
                                { strcpy((yyval.name), (yyvsp[0].name)); }
#line 2963 "y.tab.c"
    break;

  case 75: /* assignment_expression: conditional_expression  */
#line 408 "yapl.y"
        { 
		strcpy((yyval.name), (yyvsp[0].name)); 
	}
#line 2971 "y.tab.c"
    break;

  case 76: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 412 "yapl.y"
        {
                char target[50];
                strcpy(target, (yyvsp[-2].name));
                
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

                if (strcmp((yyvsp[-1].name), "=") == 0) {
                        emit("=", (yyvsp[0].name), "", target);
                } else {
                        char op[3];
                        strncpy(op, (yyvsp[-1].name), strlen((yyvsp[-1].name))-1);
                        op[strlen((yyvsp[-1].name))-1] = '\0';
                        char* t = new_temp();
                        emit(op, target, (yyvsp[0].name), t);
                        emit("=", t, "", target);
                }
                strcpy((yyval.name), target);
        }
#line 3009 "y.tab.c"
    break;

  case 77: /* assignment_operator: '='  */
#line 448 "yapl.y"
                       { strcpy((yyval.name), "="); }
#line 3015 "y.tab.c"
    break;

  case 78: /* assignment_operator: MUL_ASSIGN  */
#line 449 "yapl.y"
                       { strcpy((yyval.name), "*="); }
#line 3021 "y.tab.c"
    break;

  case 79: /* assignment_operator: DIV_ASSIGN  */
#line 450 "yapl.y"
                       { strcpy((yyval.name), "/="); }
#line 3027 "y.tab.c"
    break;

  case 80: /* assignment_operator: MOD_ASSIGN  */
#line 451 "yapl.y"
                       { strcpy((yyval.name), "%="); }
#line 3033 "y.tab.c"
    break;

  case 81: /* assignment_operator: ADD_ASSIGN  */
#line 452 "yapl.y"
                       { strcpy((yyval.name), "+="); }
#line 3039 "y.tab.c"
    break;

  case 82: /* assignment_operator: SUB_ASSIGN  */
#line 453 "yapl.y"
                       { strcpy((yyval.name), "-="); }
#line 3045 "y.tab.c"
    break;

  case 83: /* assignment_operator: LEFT_ASSIGN  */
#line 454 "yapl.y"
                       { strcpy((yyval.name), "<<="); }
#line 3051 "y.tab.c"
    break;

  case 84: /* assignment_operator: RIGHT_ASSIGN  */
#line 455 "yapl.y"
                       { strcpy((yyval.name), ">>="); }
#line 3057 "y.tab.c"
    break;

  case 85: /* assignment_operator: AND_ASSIGN  */
#line 456 "yapl.y"
                       { strcpy((yyval.name), "&="); }
#line 3063 "y.tab.c"
    break;

  case 86: /* assignment_operator: XOR_ASSIGN  */
#line 457 "yapl.y"
                       { strcpy((yyval.name), "^="); }
#line 3069 "y.tab.c"
    break;

  case 87: /* assignment_operator: OR_ASSIGN  */
#line 458 "yapl.y"
                       { strcpy((yyval.name), "|="); }
#line 3075 "y.tab.c"
    break;

  case 88: /* expression: assignment_expression  */
#line 462 "yapl.y"
                                { strcpy((yyval.name), (yyvsp[0].name)); }
#line 3081 "y.tab.c"
    break;

  case 89: /* expression: expression ',' assignment_expression  */
#line 463 "yapl.y"
                                               { strcpy((yyval.name), (yyvsp[0].name)); }
#line 3087 "y.tab.c"
    break;

  case 167: /* declarator: pointer direct_declarator  */
#line 607 "yapl.y"
                                    {pointer_decls++;}
#line 3093 "y.tab.c"
    break;

  case 198: /* type_name: specifier_qualifier_list abstract_declarator  */
#line 663 "yapl.y"
                                                       { strcpy((yyval.name), "type"); }
#line 3099 "y.tab.c"
    break;

  case 199: /* type_name: specifier_qualifier_list  */
#line 664 "yapl.y"
                                                       { strcpy((yyval.name), "type"); }
#line 3105 "y.tab.c"
    break;

  case 255: /* expression_statement: ';'  */
#line 765 "yapl.y"
              { strcpy((yyval.name), ""); }
#line 3111 "y.tab.c"
    break;

  case 256: /* expression_statement: expression ';'  */
#line 766 "yapl.y"
                         { strcpy((yyval.name), (yyvsp[-1].name)); }
#line 3117 "y.tab.c"
    break;

  case 257: /* elif_list: ELIF '(' expression ')' statement  */
#line 770 "yapl.y"
                                            { ladder_len++; }
#line 3123 "y.tab.c"
    break;

  case 258: /* elif_list: elif_list ELIF '(' expression ')' statement  */
#line 771 "yapl.y"
                                                      { ladder_len++; }
#line 3129 "y.tab.c"
    break;

  case 259: /* if_prefix: IF '(' expression ')'  */
#line 776 "yapl.y"
    {
        char *l_false = new_label();
        emit("ifFalse", (yyvsp[-1].name), "", l_false);
        strcpy((yyval.name), l_false); /* FIX: strcpy instead of = */
    }
#line 3139 "y.tab.c"
    break;

  case 260: /* while_prefix: WHILE  */
#line 785 "yapl.y"
    {
        char *l_start = new_label();
        emit("LABEL", l_start, "", "");
        strcpy((yyval.name), l_start); /* FIX: strcpy */
    }
#line 3149 "y.tab.c"
    break;

  case 261: /* while_cond: while_prefix '(' expression ')'  */
#line 794 "yapl.y"
    {
        char *l_end = new_label();
        emit("ifFalse", (yyvsp[-1].name), "", l_end);
        sprintf((yyval.name), "%s %s", (yyvsp[-3].name), l_end); /* Pack start and end labels */
    }
#line 3159 "y.tab.c"
    break;

  case 262: /* @1: %empty  */
#line 804 "yapl.y"
      {
          char *l_end = new_label();
          emit("goto", l_end, "", "");
          emit("LABEL", (yyvsp[-2].name), "", ""); /* $1 is the label from if_prefix */
          
          ladder_len++; 
          (yyval.val) = (ladder_len - 1); 
          strcpy((yyval.name), l_end); /* FIX: strcpy */
      }
#line 3173 "y.tab.c"
    break;

  case 263: /* selection_statement: if_prefix statement ELSE @1 statement  */
#line 814 "yapl.y"
      {
          emit("LABEL", (yyvsp[-1].name), "", ""); 
          if(ladder_len >= max) { max = ladder_len; } 
          ladder_len = (yyvsp[-1].val); 
      }
#line 3183 "y.tab.c"
    break;

  case 264: /* selection_statement: if_prefix statement  */
#line 822 "yapl.y"
      {
          emit("LABEL", (yyvsp[-1].name), "", "");
          ifs_wo_else++;
      }
#line 3192 "y.tab.c"
    break;

  case 265: /* @2: %empty  */
#line 829 "yapl.y"
      {
          char *l_end = new_label();
          emit("goto", l_end, "", "");
          emit("LABEL", (yyvsp[-3].name), "", "");
          
          ladder_len++; 
          (yyval.val) = (ladder_len - 1); 
          strcpy((yyval.name), l_end); /* FIX: strcpy */
      }
#line 3206 "y.tab.c"
    break;

  case 266: /* selection_statement: if_prefix statement elif_list ELSE @2 statement  */
#line 839 "yapl.y"
      { 
          emit("LABEL", (yyvsp[-1].name), "", "");
          if(ladder_len >= max) { max = ladder_len; } 
          ladder_len = (yyvsp[-1].val); 
      }
#line 3216 "y.tab.c"
    break;

  case 267: /* selection_statement: if_prefix statement elif_list  */
#line 847 "yapl.y"
      { 
          emit("LABEL", (yyvsp[-2].name), "", "");
      }
#line 3224 "y.tab.c"
    break;

  case 269: /* iteration_statement: while_cond statement  */
#line 856 "yapl.y"
      {
          char l_start[10], l_end[10];
          sscanf((yyvsp[-1].name), "%s %s", l_start, l_end); /* Unpack labels from while_cond */
          emit("goto", l_start, "", "");
          emit("LABEL", l_end, "", "");
      }
#line 3235 "y.tab.c"
    break;

  case 270: /* @3: %empty  */
#line 865 "yapl.y"
      {
          char *l_start = new_label();
          emit("LABEL", l_start, "", "");
          strcpy((yyval.name), l_start); /* FIX: strcpy */
      }
#line 3245 "y.tab.c"
    break;

  case 271: /* iteration_statement: DO @3 statement WHILE '(' expression ')' ';'  */
#line 871 "yapl.y"
      {
          char *l_end = new_label();
          emit("ifFalse", (yyvsp[-2].name), "", l_end);
          emit("goto", (yyvsp[-6].name), "", ""); 
          emit("LABEL", l_end, "", "");  
      }
#line 3256 "y.tab.c"
    break;

  case 272: /* @4: %empty  */
#line 880 "yapl.y"
      {
          char *l_cond = new_label();
          emit("LABEL", l_cond, "", "");
          strcpy((yyval.name), l_cond); /* FIX: strcpy */
      }
#line 3266 "y.tab.c"
    break;

  case 273: /* @5: %empty  */
#line 886 "yapl.y"
      {
          char *l_body = new_label();
          char *l_inc = new_label();
          char *l_end = new_label();
          
          emit("ifFalse", (yyvsp[0].name), "", l_end); 
          emit("goto", l_body, "", "");
          emit("LABEL", l_inc, "", "");
          sprintf((yyval.name), "%s %s %s", l_body, l_inc, l_end);
      }
#line 3281 "y.tab.c"
    break;

  case 274: /* @6: %empty  */
#line 897 "yapl.y"
      {
          emit("goto", (yyvsp[-3].name), "", ""); 
          
          char l_body[10], l_inc[10], l_end[10];
          sscanf((yyvsp[-1].name), "%s %s %s", l_body, l_inc, l_end);
          
          emit("LABEL", l_body, "", "");
          sprintf((yyval.name), "%s %s", l_inc, l_end); 
      }
#line 3295 "y.tab.c"
    break;

  case 275: /* iteration_statement: FOR '(' expression_statement @4 expression_statement @5 expression @6 ')' statement  */
#line 907 "yapl.y"
      {
          char l_inc[10], l_end[10];
          sscanf((yyvsp[-2].name), "%s %s", l_inc, l_end);
          
          emit("goto", l_inc, "", "");
          emit("LABEL", l_end, "", "");
      }
#line 3307 "y.tab.c"
    break;

  case 276: /* @7: %empty  */
#line 917 "yapl.y"
      {
          emit("=", (yyvsp[-4].name), "", (yyvsp[-8].name));
          char *l_cond = new_label();
          char *l_end = new_label();
          emit("LABEL", l_cond, "", "");
          
          char *t_cond = new_temp();
          emit("<=", (yyvsp[-8].name), (yyvsp[-2].name), t_cond);
          emit("ifFalse", t_cond, "", l_end);
          
          sprintf((yyval.name), "%s %s %s", l_cond, l_end, (yyvsp[-8].name));
      }
#line 3324 "y.tab.c"
    break;

  case 277: /* iteration_statement: FOR '(' IDENTIFIER IN RANGE '(' assignment_expression ',' assignment_expression ')' ')' @7 statement  */
#line 930 "yapl.y"
      {
          char l_cond[10], l_end[10], id_name[50];
          sscanf((yyvsp[-1].name), "%s %s %s", l_cond, l_end, id_name);
          
          char *t_inc = new_temp();
          emit("+", id_name, "1", t_inc);
          emit("=", t_inc, "", id_name);
          
          emit("goto", l_cond, "", "");
          emit("LABEL", l_end, "", "");
      }
#line 3340 "y.tab.c"
    break;

  case 284: /* translation_unit: external_declaration  */
#line 956 "yapl.y"
                               {global_declarations++;}
#line 3346 "y.tab.c"
    break;

  case 285: /* translation_unit: translation_unit external_declaration  */
#line 957 "yapl.y"
                                                {global_declarations++;}
#line 3352 "y.tab.c"
    break;

  case 286: /* external_declaration: function_definition  */
#line 961 "yapl.y"
                              {func_definitions++;}
#line 3358 "y.tab.c"
    break;


#line 3362 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 975 "yapl.y"

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

void print_quad_table() {
    printf("\n--- Generated Intermediate Code (Quadruples) ---\n");
    printf("%-10s | %-10s | %-10s | %-10s\n", "op", "arg1", "arg2", "result");
    printf("------------------------------------------------------------\n");
    for(int i = 0; i < quad_idx; i++) {
        printf("%-10s | %-10s | %-10s | %-10s\n", 
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
