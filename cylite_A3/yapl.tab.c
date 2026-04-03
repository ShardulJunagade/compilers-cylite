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
int yylex(void);
void yyerror(const char *s);
int global_declarations=0;
int func_definitions=0;
int int_consts=0;
int pointer_decls=0;
int ifs_wo_else=0;
int ladder_len=0,hold=0;
int max=-1;

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
static int write_reverse_derivation_png(const char *png_path);
static int looks_like_nonterminal(const char *sym);
static void free_derivation_steps(void);

#line 124 "yapl.tab.c"

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
#line 87 "yapl.y"

	int val;
	struct symtab *symp;

#line 261 "yapl.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



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
  YYSYMBOL_selection_statement = 181,      /* selection_statement  */
  YYSYMBOL_182_1 = 182,                    /* $@1  */
  YYSYMBOL_183_2 = 183,                    /* $@2  */
  YYSYMBOL_iteration_statement = 184,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 185,           /* jump_statement  */
  YYSYMBOL_translation_unit = 186,         /* translation_unit  */
  YYSYMBOL_external_declaration = 187,     /* external_declaration  */
  YYSYMBOL_function_definition = 188,      /* function_definition  */
  YYSYMBOL_declaration_list = 189          /* declaration_list  */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   2761

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  286
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  519

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
       0,    95,    95,    96,    97,    98,    99,   103,   104,   105,
     109,   113,   114,   118,   122,   123,   127,   128,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     148,   149,   150,   151,   152,   153,   154,   158,   159,   160,
     161,   162,   163,   167,   168,   172,   173,   174,   175,   179,
     180,   181,   185,   186,   187,   191,   192,   193,   194,   195,
     196,   200,   201,   202,   206,   207,   211,   212,   216,   217,
     221,   222,   226,   227,   231,   235,   236,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   255,   256,
     260,   264,   265,   266,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   283,   284,   288,   289,   293,   294,
     295,   296,   297,   298,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     321,   322,   323,   327,   328,   332,   333,   337,   338,   339,
     343,   344,   345,   346,   350,   351,   355,   356,   357,   361,
     362,   363,   364,   365,   369,   370,   374,   375,   379,   383,
     384,   385,   386,   390,   391,   395,   396,   400,   401,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   422,   423,   424,   425,   429,   430,   435,
     436,   440,   441,   445,   446,   447,   451,   452,   456,   457,
     461,   462,   463,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   491,   492,   493,   497,   498,   499,
     500,   504,   508,   509,   513,   514,   518,   522,   526,   527,
     528,   529,   530,   531,   532,   533,   537,   538,   539,   543,
     544,   548,   549,   553,   554,   558,   559,   563,   564,   568,
     568,   573,   576,   575,   582,   584,   589,   590,   591,   592,
     593,   594,   595,   596,   600,   601,   602,   603,   604,   608,
     609,   613,   614,   618,   619,   623,   624
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
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
  "block_item", "expression_statement", "elif_list", "selection_statement",
  "$@1", "$@2", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-296)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2516,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,     3,   -26,   -20,  -296,    53,
    -296,  -296,    66,  2606,  2606,  -296,    21,  -296,  -296,  2606,
    2606,  2606,  -296,  2038,  -296,  -296,   -28,   145,  1025,  2681,
    1913,  -296,    39,   161,  -296,   -70,  -296,  2196,    88,    33,
    -296,  -296,    87,  2644,  -296,  -296,  -296,  -296,  -296,   145,
    -296,    80,   -58,  -296,   105,  -296,  -296,  -296,  -296,  -296,
    1936,  2030,  2030,  -296,   109,   131,  1025,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,   114,  -296,  1913,
    -296,   124,   -76,    27,   167,   127,   128,   148,   156,   205,
     238,  -296,   185,  2681,   -53,  2681,   192,   200,   207,   209,
    -296,  -296,  -296,   161,    39,  -296,   510,  1633,  -296,    66,
    -296,  2415,  2148,  1119,    88,  2644,  2313,  -296,    58,  -296,
     -36,  1913,    17,  -296,  1656,  1025,  -296,  1025,  -296,  -296,
    2681,  1913,   368,  -296,  -296,   100,   210,   288,  -296,  -296,
    1750,  1913,   289,  -296,  1913,  1913,  1913,  1913,  1913,  1913,
    1913,  1913,  1913,  1913,  1913,  1913,  1913,  1913,  1913,  1913,
    1913,  1913,  1913,  -296,  -296,  2263,  1142,   152,  -296,   153,
    -296,  -296,  -296,   287,  -296,  -296,  -296,  -296,   195,   201,
     214,   221,   222,  1913,   223,   227,   228,   230,   708,   232,
     309,   213,   215,   904,  -296,  -296,   -22,  -296,  -296,  -296,
    -296,  -296,   609,  -296,  -296,  -296,  -296,  -296,  1610,  -296,
    -296,  -296,  -296,  -296,  -296,    29,   237,   241,  -296,   126,
    1470,  -296,   236,   240,  1236,  2361,  -296,  -296,  1913,  -296,
      57,  -296,   239,    18,  -296,  -296,  -296,  -296,  -296,   162,
     245,   250,   253,   260,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  1913,  1913,  -296,  1773,  -296,
    -296,   164,    92,  -296,  -296,  -296,  -296,   124,   124,   -76,
     -76,    27,    27,    27,    27,    27,   167,   167,   127,   128,
     148,   156,   205,  -296,   258,   259,  1470,  -296,   261,   264,
    1259,   153,  2468,  1353,   263,  -296,   351,   349,   708,   279,
     708,  1913,  1913,  1913,   298,   806,   262,  -296,  -296,  -296,
      63,  -296,  -296,  -296,  1913,   360,  -296,   -21,  1633,    77,
    -296,  2092,  -296,    71,  -296,  -296,  2562,   361,  -296,   282,
    1470,  -296,  -296,  1913,  -296,   283,   284,  -296,  -296,    68,
    -296,  1913,  -296,  -296,   285,   285,  -296,   706,  -296,  -296,
    1610,  -296,  -296,  -296,  -296,  -296,   286,  1470,  -296,  -296,
    1913,  -296,   290,  -296,   291,  1470,  -296,   292,   293,  1376,
     274,   214,   367,  -296,   708,  -296,   166,   170,   175,   299,
     376,   927,   927,  -296,  -296,   296,  -296,  1493,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,   300,   301,  -296,  -296,
    -296,  -296,   304,   179,  -296,   305,    -1,  -296,   316,   317,
    -296,  -296,   319,  1470,  -296,  -296,  1913,  -296,   322,  -296,
    -296,  1913,  -296,   708,   708,   708,  1913,   381,  1796,  1890,
    -296,  -296,  -296,  1633,  -296,  -296,  1913,   706,  -296,  1913,
    1516,  -296,  -296,  -296,  -296,   324,   325,  -296,   187,    20,
    -296,  -296,   189,   303,   708,   193,   708,   197,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,   214,   308,  -296,    32,   310,
    1913,  -296,   708,  -296,   708,  -296,  1913,   708,   330,  -296,
    -296,   334,  -296,  -296,   199,  -296,  1913,   708,  1913,   708,
     208,  -296,   332,  -296,   708,   335,  -296,   708,  -296
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   129,   108,   109,   110,   112,   113,   163,   159,   160,
     161,   123,   115,   116,   117,   118,   121,   122,   119,   120,
     114,   124,   125,   133,   134,     0,     0,   162,   164,     0,
     111,   282,     0,    95,    97,   127,     0,   128,   126,    99,
     101,   103,    93,     0,   279,   281,   153,     0,     0,     0,
       0,   169,     0,   186,    91,     0,   104,   107,   168,     0,
      94,    96,   132,     0,    98,   100,   102,     1,   280,     0,
      10,   157,     0,   154,     0,     2,     7,     8,    11,    12,
       0,     0,     0,     9,     0,     0,     0,    37,    38,    39,
      40,    41,    42,    18,     3,     4,     6,    30,    43,     0,
      45,    49,    52,    55,    61,    64,    66,    68,    70,    72,
      74,    90,     0,   141,   199,   143,     0,     0,     0,     0,
     162,   187,   185,   184,     0,    92,     0,     0,   285,     0,
     284,     0,     0,     0,   167,     0,     0,   135,     0,   139,
       0,     0,     0,   149,     0,     0,    34,     0,    31,    32,
       0,     0,    43,    75,    88,     0,     0,     0,    24,    25,
       0,     0,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   166,   140,     0,     0,   201,   198,   202,
     142,   165,   158,     0,   170,   188,   183,   105,   107,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   249,   255,     0,   253,   244,   254,
     238,   239,     0,   251,   240,   241,   242,   243,     0,   226,
     106,   286,   283,   196,   181,   195,     0,   190,   191,     0,
       0,   171,    38,     0,     0,     0,   130,   136,     0,   137,
       0,   144,   148,     0,   151,   156,   150,   155,    28,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    77,     0,     0,     5,     0,    23,
      20,     0,     0,    22,    46,    47,    48,    50,    51,    53,
      54,    58,    59,    60,    56,    57,    62,    63,    65,    67,
      69,    71,    73,   220,     0,     0,     0,   204,    38,     0,
       0,   200,     0,     0,     0,   245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   275,   276,   277,
       0,   256,   250,   252,     0,     0,   228,     0,     0,     0,
     232,     0,   193,   201,   194,   180,     0,     0,   182,     0,
       0,   172,   179,     0,   178,    38,     0,   131,   146,     0,
     138,     0,   152,    29,    35,     0,    36,     0,    76,    89,
       0,    44,    21,    19,   221,   203,     0,     0,   205,   211,
       0,   210,     0,   222,     0,     0,   212,    38,     0,     0,
       0,     0,     0,   246,     0,   248,     0,     0,     0,     0,
       2,     0,     0,   274,   278,     0,   235,     0,   224,   227,
     231,   233,   189,   192,   197,   174,     0,     0,   175,   177,
     145,   147,     0,     0,    14,     0,     0,   207,     0,     0,
     209,   223,     0,     0,   213,   219,     0,   218,     0,   236,
     237,     0,   247,     0,     0,     0,     0,     0,     0,     0,
     234,   225,   230,     0,   173,   176,     0,     0,    13,     0,
       0,    26,   206,   208,   215,     0,     0,   216,     0,   261,
     265,   266,     0,     0,     0,     0,     0,     0,   229,    17,
      15,    16,    27,   214,   217,     0,     0,   259,   264,     0,
       0,   270,     0,   268,     0,   273,     0,     0,     0,   262,
     267,     0,   271,   269,     0,   260,     0,     0,     0,     0,
       0,   263,     0,   257,     0,     0,   258,     0,   272
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -296,  -296,  -296,  -296,  -296,  -296,  -296,   -35,  -296,   268,
    -296,   -43,    35,    64,    56,    69,   246,   247,   271,   272,
     270,  -296,   -24,   -94,  -296,   -85,   -31,   -46,    12,  -296,
     331,  -296,   -32,  -296,  -296,   321,  -116,    24,  -296,    95,
    -296,   358,  -129,  -296,   -45,  -296,  -296,   -30,   -54,    13,
     -91,  -126,  -296,   111,  -296,    23,  -105,  -180,  -117,    89,
    -269,  -296,   119,   -38,  -296,   -14,  -296,   -57,  -296,   242,
    -295,  -296,  -296,  -296,  -296,  -296,  -296,  -296,   418,  -296,
    -296
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    93,    94,    71,    95,    96,   423,   424,    97,   152,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   153,   154,   275,   216,   112,    31,   129,    55,
      56,    33,    34,    35,    36,   136,   137,   114,   250,   251,
      37,    72,    73,    38,    39,    40,    41,   119,    58,    59,
     123,   304,   237,   238,   239,   425,   305,   189,   336,   337,
     338,   339,   340,    42,   218,   219,   220,   221,   222,   223,
     224,   488,   225,   497,   507,   226,   227,    43,    44,    45,
     131
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     130,   155,    57,   115,   115,   134,   236,   311,   121,   188,
     230,   128,    32,   257,    46,   124,   113,   113,   115,   118,
     247,   167,   168,   486,   111,   139,   111,   142,    70,    70,
     402,   113,    62,   229,   185,   498,   143,   186,   125,   243,
      51,   115,   244,    53,    51,    60,    61,   169,   170,   253,
      51,    64,    65,    66,   113,    32,   163,   263,   254,   259,
     155,    48,   155,   276,   407,    69,   122,    49,   115,    51,
     115,   116,   117,   408,   232,   281,   282,    51,   195,    51,
     217,   113,    51,   113,   460,   231,   331,   138,   121,   487,
     115,   115,   309,   461,   198,   310,    47,   139,   139,   198,
     115,   499,   115,   113,   113,   115,   448,   449,   252,   156,
     255,   256,   362,   113,    63,   113,   341,   111,   113,   186,
      52,   284,   285,   286,   257,    53,    52,   187,   330,   247,
     344,   157,   158,   159,   229,    53,   196,   184,   453,   190,
      50,   121,   359,   316,   235,    52,   349,   248,   276,   350,
     356,   176,   177,    52,    53,    52,    70,   248,   341,   138,
     138,   186,    53,   311,    53,   360,   249,   334,   260,   335,
     261,   404,   319,   262,    54,   132,   217,   276,   133,   111,
     135,   368,   369,   373,   410,   276,   384,   141,   277,   171,
     172,   453,   144,   173,   324,   121,   150,   235,   187,   195,
     115,   160,   287,   288,   161,   342,   162,   139,     8,     9,
      10,   347,   376,   113,   348,   377,   382,   358,   151,   388,
     164,   409,   389,   178,   111,   165,   166,   291,   292,   293,
     294,   295,   181,   289,   290,   371,   396,   397,   398,   185,
     312,   120,   186,   313,   229,   296,   297,   276,   343,   276,
     363,   276,   372,   179,   443,   276,   416,    53,   444,   417,
     276,   121,   180,   445,   457,   195,   182,   458,   121,   138,
     174,   175,   276,   183,   276,   485,   229,   489,   276,   401,
     191,   492,   276,   428,   276,   494,   429,   509,   192,   134,
     452,   432,   193,   276,   433,   438,   514,   194,   278,   279,
     283,   314,   127,   405,   393,   195,   395,   126,   317,   315,
     111,   318,   320,   229,   321,   322,    98,   323,    98,   325,
     326,   327,   115,   328,   235,   345,   346,   351,   361,   252,
     421,   352,   195,   364,   440,   113,   478,   111,   365,   465,
     121,   366,   466,   452,   195,   367,   374,   375,   146,   148,
     149,   390,   378,   235,   343,   379,   468,   391,   235,   229,
     392,   472,   479,   475,   477,   481,   229,    98,   394,   399,
     403,   406,   414,   415,   418,   419,   441,   427,   370,   431,
     442,   430,   439,   434,   435,   447,   446,   450,   195,   473,
     490,   454,   455,   456,   459,   496,   501,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   462,   463,    98,
     464,   504,   115,   467,   512,   483,   484,   506,   500,   508,
     515,   510,   480,   517,   298,   113,   299,   140,   495,   469,
     470,   471,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,   300,   302,   301,   420,   197,   245,   413,   411,   426,
     491,    68,   493,     0,   333,     0,     0,     0,     0,     0,
       0,    98,     0,     0,     0,   274,     0,     0,   502,     0,
     503,     0,     0,   505,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   511,     0,   513,     0,     0,     0,     0,
     516,     0,     0,   518,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   199,   200,    98,    74,     0,     0,
     201,   202,    76,    77,    78,    79,    80,     0,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,     1,
      83,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,   203,   204,   205,     0,
     206,   207,   208,   209,   210,   211,   212,   213,    26,    84,
      27,    85,    28,    29,    30,     0,     0,    86,     0,     0,
       0,     0,    98,   126,   214,    87,    88,    89,    90,    91,
      92,     0,     0,   199,   200,     0,    74,     0,   215,   201,
     202,    76,    77,    78,    79,    80,     0,    81,    82,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,    83,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,   203,   204,   205,     0,   206,
     207,   208,   209,   210,   211,   212,   213,    26,    84,    27,
      85,    28,    29,    30,     0,     0,    86,     0,     0,     0,
       0,     0,   126,   332,    87,    88,    89,    90,    91,    92,
       0,     0,   199,   200,     0,    74,     0,   215,   201,   202,
      76,    77,    78,    79,    80,     0,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,    83,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,   422,   203,   204,   205,     0,   206,   207,
     208,   209,   210,   211,   212,   213,    27,    84,     0,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,   126,     0,    87,    88,    89,    90,    91,    92,     0,
       0,     0,     0,    74,     0,     0,   215,   400,    76,    77,
      78,    79,    80,     0,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,    83,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,    84,    27,    85,    28,    29,
      30,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,    92,     0,     0,     0,
       0,    74,     0,     0,   215,    75,    76,    77,    78,    79,
      80,     0,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    83,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     0,    85,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,    92,     0,    84,     0,    85,     0,
       0,     0,   329,     0,    86,     0,     0,     0,     0,     0,
       0,     0,    87,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    74,     0,     0,   215,    75,    76,    77,    78,
      79,    80,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,    83,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    27,    85,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,     0,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    83,
      81,    82,   240,     0,     0,     0,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,   306,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,    84,   120,
      85,     0,     0,     0,     0,     0,    86,     0,     0,     0,
     241,     0,     0,     0,    87,   242,    89,    90,    91,    92,
       0,    84,   120,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,   307,     0,     0,     0,    87,   308,    89,
      90,    91,    92,    74,     0,     0,     0,    75,    76,    77,
      78,    79,    80,     0,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    83,    81,    82,   353,
       0,     0,     0,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,   380,     0,     0,     0,     8,     9,    10,     0,
       0,     0,     0,     0,     0,    84,   120,    85,     0,     0,
       0,     0,     0,    86,     0,     0,     0,   354,     0,     0,
       0,    87,   355,    89,    90,    91,    92,     0,    84,   120,
      85,     0,     0,     0,     0,     0,    86,     0,     0,     0,
     381,     0,     0,     0,    87,    88,    89,    90,    91,    92,
      74,     0,     0,     0,    75,    76,    77,    78,    79,    80,
       0,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    83,    81,    82,   385,     0,     0,     0,
       8,     9,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,   436,
       0,     0,     0,     8,     9,    10,     0,     0,     0,     0,
       0,     0,    84,   120,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,   386,     0,     0,     0,    87,   387,
      89,    90,    91,    92,     0,    84,   120,    85,     0,     0,
       0,     0,     0,    86,     0,     0,     0,   437,     0,     0,
       0,    87,    88,    89,    90,    91,    92,    74,     0,     0,
       0,    75,    76,    77,    78,    79,    80,     0,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      83,    81,    82,     0,     0,     0,     0,     8,     9,    10,
       0,     0,     0,    74,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    83,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
     120,    85,     0,     0,     0,     0,    83,    86,     0,     0,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
      92,     0,    84,     0,    85,     0,     0,     0,     0,     0,
      86,     0,     0,   334,     0,   335,   228,   451,    87,    88,
      89,    90,    91,    92,     0,    84,     0,    85,     0,     0,
       0,     0,     0,    86,     0,     0,   334,     0,   335,   228,
     482,    87,    88,    89,    90,    91,    92,    74,     0,     0,
       0,    75,    76,    77,    78,    79,    80,     0,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      83,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    83,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,    85,     0,     0,     0,     0,    83,    86,     0,     0,
     334,     0,   335,   228,     0,    87,    88,    89,    90,    91,
      92,     0,    84,     0,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,   228,     0,    87,    88,
      89,    90,    91,    92,     0,    84,     0,    85,     0,     0,
       0,     0,     0,    86,   258,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,    92,    74,     0,     0,
       0,    75,    76,    77,    78,    79,    80,     0,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      83,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    83,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,    85,     0,     0,     0,     0,    83,    86,   280,     0,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
      92,     0,    84,     0,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,   370,     0,    87,    88,
      89,    90,    91,    92,     0,    84,     0,    85,     0,     0,
       0,     0,     0,    86,   474,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,    92,    74,     0,     0,
       0,    75,    76,    77,    78,    79,    80,     0,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      83,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    83,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,    85,     0,     0,     0,     0,    83,    86,   476,     0,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
      92,     0,    84,     0,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,    87,    88,
      89,    90,    91,    92,     0,    84,     0,    85,     0,     0,
       0,     0,     0,   145,     0,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,    92,    74,    67,     0,
       0,    75,    76,    77,    78,    79,    80,     0,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    51,     0,     0,     0,     0,     0,    84,
       0,    85,     0,     0,     0,     0,    26,   147,    27,     0,
      28,    29,    30,     0,     0,    87,    88,    89,    90,    91,
      92,     1,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,   233,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,     0,    30,     0,     0,   341,
     303,     0,   186,     0,     0,     0,     0,     1,    53,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     0,    30,     0,     0,     1,   234,     2,     3,     4,
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
     185,   303,     1,   186,     0,     0,     0,     0,     0,    53,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,    29,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,   246,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,   357,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     1,   126,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     0,    30,     0,     0,     1,   383,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,    29,
      30,     1,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   412,     0,     0,
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
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27
};

