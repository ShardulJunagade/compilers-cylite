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
extern char *yytext;
int global_declarations=0;
int func_definitions=0;
int int_consts=0;
int pointer_decls=0;
int ifs_wo_else=0;
int ladder_len=0,hold=0;
int max=-1;

/* Prototypes for lexer and error handler so generated parser sees them */
int yylex(void);
void yyerror(const char *s);

#line 87 "y.tab.c"

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
    THREAD_LOCAL = 339             /* THREAD_LOCAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ELIF 258
#define PASS 259
#define TRY 260
#define EXCEPT 261
#define PRINT 262
#define RANGE 263
#define IN 264
#define FOREACH 265
#define IDENTIFIER 266
#define I_CONSTANT 267
#define F_CONSTANT 268
#define STRING_LITERAL 269
#define FUNC_NAME 270
#define SIZEOF 271
#define PTR_OP 272
#define INC_OP 273
#define DEC_OP 274
#define LEFT_OP 275
#define RIGHT_OP 276
#define LE_OP 277
#define GE_OP 278
#define EQ_OP 279
#define NE_OP 280
#define TH_OP 281
#define AND_OP 282
#define OR_OP 283
#define MUL_ASSIGN 284
#define DIV_ASSIGN 285
#define MOD_ASSIGN 286
#define ADD_ASSIGN 287
#define SUB_ASSIGN 288
#define LEFT_ASSIGN 289
#define RIGHT_ASSIGN 290
#define AND_ASSIGN 291
#define XOR_ASSIGN 292
#define OR_ASSIGN 293
#define TYPEDEF_NAME 294
#define ENUMERATION_CONSTANT 295
#define TYPEDEF 296
#define EXTERN 297
#define STATIC 298
#define AUTO 299
#define REGISTER 300
#define INLINE 301
#define CONST 302
#define RESTRICT 303
#define VOLATILE 304
#define BOOL 305
#define CHAR 306
#define SHORT 307
#define INT 308
#define LONG 309
#define SIGNED 310
#define UNSIGNED 311
#define FLOAT 312
#define DOUBLE 313
#define VOID 314
#define COMPLEX 315
#define IMAGINARY 316
#define STRUCT 317
#define UNION 318
#define ENUM 319
#define ELLIPSIS 320
#define CASE 321
#define DEFAULT 322
#define IF 323
#define ELSE 324
#define SWITCH 325
#define WHILE 326
#define DO 327
#define FOR 328
#define GOTO 329
#define CONTINUE 330
#define BREAK 331
#define RETURN 332
#define ALIGNAS 333
#define ALIGNOF 334
#define ATOMIC 335
#define GENERIC 336
#define NORETURN 337
#define STATIC_ASSERT 338
#define THREAD_LOCAL 339

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 41 "yapl.y"

	int val;
	struct symtab *symp;

#line 313 "y.tab.c"

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
  YYSYMBOL_85_ = 85,                       /* '('  */
  YYSYMBOL_86_ = 86,                       /* ')'  */
  YYSYMBOL_87_ = 87,                       /* ','  */
  YYSYMBOL_88_ = 88,                       /* ':'  */
  YYSYMBOL_89_ = 89,                       /* '['  */
  YYSYMBOL_90_ = 90,                       /* ']'  */
  YYSYMBOL_91_ = 91,                       /* '.'  */
  YYSYMBOL_92_ = 92,                       /* '{'  */
  YYSYMBOL_93_ = 93,                       /* '}'  */
  YYSYMBOL_94_ = 94,                       /* '&'  */
  YYSYMBOL_95_ = 95,                       /* '*'  */
  YYSYMBOL_96_ = 96,                       /* '+'  */
  YYSYMBOL_97_ = 97,                       /* '-'  */
  YYSYMBOL_98_ = 98,                       /* '~'  */
  YYSYMBOL_99_ = 99,                       /* '!'  */
  YYSYMBOL_100_ = 100,                     /* '/'  */
  YYSYMBOL_101_ = 101,                     /* '%'  */
  YYSYMBOL_102_ = 102,                     /* '<'  */
  YYSYMBOL_103_ = 103,                     /* '>'  */
  YYSYMBOL_104_ = 104,                     /* '^'  */
  YYSYMBOL_105_ = 105,                     /* '|'  */
  YYSYMBOL_106_ = 106,                     /* '='  */
  YYSYMBOL_107_ = 107,                     /* ';'  */
  YYSYMBOL_YYACCEPT = 108,                 /* $accept  */
  YYSYMBOL_primary_expression = 109,       /* primary_expression  */
  YYSYMBOL_constant = 110,                 /* constant  */
  YYSYMBOL_enumeration_constant = 111,     /* enumeration_constant  */
  YYSYMBOL_string = 112,                   /* string  */
  YYSYMBOL_generic_selection = 113,        /* generic_selection  */
  YYSYMBOL_generic_assoc_list = 114,       /* generic_assoc_list  */
  YYSYMBOL_generic_association = 115,      /* generic_association  */
  YYSYMBOL_postfix_expression = 116,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 117, /* argument_expression_list  */
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
  YYSYMBOL_statement = 173,                /* statement  */
  YYSYMBOL_labeled_statement = 174,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 175,       /* compound_statement  */
  YYSYMBOL_block_item_list = 176,          /* block_item_list  */
  YYSYMBOL_block_item = 177,               /* block_item  */
  YYSYMBOL_expression_statement = 178,     /* expression_statement  */
  YYSYMBOL_matched_statement = 179,        /* matched_statement  */
  YYSYMBOL_unmatched_statement = 180,      /* unmatched_statement  */
  YYSYMBOL_iteration_statement = 181,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 182,           /* jump_statement  */
  YYSYMBOL_translation_unit = 183,         /* translation_unit  */
  YYSYMBOL_external_declaration = 184,     /* external_declaration  */
  YYSYMBOL_function_definition = 185,      /* function_definition  */
  YYSYMBOL_declaration_list = 186          /* declaration_list  */
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
#define YYLAST   2627

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  486

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   339


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
       2,     2,     2,    99,     2,     2,     2,   101,    94,     2,
      85,    86,    95,    96,    87,    97,    91,   100,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    88,   107,
     102,   106,   103,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    89,     2,    90,   104,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    92,   105,    93,    98,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    49,    49,    50,    51,    52,    53,    57,    58,    59,
      63,    67,    68,    72,    76,    77,    81,    82,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    99,   100,
     104,   105,   106,   107,   108,   109,   110,   114,   115,   116,
     117,   118,   119,   123,   124,   128,   129,   130,   131,   135,
     136,   137,   141,   142,   143,   147,   148,   149,   150,   151,
     152,   156,   157,   158,   162,   163,   167,   168,   172,   173,
     177,   178,   182,   183,   187,   191,   192,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   210,   211,
     215,   219,   220,   221,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   238,   239,   243,   244,   248,   249,
     250,   251,   252,   253,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     276,   277,   278,   282,   283,   287,   288,   292,   293,   294,
     298,   299,   300,   301,   305,   306,   310,   311,   312,   316,
     317,   318,   319,   320,   324,   325,   329,   330,   334,   338,
     339,   340,   344,   345,   349,   350,   354,   355,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   376,   377,   378,   379,   383,   384,   389,   390,
     394,   395,   399,   400,   401,   405,   406,   410,   411,   415,
     416,   417,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   445,   446,   447,   451,   452,   453,   454,
     458,   462,   463,   467,   468,   472,   477,   478,   482,   483,
     484,   488,   489,   493,   494,   498,   499,   503,   504,   509,
     510,   511,   512,   513,   514,   515,   520,   521,   525,   526,
     527,   528,   529,   530,   534,   535,   536,   537,   538,   542,
     543,   547,   548,   552,   553,   557,   558
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
  "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "'('", "')'", "','", "':'",
  "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'='", "';'", "$accept",
  "primary_expression", "constant", "enumeration_constant", "string",
  "generic_selection", "generic_assoc_list", "generic_association",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "matched_statement", "unmatched_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-366)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2348,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,    16,   -53,   -39,  -366,   -28,
    -366,  -366,    19,  2438,  2438,  -366,    25,  -366,  -366,  2438,
    2438,  2438,  -366,  1935,  -366,  -366,    -5,    57,   928,  2547,
    1758,  -366,    38,   -14,  -366,   -65,  -366,  2035,   -18,    36,
    -366,  -366,     3,  2476,  -366,  -366,  -366,  -366,  -366,    57,
    -366,    23,    89,  -366,  -366,  -366,  -366,  -366,  -366,  1781,
    1804,  1804,  -366,    47,    66,   928,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,   125,  -366,  1758,  -366,
     101,   137,   221,   141,   225,    77,    53,    82,   146,   134,
    -366,   108,  2547,    94,  2547,   117,   127,   131,   159,  -366,
    -366,   -14,    38,  -366,   503,  1511,  -366,    19,  -366,  2250,
    1989,  1017,   -18,  2476,  2150,  -366,    51,  -366,    91,  1758,
      13,  -366,   928,  -366,   928,  -366,  -366,  2547,  1758,   376,
    -366,  -366,   166,   161,   209,  -366,  -366,  1534,  1758,   212,
    -366,  1758,  1758,  1758,  1758,  1758,  1758,  1758,  1758,  1758,
    1758,  1758,  1758,  1758,  1758,  1758,  1758,  1758,  1758,  1758,
    -366,  -366,  2101,  1040,   123,  -366,   136,  -366,  -366,  -366,
     218,  -366,  -366,  -366,  -366,   120,   168,  1758,   177,   169,
     178,   189,   413,   192,   270,   202,   204,   815,  -366,  -366,
     -59,  -366,  -366,  -366,  -366,   612,  -366,  -366,  -366,  -366,
    -366,  -366,  1399,  -366,  -366,  -366,  -366,  -366,  -366,    71,
     199,   223,  -366,   173,  1488,  -366,   222,   228,  1129,  2197,
    -366,  -366,  1758,  -366,   -49,  -366,   233,    20,  -366,  -366,
    -366,  -366,   213,   236,   237,   239,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  1758,  -366,  1758,
    1623,  -366,  -366,   175,  -366,   -34,  -366,  -366,  -366,  -366,
     101,   101,   137,   137,   221,   221,   221,   221,   221,   141,
     141,   225,    77,    53,    82,   146,  -366,   242,   243,  1488,
    -366,   240,   244,  1152,   136,  2302,  1241,   246,   413,   245,
     413,  1758,  1758,  1758,   264,   702,   229,  -366,  -366,  -366,
     -47,  -366,  -366,  -366,  1758,   327,  -366,   105,  1511,    64,
    -366,  1870,  -366,    63,  -366,  -366,  2394,  -366,   328,   251,
    1488,  -366,  -366,  1758,  -366,   253,   254,  -366,  -366,    52,
    -366,  1758,  -366,   260,   260,  -366,  2513,  -366,  -366,  1399,
    -366,  -366,  1758,  -366,  -366,  -366,   255,  1488,  -366,  -366,
    1758,  -366,   263,  -366,   268,  1488,  -366,   265,   267,  1264,
     256,  -366,   413,  -366,   181,   183,   185,   273,   838,   838,
    -366,  -366,   271,  -366,  1287,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,   272,   275,  -366,  -366,  -366,  -366,   278,
     193,  -366,   280,   118,  -366,  -366,   279,   281,  -366,  -366,
     284,  1488,  -366,  -366,  1758,  -366,   285,  -366,  -366,   413,
     792,   413,  1758,  1646,  1669,  -366,  -366,  -366,  1511,  -366,
    -366,  1758,  -366,  2513,  1758,  1376,  -366,  -366,  -366,  -366,
     290,   291,  -366,  -366,   301,   297,  -366,  -366,   197,   413,
     203,   413,   208,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
     413,  1758,   276,  -366,   413,  -366,   413,  -366,  -366,   211,
    -366,  -366,  -366,   792,   315,   792
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   129,   108,   109,   110,   112,   113,   162,   159,   160,
     161,   123,   115,   116,   117,   118,   121,   122,   119,   120,
     114,   124,   125,   133,   134,     0,     0,     0,   163,     0,
     111,   272,     0,    95,    97,   127,     0,   128,   126,    99,
     101,   103,    93,     0,   269,   271,   153,     0,     0,     0,
       0,   168,     0,   185,    91,     0,   104,   107,   167,     0,
      94,    96,   132,     0,    98,   100,   102,     1,   270,     0,
      10,   157,     0,   154,     2,     7,     8,    11,    12,     0,
       0,     0,     9,     0,     0,     0,    37,    38,    39,    40,
      41,    42,    18,     3,     4,     6,    30,    43,     0,    45,
      49,    52,    55,    61,    64,    66,    68,    70,    72,    74,
      90,     0,   141,   198,   143,     0,     0,     0,     0,   186,
     184,   183,     0,    92,     0,     0,   275,     0,   274,     0,
       0,     0,   166,     0,     0,   135,     0,   139,     0,     0,
       0,   149,     0,    34,     0,    31,    32,     0,     0,    43,
      75,    88,     0,     0,     0,    24,    25,     0,     0,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     165,   140,     0,     0,   200,   197,   201,   142,   164,   158,
       0,   169,   187,   182,   105,   107,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   241,   247,
       0,   245,   246,   249,   250,     0,   243,   251,   237,   236,
     252,   253,     0,   225,   106,   276,   273,   195,   180,   194,
       0,   189,   190,     0,     0,   170,    38,     0,     0,     0,
     130,   136,     0,   137,     0,   144,   148,     0,   151,   156,
     150,   155,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    77,     0,     5,     0,
       0,    23,    20,     0,    28,     0,    22,    46,    47,    48,
      50,    51,    53,    54,    58,    59,    60,    56,    57,    62,
      63,    65,    67,    69,    71,    73,   219,     0,     0,     0,
     203,    38,     0,     0,   199,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   265,   266,   267,
       0,   248,   242,   244,     0,     0,   227,     0,     0,     0,
     231,     0,   192,   200,   193,   179,     0,   181,     0,     0,
       0,   171,   178,     0,   177,    38,     0,   131,   146,     0,
     138,     0,   152,    35,     0,    36,     0,    76,    89,     0,
      44,    21,     0,    19,   220,   202,     0,     0,   204,   210,
       0,   209,     0,   221,     0,     0,   211,    38,     0,     0,
       0,   238,     0,   240,     0,     0,     0,     0,     0,     0,
     264,   268,     0,   234,     0,   223,   226,   230,   232,   188,
     191,   196,   173,     0,     0,   174,   176,   145,   147,     0,
       0,    14,     0,     0,    29,   206,     0,     0,   208,   222,
       0,     0,   212,   218,     0,   217,     0,   235,   239,     0,
       0,     0,     0,     0,     0,   233,   224,   229,     0,   172,
     175,     0,    13,     0,     0,     0,    26,   205,   207,   214,
       0,     0,   215,   256,   237,     0,   254,   258,     0,     0,
       0,     0,     0,   228,    17,    15,    16,    27,   213,   216,
       0,     0,     0,   262,     0,   260,     0,   255,   257,     0,
     259,   263,   261,     0,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -366,  -366,  -366,  -366,  -366,  -366,  -366,   -58,  -366,  -366,
     298,  -366,   -43,   140,   135,    68,   133,   214,   184,   210,
     215,   207,  -366,   -38,    -3,  -366,   -83,   -36,   -40,    11,
    -366,   277,  -366,   -42,  -366,  -366,   257,  -108,   -24,  -366,
      43,  -366,   325,  -117,  -366,   -48,  -366,  -366,   -29,   -51,
     -44,  -118,  -110,  -366,    61,  -366,    30,   -95,  -168,  -121,
      39,  -365,  -366,    73,   -22,  -183,  -366,   -32,  -366,   188,
    -239,  -261,   -70,  -366,  -366,  -366,   361,  -366,  -366
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    92,    93,    71,    94,    95,   410,   411,    96,   273,
     149,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   150,   151,   267,   210,   111,    31,   127,
      55,    56,    33,    34,    35,    36,   134,   135,   113,   244,
     245,    37,    72,    73,    38,    39,    40,    41,   118,    58,
      59,   121,   297,   231,   232,   233,   412,   298,   186,   326,
     327,   328,   329,   330,    42,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,    43,    44,    45,   129
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     114,   114,   152,    57,   224,   119,   112,   112,   132,   120,
     110,    32,   110,   238,   117,   114,   304,   126,   185,   314,
     230,   112,   122,   251,    70,   128,   241,    46,   269,   438,
      51,    70,    48,     8,     9,    10,    62,   114,   349,   136,
     269,   137,   123,   112,    60,    61,    49,    51,   321,    51,
      64,    65,    66,   269,    32,   160,   363,    50,   350,   152,
     391,   152,    51,    51,   114,   303,   114,   130,    70,   184,
     112,   131,   112,   192,    51,   275,   389,   193,   115,   116,
     438,    53,    51,   119,   211,   114,   114,    69,   181,   225,
     187,   112,   112,   195,   114,   133,   114,   226,   195,   114,
     112,   110,   112,   249,    52,   112,   250,   246,    47,   136,
     136,   137,   137,   352,    53,   153,   340,    63,   277,   278,
     279,    52,   223,    52,   320,   381,    54,   383,   237,   139,
     251,   241,   147,    53,   334,   119,    52,    52,   184,   242,
     242,   229,   154,   155,   156,   255,    53,    53,   331,   433,
     434,   148,   183,   324,   274,   325,   331,   176,   243,   110,
     183,   309,   179,   168,   169,   304,    53,   170,   454,   456,
     397,   175,   252,   178,   253,   211,   140,   254,   247,   182,
     302,   367,   141,   183,   248,   333,   119,   177,   379,    53,
     192,   114,   394,   229,   180,   374,   161,   112,   395,   428,
     332,   162,   163,   188,   110,   445,   348,   396,   182,   477,
     157,   446,   183,   189,   158,   136,   159,   137,   190,   223,
     271,   305,   484,   276,   477,   306,   125,   360,   384,   385,
     386,   339,   307,   164,   165,   346,   284,   285,   286,   287,
     288,   166,   167,   171,   172,   191,   453,   270,   457,   173,
     174,   119,   268,   269,   311,   192,   308,   421,   119,   337,
     338,   361,   362,   312,   357,   310,   358,   429,   269,   430,
     269,   431,   269,   437,   313,   388,   473,   315,   475,   442,
     443,   316,   132,   472,   269,   335,   110,   333,   392,   474,
     269,   481,   192,   482,   476,   269,   366,   483,   269,   353,
     372,   282,   283,   378,   280,   281,   289,   290,   114,   317,
     336,   318,   341,   110,   112,   408,   229,   463,   342,   192,
     246,   351,   354,   355,   437,   223,   356,   119,   364,   365,
     368,   192,   380,   382,   369,   387,   390,   403,   393,   401,
     404,   402,   229,   405,   406,   415,    97,   229,    97,   458,
     460,   462,   359,   418,   419,   422,   223,   423,   432,   414,
     292,   435,   439,   427,   416,   440,   441,   417,   444,   447,
     470,   448,   420,   192,   449,   452,   426,   143,   145,   146,
     468,   469,   471,   480,   485,   465,   295,   293,   479,   291,
     239,   223,   407,   294,   138,   114,    97,   400,   413,   194,
     478,   112,   398,   323,    68,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,     0,     0,     0,   450,     0,
       0,   451,     0,     0,   196,    75,    76,    77,    78,    79,
       0,    80,    81,     0,     0,   223,     0,    97,   464,     0,
       0,   466,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,     0,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,     0,   197,
     198,   199,   266,   200,   201,   202,   203,   204,   205,   206,
     207,     0,    83,     0,    84,    97,     0,     0,    85,     0,
       0,     0,     0,     0,     0,   124,     0,    86,    87,    88,
      89,    90,    91,     0,   196,    75,    76,    77,    78,    79,
     209,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     1,    82,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    97,   197,
     198,   199,     0,   200,   201,   202,   203,   204,   205,   206,
     207,    26,    83,    27,    84,    28,    29,    30,    85,     0,
       0,     0,     0,     0,     0,   124,   208,    86,    87,    88,
      89,    90,    91,     0,     0,     0,     0,     0,     0,     0,
     209,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,   196,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     1,    82,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,   197,   198,
     199,     0,   200,   201,   202,   203,   204,   205,   206,   207,
      26,    83,    27,    84,    28,    29,    30,    85,     0,     0,
       0,     0,     0,     0,   124,   322,    86,    87,    88,    89,
      90,    91,     0,    74,    75,    76,    77,    78,    79,   209,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,    82,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,    83,    27,    84,    28,    29,    30,    85,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,     0,   196,    75,    76,    77,    78,    79,   209,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    82,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    82,    80,    81,   197,   198,
     455,     0,   200,   201,   202,   203,   204,   205,   206,   207,
       0,    83,     0,    84,     0,     0,     0,    85,    82,     0,
       0,     0,     0,     0,   124,     0,    86,    87,    88,    89,
      90,    91,     0,     0,    83,     0,    84,     0,     0,   209,
      85,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    90,    91,     0,     0,    83,     0,    84,
       0,     0,   319,    85,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,     0,    74,
      75,    76,    77,    78,    79,   209,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,    82,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    27,    84,
       0,     0,     0,    85,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    82,    80,    81,
     234,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      82,     0,     0,   299,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,    83,     0,    84,     0,
       0,     0,    85,     0,     0,     0,     0,   235,     0,     0,
       0,    86,   236,    88,    89,    90,    91,     0,     0,    83,
       0,    84,     0,     0,     0,    85,     0,     0,     0,     0,
     300,     0,     0,     0,    86,   301,    88,    89,    90,    91,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    82,
      80,    81,   343,     0,     0,     0,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    82,     0,     0,   370,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,    83,     0,
      84,     0,     0,     0,    85,     0,     0,     0,     0,   344,
       0,     0,     0,    86,   345,    88,    89,    90,    91,     0,
       0,    83,     0,    84,     0,     0,     0,    85,     0,     0,
       0,     0,   371,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    82,    80,    81,   375,     0,     0,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    82,    80,    81,   424,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
      83,     0,    84,     0,     0,     0,    85,    82,     0,     0,
       0,   376,     0,     0,     0,    86,   377,    88,    89,    90,
      91,     0,     0,    83,     0,    84,     0,     0,     0,    85,
       0,     0,     0,     0,   425,     0,     0,     0,    86,    87,
      88,    89,    90,    91,     0,     0,    83,     0,    84,     0,
       0,     0,    85,     0,     0,     0,   324,     0,   325,   222,
     436,    86,    87,    88,    89,    90,    91,    74,    75,    76,
      77,    78,    79,     0,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    82,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,    84,     0,     0,
       0,    85,     0,     0,     0,   324,     0,   325,   222,   467,
      86,    87,    88,    89,    90,    91,     0,     0,    83,     0,
      84,     0,     0,     0,    85,     0,     0,     0,   324,     0,
     325,   222,     0,    86,    87,    88,    89,    90,    91,    74,
      75,    76,    77,    78,    79,     0,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    82,    80,
      81,     0,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    82,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,    84,
       0,     0,     0,    85,    82,     0,     0,     0,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,     0,     0,
      83,     0,    84,     0,     0,     0,    85,     0,     0,     0,
       0,     0,     0,   222,     0,    86,    87,    88,    89,    90,
      91,     0,     0,    83,     0,    84,     0,     0,     0,    85,
     272,     0,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    91,    74,    75,    76,    77,    78,    79,
       0,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    82,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    82,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,    84,     0,     0,     0,    85,    82,
       0,     0,     0,     0,     0,   359,     0,    86,    87,    88,
      89,    90,    91,     0,     0,    83,     0,    84,     0,     0,
       0,    85,   459,     0,     0,     0,     0,     0,     0,     0,
      86,    87,    88,    89,    90,    91,     0,     0,    83,     0,
      84,     0,     0,     0,    85,   461,     0,     0,     0,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,    74,
      75,    76,    77,    78,    79,     0,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    82,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    82,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,    84,
       0,     0,     0,    85,    82,     0,     0,     0,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,     0,     0,
      83,     0,    84,     0,     0,     0,   142,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,    88,    89,    90,
      91,    51,     0,    83,     0,    84,     0,     0,     0,   144,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    91,     0,     0,     0,     0,     0,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    67,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,   331,   296,     0,     0,   183,
       0,     0,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     227,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,     0,    30,     1,   228,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   125,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,     0,    30,   182,   296,     0,     1,
     183,     0,     0,     0,     0,     0,    53,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,     0,    29,     0,     0,     1,     0,     0,     0,
       0,     0,     0,   240,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     1,
     347,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,    29,    30,     0,     0,     0,     0,     0,
       0,     1,   124,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,     0,    30,     1,   373,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,    29,    30,     1,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   399,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,     1,    30,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,    26,     0,    27,     0,
      28,     0,    30,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,    27,     0,     0,    29,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
     409,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,    27,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      48,    49,    85,    32,   125,    53,    48,    49,    59,    53,
      48,     0,    50,   131,    50,    63,   184,    57,   113,   202,
     130,    63,    87,   140,    11,    57,   134,    11,    87,   394,
      11,    11,    85,    47,    48,    49,    11,    85,    87,    63,
      87,    63,   107,    85,    33,    34,    85,    11,   107,    11,
      39,    40,    41,    87,    43,    98,    90,    85,   107,   142,
     107,   144,    11,    11,   112,   183,   114,    85,    11,   113,
     112,    89,   114,   121,    11,   158,   315,   121,    48,    49,
     445,    95,    11,   131,   124,   133,   134,    92,   112,   129,
     114,   133,   134,   122,   142,    92,   144,   129,   127,   147,
     142,   139,   144,   139,    85,   147,    93,   136,    92,   133,
     134,   133,   134,    93,    95,    85,   234,    92,   161,   162,
     163,    85,   125,    85,   207,   308,   107,   310,   131,   106,
     247,   239,    85,    95,   229,   183,    85,    85,   182,    88,
      88,   130,    17,    18,    19,   148,    95,    95,    85,   388,
     389,    85,    89,    89,   157,    91,    85,   104,   107,   197,
      89,   197,    28,    22,    23,   333,    95,    26,   429,   430,
     106,    94,   142,    27,   144,   215,    87,   147,    87,    85,
     183,   299,    93,    89,    93,   229,   234,   105,   306,    95,
     238,   239,    87,   182,    86,   305,    95,   239,    93,   382,
     229,   100,   101,    86,   242,    87,   242,   328,    85,   470,
      85,    93,    89,    86,    89,   239,    91,   239,    87,   222,
      11,    85,   483,    11,   485,    89,   106,   270,   311,   312,
     313,   234,    14,    96,    97,   238,   168,   169,   170,   171,
     172,    20,    21,   102,   103,    86,   429,    86,   431,    24,
      25,   299,    86,    87,    85,   303,    88,   375,   306,    86,
      87,    86,    87,    85,   267,    88,   269,    86,    87,    86,
      87,    86,    87,   394,    85,   315,   459,    85,   461,    86,
      87,    11,   333,    86,    87,    86,   324,   331,   324,    86,
      87,   474,   340,   476,    86,    87,   299,    86,    87,    86,
     303,   166,   167,   306,   164,   165,   173,   174,   356,   107,
      87,   107,    90,   351,   356,   351,   305,   438,    90,   367,
     349,    88,    86,    86,   445,   328,    87,   375,    86,    86,
      90,   379,    86,    88,    90,    71,   107,   340,    11,    11,
     343,    90,   331,    90,    90,    90,    48,   336,    50,   432,
     433,   434,    92,    90,    86,    90,   359,    90,    85,   362,
     176,    90,    90,   107,   367,    90,    88,   370,    88,    90,
      69,    90,   375,   421,    90,    90,   379,    79,    80,    81,
      90,    90,    85,   107,    69,   443,   179,   177,   471,   175,
     133,   394,   349,   178,    69,   443,    98,   336,   359,   122,
     470,   443,   329,   215,    43,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,   421,    -1,
      -1,   424,    -1,    -1,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    -1,    -1,   438,    -1,   139,   441,    -1,
      -1,   444,   445,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,    -1,    66,
      67,    68,   106,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    79,    -1,    81,   197,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    94,    95,    96,
      97,    98,    99,    -1,    11,    12,    13,    14,    15,    16,
     107,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,   270,    66,
      67,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   324,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,    -1,    11,    12,    13,    14,    15,    16,   107,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    99,    -1,    11,    12,    13,    14,    15,    16,   107,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    40,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,    15,    16,    40,    18,    19,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    85,    40,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    94,    95,    96,    97,
      98,    99,    -1,    -1,    79,    -1,    81,    -1,    -1,   107,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,    -1,    -1,    79,    -1,    81,
      -1,    -1,   107,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,    -1,    11,
      12,    13,    14,    15,    16,   107,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    40,    18,    19,
      43,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,    -1,    -1,    79,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    -1,    94,    95,    96,    97,    98,    99,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    40,
      18,    19,    43,    -1,    -1,    -1,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,    -1,
      -1,    79,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    99,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    40,    18,    19,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    40,    18,    19,    43,    -1,    -1,
      -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    40,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,    -1,    -1,    79,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    99,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    89,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    40,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    89,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,    -1,    79,    -1,
      81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,    -1,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    40,    18,
      19,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    40,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    94,    95,    96,    97,    98,
      99,    -1,    -1,    79,    -1,    81,    -1,    -1,    -1,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    99,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    40,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    40,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    -1,    -1,    -1,    85,    40,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    94,    95,    96,
      97,    98,    99,    -1,    -1,    79,    -1,    81,    -1,    -1,
      -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    99,    -1,    -1,    79,    -1,
      81,    -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    40,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    40,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,    11,    -1,    79,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      80,    -1,    82,    -1,    84,    85,    86,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    80,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,
      -1,    82,    -1,    84,    39,    86,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    80,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,   106,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    80,    -1,    82,    -1,    84,    85,    86,    -1,    39,
      89,    -1,    -1,    -1,    -1,    -1,    95,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      93,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      80,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    92,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    80,    -1,    82,    -1,    84,    39,    86,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,
      82,    83,    84,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    80,    -1,    82,    39,    84,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    78,    -1,    80,    -1,
      82,    -1,    84,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    80,    -1,    -1,    83,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    39,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    78,    80,    82,    83,
      84,   136,   137,   140,   141,   142,   143,   149,   152,   153,
     154,   155,   172,   183,   184,   185,    11,    92,    85,    85,
      85,    11,    85,    95,   107,   138,   139,   156,   157,   158,
     137,   137,    11,    92,   137,   137,   137,     0,   184,    92,
      11,   111,   150,   151,    11,    12,    13,    14,    15,    16,
      18,    19,    40,    79,    81,    85,    94,    95,    96,    97,
      98,    99,   109,   110,   112,   113,   116,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   135,   141,   146,   153,   164,   164,   135,   156,   153,
     158,   159,    87,   107,    92,   106,   136,   137,   175,   186,
      85,    89,   157,    92,   144,   145,   146,   172,   150,   106,
      87,    93,    85,   118,    85,   118,   118,    85,    85,   118,
     131,   132,   134,   164,    17,    18,    19,    85,    89,    91,
     120,    95,   100,   101,    96,    97,    20,    21,    22,    23,
      26,   102,   103,    24,    25,    94,   104,   105,    27,    28,
      86,   146,    85,    89,   158,   165,   166,   146,    86,    86,
      87,    86,   153,   158,   139,   156,    11,    66,    67,    68,
      70,    71,    72,    73,    74,    75,    76,    77,    93,   107,
     134,   136,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,    92,   132,   167,   136,   175,    11,    86,   137,
     160,   161,   162,   163,    43,    90,    95,   132,   159,   144,
      93,   145,    88,   107,   147,   148,   156,    87,    93,   135,
      93,   151,   164,   164,   164,   132,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   106,   133,    86,    87,
      86,    11,    86,   117,   132,   134,    11,   120,   120,   120,
     121,   121,   122,   122,   123,   123,   123,   123,   123,   124,
     124,   125,   126,   127,   128,   129,    86,   160,   165,    43,
      90,    95,   132,   159,   166,    85,    89,    14,    88,   135,
      88,    85,    85,    85,   173,    85,    11,   107,   107,   107,
     134,   107,    93,   177,    89,    91,   167,   168,   169,   170,
     171,    85,   156,   158,   165,    86,    87,    86,    87,   132,
     159,    90,    90,    43,    90,    95,   132,    93,   135,    87,
     107,    88,    93,    86,    86,    86,    87,   132,   132,    92,
     120,    86,    87,    90,    86,    86,   132,   159,    90,    90,
      43,    90,   132,    86,   160,    43,    90,    95,   132,   159,
      86,   173,    88,   173,   134,   134,   134,    71,   136,   178,
     107,   107,   135,    11,    87,    93,   167,   106,   171,    65,
     162,    11,    90,   132,   132,    90,    90,   148,   135,    67,
     114,   115,   164,   168,   132,    90,   132,   132,    90,    86,
     132,   159,    90,    90,    43,    90,   132,   107,   173,    86,
      86,    86,    85,   178,   178,    90,    93,   167,   169,    90,
      90,    88,    86,    87,    88,    87,    93,    90,    90,    90,
     132,   132,    90,   173,   179,    68,   179,   173,   134,    86,
     134,    86,   134,   167,   132,   115,   132,    93,    90,    90,
      69,    85,    86,   173,    86,   173,    86,   179,   180,   134,
     107,   173,   173,    86,   179,    69
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   109,   109,   109,   110,   110,   110,
     111,   112,   112,   113,   114,   114,   115,   115,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   117,   117,
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
     153,   153,   154,   154,   155,   155,   156,   156,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   158,   158,   158,   158,   159,   159,   160,   160,
     161,   161,   162,   162,   162,   163,   163,   164,   164,   165,
     165,   165,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   167,   167,   167,   168,   168,   168,   168,
     169,   170,   170,   171,   171,   172,   173,   173,   174,   174,
     174,   175,   175,   176,   176,   177,   177,   178,   178,   179,
     179,   179,   179,   179,   179,   179,   180,   180,   181,   181,
     181,   181,   181,   181,   182,   182,   182,   182,   182,   183,
     183,   184,   184,   185,   185,   186,   186
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
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
       1,     1,     1,     1,     4,     4,     2,     1,     1,     3,
       3,     4,     6,     5,     5,     6,     5,     4,     4,     4,
       3,     4,     3,     2,     2,     1,     1,     2,     3,     1,
       1,     3,     2,     2,     1,     1,     3,     2,     1,     2,
       1,     1,     3,     2,     3,     5,     4,     5,     4,     3,
       3,     3,     4,     6,     5,     5,     6,     4,     4,     2,
       3,     3,     4,     3,     4,     1,     2,     1,     4,     3,
       2,     1,     2,     3,     2,     7,     1,     1,     3,     4,
       3,     2,     3,     1,     2,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     5,     7,     5,     7,     5,     7,
       6,     7,     6,     7,     3,     2,     2,     2,     3,     1,
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
#line 57 "yapl.y"
                     {int_consts++;}
