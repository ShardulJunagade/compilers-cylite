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
int yylex(void);
void yyerror(const char *s);
int global_declarations=0;
int func_definitions=0;
int int_consts=0;
int pointer_decls=0;
int ifs_wo_else=0;
int ladder_len=0,hold=0;
int max=-1;

#line 85 "yapl.tab.c"

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

#include "yapl.tab.h"
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
  YYSYMBOL_argument_expression_list = 118, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 119,         /* unary_expression  */
  YYSYMBOL_unary_operator = 120,           /* unary_operator  */
  YYSYMBOL_cast_expression = 121,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 122, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 123,      /* additive_expression  */
  YYSYMBOL_shift_expression = 124,         /* shift_expression  */
  YYSYMBOL_relational_expression = 125,    /* relational_expression  */
  YYSYMBOL_equality_expression = 126,      /* equality_expression  */
  YYSYMBOL_and_expression = 127,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 128,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 129,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 130,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 131,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 132,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 133,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 134,      /* assignment_operator  */
  YYSYMBOL_expression = 135,               /* expression  */
  YYSYMBOL_constant_expression = 136,      /* constant_expression  */
  YYSYMBOL_declaration = 137,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 138,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 139,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 140,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 141,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 142,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 143, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 144,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 145,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 146,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 147, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 148,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 149,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 150,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 151,          /* enumerator_list  */
  YYSYMBOL_enumerator = 152,               /* enumerator  */
  YYSYMBOL_atomic_type_specifier = 153,    /* atomic_type_specifier  */
  YYSYMBOL_type_qualifier = 154,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 155,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 156,      /* alignment_specifier  */
  YYSYMBOL_declarator = 157,               /* declarator  */
  YYSYMBOL_158_1 = 158,                    /* $@1  */
  YYSYMBOL_direct_declarator = 159,        /* direct_declarator  */
  YYSYMBOL_pointer = 160,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 161,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 162,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 163,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 164,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 165,          /* identifier_list  */
  YYSYMBOL_type_name = 166,                /* type_name  */
  YYSYMBOL_abstract_declarator = 167,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 168, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 169,              /* initializer  */
  YYSYMBOL_initializer_list = 170,         /* initializer_list  */
  YYSYMBOL_designation = 171,              /* designation  */
  YYSYMBOL_designator_list = 172,          /* designator_list  */
  YYSYMBOL_designator = 173,               /* designator  */
  YYSYMBOL_static_assert_declaration = 174, /* static_assert_declaration  */
  YYSYMBOL_try_except_statement = 175,     /* try_except_statement  */
  YYSYMBOL_statement = 176,                /* statement  */
  YYSYMBOL_labeled_statement = 177,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 178,       /* compound_statement  */
  YYSYMBOL_block_item_list = 179,          /* block_item_list  */
  YYSYMBOL_block_item = 180,               /* block_item  */
  YYSYMBOL_expression_statement = 181,     /* expression_statement  */
  YYSYMBOL_elif_list = 182,                /* elif_list  */
  YYSYMBOL_selection_statement = 183,      /* selection_statement  */
  YYSYMBOL_184_2 = 184,                    /* $@2  */
  YYSYMBOL_iteration_statement = 185,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 186,           /* jump_statement  */
  YYSYMBOL_translation_unit = 187,         /* translation_unit  */
  YYSYMBOL_external_declaration = 188,     /* external_declaration  */
  YYSYMBOL_function_definition = 189,      /* function_definition  */
  YYSYMBOL_declaration_list = 190          /* declaration_list  */
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
#define YYLAST   2769

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  288
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  523

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
       0,    55,    55,    56,    57,    58,    59,    63,    64,    65,
      69,    73,    74,    78,    82,    83,    87,    88,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     107,   108,   112,   113,   114,   115,   116,   117,   118,   122,
     123,   124,   125,   126,   127,   131,   132,   136,   137,   138,
     139,   143,   144,   145,   149,   150,   151,   155,   156,   157,
     158,   159,   160,   164,   165,   166,   170,   171,   175,   176,
     180,   181,   185,   186,   190,   191,   195,   199,   200,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     218,   219,   223,   227,   228,   229,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   246,   247,   251,   252,
     256,   257,   258,   259,   260,   261,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   284,   285,   286,   290,   291,   295,   296,   300,
     301,   302,   306,   307,   308,   309,   313,   314,   318,   319,
     320,   324,   325,   326,   327,   328,   332,   333,   337,   338,
     342,   346,   347,   348,   349,   353,   354,   358,   359,   363,
     363,   364,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   385,   386,   387,   388,
     392,   393,   398,   399,   403,   404,   408,   409,   410,   414,
     415,   419,   420,   424,   425,   426,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   454,   455,   456,
     460,   461,   462,   463,   467,   471,   472,   476,   477,   481,
     485,   489,   490,   491,   492,   493,   494,   495,   496,   500,
     501,   502,   506,   507,   511,   512,   516,   517,   521,   522,
     526,   527,   531,   531,   532,   533,   534,   535,   539,   540,
     541,   542,   543,   544,   545,   546,   550,   551,   552,   553,
     554,   558,   559,   563,   564,   568,   569,   573,   574
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
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "$@1", "direct_declarator",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "initializer_list", "designation", "designator_list",
  "designator", "static_assert_declaration", "try_except_statement",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement", "elif_list",
  "selection_statement", "$@2", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-345)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-170)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2524,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,    21,   -70,   -66,  -345,   -53,
    -345,  -345,    46,  2614,  2614,  -345,    26,  -345,  -345,  2614,
    2614,  2614,  -345,  2046,  -345,  -345,   -29,    61,  1033,  2689,
    1921,  -345,    50,   124,  -345,   -58,  -345,  2204,    70,  -345,
    -345,  -345,    34,  2652,  -345,  -345,  -345,  -345,  -345,    61,
    -345,    56,   -63,  -345,   110,  -345,  -345,  -345,  -345,  -345,
    1944,  2038,  2038,  -345,   115,   119,  1033,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,   106,  -345,  1921,
    -345,    87,   125,   264,   152,     5,   129,   144,   135,   226,
     236,  -345,   185,  2689,    65,  2689,   192,   208,   213,   212,
    -345,  -345,  -345,   124,    50,  -345,   501,  1641,  -345,    46,
    -345,  2423,  2156,  1127,    42,  2652,  2321,  -345,    43,  -345,
     -27,  1921,     9,  -345,  1664,  1033,  -345,  1033,  -345,  -345,
    2689,  1921,   199,  -345,  -345,    96,   217,   297,  -345,  -345,
    1758,  1921,   302,  -345,  1921,  1921,  1921,  1921,  1921,  1921,
    1921,  1921,  1921,  1921,  1921,  1921,  1921,  1921,  1921,  1921,
    1921,  1921,  1921,  -345,  -345,  2271,  1150,    95,  -345,   128,
    -345,  -345,  -345,   301,  -345,  -345,  -345,  -345,   210,   214,
     225,   234,   238,  1921,   241,   246,   247,   249,   716,   254,
     312,   237,   240,   912,  -345,  -345,   -52,  -345,  -345,  -345,
    -345,  -345,   617,  -345,  -345,  -345,  -345,  -345,  1618,  -345,
    -345,  -345,  -345,  -345,  -345,    72,   262,   257,  -345,   131,
    1478,  -345,   261,   265,  1244,    70,  2369,  -345,  -345,  1921,
    -345,   -49,  -345,   266,    12,  -345,  -345,  -345,  -345,  -345,
     157,  -345,   269,   270,   271,   268,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  1921,  1921,  -345,
    1781,  -345,  -345,   158,   126,  -345,  -345,  -345,  -345,    87,
      87,   125,   125,   264,   264,   264,   264,   264,   152,   152,
       5,   129,   144,   135,   226,  -345,   273,   274,  1478,  -345,
     272,   275,  1267,   128,  2476,  1361,   276,  -345,   363,   364,
     716,   285,   716,  1921,  1921,  1921,   306,   814,   277,  -345,
    -345,  -345,   -43,  -345,  -345,  -345,  1921,   367,  -345,    73,
    1641,   100,  -345,  2100,  -345,    44,  -345,  -345,  2570,   371,
    -345,   292,  1478,  -345,  -345,  1921,  -345,   293,   295,  -345,
    -345,    60,  -345,  1921,  -345,  1921,  -345,   294,   294,  -345,
     714,  -345,  -345,  1618,  -345,  -345,  -345,  -345,  -345,   299,
    1478,  -345,  -345,  1921,  -345,   300,  -345,   307,  1478,  -345,
     303,   310,  1384,   280,   225,   388,  -345,   716,  -345,   162,
     177,   181,   311,   393,   935,   935,  -345,  -345,   313,  -345,
    1501,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,   314,
     315,  -345,  -345,  -345,  -345,  -345,   318,   183,  -345,   319,
      92,  -345,   320,   322,  -345,  -345,   323,  1478,  -345,  -345,
    1921,  -345,   326,  -345,  -345,  1921,  -345,   716,   716,   716,
    1921,   395,  1804,  1898,  -345,  -345,  -345,  1641,  -345,  -345,
    1921,   714,  -345,  1921,  1524,  -345,  -345,  -345,  -345,   327,
     328,  -345,   187,    32,  -345,  -345,   189,   333,   716,   193,
     716,   194,  -345,  -345,  -345,  -345,  -345,  -345,  -345,   225,
     334,  -345,    76,   316,  1921,  -345,   716,  -345,   716,  -345,
    1921,   716,   335,   716,  -345,   341,  -345,  -345,   201,  -345,
    1921,  -345,  1921,   716,   202,  -345,   207,  -345,   716,   346,
    -345,   716,  -345
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   131,   110,   111,   112,   114,   115,   165,   161,   162,
     163,   125,   117,   118,   119,   120,   123,   124,   121,   122,
     116,   126,   127,   135,   136,     0,     0,   164,   166,     0,
     113,   284,     0,    97,    99,   129,     0,   130,   128,   101,
     103,   105,    95,     0,   281,   283,   155,     0,     0,     0,
       0,   172,     0,   189,    93,     0,   106,   109,   171,   169,
      96,    98,   134,     0,   100,   102,   104,     1,   282,     0,
      10,   159,     0,   156,     0,     2,     7,     8,    11,    12,
       0,     0,     0,     9,     0,     0,     0,    39,    40,    41,
      42,    43,    44,    18,     3,     4,     6,    32,    45,     0,
      47,    51,    54,    57,    63,    66,    68,    70,    72,    74,
      76,    92,     0,   143,   202,   145,     0,     0,     0,     0,
     164,   190,   188,   187,     0,    94,     0,     0,   287,     0,
     286,     0,     0,     0,     0,     0,     0,   137,     0,   141,
       0,     0,     0,   151,     0,     0,    36,     0,    33,    34,
       0,     0,    45,    77,    90,     0,     0,     0,    24,    25,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   142,     0,     0,   204,   201,   205,
     144,   167,   160,     0,   173,   191,   186,   107,   109,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   252,   258,     0,   256,   247,   257,
     241,   242,     0,   254,   243,   244,   245,   246,     0,   229,
     108,   288,   285,   199,   184,   198,     0,   193,   194,     0,
       0,   174,    40,     0,     0,   170,     0,   132,   138,     0,
     139,     0,   146,   150,     0,   153,   158,   152,   157,    28,
       0,    30,     0,     0,     0,     0,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    79,     0,     0,     5,
       0,    23,    20,     0,     0,    22,    48,    49,    50,    52,
      53,    55,    56,    60,    61,    62,    58,    59,    64,    65,
      67,    69,    71,    73,    75,   223,     0,     0,     0,   207,
      40,     0,     0,   203,     0,     0,     0,   248,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   277,
     278,   279,     0,   259,   253,   255,     0,     0,   231,     0,
       0,     0,   235,     0,   196,   204,   197,   183,     0,     0,
     185,     0,     0,   175,   182,     0,   181,    40,     0,   133,
     148,     0,   140,     0,   154,     0,    29,    37,     0,    38,
       0,    78,    91,     0,    46,    21,    19,   224,   206,     0,
       0,   208,   214,     0,   213,     0,   225,     0,     0,   215,
      40,     0,     0,     0,     0,     0,   249,     0,   251,     0,
       0,     0,     0,     2,     0,     0,   276,   280,     0,   238,
       0,   227,   230,   234,   236,   192,   195,   200,   177,     0,
       0,   178,   180,   147,   149,    31,     0,     0,    14,     0,
       0,   210,     0,     0,   212,   226,     0,     0,   216,   222,
       0,   221,     0,   239,   240,     0,   250,     0,     0,     0,
       0,     0,     0,     0,   237,   228,   233,     0,   176,   179,
       0,     0,    13,     0,     0,    26,   209,   211,   218,     0,
       0,   219,     0,   264,   267,   268,     0,     0,     0,     0,
       0,     0,   232,    17,    15,    16,    27,   217,   220,     0,
       0,   262,   266,     0,     0,   272,     0,   270,     0,   275,
       0,     0,     0,     0,   269,     0,   273,   271,     0,   263,
       0,   265,     0,     0,     0,    90,     0,   260,     0,     0,
     261,     0,   274
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -345,  -345,  -345,  -345,  -345,  -345,  -345,   -32,  -345,   278,
     290,  -345,   -80,   136,   141,    86,   117,   258,   260,   263,
     256,   259,  -345,   -24,   -64,  -345,   -85,   -37,   -13,     6,
    -345,   325,  -345,   -38,  -345,  -345,   305,  -120,   -20,  -345,
      81,  -345,   375,  -133,  -345,   -45,  -345,  -345,   -30,  -345,
     317,   -41,  -105,  -127,  -345,    98,  -345,     3,   -99,  -180,
    -113,    74,  -344,  -345,   111,   -25,  -345,   -68,  -345,   -57,
    -345,   251,  -235,  -345,  -345,  -345,  -345,  -345,  -345,   431,
    -345,  -345
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    93,    94,    71,    95,    96,   427,   428,    97,   260,
     152,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   153,   154,   277,   216,   112,    31,   129,
      55,    56,    33,    34,    35,    36,   136,   137,   114,   251,
     252,    37,    72,    73,    38,    39,    40,    41,   119,   134,
      58,    59,   123,   306,   237,   238,   239,   429,   307,   189,
     338,   339,   340,   341,   342,    42,   218,   219,   220,   221,
     222,   223,   224,   492,   225,   501,   226,   227,    43,    44,
      45,   131
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     130,   155,    57,   115,   115,   236,    32,   313,   121,   258,
     113,   113,   122,   118,   230,   188,   248,    48,   115,   163,
      70,    49,   142,    70,   111,   113,   111,   124,   244,   176,
     177,   143,    46,   278,    50,   490,   361,    62,   139,    60,
      61,   115,   278,   138,   128,    64,    65,    66,   113,    32,
     125,   116,   117,    51,    51,  -169,   333,    51,   254,   362,
     155,    51,   155,   229,    69,   407,   457,   255,   115,   243,
     115,    51,    70,   187,   232,   113,   284,   113,   195,   502,
     261,   312,   196,    51,   286,   287,   288,   265,   121,   156,
     115,   115,   405,   184,   198,   190,   261,   113,   113,   198,
     115,   491,   115,   257,   256,   115,   364,   113,   253,   113,
     139,   139,   113,   217,    47,   138,   138,   111,   231,    63,
     457,   258,   311,   157,   158,   159,   248,   135,   332,    52,
      52,   185,   249,    52,   186,   352,   346,    52,   235,    53,
     326,   121,    53,   318,   187,   503,    53,    52,   262,   249,
     263,   250,   185,   264,    54,   186,    53,   132,   410,   343,
     133,    53,   186,   141,   229,   313,   321,   411,    53,   452,
     453,     8,     9,    10,   171,   172,   351,   464,   173,   111,
     358,   278,   185,   164,   279,   186,   465,   387,   165,   166,
     336,   235,   337,   160,   345,   121,   161,   144,   162,   195,
     374,   115,   150,   380,   120,   344,   151,   413,   113,   217,
     392,   278,   360,   371,   372,   314,   349,   376,   315,   350,
      53,   139,   167,   168,   178,   111,   138,   412,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   399,   400,
     401,   180,   365,   365,   379,   366,   375,   278,   385,   179,
     447,   391,   396,   181,   398,   174,   175,   293,   294,   295,
     296,   297,   278,   121,   182,   448,   278,   195,   461,   449,
     121,   462,   278,   183,   278,   489,   229,   493,   278,   278,
     191,   496,   498,   437,   169,   170,   278,   278,   419,   513,
     518,   420,   278,   298,   299,   519,   192,   456,   193,   408,
     194,   425,   345,   289,   290,   280,   276,   195,   281,   229,
     291,   292,   111,   285,   404,   316,   432,   127,   126,   433,
     235,   319,   317,   328,   436,   115,   424,   320,   442,   446,
     322,   253,   113,   323,   324,   195,   325,   444,    98,   111,
      98,   327,   348,   121,   482,   329,   229,   195,   330,   235,
     347,   456,   353,   370,   235,   363,   354,   367,   368,   369,
     472,   377,   378,   381,   393,   476,   382,   479,   481,   394,
     146,   148,   149,   469,   397,   395,   470,   402,   409,   473,
     474,   475,   417,   418,   421,   406,   422,   373,   443,    98,
     431,   434,   195,   229,   438,   435,   483,   445,   450,   485,
     229,   439,   451,   477,   454,   458,   459,   460,   463,   505,
     495,   466,   497,   467,   468,   508,   115,   471,   487,   488,
     494,   500,   510,   113,   504,   514,   512,   516,   506,   484,
     507,    98,   499,   509,   521,   511,   300,   303,   283,   301,
     246,   304,   423,   302,   140,   517,   416,   430,   515,   197,
     520,   245,   414,   522,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,   335,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   199,   200,     0,    74,     0,
       0,   201,   202,    76,    77,    78,    79,    80,     0,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       1,    83,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,   203,   204,   205,
      98,   206,   207,   208,   209,   210,   211,   212,   213,    26,
      84,    27,    85,    28,    29,    30,     0,     0,    86,     0,
       0,     0,     0,     0,   126,   214,    87,    88,    89,    90,
      91,    92,     0,     0,     0,     0,     0,     0,     0,   215,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   199,   200,     0,    74,     0,    98,   201,   202,    76,
      77,    78,    79,    80,     0,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,     1,    83,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,   203,   204,   205,     0,   206,   207,   208,
     209,   210,   211,   212,   213,    26,    84,    27,    85,    28,
      29,    30,     0,     0,    86,     0,     0,     0,     0,     0,
     126,   334,    87,    88,    89,    90,    91,    92,     0,     0,
     199,   200,     0,    74,     0,   215,   201,   202,    76,    77,
      78,    79,    80,     0,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,    83,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,   426,   203,   204,   205,     0,   206,   207,   208,   209,
     210,   211,   212,   213,    27,    84,     0,    85,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,   126,
       0,    87,    88,    89,    90,    91,    92,     0,     0,     0,
       0,    74,     0,     0,   215,   403,    76,    77,    78,    79,
      80,     0,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,    83,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    84,    27,    85,    28,    29,    30,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,    92,     0,     0,     0,     0,    74,
       0,     0,   215,    75,    76,    77,    78,    79,    80,     0,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    83,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,    92,     0,    84,     0,    85,     0,     0,     0,
     331,     0,    86,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      74,     0,     0,   215,    75,    76,    77,    78,    79,    80,
       0,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,    83,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    27,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,    87,    88,
      89,    90,    91,    92,    74,     0,     0,     0,    75,    76,
      77,    78,    79,    80,     0,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    83,    81,    82,
     240,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,   308,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,    84,   120,    85,     0,
       0,     0,     0,     0,    86,     0,     0,     0,   241,     0,
       0,     0,    87,   242,    89,    90,    91,    92,     0,    84,
     120,    85,     0,     0,     0,     0,     0,    86,     0,     0,
       0,   309,     0,     0,     0,    87,   310,    89,    90,    91,
      92,    74,     0,     0,     0,    75,    76,    77,    78,    79,
      80,     0,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    83,    81,    82,   355,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
     383,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,    84,   120,    85,     0,     0,     0,     0,
       0,    86,     0,     0,     0,   356,     0,     0,     0,    87,
     357,    89,    90,    91,    92,     0,    84,   120,    85,     0,
       0,     0,     0,     0,    86,     0,     0,     0,   384,     0,
       0,     0,    87,    88,    89,    90,    91,    92,    74,     0,
       0,     0,    75,    76,    77,    78,    79,    80,     0,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    83,    81,    82,   388,     0,     0,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,   440,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
      84,   120,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,   389,     0,     0,     0,    87,   390,    89,    90,
      91,    92,     0,    84,   120,    85,     0,     0,     0,     0,
       0,    86,     0,     0,     0,   441,     0,     0,     0,    87,
      88,    89,    90,    91,    92,    74,     0,     0,     0,    75,
      76,    77,    78,    79,    80,     0,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    83,    81,
      82,     0,     0,     0,     0,     8,     9,    10,     0,     0,
       0,    74,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    83,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,   120,    85,
       0,     0,     0,     0,    83,    86,     0,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,    92,     0,
      84,     0,    85,     0,     0,     0,     0,     0,    86,     0,
       0,   336,     0,   337,   228,   455,    87,    88,    89,    90,
      91,    92,     0,    84,     0,    85,     0,     0,     0,     0,
       0,    86,     0,     0,   336,     0,   337,   228,   486,    87,
      88,    89,    90,    91,    92,    74,     0,     0,     0,    75,
      76,    77,    78,    79,    80,     0,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    83,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    83,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     0,    85,
       0,     0,     0,     0,    83,    86,     0,     0,   336,     0,
     337,   228,     0,    87,    88,    89,    90,    91,    92,     0,
      84,     0,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,   228,     0,    87,    88,    89,    90,
      91,    92,     0,    84,     0,    85,     0,     0,     0,     0,
       0,    86,   259,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,    92,    74,     0,     0,     0,    75,
      76,    77,    78,    79,    80,     0,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    83,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    83,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     0,    85,
       0,     0,     0,     0,    83,    86,   282,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,    92,     0,
      84,     0,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,   373,     0,    87,    88,    89,    90,
      91,    92,     0,    84,     0,    85,     0,     0,     0,     0,
       0,    86,   478,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,    92,    74,     0,     0,     0,    75,
      76,    77,    78,    79,    80,     0,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    83,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    83,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     0,    85,
       0,     0,     0,     0,    83,    86,   480,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,    92,     0,
      84,     0,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,    87,    88,    89,    90,
      91,    92,     0,    84,     0,    85,     0,     0,     0,     0,
       0,   145,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,    92,    74,    67,     0,     0,    75,
      76,    77,    78,    79,    80,     0,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    51,     0,     0,     0,     0,     0,    84,     0,    85,
       0,     0,     0,     0,    26,   147,    27,     0,    28,    29,
      30,     0,     0,    87,    88,    89,    90,    91,    92,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,     0,     0,   343,   305,     0,
     186,     0,     0,     0,     0,     1,    53,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,     0,     0,     1,   234,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,   126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   127,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,     0,    30,     0,     0,   185,   305,
       1,   186,     0,     0,     0,     0,     0,    53,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,    29,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,   247,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,   359,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     1,   126,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,     0,     0,     1,   386,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,    29,    30,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   415,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     1,    30,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,    26,     0,    27,     0,    28,     0,    30,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,    27,     0,     0,    29,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      57,    86,    32,    48,    49,   132,     0,   187,    53,   142,
      48,    49,    53,    50,   127,   114,   136,    87,    63,    99,
      11,    87,    85,    11,    48,    63,    50,    85,   133,    24,
      25,    94,    11,    85,    87,     3,    85,    11,    63,    33,
      34,    86,    85,    63,    57,    39,    40,    41,    86,    43,
     108,    48,    49,    11,    11,    11,   108,    11,    85,   108,
     145,    11,   147,   127,    93,   108,   410,    94,   113,   133,
     115,    11,    11,   114,   131,   113,   161,   115,   123,     3,
     144,   186,   123,    11,   164,   165,   166,   151,   133,    86,
     135,   136,   327,   113,   124,   115,   160,   135,   136,   129,
     145,    69,   147,    94,   141,   150,    94,   145,   138,   147,
     135,   136,   150,   126,    93,   135,   136,   141,   131,    93,
     464,   254,   186,    17,    18,    19,   246,    93,   213,    87,
      87,    87,    89,    87,    90,   240,   235,    87,   132,    96,
     208,   186,    96,   200,   185,    69,    96,    87,   145,    89,
     147,   108,    87,   150,   108,    90,    96,    87,    85,    87,
      90,    96,    90,   107,   228,   345,   203,    94,    96,   404,
     405,    47,    48,    49,    22,    23,   240,    85,    26,   203,
     244,    85,    87,    96,    88,    90,    94,   314,   101,   102,
      90,   185,    92,    87,   235,   240,    90,    87,    92,   244,
     280,   246,    87,   308,    80,   235,    87,   107,   246,   222,
     315,    85,   249,   277,   278,    87,    85,    91,    90,    88,
      96,   246,    97,    98,    95,   249,   246,   340,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   323,   324,
     325,   106,    85,    85,   308,    88,    88,    85,   312,   105,
      88,   315,   320,    27,   322,   103,   104,   171,   172,   173,
     174,   175,    85,   308,    28,    88,    85,   312,    85,    88,
     315,    88,    85,    88,    85,    88,   340,    88,    85,    85,
      88,    88,    88,   388,    20,    21,    85,    85,   352,    88,
      88,   355,    85,   176,   177,    88,    88,   410,    85,   336,
      88,   365,   343,   167,   168,    88,   107,   352,    11,   373,
     169,   170,   336,    11,   327,    14,   380,   107,    93,   383,
     314,    87,   108,    11,   388,   370,   363,    89,   392,   397,
      89,   361,   370,    87,    87,   380,    87,   394,    48,   363,
      50,    87,    85,   388,   457,   108,   410,   392,   108,   343,
      88,   464,    91,    85,   348,    89,    91,    88,    88,    88,
     445,    88,    88,    91,    88,   450,    91,   452,   453,     6,
      80,    81,    82,   437,    89,    11,   440,    71,    11,   447,
     448,   449,    11,    91,    91,   108,    91,    93,   108,    99,
      91,    91,   437,   457,    91,    88,   460,     9,    87,   463,
     464,    91,     9,     8,    91,    91,    91,    89,    89,   494,
     478,    91,   480,    91,    91,   500,   461,    91,    91,    91,
      87,    87,    87,   461,   108,   510,    85,   512,   496,   461,
     498,   141,   489,   501,    88,   503,   178,   181,   160,   179,
     135,   182,   361,   180,    69,   513,   348,   373,   512,   124,
     518,   134,   341,   521,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   222,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,    -1,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    66,    67,    68,
     280,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,    -1,     7,    -1,   336,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   363,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,    -1,    -1,
       4,     5,    -1,     7,    -1,   108,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    67,    66,    67,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    80,    79,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,     7,    -1,    -1,   108,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,    -1,    -1,    -1,    -1,     7,
      -1,    -1,   108,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    40,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,    -1,    79,    -1,    81,    -1,    -1,    -1,
     108,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,    -1,    -1,    -1,    -1,
       7,    -1,    -1,   108,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,    99,   100,     7,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    40,    18,    19,
      43,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,    -1,    79,
      80,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,     7,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    40,    18,    19,    43,    -1,    -1,
      -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      43,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,    -1,    79,    80,    81,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,     7,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    40,    18,    19,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,
      -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,    -1,    79,    80,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,     7,    -1,    -1,    -1,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    40,    18,
      19,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    40,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      -1,    -1,    -1,    -1,    40,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,     7,    -1,    -1,    -1,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    40,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    40,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    40,    87,    -1,    -1,    90,    -1,
      92,    93,    -1,    95,    96,    97,    98,    99,   100,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    95,    96,    97,    98,
      99,   100,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,     7,    -1,    -1,    -1,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    40,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    40,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    40,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    95,    96,    97,    98,
      99,   100,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,     7,    -1,    -1,    -1,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    40,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    40,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    40,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,     7,     0,    -1,    -1,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    11,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    78,    87,    80,    -1,    82,    83,
      84,    -1,    -1,    95,    96,    97,    98,    99,   100,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      80,    -1,    82,    -1,    84,    -1,    -1,    87,    88,    -1,
      90,    -1,    -1,    -1,    -1,    39,    96,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,    -1,
      84,    -1,    -1,    39,    88,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    80,    -1,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,   107,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    80,    -1,    82,    -1,    84,    -1,    -1,    87,    88,
      39,    90,    -1,    -1,    -1,    -1,    -1,    96,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    94,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    80,    -1,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    93,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,    -1,
      84,    -1,    -1,    39,    88,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    80,    -1,    82,    83,    84,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      80,    -1,    82,    39,    84,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    78,    -1,    80,    -1,    82,    -1,    84,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    80,    -1,    -1,    83,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    39,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    78,    80,    82,    83,
      84,   137,   138,   141,   142,   143,   144,   150,   153,   154,
     155,   156,   174,   187,   188,   189,    11,    93,    87,    87,
      87,    11,    87,    96,   108,   139,   140,   157,   159,   160,
     138,   138,    11,    93,   138,   138,   138,     0,   188,    93,
      11,   112,   151,   152,     7,    11,    12,    13,    14,    15,
      16,    18,    19,    40,    79,    81,    87,    95,    96,    97,
      98,    99,   100,   110,   111,   113,   114,   117,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   136,   142,   147,   154,   166,   166,   136,   157,
      80,   154,   160,   161,    85,   108,    93,   107,   137,   138,
     178,   190,    87,    90,   158,    93,   145,   146,   147,   174,
     151,   107,    85,    94,    87,    87,   119,    87,   119,   119,
      87,    87,   119,   132,   133,   135,   166,    17,    18,    19,
      87,    90,    92,   121,    96,   101,   102,    97,    98,    20,
      21,    22,    23,    26,   103,   104,    24,    25,    95,   105,
     106,    27,    28,    88,   147,    87,    90,   160,   167,   168,
     147,    88,    88,    85,    88,   154,   160,   140,   157,     4,
       5,    10,    11,    66,    67,    68,    70,    71,    72,    73,
      74,    75,    76,    77,    94,   108,   135,   137,   175,   176,
     177,   178,   179,   180,   181,   183,   185,   186,    93,   133,
     169,   137,   178,    11,    88,   138,   162,   163,   164,   165,
      43,    91,    96,   133,   161,   159,   145,    94,   146,    89,
     108,   148,   149,   157,    85,    94,   136,    94,   152,    88,
     118,   133,   166,   166,   166,   133,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   107,   134,    85,    88,
      88,    11,    88,   118,   135,    11,   121,   121,   121,   122,
     122,   123,   123,   124,   124,   124,   124,   124,   125,   125,
     126,   127,   128,   129,   130,    88,   162,   167,    43,    91,
      96,   133,   161,   168,    87,    90,    14,   108,   178,    87,
      89,   136,    89,    87,    87,    87,   176,    87,    11,   108,
     108,   108,   135,   108,    94,   180,    90,    92,   169,   170,
     171,   172,   173,    87,   157,   160,   167,    88,    85,    85,
      88,   133,   161,    91,    91,    43,    91,    96,   133,    94,
     136,    85,   108,    89,    94,    85,    88,    88,    88,    88,
      85,   133,   133,    93,   121,    88,    91,    88,    88,   133,
     161,    91,    91,    43,    91,   133,    88,   162,    43,    91,
      96,   133,   161,    88,     6,    11,   176,    89,   176,   135,
     135,   135,    71,    11,   137,   181,   108,   108,   136,    11,
      85,    94,   169,   107,   173,    65,   164,    11,    91,   133,
     133,    91,    91,   149,   136,   133,    67,   115,   116,   166,
     170,    91,   133,   133,    91,    88,   133,   161,    91,    91,
      43,    91,   133,   108,   178,     9,   176,    88,    88,    88,
      87,     9,   181,   181,    91,    94,   169,   171,    91,    91,
      89,    85,    88,    89,    85,    94,    91,    91,    91,   133,
     133,    91,   135,   176,   176,   176,   135,     8,    88,   135,
      88,   135,   169,   133,   116,   133,    94,    91,    91,    88,
       3,    69,   182,    88,    87,   176,    88,   176,    88,   178,
      87,   184,     3,    69,   108,   135,   176,   176,   135,   176,
      87,   176,    85,    88,   135,   133,   135,   176,    88,    88,
     176,    88,   176
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   110,   110,   110,   110,   111,   111,   111,
     112,   113,   113,   114,   115,   115,   116,   116,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     118,   118,   119,   119,   119,   119,   119,   119,   119,   120,
     120,   120,   120,   120,   120,   121,   121,   122,   122,   122,
     122,   123,   123,   123,   124,   124,   124,   125,   125,   125,
     125,   125,   125,   126,   126,   126,   127,   127,   128,   128,
     129,   129,   130,   130,   131,   131,   132,   133,   133,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     135,   135,   136,   137,   137,   137,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   139,   139,   140,   140,
     141,   141,   141,   141,   141,   141,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   143,   143,   143,   144,   144,   145,   145,   146,
     146,   146,   147,   147,   147,   147,   148,   148,   149,   149,
     149,   150,   150,   150,   150,   150,   151,   151,   152,   152,
     153,   154,   154,   154,   154,   155,   155,   156,   156,   158,
     157,   157,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   160,   160,   160,   160,
     161,   161,   162,   162,   163,   163,   164,   164,   164,   165,
     165,   166,   166,   167,   167,   167,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   169,   169,   169,
     170,   170,   170,   170,   171,   172,   172,   173,   173,   174,
     175,   176,   176,   176,   176,   176,   176,   176,   176,   177,
     177,   177,   178,   178,   179,   179,   180,   180,   181,   181,
     182,   182,   184,   183,   183,   183,   183,   183,   185,   185,
     185,   185,   185,   185,   185,   185,   186,   186,   186,   186,
     186,   187,   187,   188,   188,   189,   189,   190,   190
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     3,     4,
       1,     3,     1,     2,     2,     2,     2,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     5,     2,     1,     1,     1,     2,     2,
       3,     1,     2,     1,     2,     1,     1,     3,     2,     3,
       1,     4,     5,     5,     6,     2,     1,     3,     3,     1,
       4,     1,     1,     1,     1,     1,     1,     4,     4,     0,
       3,     1,     1,     3,     3,     4,     6,     5,     5,     6,
       5,     4,     4,     4,     3,     4,     3,     2,     2,     1,
       1,     2,     3,     1,     1,     3,     2,     2,     1,     1,
       3,     2,     1,     2,     1,     1,     3,     2,     3,     5,
       4,     5,     4,     3,     3,     3,     4,     6,     5,     5,
       6,     4,     4,     2,     3,     3,     4,     3,     4,     1,
       2,     1,     4,     3,     2,     1,     2,     3,     2,     7,
       4,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       4,     3,     2,     3,     1,     2,     1,     1,     1,     2,
       5,     6,     0,     8,     5,     8,     6,     5,     5,     7,
       6,     7,     6,     7,    12,     7,     3,     2,     2,     2,
       3,     1,     2,     1,     1,     4,     3,     1,     2
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
#line 63 "yapl.y"
                     {int_consts++;}
