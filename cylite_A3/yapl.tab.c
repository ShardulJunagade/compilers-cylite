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
  YYSYMBOL_direct_declarator = 158,        /* direct_declarator  */
  YYSYMBOL_pointer = 159,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 160,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 161,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 162,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 163,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 164,          /* identifier_list  */
  YYSYMBOL_type_name = 165,                /* type_name  */
  YYSYMBOL_abstract_declarator = 166,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 167, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 168,              /* initializer  */
  YYSYMBOL_initializer_list = 169,         /* initializer_list  */
  YYSYMBOL_designation = 170,              /* designation  */
  YYSYMBOL_designator_list = 171,          /* designator_list  */
  YYSYMBOL_designator = 172,               /* designator  */
  YYSYMBOL_static_assert_declaration = 173, /* static_assert_declaration  */
  YYSYMBOL_try_except_statement = 174,     /* try_except_statement  */
  YYSYMBOL_statement = 175,                /* statement  */
  YYSYMBOL_labeled_statement = 176,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 177,       /* compound_statement  */
  YYSYMBOL_block_item_list = 178,          /* block_item_list  */
  YYSYMBOL_block_item = 179,               /* block_item  */
  YYSYMBOL_expression_statement = 180,     /* expression_statement  */
  YYSYMBOL_elif_list = 181,                /* elif_list  */
  YYSYMBOL_selection_statement = 182,      /* selection_statement  */
  YYSYMBOL_183_1 = 183,                    /* $@1  */
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
#define YYLAST   2810

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
     219,   220,   224,   228,   229,   230,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   247,   248,   252,   253,
     257,   258,   259,   260,   261,   262,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   285,   286,   287,   291,   292,   296,   297,   301,
     302,   303,   307,   308,   309,   310,   314,   315,   319,   320,
     321,   325,   326,   327,   328,   329,   333,   334,   338,   339,
     343,   347,   348,   349,   350,   354,   355,   359,   360,   364,
     365,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   386,   387,   388,   389,   393,
     394,   399,   400,   404,   405,   409,   410,   411,   415,   416,
     420,   421,   425,   426,   427,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   455,   456,   457,   461,
     462,   463,   464,   468,   472,   473,   477,   478,   482,   486,
     490,   491,   492,   493,   494,   495,   496,   497,   501,   502,
     503,   507,   508,   512,   513,   517,   518,   522,   523,   527,
     528,   532,   532,   537,   540,   539,   546,   548,   553,   554,
     555,   556,   557,   558,   559,   560,   564,   565,   566,   567,
     568,   572,   573,   577,   578,   582,   583,   587,   588
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