#line 2275 "y.tab.c"
    break;

  case 166: /* declarator: pointer direct_declarator  */
#line 354 "yapl.y"
                                    {pointer_decls++;}
#line 2281 "y.tab.c"
    break;

  case 255: /* matched_statement: IF '(' expression ')' matched_statement ELSE matched_statement  */
#line 516 "yapl.y"
                { ladder_len++; if(ladder_len>max) max=ladder_len; ladder_len--; }
#line 2287 "y.tab.c"
    break;

  case 256: /* unmatched_statement: IF '(' expression ')' statement  */
#line 520 "yapl.y"
                                          { ifs_wo_else++; }
#line 2293 "y.tab.c"
    break;

  case 269: /* translation_unit: external_declaration  */
#line 542 "yapl.y"
                               {global_declarations++;}
#line 2299 "y.tab.c"
    break;

  case 270: /* translation_unit: translation_unit external_declaration  */
#line 543 "yapl.y"
                                                {global_declarations++;}
#line 2305 "y.tab.c"
    break;

  case 271: /* external_declaration: function_definition  */
#line 547 "yapl.y"
                              {func_definitions++;}
#line 2311 "y.tab.c"
    break;


#line 2315 "y.tab.c"

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

#line 561 "yapl.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char buff[2048];

int yylex(void);
int mode=-1;

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

	return(0);
}