#line 2106 "yapl.tab.c"
    break;

  case 169: /* $@1: %empty  */
#line 363 "yapl.y"
                  {pointer_decls++;}
#line 2112 "yapl.tab.c"
    break;

  case 262: /* $@2: %empty  */
#line 531 "yapl.y"
                                               {ladder_len++;(yyvsp[0].val)=(ladder_len-1);}
#line 2118 "yapl.tab.c"
    break;

  case 263: /* selection_statement: IF '(' expression ')' statement ELSE $@2 statement  */
#line 531 "yapl.y"
                                                                                           {if(ladder_len>=max){max=ladder_len;} /*printf("ladder_len=%d\n",ladder_len);*/ladder_len=(yyvsp[-2].val);}
#line 2124 "yapl.tab.c"
    break;

  case 264: /* selection_statement: IF '(' expression ')' statement  */
#line 532 "yapl.y"
                                          {ifs_wo_else++;}
#line 2130 "yapl.tab.c"
    break;

  case 281: /* translation_unit: external_declaration  */
#line 558 "yapl.y"
                               {global_declarations++;}
#line 2136 "yapl.tab.c"
    break;

  case 282: /* translation_unit: translation_unit external_declaration  */
#line 559 "yapl.y"
                                                {global_declarations++;}
#line 2142 "yapl.tab.c"
    break;

  case 283: /* external_declaration: function_definition  */
#line 563 "yapl.y"
                              {func_definitions++;}
#line 2148 "yapl.tab.c"
    break;


#line 2152 "yapl.tab.c"

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

#line 577 "yapl.y"

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