#define YYPACT_NINF (-381)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2565,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,     8,   -33,    -8,  -381,    -3,
    -381,  -381,    60,  2655,  2655,  -381,    26,  -381,  -381,  2655,
    2655,  2655,  -381,  2087,  -381,  -381,   -70,    19,  1074,  2730,
    1962,  -381,   110,   134,  -381,   -58,  -381,  2245,    59,    45,
    -381,  -381,   -26,  2693,  -381,  -381,  -381,  -381,  -381,    19,
    -381,   -72,    93,  -381,     5,  -381,  -381,  -381,  -381,  -381,
    1985,  2079,  2079,  -381,    36,    47,  1074,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,   199,  -381,  1962,
    -381,   -68,   -76,   201,   129,   211,    62,    35,    67,   148,
     162,  -381,   115,  2730,    49,  2730,   120,   127,   107,   152,
    -381,  -381,  -381,   134,   110,  -381,   559,  1682,  -381,    60,
    -381,  2464,  2197,  1168,    59,  2693,  2362,  -381,    46,  -381,
     104,  1962,     9,  -381,  1705,  1074,  -381,  1074,  -381,  -381,
    2730,  1962,   222,  -381,  -381,    89,   160,   185,  -381,  -381,
    1799,  1962,   212,  -381,  1962,  1962,  1962,  1962,  1962,  1962,
    1962,  1962,  1962,  1962,  1962,  1962,  1962,  1962,  1962,  1962,
    1962,  1962,  1962,  -381,  -381,  2312,  1191,    98,  -381,   141,
    -381,  -381,  -381,   215,  -381,  -381,  -381,  -381,   156,   159,
     195,   206,   221,  1962,   227,   208,   216,   235,   757,   239,
     317,   225,   232,   953,  -381,  -381,   -53,  -381,  -381,  -381,
    -381,  -381,   658,  -381,  -381,  -381,  -381,  -381,  1659,  -381,
    -381,  -381,  -381,  -381,  -381,    75,   259,   264,  -381,   157,
    1519,  -381,   260,   265,  1285,  2410,  -381,  -381,  1962,  -381,
     -49,  -381,   266,    20,  -381,  -381,  -381,  -381,  -381,   161,
    -381,   269,   270,   272,   276,  -381,  -381,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,  1962,  1962,  -381,  1822,
    -381,  -381,   176,   -19,  -381,  -381,  -381,  -381,   -68,   -68,
     -76,   -76,   201,   201,   201,   201,   201,   129,   129,   211,
      62,    35,    67,   148,  -381,   274,   275,  1519,  -381,   277,
     282,  1308,   141,  2517,  1402,   286,  -381,   359,   365,   757,
     288,   757,  1962,  1962,  1962,   307,   855,   271,  -381,  -381,
    -381,   -43,  -381,  -381,  -381,  1962,   369,  -381,   108,  1682,
      77,  -381,  2141,  -381,   114,  -381,  -381,  2611,   370,  -381,
     291,  1519,  -381,  -381,  1962,  -381,   292,   293,  -381,  -381,
      74,  -381,  1962,  -381,  1962,  -381,   294,   294,  -381,   755,
    -381,  -381,  1659,  -381,  -381,  -381,  -381,  -381,   295,  1519,
    -381,  -381,  1962,  -381,   298,  -381,   297,  1519,  -381,   299,
     302,  1425,   296,   195,   385,  -381,   757,  -381,   180,   191,
     192,   309,   388,   976,   976,  -381,  -381,   310,  -381,  1542,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,   311,   312,
    -381,  -381,  -381,  -381,  -381,   316,   193,  -381,   318,   125,
    -381,   315,   319,  -381,  -381,   320,  1519,  -381,  -381,  1962,
    -381,   321,  -381,  -381,  1962,  -381,   757,   757,   757,  1962,
     392,  1845,  1939,  -381,  -381,  -381,  1682,  -381,  -381,  1962,
     755,  -381,  1962,  1565,  -381,  -381,  -381,  -381,   322,   325,
    -381,   197,    55,  -381,  -381,   209,   330,   757,   214,   757,
     224,  -381,  -381,  -381,  -381,  -381,  -381,  -381,   195,   331,
    -381,    58,   301,  1962,  -381,   757,  -381,   757,  -381,  1962,
     757,   332,  -381,  -381,   335,  -381,  -381,   229,  -381,  1962,
     757,  1962,   757,   247,  -381,  -381,   256,  -381,   757,   333,
    -381,   757,  -381
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
       0,   171,     0,   188,    93,     0,   106,   109,   170,     0,
      96,    98,   134,     0,   100,   102,   104,     1,   282,     0,
      10,   159,     0,   156,     0,     2,     7,     8,    11,    12,
       0,     0,     0,     9,     0,     0,     0,    39,    40,    41,
      42,    43,    44,    18,     3,     4,     6,    32,    45,     0,
      47,    51,    54,    57,    63,    66,    68,    70,    72,    74,
      76,    92,     0,   143,   201,   145,     0,     0,     0,     0,
     164,   189,   187,   186,     0,    94,     0,     0,   287,     0,
     286,     0,     0,     0,   169,     0,     0,   137,     0,   141,
       0,     0,     0,   151,     0,     0,    36,     0,    33,    34,
       0,     0,    45,    77,    90,     0,     0,     0,    24,    25,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   142,     0,     0,   203,   200,   204,
     144,   167,   160,     0,   172,   190,   185,   107,   109,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   251,   257,     0,   255,   246,   256,
     240,   241,     0,   253,   242,   243,   244,   245,     0,   228,
     108,   288,   285,   198,   183,   197,     0,   192,   193,     0,
       0,   173,    40,     0,     0,     0,   132,   138,     0,   139,
       0,   146,   150,     0,   153,   158,   152,   157,    28,     0,
      30,     0,     0,     0,     0,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    79,     0,     0,     5,     0,
      23,    20,     0,     0,    22,    48,    49,    50,    52,    53,
      55,    56,    60,    61,    62,    58,    59,    64,    65,    67,
      69,    71,    73,    75,   222,     0,     0,     0,   206,    40,
       0,     0,   202,     0,     0,     0,   247,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   277,   278,
     279,     0,   258,   252,   254,     0,     0,   230,     0,     0,
       0,   234,     0,   195,   203,   196,   182,     0,     0,   184,
       0,     0,   174,   181,     0,   180,    40,     0,   133,   148,
       0,   140,     0,   154,     0,    29,    37,     0,    38,     0,
      78,    91,     0,    46,    21,    19,   223,   205,     0,     0,
     207,   213,     0,   212,     0,   224,     0,     0,   214,    40,
       0,     0,     0,     0,     0,   248,     0,   250,     0,     0,
       0,     0,     2,     0,     0,   276,   280,     0,   237,     0,
     226,   229,   233,   235,   191,   194,   199,   176,     0,     0,
     177,   179,   147,   149,    31,     0,     0,    14,     0,     0,
     209,     0,     0,   211,   225,     0,     0,   215,   221,     0,
     220,     0,   238,   239,     0,   249,     0,     0,     0,     0,
       0,     0,     0,   236,   227,   232,     0,   175,   178,     0,
       0,    13,     0,     0,    26,   208,   210,   217,     0,     0,
     218,     0,   263,   267,   268,     0,     0,     0,     0,     0,
       0,   231,    17,    15,    16,    27,   216,   219,     0,     0,
     261,   266,     0,     0,   272,     0,   270,     0,   275,     0,
       0,     0,   264,   269,     0,   273,   271,     0,   262,     0,
       0,     0,     0,     0,   265,    90,     0,   259,     0,     0,
     260,     0,   274
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -381,  -381,  -381,  -381,  -381,  -381,  -381,   -32,  -381,   263,
     289,  -381,   -35,   116,   135,    99,   144,   249,   246,   252,
     253,   251,  -381,   -24,   -64,  -381,   -85,   -37,   -13,     6,
    -381,   313,  -381,   -38,  -381,  -381,   300,  -119,   -20,  -381,
      76,  -381,   371,  -133,  -381,   -45,  -381,  -381,   -30,   -52,
     -41,   -80,  -127,  -381,    91,  -381,     3,   -98,  -172,  -113,
      69,  -380,  -381,   102,   -25,  -381,    33,  -381,   -57,  -381,
     217,  -245,  -381,  -381,  -381,  -381,  -381,  -381,  -381,   400,
    -381,  -381
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    93,    94,    71,    95,    96,   426,   427,    97,   259,
     152,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   153,   154,   276,   216,   112,    31,   129,
      55,    56,    33,    34,    35,    36,   136,   137,   114,   250,
     251,    37,    72,    73,    38,    39,    40,    41,   119,    58,
      59,   123,   305,   237,   238,   239,   428,   306,   189,   337,
     338,   339,   340,   341,    42,   218,   219,   220,   221,   222,
     223,   224,   491,   225,   500,   510,   226,   227,    43,    44,
      45,   131
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     130,   155,    57,   115,   115,   236,    32,   134,   121,   257,
     113,   113,   122,   118,   230,   312,   188,   247,   115,    46,
      70,   167,   168,    69,   111,   113,   111,   124,   164,   456,
      70,    70,   277,   165,   166,   141,   360,    62,   139,    60,
      61,   115,   277,   138,   128,    64,    65,    66,   113,    32,
     125,   116,   117,   244,    48,   332,    51,    51,   489,   361,
     155,   501,   155,   229,   163,   406,   277,   135,   115,   243,
     115,    51,   375,   187,   232,   113,   283,   113,   195,    49,
     260,   404,   196,   456,    50,    51,    51,   264,   121,   156,
     115,   115,   144,   184,   198,   190,   260,   113,   113,   198,
     115,    47,   115,   256,   255,   115,   311,   113,   252,   113,
     139,   139,   113,   217,   363,   138,   138,   111,   231,    63,
     257,    51,   310,   150,   490,    51,   247,   502,   331,   285,
     286,   287,    52,    52,   151,   248,   185,   345,   235,   186,
     179,   121,    53,   317,   187,    53,   132,    52,   261,   133,
     262,   171,   172,   263,   249,   173,    53,   178,   451,   452,
     351,    52,   342,   248,   229,   186,   320,   335,    54,   336,
      53,    53,   312,   180,   277,   181,   350,   278,   142,   111,
     357,     8,     9,    10,   412,   185,   386,   143,   186,   253,
     182,   235,   193,   409,   344,   121,   280,    52,   254,   195,
     115,   342,   410,   183,   186,   343,    53,   113,   191,   217,
     463,   359,   370,   371,   120,   192,   157,   158,   159,   464,
     139,   169,   170,   284,   111,   138,   411,   379,   313,   315,
      53,   314,   174,   175,   391,   176,   177,   398,   399,   400,
     194,   325,   348,   378,   373,   349,   364,   384,   279,   365,
     390,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   364,   121,   127,   374,   277,   195,   316,   446,   121,
     292,   293,   294,   295,   296,   229,   277,   277,   460,   447,
     448,   461,   277,   288,   289,   488,   160,   418,   126,   161,
     419,   162,   134,   318,   277,   322,   455,   492,   407,   277,
     424,   344,   495,   323,   290,   291,   195,   436,   229,   277,
     319,   111,   497,   403,   277,   431,   321,   512,   432,   235,
     297,   298,   324,   435,   115,   423,   326,   441,   327,   275,
     252,   113,   277,   328,   195,   518,   443,    98,   111,    98,
     329,   277,   121,   481,   519,   229,   195,   346,   235,   347,
     455,   352,   395,   235,   397,   362,   353,   366,   367,   471,
     368,   369,   376,   377,   475,   393,   478,   480,   380,   146,
     148,   149,   468,   381,   392,   469,   394,   396,   401,   405,
     408,   416,   417,   420,   421,   434,   430,   372,    98,   433,
     437,   195,   229,   438,   444,   482,   449,   450,   484,   229,
     476,   453,   457,   458,   442,   459,   465,   462,   504,   503,
     466,   467,   470,   486,   507,   115,   487,   493,   499,   509,
     511,   521,   113,   282,   513,   300,   516,   299,   483,   445,
      98,   498,   301,   303,   302,   245,   422,   197,   415,   334,
     140,   429,   413,    68,     0,     0,     0,   515,     0,     0,
       0,     0,     0,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,     0,     0,     0,     0,     0,     0,     0,   472,
     473,   474,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     494,     0,   496,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   505,     0,
     506,     0,     0,   508,     0,     0,     0,    98,     0,     0,
       0,     0,     0,   514,     0,   517,     0,     0,     0,     0,
       0,   520,     0,     0,   522,     0,     0,     0,     0,     0,
       0,     0,     0,   199,   200,     0,    74,     0,    98,   201,
     202,    76,    77,    78,    79,    80,     0,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,    83,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    98,   203,   204,   205,     0,   206,
     207,   208,   209,   210,   211,   212,   213,    26,    84,    27,
      85,    28,    29,    30,     0,     0,    86,     0,     0,     0,
       0,    98,   126,   214,    87,    88,    89,    90,    91,    92,
       0,     0,   199,   200,     0,    74,     0,   215,   201,   202,
      76,    77,    78,    79,    80,     0,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,    83,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,   203,   204,   205,     0,   206,   207,
     208,   209,   210,   211,   212,   213,    26,    84,    27,    85,
      28,    29,    30,     0,     0,    86,     0,     0,     0,     0,
       0,   126,   333,    87,    88,    89,    90,    91,    92,     0,
       0,   199,   200,     0,    74,     0,   215,   201,   202,    76,
      77,    78,    79,    80,     0,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,    83,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,   425,   203,   204,   205,     0,   206,   207,   208,
     209,   210,   211,   212,   213,    27,    84,     0,    85,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
     126,     0,    87,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    74,     0,     0,   215,   402,    76,    77,    78,
      79,    80,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,    83,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    84,    27,    85,    28,    29,    30,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      74,     0,     0,   215,    75,    76,    77,    78,    79,    80,
       0,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    83,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,    87,    88,
      89,    90,    91,    92,     0,    84,     0,    85,     0,     0,
       0,   330,     0,    86,     0,     0,     0,     0,     0,     0,
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
      82,   240,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,   307,     0,     0,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,    84,   120,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,   241,
       0,     0,     0,    87,   242,    89,    90,    91,    92,     0,
      84,   120,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,   308,     0,     0,     0,    87,   309,    89,    90,
      91,    92,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    83,    81,    82,   354,     0,
       0,     0,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,   382,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,    84,   120,    85,     0,     0,     0,
       0,     0,    86,     0,     0,     0,   355,     0,     0,     0,
      87,   356,    89,    90,    91,    92,     0,    84,   120,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,   383,
       0,     0,     0,    87,    88,    89,    90,    91,    92,    74,
       0,     0,     0,    75,    76,    77,    78,    79,    80,     0,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    83,    81,    82,   387,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,   439,     0,
       0,     0,     8,     9,    10,     0,     0,     0,     0,     0,
       0,    84,   120,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,   388,     0,     0,     0,    87,   389,    89,
      90,    91,    92,     0,    84,   120,    85,     0,     0,     0,
       0,     0,    86,     0,     0,     0,   440,     0,     0,     0,
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
       0,     0,   335,     0,   336,   228,   454,    87,    88,    89,
      90,    91,    92,     0,    84,     0,    85,     0,     0,     0,
       0,     0,    86,     0,     0,   335,     0,   336,   228,   485,
      87,    88,    89,    90,    91,    92,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,     0,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    83,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    83,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
      85,     0,     0,     0,     0,    83,    86,     0,     0,   335,
       0,   336,   228,     0,    87,    88,    89,    90,    91,    92,
       0,    84,     0,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,   228,     0,    87,    88,    89,
      90,    91,    92,     0,    84,     0,    85,     0,     0,     0,
       0,     0,    86,   258,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,     0,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    83,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    83,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
      85,     0,     0,     0,     0,    83,    86,   281,     0,     0,
       0,     0,     0,     0,    87,    88,    89,    90,    91,    92,
       0,    84,     0,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,   372,     0,    87,    88,    89,
      90,    91,    92,     0,    84,     0,    85,     0,     0,     0,
       0,     0,    86,   477,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,     0,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    83,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    83,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
      85,     0,     0,     0,     0,    83,    86,   479,     0,     0,
       0,     0,     0,     0,    87,    88,    89,    90,    91,    92,
       0,    84,     0,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,    92,     0,    84,     0,    85,     0,     0,     0,
       0,     0,   145,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,    74,    67,     0,     0,
      75,    76,    77,    78,    79,    80,     0,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     1,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    51,     0,     0,     0,     0,     0,    84,     0,
      85,     0,     0,     0,     0,    26,   147,    27,     0,    28,
      29,    30,     0,     0,    87,    88,    89,    90,    91,    92,
       1,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,   233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,     0,    30,     0,     0,   342,   304,
       0,   186,     0,     0,     0,     0,     1,    53,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
       0,    30,     0,     0,     1,   234,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,   127,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,     0,    30,     0,     0,   185,
     304,     1,   186,     0,     0,     0,     0,     0,    53,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,     0,    29,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,   246,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,   358,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     1,   126,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
       0,    30,     0,     0,     1,   385,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
       1,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   414,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,     1,    30,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,    26,     0,    27,     0,    28,     0,    30,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     0,    27,     0,     0,    29,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27
};