static const yytype_int16 yycheck[] =
{
      57,    86,    32,    48,    49,    59,   132,   187,    53,   114,
     127,    57,     0,   142,    11,    85,    48,    49,    63,    50,
     136,    97,    98,     3,    48,    63,    50,    85,    11,    11,
     325,    63,    11,   127,    87,     3,    94,    90,   108,   133,
      11,    86,   133,    96,    11,    33,    34,    20,    21,    85,
      11,    39,    40,    41,    86,    43,    99,   151,    94,   144,
     145,    87,   147,    85,    85,    93,    53,    87,   113,    11,
     115,    48,    49,    94,   131,   160,   161,    11,   123,    11,
     126,   113,    11,   115,    85,   131,   108,    63,   133,    69,
     135,   136,   186,    94,   124,   186,    93,   135,   136,   129,
     145,    69,   147,   135,   136,   150,   401,   402,   138,    86,
     141,    94,    94,   145,    93,   147,    87,   141,   150,    90,
      87,   164,   165,   166,   253,    96,    87,   114,   213,   245,
     235,    17,    18,    19,   228,    96,   123,   113,   407,   115,
      87,   186,    85,   200,   132,    87,   240,    89,    85,   240,
     244,    24,    25,    87,    96,    87,    11,    89,    87,   135,
     136,    90,    96,   343,    96,   108,   108,    90,   145,    92,
     147,   108,   203,   150,   108,    87,   222,    85,    90,   203,
      93,   275,   276,    91,   107,    85,   312,   107,    88,    22,
      23,   460,    87,    26,   208,   240,    87,   185,   185,   244,
     245,    87,   167,   168,    90,   235,    92,   245,    47,    48,
      49,    85,   306,   245,    88,   306,   310,   248,    87,   313,
      96,   338,   313,    95,   248,   101,   102,   171,   172,   173,
     174,   175,    27,   169,   170,   278,   321,   322,   323,    87,
      87,    80,    90,    90,   338,   176,   177,    85,   235,    85,
      88,    85,    88,   105,    88,    85,   350,    96,    88,   353,
      85,   306,   106,    88,    85,   310,    28,    88,   313,   245,
     103,   104,    85,    88,    85,    88,   370,    88,    85,   325,
      88,    88,    85,   377,    85,    88,   380,    88,    88,   343,
     407,   385,    85,    85,   385,   389,    88,    88,    88,    11,
      11,    14,   107,   334,   318,   350,   320,    93,    87,   108,
     334,    89,    89,   407,    87,    87,    48,    87,    50,    87,
      11,   108,   367,   108,   312,    88,    85,    91,    89,   359,
     361,    91,   377,    88,   391,   367,   453,   361,    88,   433,
     385,    88,   436,   460,   389,    85,    88,    88,    80,    81,
      82,    88,    91,   341,   341,    91,   441,     6,   346,   453,
      11,   446,   456,   448,   449,   459,   460,    99,    89,    71,
     108,    11,    11,    91,    91,    91,     9,    91,    93,    88,
     394,    91,   108,    91,    91,     9,    87,    91,   433,     8,
      87,    91,    91,    89,    89,    87,   490,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    91,    91,   141,
      91,   496,   457,    91,   508,    91,    91,    87,   108,    85,
      88,   506,   457,    88,   178,   457,   179,    69,   485,   443,
     444,   445,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   180,   182,   181,   359,   124,   135,   346,   339,   370,
     474,    43,   476,    -1,   222,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,    -1,    -1,   107,    -1,    -1,   492,    -1,
     494,    -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   507,    -1,   509,    -1,    -1,    -1,    -1,
     514,    -1,    -1,   517,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,   248,     7,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,   334,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,    -1,     4,     5,    -1,     7,    -1,   108,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,   361,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    66,    67,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
      -1,    -1,     4,     5,    -1,     7,    -1,   108,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    67,    66,    67,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    80,    79,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    95,    96,    97,    98,    99,   100,    -1,
      -1,    -1,    -1,     7,    -1,    -1,   108,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,     7,    -1,    -1,   108,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    40,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,    -1,    79,    -1,    81,    -1,
      -1,    -1,   108,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,     7,    -1,    -1,   108,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,     7,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    40,
      18,    19,    43,    -1,    -1,    -1,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
      -1,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,     7,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    40,    18,    19,    43,
      -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    43,    -1,    -1,    -1,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,    -1,    79,    80,
      81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
       7,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    40,    18,    19,    43,    -1,    -1,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    99,   100,    -1,    79,    80,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,     7,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
      40,    18,    19,    -1,    -1,    -1,    -1,    47,    48,    49,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    40,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    -1,    -1,    -1,    -1,    40,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,     7,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
      40,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    40,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    40,    87,    -1,    -1,
      90,    -1,    92,    93,    -1,    95,    96,    97,    98,    99,
     100,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    95,    96,
      97,    98,    99,   100,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,     7,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
      40,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    40,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    40,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    95,    96,
      97,    98,    99,   100,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,     7,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
      40,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    40,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    40,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,    99,   100,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,     7,     0,    -1,
      -1,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    11,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    78,    87,    80,    -1,
      82,    83,    84,    -1,    -1,    95,    96,    97,    98,    99,
     100,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    80,    -1,    82,    -1,    84,    -1,    -1,    87,
      88,    -1,    90,    -1,    -1,    -1,    -1,    39,    96,    41,
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
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    39,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    78,    80,    82,    83,
      84,   136,   137,   140,   141,   142,   143,   149,   152,   153,
     154,   155,   172,   186,   187,   188,    11,    93,    87,    87,
      87,    11,    87,    96,   108,   138,   139,   156,   157,   158,
     137,   137,    11,    93,   137,   137,   137,     0,   187,    93,
      11,   112,   150,   151,     7,    11,    12,    13,    14,    15,
      16,    18,    19,    40,    79,    81,    87,    95,    96,    97,
      98,    99,   100,   110,   111,   113,   114,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   135,   141,   146,   153,   164,   164,   135,   156,
      80,   153,   158,   159,    85,   108,    93,   107,   136,   137,
     176,   189,    87,    90,   157,    93,   144,   145,   146,   172,
     150,   107,    85,    94,    87,    87,   118,    87,   118,   118,
      87,    87,   118,   131,   132,   134,   164,    17,    18,    19,
      87,    90,    92,   120,    96,   101,   102,    97,    98,    20,
      21,    22,    23,    26,   103,   104,    24,    25,    95,   105,
     106,    27,    28,    88,   146,    87,    90,   158,   165,   166,
     146,    88,    88,    85,    88,   153,   158,   139,   156,     4,
       5,    10,    11,    66,    67,    68,    70,    71,    72,    73,
      74,    75,    76,    77,    94,   108,   134,   136,   173,   174,
     175,   176,   177,   178,   179,   181,   184,   185,    93,   132,
     167,   136,   176,    11,    88,   137,   160,   161,   162,   163,
      43,    91,    96,   132,   159,   144,    94,   145,    89,   108,
     147,   148,   156,    85,    94,   135,    94,   151,    88,   134,
     164,   164,   164,   132,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,   107,   133,    85,    88,    88,    11,
      88,   134,   134,    11,   120,   120,   120,   121,   121,   122,
     122,   123,   123,   123,   123,   123,   124,   124,   125,   126,
     127,   128,   129,    88,   160,   165,    43,    91,    96,   132,
     159,   166,    87,    90,    14,   108,   176,    87,    89,   135,
      89,    87,    87,    87,   174,    87,    11,   108,   108,   108,
     134,   108,    94,   178,    90,    92,   167,   168,   169,   170,
     171,    87,   156,   158,   165,    88,    85,    85,    88,   132,
     159,    91,    91,    43,    91,    96,   132,    94,   135,    85,
     108,    89,    94,    88,    88,    88,    88,    85,   132,   132,
      93,   120,    88,    91,    88,    88,   132,   159,    91,    91,
      43,    91,   132,    88,   160,    43,    91,    96,   132,   159,
      88,     6,    11,   174,    89,   174,   134,   134,   134,    71,
      11,   136,   179,   108,   108,   135,    11,    85,    94,   167,
     107,   171,    65,   162,    11,    91,   132,   132,    91,    91,
     148,   135,    67,   115,   116,   164,   168,    91,   132,   132,
      91,    88,   132,   159,    91,    91,    43,    91,   132,   108,
     176,     9,   174,    88,    88,    88,    87,     9,   179,   179,
      91,    94,   167,   169,    91,    91,    89,    85,    88,    89,
      85,    94,    91,    91,    91,   132,   132,    91,   134,   174,
     174,   174,   134,     8,    88,   134,    88,   134,   167,   132,
     116,   132,    94,    91,    91,    88,     3,    69,   180,    88,
      87,   174,    88,   174,    88,   176,    87,   182,     3,    69,
     108,   132,   174,   174,   134,   174,    87,   183,    85,    88,
     134,   174,   132,   174,    88,    88,   174,    88,   174
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
     176,   177,   177,   178,   178,   179,   179,   180,   180,   182,
     181,   181,   183,   181,   181,   181,   184,   184,   184,   184,
     184,   184,   184,   184,   185,   185,   185,   185,   185,   186,
     186,   187,   187,   188,   188,   189,   189
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
       3,     1,     2,     1,     1,     1,     2,     5,     6,     0,
       8,     5,     0,     9,     6,     5,     5,     7,     6,     7,
       6,     7,    12,     7,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     3,     1,     2
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
  case 7: /* constant: I_CONSTANT  */
#line 103 "yapl.y"
                     {int_consts++;}
#line 2270 "yapl.tab.c"
    break;

  case 167: /* declarator: pointer direct_declarator  */
#line 400 "yapl.y"
                                    {pointer_decls++;}
#line 2276 "yapl.tab.c"
    break;

  case 257: /* elif_list: ELIF '(' expression ')' statement  */
#line 563 "yapl.y"
                                            { ladder_len++; }
#line 2282 "yapl.tab.c"
    break;

  case 258: /* elif_list: elif_list ELIF '(' expression ')' statement  */
#line 564 "yapl.y"
                                                      { ladder_len++; }
#line 2288 "yapl.tab.c"
    break;

  case 259: /* $@1: %empty  */
#line 568 "yapl.y"
                                           { ladder_len++; (yyvsp[0].val) = (ladder_len-1); }
#line 2294 "yapl.tab.c"
    break;

  case 260: /* selection_statement: IF '(' expression ')' statement ELSE $@1 statement  */
#line 569 "yapl.y"
        { 
            if(ladder_len >= max) { max = ladder_len; } 
            ladder_len = (yyvsp[-2].val); 
        }
#line 2303 "yapl.tab.c"
    break;

  case 261: /* selection_statement: IF '(' expression ')' statement  */
#line 574 "yapl.y"
        { ifs_wo_else++; }
#line 2309 "yapl.tab.c"
    break;

  case 262: /* $@2: %empty  */
#line 576 "yapl.y"
        { ladder_len++; (yyvsp[0].val) = (ladder_len-1); }
#line 2315 "yapl.tab.c"
    break;

  case 263: /* selection_statement: IF '(' expression ')' statement elif_list ELSE $@2 statement  */
#line 578 "yapl.y"
        { 
            if(ladder_len >= max) { max = ladder_len; } 
            ladder_len = (yyvsp[-2].val); 
        }
#line 2324 "yapl.tab.c"
    break;

  case 264: /* selection_statement: IF '(' expression ')' statement elif_list  */
#line 583 "yapl.y"
        { /* Logic for if-elif without final else */ }
#line 2330 "yapl.tab.c"
    break;

  case 279: /* translation_unit: external_declaration  */
#line 608 "yapl.y"
                               {global_declarations++;}
#line 2336 "yapl.tab.c"
    break;

  case 280: /* translation_unit: translation_unit external_declaration  */
#line 609 "yapl.y"
                                                {global_declarations++;}
#line 2342 "yapl.tab.c"
    break;

  case 281: /* external_declaration: function_definition  */
#line 613 "yapl.y"
                              {func_definitions++;}
#line 2348 "yapl.tab.c"
    break;


#line 2352 "yapl.tab.c"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

#line 627 "yapl.y"

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

static int write_reverse_derivation_png(const char *png_path)
{
	int status;
	pid_t pid;
	char dot_path[4096];

	snprintf(dot_path, sizeof(dot_path), "%s.dot", png_path);
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
		execlp("dot", "dot", "-Tpng", dot_path, "-o", png_path, (char *)NULL);
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

void yyerror(const char *s)
{
	fflush(stdout);
	
	if(mode==-1)
		printf("***parsing terminated*** [syntax error]\n");
	else if(mode==0 || mode==1)
		printf("%s\n",s);
		
	exit(-1);
}

int main(int argc, char **argv)
{
    extern FILE *yyin;
	int i;
	const char *input_file = NULL;
	const char *png_file = NULL;

	if (argc == 2 && (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0))
	{
		printf("Usage: ./yapl <input_file> [--png out.png]\n");
		printf("\n");
		printf("Options:\n");
		printf("  -h, --help       Show this help message and exit\n");
		printf("  --png <path>     Write reverse derivation graph as PNG\n");
		return 0;
	}

	for (i = 1; i < argc; i++)
	{
		if (strcmp(argv[i], "--png") == 0)
		{
			if (i + 1 >= argc)
			{
				sprintf(buff, "***process terminated*** [input error]: missing path after --png");
				mode = 1;
				yyerror(buff);
			}
			png_file = argv[++i];
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
		sprintf(buff,"***process terminated*** [input error]: usage ./yapl <input_file> [--png out.png]");
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
		do
		{
			yydebug = 1;
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

	if (png_file != NULL)
	{
		if (write_reverse_derivation_png(png_file) == 0)
		{
			printf("Reverse derivation PNG written to %s\n", png_file);
		}
		else
		{
			printf("Failed to write PNG file: %s\n", png_file);
		}
	}

	free_derivation_steps();

	return(0);
}