static const yytype_int16 yycheck[] =
{
      57,    86,    32,    48,    49,   132,     0,    59,    53,   142,
      48,    49,    53,    50,   127,   187,   114,   136,    63,    11,
      11,    97,    98,    93,    48,    63,    50,    85,    96,   409,
      11,    11,    85,   101,   102,   107,    85,    11,    63,    33,
      34,    86,    85,    63,    57,    39,    40,    41,    86,    43,
     108,    48,    49,   133,    87,   108,    11,    11,     3,   108,
     145,     3,   147,   127,    99,   108,    85,    93,   113,   133,
     115,    11,    91,   114,   131,   113,   161,   115,   123,    87,
     144,   326,   123,   463,    87,    11,    11,   151,   133,    86,
     135,   136,    87,   113,   124,   115,   160,   135,   136,   129,
     145,    93,   147,    94,   141,   150,   186,   145,   138,   147,
     135,   136,   150,   126,    94,   135,   136,   141,   131,    93,
     253,    11,   186,    87,    69,    11,   245,    69,   213,   164,
     165,   166,    87,    87,    87,    89,    87,   235,   132,    90,
     105,   186,    96,   200,   185,    96,    87,    87,   145,    90,
     147,    22,    23,   150,   108,    26,    96,    95,   403,   404,
     240,    87,    87,    89,   228,    90,   203,    90,   108,    92,
      96,    96,   344,   106,    85,    27,   240,    88,    85,   203,
     244,    47,    48,    49,   107,    87,   313,    94,    90,    85,
      28,   185,    85,    85,   235,   240,    11,    87,    94,   244,
     245,    87,    94,    88,    90,   235,    96,   245,    88,   222,
      85,   248,   276,   277,    80,    88,    17,    18,    19,    94,
     245,    20,    21,    11,   248,   245,   339,   307,    87,    14,
      96,    90,   103,   104,   314,    24,    25,   322,   323,   324,
      88,   208,    85,   307,   279,    88,    85,   311,    88,    88,
     314,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    85,   307,   107,    88,    85,   311,   108,    88,   314,
     171,   172,   173,   174,   175,   339,    85,    85,    85,    88,
      88,    88,    85,   167,   168,    88,    87,   351,    93,    90,
     354,    92,   344,    87,    85,    87,   409,    88,   335,    85,
     364,   342,    88,    87,   169,   170,   351,   387,   372,    85,
      89,   335,    88,   326,    85,   379,    89,    88,   382,   313,
     176,   177,    87,   387,   369,   362,    87,   391,    11,   107,
     360,   369,    85,   108,   379,    88,   393,    48,   362,    50,
     108,    85,   387,   456,    88,   409,   391,    88,   342,    85,
     463,    91,   319,   347,   321,    89,    91,    88,    88,   444,
      88,    85,    88,    88,   449,     6,   451,   452,    91,    80,
      81,    82,   436,    91,    88,   439,    11,    89,    71,   108,
      11,    11,    91,    91,    91,    88,    91,    93,    99,    91,
      91,   436,   456,    91,     9,   459,    87,     9,   462,   463,
       8,    91,    91,    91,   108,    89,    91,    89,   493,   108,
      91,    91,    91,    91,   499,   460,    91,    87,    87,    87,
      85,    88,   460,   160,   509,   179,   511,   178,   460,   396,
     141,   488,   180,   182,   181,   135,   360,   124,   347,   222,
      69,   372,   340,    43,    -1,    -1,    -1,   511,    -1,    -1,
      -1,    -1,    -1,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   446,
     447,   448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     477,    -1,   479,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,
     497,    -1,    -1,   500,    -1,    -1,    -1,   248,    -1,    -1,
      -1,    -1,    -1,   510,    -1,   512,    -1,    -1,    -1,    -1,
      -1,   518,    -1,    -1,   521,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,    -1,     7,    -1,   279,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,   335,    66,    67,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,   362,    93,    94,    95,    96,    97,    98,    99,   100,
      -1,    -1,     4,     5,    -1,     7,    -1,   108,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
      -1,     4,     5,    -1,     7,    -1,   108,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    67,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    80,    79,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    95,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,     7,    -1,    -1,   108,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,    -1,    -1,    -1,    -1,
       7,    -1,    -1,   108,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    40,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,     7,     0,    -1,    -1,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    11,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    78,    87,    80,    -1,    82,
      83,    84,    -1,    -1,    95,    96,    97,    98,    99,   100,
      39,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    80,    -1,    82,    -1,    84,    -1,    -1,    87,    88,
      -1,    90,    -1,    -1,    -1,    -1,    39,    96,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,
      -1,    84,    -1,    -1,    39,    88,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    80,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,   107,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    80,    -1,    82,    -1,    84,    -1,    -1,    87,
      88,    39,    90,    -1,    -1,    -1,    -1,    -1,    96,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    94,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    80,    -1,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    93,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,
      -1,    84,    -1,    -1,    39,    88,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    80,    -1,    82,    83,    84,
      39,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    80,    -1,    82,    39,    84,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    78,    -1,    80,    -1,    82,    -1,    84,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    80,    -1,    -1,    83,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    39,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    78,    80,    82,    83,
      84,   137,   138,   141,   142,   143,   144,   150,   153,   154,
     155,   156,   173,   187,   188,   189,    11,    93,    87,    87,
      87,    11,    87,    96,   108,   139,   140,   157,   158,   159,
     138,   138,    11,    93,   138,   138,   138,     0,   188,    93,
      11,   112,   151,   152,     7,    11,    12,    13,    14,    15,
      16,    18,    19,    40,    79,    81,    87,    95,    96,    97,
      98,    99,   100,   110,   111,   113,   114,   117,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   136,   142,   147,   154,   165,   165,   136,   157,
      80,   154,   159,   160,    85,   108,    93,   107,   137,   138,
     177,   190,    87,    90,   158,    93,   145,   146,   147,   173,
     151,   107,    85,    94,    87,    87,   119,    87,   119,   119,
      87,    87,   119,   132,   133,   135,   165,    17,    18,    19,
      87,    90,    92,   121,    96,   101,   102,    97,    98,    20,
      21,    22,    23,    26,   103,   104,    24,    25,    95,   105,
     106,    27,    28,    88,   147,    87,    90,   159,   166,   167,
     147,    88,    88,    85,    88,   154,   159,   140,   157,     4,
       5,    10,    11,    66,    67,    68,    70,    71,    72,    73,
      74,    75,    76,    77,    94,   108,   135,   137,   174,   175,
     176,   177,   178,   179,   180,   182,   185,   186,    93,   133,
     168,   137,   177,    11,    88,   138,   161,   162,   163,   164,
      43,    91,    96,   133,   160,   145,    94,   146,    89,   108,
     148,   149,   157,    85,    94,   136,    94,   152,    88,   118,
     133,   165,   165,   165,   133,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,   107,   134,    85,    88,    88,
      11,    88,   118,   135,    11,   121,   121,   121,   122,   122,
     123,   123,   124,   124,   124,   124,   124,   125,   125,   126,
     127,   128,   129,   130,    88,   161,   166,    43,    91,    96,
     133,   160,   167,    87,    90,    14,   108,   177,    87,    89,
     136,    89,    87,    87,    87,   175,    87,    11,   108,   108,
     108,   135,   108,    94,   179,    90,    92,   168,   169,   170,
     171,   172,    87,   157,   159,   166,    88,    85,    85,    88,
     133,   160,    91,    91,    43,    91,    96,   133,    94,   136,
      85,   108,    89,    94,    85,    88,    88,    88,    88,    85,
     133,   133,    93,   121,    88,    91,    88,    88,   133,   160,
      91,    91,    43,    91,   133,    88,   161,    43,    91,    96,
     133,   160,    88,     6,    11,   175,    89,   175,   135,   135,
     135,    71,    11,   137,   180,   108,   108,   136,    11,    85,
      94,   168,   107,   172,    65,   163,    11,    91,   133,   133,
      91,    91,   149,   136,   133,    67,   115,   116,   165,   169,
      91,   133,   133,    91,    88,   133,   160,    91,    91,    43,
      91,   133,   108,   177,     9,   175,    88,    88,    88,    87,
       9,   180,   180,    91,    94,   168,   170,    91,    91,    89,
      85,    88,    89,    85,    94,    91,    91,    91,   133,   133,
      91,   135,   175,   175,   175,   135,     8,    88,   135,    88,
     135,   168,   133,   116,   133,    94,    91,    91,    88,     3,
      69,   181,    88,    87,   175,    88,   175,    88,   177,    87,
     183,     3,    69,   108,   135,   175,   175,   135,   175,    87,
     184,    85,    88,   135,   175,   133,   135,   175,    88,    88,
     175,    88,   175
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
     153,   154,   154,   154,   154,   155,   155,   156,   156,   157,
     157,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   159,   159,   159,   159,   160,
     160,   161,   161,   162,   162,   163,   163,   163,   164,   164,
     165,   165,   166,   166,   166,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   168,   168,   168,   169,
     169,   169,   169,   170,   171,   171,   172,   172,   173,   174,
     175,   175,   175,   175,   175,   175,   175,   175,   176,   176,
     176,   177,   177,   178,   178,   179,   179,   180,   180,   181,
     181,   183,   182,   182,   184,   182,   182,   182,   185,   185,
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
       4,     1,     1,     1,     1,     1,     1,     4,     4,     2,
       1,     1,     3,     3,     4,     6,     5,     5,     6,     5,
       4,     4,     4,     3,     4,     3,     2,     2,     1,     1,
       2,     3,     1,     1,     3,     2,     2,     1,     1,     3,
       2,     1,     2,     1,     1,     3,     2,     3,     5,     4,
       5,     4,     3,     3,     3,     4,     6,     5,     5,     6,
       4,     4,     2,     3,     3,     4,     3,     4,     1,     2,
       1,     4,     3,     2,     1,     2,     3,     2,     7,     4,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     4,
       3,     2,     3,     1,     2,     1,     1,     1,     2,     5,
       6,     0,     8,     5,     0,     9,     6,     5,     5,     7,
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
#line 2116 "yapl.tab.c"
    break;

  case 169: /* declarator: pointer direct_declarator  */
#line 364 "yapl.y"
                                { pointer_decls++; }
#line 2122 "yapl.tab.c"
    break;

  case 261: /* $@1: %empty  */
#line 532 "yapl.y"
                                           { ladder_len++; (yyvsp[0].val) = (ladder_len-1); }
#line 2128 "yapl.tab.c"
    break;

  case 262: /* selection_statement: IF '(' expression ')' statement ELSE $@1 statement  */
#line 533 "yapl.y"
        { 
            if(ladder_len >= max) { max = ladder_len; } 
            ladder_len = (yyvsp[-2].val); 
        }
#line 2137 "yapl.tab.c"
    break;

  case 263: /* selection_statement: IF '(' expression ')' statement  */
#line 538 "yapl.y"
        { ifs_wo_else++; }
#line 2143 "yapl.tab.c"
    break;

  case 264: /* $@2: %empty  */
#line 540 "yapl.y"
        { ladder_len++; (yyvsp[0].val) = (ladder_len-1); }
#line 2149 "yapl.tab.c"
    break;

  case 265: /* selection_statement: IF '(' expression ')' statement elif_list ELSE $@2 statement  */
#line 542 "yapl.y"
        { 
            if(ladder_len >= max) { max = ladder_len; } 
            ladder_len = (yyvsp[-2].val); 
        }
#line 2158 "yapl.tab.c"
    break;

  case 266: /* selection_statement: IF '(' expression ')' statement elif_list  */
#line 547 "yapl.y"
        { /* Logic for if-elif without final else */ }
#line 2164 "yapl.tab.c"
    break;

  case 281: /* translation_unit: external_declaration  */
#line 572 "yapl.y"
                               {global_declarations++;}
#line 2170 "yapl.tab.c"
    break;

  case 282: /* translation_unit: translation_unit external_declaration  */
#line 573 "yapl.y"
                                                {global_declarations++;}
#line 2176 "yapl.tab.c"
    break;

  case 283: /* external_declaration: function_definition  */
#line 577 "yapl.y"
                              {func_definitions++;}
#line 2182 "yapl.tab.c"
    break;


#line 2186 "yapl.tab.c"

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

#line 591 "yapl.y"

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
