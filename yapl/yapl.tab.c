/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     I_CONSTANT = 259,
     F_CONSTANT = 260,
     STRING_LITERAL = 261,
     FUNC_NAME = 262,
     SIZEOF = 263,
     PTR_OP = 264,
     INC_OP = 265,
     DEC_OP = 266,
     LEFT_OP = 267,
     RIGHT_OP = 268,
     LE_OP = 269,
     GE_OP = 270,
     EQ_OP = 271,
     NE_OP = 272,
     TH_OP = 273,
     AND_OP = 274,
     OR_OP = 275,
     MUL_ASSIGN = 276,
     DIV_ASSIGN = 277,
     MOD_ASSIGN = 278,
     ADD_ASSIGN = 279,
     SUB_ASSIGN = 280,
     LEFT_ASSIGN = 281,
     RIGHT_ASSIGN = 282,
     AND_ASSIGN = 283,
     XOR_ASSIGN = 284,
     OR_ASSIGN = 285,
     TYPEDEF_NAME = 286,
     ENUMERATION_CONSTANT = 287,
     TYPEDEF = 288,
     EXTERN = 289,
     STATIC = 290,
     AUTO = 291,
     REGISTER = 292,
     INLINE = 293,
     CONST = 294,
     RESTRICT = 295,
     VOLATILE = 296,
     BOOL = 297,
     CHAR = 298,
     SHORT = 299,
     INT = 300,
     LONG = 301,
     SIGNED = 302,
     UNSIGNED = 303,
     FLOAT = 304,
     DOUBLE = 305,
     VOID = 306,
     COMPLEX = 307,
     IMAGINARY = 308,
     STRUCT = 309,
     UNION = 310,
     ENUM = 311,
     ELLIPSIS = 312,
     CASE = 313,
     DEFAULT = 314,
     IF = 315,
     ELSE = 316,
     SWITCH = 317,
     WHILE = 318,
     DO = 319,
     FOR = 320,
     GOTO = 321,
     CONTINUE = 322,
     BREAK = 323,
     RETURN = 324,
     ALIGNAS = 325,
     ALIGNOF = 326,
     ATOMIC = 327,
     GENERIC = 328,
     NORETURN = 329,
     STATIC_ASSERT = 330,
     THREAD_LOCAL = 331
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define I_CONSTANT 259
#define F_CONSTANT 260
#define STRING_LITERAL 261
#define FUNC_NAME 262
#define SIZEOF 263
#define PTR_OP 264
#define INC_OP 265
#define DEC_OP 266
#define LEFT_OP 267
#define RIGHT_OP 268
#define LE_OP 269
#define GE_OP 270
#define EQ_OP 271
#define NE_OP 272
#define TH_OP 273
#define AND_OP 274
#define OR_OP 275
#define MUL_ASSIGN 276
#define DIV_ASSIGN 277
#define MOD_ASSIGN 278
#define ADD_ASSIGN 279
#define SUB_ASSIGN 280
#define LEFT_ASSIGN 281
#define RIGHT_ASSIGN 282
#define AND_ASSIGN 283
#define XOR_ASSIGN 284
#define OR_ASSIGN 285
#define TYPEDEF_NAME 286
#define ENUMERATION_CONSTANT 287
#define TYPEDEF 288
#define EXTERN 289
#define STATIC 290
#define AUTO 291
#define REGISTER 292
#define INLINE 293
#define CONST 294
#define RESTRICT 295
#define VOLATILE 296
#define BOOL 297
#define CHAR 298
#define SHORT 299
#define INT 300
#define LONG 301
#define SIGNED 302
#define UNSIGNED 303
#define FLOAT 304
#define DOUBLE 305
#define VOID 306
#define COMPLEX 307
#define IMAGINARY 308
#define STRUCT 309
#define UNION 310
#define ENUM 311
#define ELLIPSIS 312
#define CASE 313
#define DEFAULT 314
#define IF 315
#define ELSE 316
#define SWITCH 317
#define WHILE 318
#define DO 319
#define FOR 320
#define GOTO 321
#define CONTINUE 322
#define BREAK 323
#define RETURN 324
#define ALIGNAS 325
#define ALIGNOF 326
#define ATOMIC 327
#define GENERIC 328
#define NORETURN 329
#define STATIC_ASSERT 330
#define THREAD_LOCAL 331




/* Copy the first part of user declarations.  */
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


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 41 "yapl.y"
{
	int val;
	struct symtab *symp;
}
/* Line 193 of yacc.c.  */
#line 269 "yapl.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 282 "yapl.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2500

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  277
/* YYNRULES -- Number of states.  */
#define YYNSTATES  480

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,     2,     2,     2,    93,    86,     2,
      77,    78,    87,    88,    79,    89,    83,    92,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    99,
      94,    98,    95,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,     2,    82,    96,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    97,    85,    90,     2,     2,     2,
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
      75,    76
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    17,    19,
      21,    23,    25,    27,    34,    36,    40,    44,    48,    50,
      55,    59,    64,    68,    72,    75,    78,    85,    93,    95,
      99,   101,   104,   107,   110,   113,   118,   123,   125,   127,
     129,   131,   133,   135,   137,   142,   144,   148,   152,   156,
     158,   162,   166,   168,   172,   176,   178,   182,   186,   190,
     194,   198,   200,   204,   208,   210,   214,   216,   220,   222,
     226,   228,   232,   234,   238,   240,   242,   246,   248,   250,
     252,   254,   256,   258,   260,   262,   264,   266,   268,   270,
     274,   276,   279,   283,   285,   288,   290,   293,   295,   298,
     300,   303,   305,   308,   310,   312,   316,   320,   322,   324,
     326,   328,   330,   332,   334,   336,   338,   340,   342,   344,
     346,   348,   350,   352,   354,   356,   358,   360,   362,   364,
     366,   371,   377,   380,   382,   384,   386,   389,   392,   396,
     398,   401,   403,   406,   408,   410,   414,   417,   421,   423,
     428,   434,   440,   447,   450,   452,   456,   460,   462,   467,
     469,   471,   473,   475,   477,   479,   484,   489,   490,   494,
     496,   498,   502,   506,   511,   518,   524,   530,   537,   543,
     548,   553,   558,   562,   567,   571,   574,   577,   579,   581,
     584,   588,   590,   592,   596,   599,   602,   604,   606,   610,
     613,   615,   618,   620,   622,   626,   629,   633,   639,   644,
     650,   655,   659,   663,   667,   672,   679,   685,   691,   698,
     703,   708,   711,   715,   719,   724,   728,   733,   735,   738,
     740,   745,   749,   752,   754,   757,   761,   764,   772,   774,
     776,   778,   780,   782,   784,   788,   793,   797,   800,   804,
     806,   809,   811,   813,   815,   818,   819,   828,   834,   840,
     846,   854,   861,   869,   876,   884,   888,   891,   894,   897,
     901,   903,   906,   908,   910,   915,   919,   921
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     176,     0,    -1,     3,    -1,   102,    -1,   104,    -1,    77,
     126,    78,    -1,   105,    -1,     4,    -1,     5,    -1,    32,
      -1,     3,    -1,     6,    -1,     7,    -1,    73,    77,   124,
      79,   106,    78,    -1,   107,    -1,   106,    79,   107,    -1,
     157,    80,   124,    -1,    59,    80,   124,    -1,   101,    -1,
     108,    81,   126,    82,    -1,   108,    77,    78,    -1,   108,
      77,   109,    78,    -1,   108,    83,     3,    -1,   108,     9,
       3,    -1,   108,    10,    -1,   108,    11,    -1,    77,   157,
      78,    84,   161,    85,    -1,    77,   157,    78,    84,   161,
      79,    85,    -1,   124,    -1,   109,    79,   124,    -1,   108,
      -1,    10,   110,    -1,    11,   110,    -1,   111,   112,    -1,
       8,   110,    -1,     8,    77,   157,    78,    -1,    71,    77,
     157,    78,    -1,    86,    -1,    87,    -1,    88,    -1,    89,
      -1,    90,    -1,    91,    -1,   110,    -1,    77,   157,    78,
     112,    -1,   112,    -1,   113,    87,   112,    -1,   113,    92,
     112,    -1,   113,    93,   112,    -1,   113,    -1,   114,    88,
     113,    -1,   114,    89,   113,    -1,   114,    -1,   115,    12,
     114,    -1,   115,    13,   114,    -1,   115,    -1,   116,    94,
     115,    -1,   116,    95,   115,    -1,   116,    14,   115,    -1,
     116,    15,   115,    -1,   116,    18,   115,    -1,   116,    -1,
     117,    16,   116,    -1,   117,    17,   116,    -1,   117,    -1,
     118,    86,   117,    -1,   118,    -1,   119,    96,   118,    -1,
     119,    -1,   120,    97,   119,    -1,   120,    -1,   121,    19,
     120,    -1,   121,    -1,   122,    20,   121,    -1,   122,    -1,
     123,    -1,   110,   125,   124,    -1,    98,    -1,    21,    -1,
      22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,
      27,    -1,    28,    -1,    29,    -1,    30,    -1,   124,    -1,
     126,    79,   124,    -1,   123,    -1,   129,    99,    -1,   129,
     130,    99,    -1,   165,    -1,   132,   129,    -1,   132,    -1,
     133,   129,    -1,   133,    -1,   145,   129,    -1,   145,    -1,
     146,   129,    -1,   146,    -1,   147,   129,    -1,   147,    -1,
     131,    -1,   130,    79,   131,    -1,   148,    98,   160,    -1,
     148,    -1,    33,    -1,    34,    -1,    35,    -1,    76,    -1,
      36,    -1,    37,    -1,    51,    -1,    43,    -1,    44,    -1,
      45,    -1,    46,    -1,    49,    -1,    50,    -1,    47,    -1,
      48,    -1,    42,    -1,    52,    -1,    53,    -1,   144,    -1,
     134,    -1,   141,    -1,    31,    -1,   135,    84,   136,    85,
      -1,   135,     3,    84,   136,    85,    -1,   135,     3,    -1,
      54,    -1,    55,    -1,   137,    -1,   136,   137,    -1,   138,
      99,    -1,   138,   139,    99,    -1,   165,    -1,   133,   138,
      -1,   133,    -1,   145,   138,    -1,   145,    -1,   140,    -1,
     139,    79,   140,    -1,    80,   127,    -1,   148,    80,   127,
      -1,   148,    -1,    56,    84,   142,    85,    -1,    56,    84,
     142,    79,    85,    -1,    56,     3,    84,   142,    85,    -1,
      56,     3,    84,   142,    79,    85,    -1,    56,     3,    -1,
     143,    -1,   142,    79,   143,    -1,   103,    98,   127,    -1,
     103,    -1,    72,    77,   157,    78,    -1,    39,    -1,    40,
      -1,    41,    -1,    72,    -1,    38,    -1,    74,    -1,    70,
      77,   157,    78,    -1,    70,    77,   127,    78,    -1,    -1,
     151,   149,   150,    -1,   150,    -1,     3,    -1,    77,   148,
      78,    -1,   150,    81,    82,    -1,   150,    81,    87,    82,
      -1,   150,    81,    35,   152,   124,    82,    -1,   150,    81,
      35,   124,    82,    -1,   150,    81,   152,    87,    82,    -1,
     150,    81,   152,    35,   124,    82,    -1,   150,    81,   152,
     124,    82,    -1,   150,    81,   152,    82,    -1,   150,    81,
     124,    82,    -1,   150,    77,   153,    78,    -1,   150,    77,
      78,    -1,   150,    77,   156,    78,    -1,    87,   152,   151,
      -1,    87,   152,    -1,    87,   151,    -1,    87,    -1,   145,
      -1,   152,   145,    -1,   154,    79,    57,    -1,   154,    -1,
     155,    -1,   154,    79,   155,    -1,   129,   148,    -1,   129,
     158,    -1,   129,    -1,     3,    -1,   156,    79,     3,    -1,
     138,   158,    -1,   138,    -1,   151,   159,    -1,   151,    -1,
     159,    -1,    77,   158,    78,    -1,    81,    82,    -1,    81,
      87,    82,    -1,    81,    35,   152,   124,    82,    -1,    81,
      35,   124,    82,    -1,    81,   152,    35,   124,    82,    -1,
      81,   152,   124,    82,    -1,    81,   152,    82,    -1,    81,
     124,    82,    -1,   159,    81,    82,    -1,   159,    81,    87,
      82,    -1,   159,    81,    35,   152,   124,    82,    -1,   159,
      81,    35,   124,    82,    -1,   159,    81,   152,   124,    82,
      -1,   159,    81,   152,    35,   124,    82,    -1,   159,    81,
     152,    82,    -1,   159,    81,   124,    82,    -1,    77,    78,
      -1,    77,   153,    78,    -1,   159,    77,    78,    -1,   159,
      77,   153,    78,    -1,    84,   161,    85,    -1,    84,   161,
      79,    85,    -1,   124,    -1,   162,   160,    -1,   160,    -1,
     161,    79,   162,   160,    -1,   161,    79,   160,    -1,   163,
      98,    -1,   164,    -1,   163,   164,    -1,    81,   127,    82,
      -1,    83,     3,    -1,    75,    77,   127,    79,     6,    78,
      99,    -1,   167,    -1,   168,    -1,   171,    -1,   172,    -1,
     174,    -1,   175,    -1,     3,    80,   166,    -1,    58,   127,
      80,   166,    -1,    59,    80,   166,    -1,    84,    85,    -1,
      84,   169,    85,    -1,   170,    -1,   169,   170,    -1,   128,
      -1,   166,    -1,    99,    -1,   126,    99,    -1,    -1,    60,
      77,   126,    78,   166,    61,   173,   166,    -1,    60,    77,
     126,    78,   166,    -1,    62,    77,   126,    78,   166,    -1,
      63,    77,   126,    78,   166,    -1,    64,   166,    63,    77,
     126,    78,    99,    -1,    65,    77,   171,   171,    78,   166,
      -1,    65,    77,   171,   171,   126,    78,   166,    -1,    65,
      77,   128,   171,    78,   166,    -1,    65,    77,   128,   171,
     126,    78,   166,    -1,    66,     3,    99,    -1,    67,    99,
      -1,    68,    99,    -1,    69,    99,    -1,    69,   126,    99,
      -1,   177,    -1,   176,   177,    -1,   178,    -1,   128,    -1,
     129,   148,   179,   168,    -1,   129,   148,   168,    -1,   128,
      -1,   179,   128,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
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
     339,   340,   341,   345,   346,   350,   351,   355,   355,   356,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   377,   378,   379,   380,   384,   385,
     390,   391,   395,   396,   400,   401,   402,   406,   407,   411,
     412,   416,   417,   418,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   446,   447,   448,   452,   453,
     454,   455,   459,   463,   464,   468,   469,   473,   477,   478,
     479,   480,   481,   482,   486,   487,   488,   492,   493,   497,
     498,   502,   503,   507,   508,   512,   512,   513,   514,   518,
     519,   520,   521,   522,   523,   527,   528,   529,   530,   531,
     535,   536,   540,   541,   545,   546,   550,   551
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "STRING_LITERAL", "FUNC_NAME", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "TH_OP",
  "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF_NAME", "ENUMERATION_CONSTANT",
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "INLINE", "CONST",
  "RESTRICT", "VOLATILE", "BOOL", "CHAR", "SHORT", "INT", "LONG", "SIGNED",
  "UNSIGNED", "FLOAT", "DOUBLE", "VOID", "COMPLEX", "IMAGINARY", "STRUCT",
  "UNION", "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH",
  "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "ALIGNAS",
  "ALIGNOF", "ATOMIC", "GENERIC", "NORETURN", "STATIC_ASSERT",
  "THREAD_LOCAL", "'('", "')'", "','", "':'", "'['", "']'", "'.'", "'{'",
  "'}'", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'",
  "'>'", "'^'", "'|'", "'='", "';'", "$accept", "primary_expression",
  "constant", "enumeration_constant", "string", "generic_selection",
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
  "alignment_specifier", "declarator", "@1", "direct_declarator",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "initializer_list", "designation", "designator_list",
  "designator", "static_assert_declaration", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement", "@2",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,    40,    41,    44,
      58,    91,    93,    46,   123,   125,    38,    42,    43,    45,
     126,    33,    47,    37,    60,    62,    94,   124,    61,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   104,   104,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   113,   113,   113,   114,
     114,   114,   115,   115,   115,   116,   116,   116,   116,   116,
     116,   117,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   123,   124,   124,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   128,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   132,   132,   132,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     134,   134,   134,   135,   135,   136,   136,   137,   137,   137,
     138,   138,   138,   138,   139,   139,   140,   140,   140,   141,
     141,   141,   141,   141,   142,   142,   143,   143,   144,   145,
     145,   145,   145,   146,   146,   147,   147,   149,   148,   148,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   151,   151,   151,   151,   152,   152,
     153,   153,   154,   154,   155,   155,   155,   156,   156,   157,
     157,   158,   158,   158,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   160,   160,   160,   161,   161,
     161,   161,   162,   163,   163,   164,   164,   165,   166,   166,
     166,   166,   166,   166,   167,   167,   167,   168,   168,   169,
     169,   170,   170,   171,   171,   173,   172,   172,   172,   174,
     174,   174,   174,   174,   174,   175,   175,   175,   175,   175,
     176,   176,   177,   177,   178,   178,   179,   179
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
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
       1,     1,     1,     1,     1,     4,     4,     0,     3,     1,
       1,     3,     3,     4,     6,     5,     5,     6,     5,     4,
       4,     4,     3,     4,     3,     2,     2,     1,     1,     2,
       3,     1,     1,     3,     2,     2,     1,     1,     3,     2,
       1,     2,     1,     1,     3,     2,     3,     5,     4,     5,
       4,     3,     3,     3,     4,     6,     5,     5,     6,     4,
       4,     2,     3,     3,     4,     3,     4,     1,     2,     1,
       4,     3,     2,     1,     2,     3,     2,     7,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     3,     1,
       2,     1,     1,     1,     2,     0,     8,     5,     5,     5,
       7,     6,     7,     6,     7,     3,     2,     2,     2,     3,
       1,     2,     1,     1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   129,   108,   109,   110,   112,   113,   163,   159,   160,
     161,   123,   115,   116,   117,   118,   121,   122,   119,   120,
     114,   124,   125,   133,   134,     0,     0,   162,   164,     0,
     111,   273,     0,    95,    97,   127,     0,   128,   126,    99,
     101,   103,    93,     0,   270,   272,   153,     0,     0,     0,
       0,   170,     0,   187,    91,     0,   104,   107,   169,   167,
      94,    96,   132,     0,    98,   100,   102,     1,   271,     0,
      10,   157,     0,   154,     2,     7,     8,    11,    12,     0,
       0,     0,     9,     0,     0,     0,    37,    38,    39,    40,
      41,    42,    18,     3,     4,     6,    30,    43,     0,    45,
      49,    52,    55,    61,    64,    66,    68,    70,    72,    74,
      90,     0,   141,   200,   143,     0,     0,     0,     0,   162,
     188,   186,   185,     0,    92,     0,     0,   276,     0,   275,
       0,     0,     0,     0,     0,     0,   135,     0,   139,     0,
       0,     0,   149,     0,    34,     0,    31,    32,     0,     0,
      43,    75,    88,     0,     0,     0,    24,    25,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   166,   140,     0,     0,   202,   199,   203,   142,   165,
     158,     0,   171,   189,   184,   105,   107,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   247,
     253,     0,   251,   252,   238,   239,     0,   249,   240,   241,
     242,   243,     0,   227,   106,   277,   274,   197,   182,   196,
       0,   191,   192,     0,     0,   172,    38,     0,     0,   168,
       0,   130,   136,     0,   137,     0,   144,   148,     0,   151,
     156,   150,   155,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    77,     0,     5,
       0,     0,    23,    20,     0,    28,     0,    22,    46,    47,
      48,    50,    51,    53,    54,    58,    59,    60,    56,    57,
      62,    63,    65,    67,    69,    71,    73,   221,     0,     0,
       0,   205,    38,     0,     0,   201,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   266,   267,
     268,     0,   254,   248,   250,     0,     0,   229,     0,     0,
       0,   233,     0,   194,   202,   195,   181,     0,   183,     0,
       0,     0,   173,   180,     0,   179,    38,     0,   131,   146,
       0,   138,     0,   152,    35,     0,    36,     0,    76,    89,
       0,    44,    21,     0,    19,   222,   204,     0,     0,   206,
     212,     0,   211,     0,   223,     0,     0,   213,    38,     0,
       0,     0,   244,     0,   246,     0,     0,     0,     0,     0,
       0,   265,   269,     0,   236,     0,   225,   228,   232,   234,
     190,   193,   198,   175,     0,     0,   176,   178,   145,   147,
       0,     0,    14,     0,     0,    29,   208,     0,     0,   210,
     224,     0,     0,   214,   220,     0,   219,     0,   237,   245,
       0,     0,     0,     0,     0,     0,   235,   226,   231,     0,
     174,   177,     0,    13,     0,     0,     0,    26,   207,   209,
     216,     0,     0,   217,   257,   258,   259,     0,     0,     0,
       0,     0,   230,    17,    15,    16,    27,   215,   218,   255,
       0,   263,     0,   261,     0,     0,   260,   264,   262,   256
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    92,    93,    71,    94,    95,   411,   412,    96,   274,
     150,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   151,   152,   268,   211,   111,    31,   128,
      55,    56,    33,    34,    35,    36,   135,   136,   113,   245,
     246,    37,    72,    73,    38,    39,    40,    41,   118,   133,
      58,    59,   122,   298,   231,   232,   233,   413,   299,   187,
     327,   328,   329,   330,   331,    42,   213,   214,   215,   216,
     217,   218,   219,   475,   220,   221,    43,    44,    45,   130
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -362
static const yytype_int16 yypact[] =
{
    2266,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,    35,   -55,   -31,  -362,   -12,
    -362,  -362,    65,  2356,  2356,  -362,    42,  -362,  -362,  2356,
    2356,  2356,  -362,  1853,  -362,  -362,    -9,    55,   854,  2428,
    1684,  -362,    21,   160,  -362,   -60,  -362,  1953,    97,  -362,
    -362,  -362,    -4,   375,  -362,  -362,  -362,  -362,  -362,    55,
    -362,    -2,    61,  -362,  -362,  -362,  -362,  -362,  -362,  1707,
    1730,  1730,  -362,    60,    71,   854,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,   224,  -362,  1684,  -362,
      95,   -11,   226,   155,   211,    70,    67,    86,   156,   173,
    -362,   124,  2428,    81,  2428,   127,   136,   133,   139,  -362,
    -362,  -362,   160,    21,  -362,   429,  1437,  -362,    65,  -362,
    2168,  1907,   943,    17,   375,  2068,  -362,    54,  -362,    87,
    1684,    24,  -362,   854,  -362,   854,  -362,  -362,  2428,  1684,
     340,  -362,  -362,   176,   142,   220,  -362,  -362,  1460,  1684,
     222,  -362,  1684,  1684,  1684,  1684,  1684,  1684,  1684,  1684,
    1684,  1684,  1684,  1684,  1684,  1684,  1684,  1684,  1684,  1684,
    1684,  -362,  -362,  2019,   966,    99,  -362,   145,  -362,  -362,
    -362,   238,  -362,  -362,  -362,  -362,   148,   178,  1684,   184,
     185,   191,   193,   718,   202,   281,   152,   190,   741,  -362,
    -362,   -49,  -362,  -362,  -362,  -362,   538,  -362,  -362,  -362,
    -362,  -362,  1414,  -362,  -362,  -362,  -362,  -362,  -362,    78,
     219,   221,  -362,   182,  1279,  -362,   230,   236,  1055,    97,
    2115,  -362,  -362,  1684,  -362,   -47,  -362,   228,    25,  -362,
    -362,  -362,  -362,   243,   265,   266,   225,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  1684,  -362,
    1684,  1549,  -362,  -362,   188,  -362,   -26,  -362,  -362,  -362,
    -362,    95,    95,   -11,   -11,   226,   226,   226,   226,   226,
     155,   155,   211,    70,    67,    86,   156,  -362,   268,   269,
    1279,  -362,   267,   271,  1078,   145,  2220,  1167,   270,   718,
     274,   718,  1684,  1684,  1684,   293,   628,   258,  -362,  -362,
    -362,   -20,  -362,  -362,  -362,  1684,   355,  -362,   130,  1437,
      52,  -362,  1796,  -362,    37,  -362,  -362,  2312,  -362,   356,
     278,  1279,  -362,  -362,  1684,  -362,   289,   290,  -362,  -362,
      80,  -362,  1684,  -362,   291,   291,  -362,  2394,  -362,  -362,
    1414,  -362,  -362,  1684,  -362,  -362,  -362,   294,  1279,  -362,
    -362,  1684,  -362,   315,  -362,   295,  1279,  -362,   316,   317,
    1190,   301,  -362,   718,  -362,   203,   209,   212,   324,   764,
     764,  -362,  -362,   321,  -362,  1302,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,   322,   323,  -362,  -362,  -362,  -362,
     327,   232,  -362,   328,   134,  -362,  -362,   329,   330,  -362,
    -362,   359,  1279,  -362,  -362,  1684,  -362,   360,  -362,  -362,
     718,   718,   718,  1684,  1572,  1595,  -362,  -362,  -362,  1437,
    -362,  -362,  1684,  -362,  2394,  1684,  1325,  -362,  -362,  -362,
    -362,   361,   362,  -362,   348,  -362,  -362,   248,   718,   252,
     718,   256,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
     311,  -362,   718,  -362,   718,   718,  -362,  -362,  -362,  -362
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -362,  -362,  -362,  -362,  -362,  -362,  -362,     1,  -362,  -362,
     215,  -362,   -35,   171,   174,   105,   164,   272,   275,   273,
     276,   277,  -362,   -19,  -123,  -362,   -83,   -27,   -13,     8,
    -362,   326,  -362,   -42,  -362,  -362,   312,  -110,   -45,  -362,
     103,  -362,   385,  -124,  -362,   -48,  -362,  -362,   -21,  -362,
     357,   -40,   -96,  -121,  -362,   119,  -362,     6,   -97,  -173,
    -122,   147,  -361,  -362,   129,   -30,  -189,  -362,    14,  -362,
     292,  -193,  -362,  -362,  -362,  -362,  -362,   466,  -362,  -362
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -168
static const yytype_int16 yytable[] =
{
     114,   114,   153,   223,   224,   120,   112,   112,    32,   237,
     230,    57,   305,   121,   315,   114,   186,   252,   137,   123,
      51,   112,    48,   117,    51,   242,   256,    70,    70,   110,
     270,   110,   350,   138,   439,   275,   238,   114,    46,   124,
    -167,    60,    61,   112,   127,    62,    49,    64,    65,    66,
     322,    32,   351,   270,   115,   116,   364,    51,    70,   270,
     153,   303,   153,   161,   114,    50,   114,   182,    51,   188,
     112,   129,   112,   185,   193,    69,   276,   165,   166,   392,
     134,    51,   194,    51,   120,   439,   114,   114,   304,   137,
     137,   154,   112,   112,    52,   114,   140,   114,    52,   223,
     114,   112,   196,   112,   138,   138,   112,   196,    53,   251,
     353,   340,   212,   250,   183,   347,   247,   225,   184,    47,
     382,   110,   384,   390,   252,   321,    63,   278,   279,   280,
     242,    52,   335,   325,   243,   326,   120,   148,   341,   229,
     141,    53,    52,   185,   226,   358,   142,   359,   149,   253,
     398,   254,    53,   244,   255,   332,   176,    52,   183,   184,
     243,   305,   184,   177,    54,    53,   248,    53,    53,   169,
     170,   310,   249,   171,   131,   179,   183,   367,   132,   110,
     184,   373,   162,   178,   379,   375,   120,   163,   164,   334,
     193,   229,   114,   180,   429,   137,   434,   435,   112,     8,
       9,    10,   181,   212,   368,   189,   223,   397,   333,   395,
     138,   380,   191,   446,   190,   396,   349,   192,   404,   447,
     271,   405,   306,   272,   110,   277,   307,   174,   175,   385,
     386,   387,   119,   155,   156,   157,   361,   223,   167,   168,
     415,   454,   455,   456,   308,   417,   126,    53,   418,   172,
     173,   318,   120,   421,   269,   270,   193,   427,   309,   120,
     338,   339,   312,    97,   311,    97,   362,   363,   313,   471,
     314,   473,   223,   438,   285,   286,   287,   288,   289,   316,
     422,   430,   270,   477,   317,   478,   479,   431,   270,   319,
     432,   270,   334,   193,   144,   146,   147,   336,   393,   451,
     337,   158,   452,   389,   357,   159,   110,   160,   352,   114,
     443,   444,   342,    97,   229,   112,   223,   462,   343,   463,
     193,   354,   465,   223,   438,   409,   470,   270,   120,   247,
     472,   270,   193,   110,   474,   270,   281,   282,   290,   291,
     229,   283,   284,   355,   356,   229,   365,   366,   381,   369,
     457,   459,   461,   370,   383,    97,   388,   391,   394,   402,
     403,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   406,   407,   420,   193,   360,   416,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,   114,   419,   423,   424,
     428,   433,   112,   436,   440,   441,     1,   442,   445,   469,
     476,   448,   449,    97,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   197,    75,    76,    77,    78,    79,   267,    80,
      81,   450,   453,   467,   468,   464,   240,    27,   292,   195,
      29,   294,   293,   408,   139,   295,   401,   296,    97,   399,
       1,    82,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    97,   198,   199,   200,
     239,   201,   202,   203,   204,   205,   206,   207,   208,    26,
      83,    27,    84,    28,    29,    30,    85,   414,   324,    68,
       0,     0,     0,   125,   209,    86,    87,    88,    89,    90,
      91,     0,     0,     0,     0,     0,     0,     0,   210,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,   197,    75,    76,    77,    78,    79,     0,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     1,
      82,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,   198,   199,   200,     0,
     201,   202,   203,   204,   205,   206,   207,   208,    26,    83,
      27,    84,    28,    29,    30,    85,     0,     0,     0,     0,
       0,     0,   125,   323,    86,    87,    88,    89,    90,    91,
       0,    74,    75,    76,    77,    78,    79,   210,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
      82,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    83,
      27,    84,    28,    29,    30,    85,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,   197,    75,    76,    77,    78,    79,   210,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      82,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    82,    80,    81,   198,   199,   200,     0,
     201,   202,   203,   204,   205,   206,   207,   208,     0,    83,
       0,    84,     0,     0,     0,    85,    82,     0,     0,     0,
       0,     0,   125,     0,    86,    87,    88,    89,    90,    91,
       0,     0,    83,     0,    84,     0,     0,   210,    85,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    90,    91,     0,     0,    83,     0,    84,     0,     0,
     320,    85,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,    88,    89,    90,    91,     0,    74,    75,    76,
      77,    78,    79,   210,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,    82,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,    27,    84,     0,     0,
       0,    85,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,    88,    89,    90,    91,    74,    75,    76,    77,
      78,    79,     0,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    82,    80,    81,   234,     0,
       0,     0,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,     0,
       0,   300,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,    83,   119,    84,     0,     0,     0,
      85,     0,     0,     0,     0,   235,     0,     0,     0,    86,
     236,    88,    89,    90,    91,     0,     0,    83,   119,    84,
       0,     0,     0,    85,     0,     0,     0,     0,   301,     0,
       0,     0,    86,   302,    88,    89,    90,    91,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    82,    80,    81,
     344,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      82,     0,     0,   371,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,    83,   119,    84,     0,
       0,     0,    85,     0,     0,     0,     0,   345,     0,     0,
       0,    86,   346,    88,    89,    90,    91,     0,     0,    83,
     119,    84,     0,     0,     0,    85,     0,     0,     0,     0,
     372,     0,     0,     0,    86,    87,    88,    89,    90,    91,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    82,
      80,    81,   376,     0,     0,     0,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    82,     0,     0,   425,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,    83,   119,
      84,     0,     0,     0,    85,     0,     0,     0,     0,   377,
       0,     0,     0,    86,   378,    88,    89,    90,    91,     0,
       0,    83,   119,    84,     0,     0,     0,    85,     0,     0,
       0,     0,   426,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    82,    80,    81,     0,     0,     0,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    82,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,   119,    84,     0,     0,     0,    85,    82,     0,     0,
       0,     0,     0,     0,     0,    86,    87,    88,    89,    90,
      91,     0,     0,    83,     0,    84,     0,     0,     0,    85,
       0,     0,     0,   325,     0,   326,   222,   437,    86,    87,
      88,    89,    90,    91,     0,     0,    83,     0,    84,     0,
       0,     0,    85,     0,     0,     0,   325,     0,   326,   222,
     466,    86,    87,    88,    89,    90,    91,    74,    75,    76,
      77,    78,    79,     0,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    82,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    82,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,    84,     0,     0,
       0,    85,    82,     0,     0,   325,     0,   326,   222,     0,
      86,    87,    88,    89,    90,    91,     0,     0,    83,     0,
      84,     0,     0,     0,    85,     0,     0,     0,     0,     0,
       0,   222,     0,    86,    87,    88,    89,    90,    91,     0,
       0,    83,     0,    84,     0,     0,     0,    85,   273,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    82,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    82,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,    84,     0,     0,     0,    85,    82,     0,     0,
       0,     0,     0,   360,     0,    86,    87,    88,    89,    90,
      91,     0,     0,    83,     0,    84,     0,     0,     0,    85,
     458,     0,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    91,     0,     0,    83,     0,    84,     0,
       0,     0,    85,   460,     0,     0,     0,     0,     0,     0,
       0,    86,    87,    88,    89,    90,    91,    74,    75,    76,
      77,    78,    79,     0,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    82,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    82,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,    84,     0,     0,
       0,    85,    82,     0,     0,     0,     0,     0,     0,     0,
      86,    87,    88,    89,    90,    91,     0,     0,    83,     0,
      84,     0,     0,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,    51,
       0,    83,     0,    84,     0,     0,     0,   145,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,     0,     0,     0,     0,     0,     1,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     0,    30,   332,   297,     0,     0,   184,     0,     0,
       0,     0,     0,    53,     1,     0,     2,     3,     4,     5,
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
       0,     0,     0,     0,     0,     0,     0,   125,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   126,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,     0,    30,   183,   297,     0,     1,
     184,     0,     0,     0,     0,     0,    53,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,     0,    29,     0,     0,     1,     0,     0,     0,
       0,     0,     0,   241,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     1,
     348,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,    29,    30,     0,     0,     0,     0,     0,
       0,     1,   125,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,     0,    30,     1,   374,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,    29,    30,     1,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,     1,    30,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,    26,     0,    27,     0,
      28,     0,    30,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,   410,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,    27,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27
};

static const yytype_int16 yycheck[] =
{
      48,    49,    85,   126,   126,    53,    48,    49,     0,   132,
     131,    32,   185,    53,   203,    63,   113,   141,    63,    79,
       3,    63,    77,    50,     3,   135,   149,     3,     3,    48,
      79,    50,    79,    63,   395,   158,   132,    85,     3,    99,
       3,    33,    34,    85,    57,     3,    77,    39,    40,    41,
      99,    43,    99,    79,    48,    49,    82,     3,     3,    79,
     143,   184,   145,    98,   112,    77,   114,   112,     3,   114,
     112,    57,   114,   113,   122,    84,   159,    88,    89,    99,
      84,     3,   122,     3,   132,   446,   134,   135,   184,   134,
     135,    85,   134,   135,    77,   143,    98,   145,    77,   222,
     148,   143,   123,   145,   134,   135,   148,   128,    87,    85,
      85,   234,   125,   140,    77,   238,   137,   130,    81,    84,
     309,   140,   311,   316,   248,   208,    84,   162,   163,   164,
     240,    77,   229,    81,    80,    83,   184,    77,   234,   131,
      79,    87,    77,   183,   130,   268,    85,   270,    77,   143,
      98,   145,    87,    99,   148,    77,    86,    77,    77,    81,
      80,   334,    81,    96,    99,    87,    79,    87,    87,    14,
      15,   198,    85,    18,    77,    19,    77,   300,    81,   198,
      81,   304,    87,    97,   307,   306,   234,    92,    93,   229,
     238,   183,   240,    20,   383,   240,   389,   390,   240,    39,
      40,    41,    78,   216,   300,    78,   329,   329,   229,    79,
     240,   307,    79,    79,    78,    85,   243,    78,   341,    85,
      78,   344,    77,     3,   243,     3,    81,    16,    17,   312,
     313,   314,    72,     9,    10,    11,   271,   360,    12,    13,
     363,   430,   431,   432,     6,   368,    98,    87,   371,    94,
      95,    99,   300,   376,    78,    79,   304,   380,    80,   307,
      78,    79,    77,    48,    80,    50,    78,    79,    77,   458,
      77,   460,   395,   395,   169,   170,   171,   172,   173,    77,
     376,    78,    79,   472,     3,   474,   475,    78,    79,    99,
      78,    79,   332,   341,    79,    80,    81,    78,   325,   422,
      79,    77,   425,   316,    79,    81,   325,    83,    80,   357,
      78,    79,    82,    98,   306,   357,   439,   439,    82,   442,
     368,    78,   445,   446,   446,   352,    78,    79,   376,   350,
      78,    79,   380,   352,    78,    79,   165,   166,   174,   175,
     332,   167,   168,    78,    78,   337,    78,    78,    78,    82,
     433,   434,   435,    82,    80,   140,    63,    99,     3,     3,
      82,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    82,    82,    78,   422,    84,    82,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   444,    82,    82,    82,
      99,    77,   444,    82,    82,    82,    31,    80,    80,    61,
      99,    82,    82,   198,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,     3,     4,     5,     6,     7,     8,    98,    10,
      11,    82,    82,    82,    82,   444,   134,    72,   176,   123,
      75,   178,   177,   350,    69,   179,   337,   180,   243,   330,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,   271,    58,    59,    60,
     133,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,   360,   216,    43,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     325,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,     3,     4,     5,     6,     7,     8,    99,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,     3,     4,     5,     6,     7,     8,    99,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      32,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    32,    10,    11,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    71,
      -1,    73,    -1,    -1,    -1,    77,    32,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    71,    -1,    73,    -1,    -1,    99,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    71,    -1,    73,    -1,    -1,
      99,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,     3,     4,     5,
       6,     7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    32,    10,    11,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    71,    72,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    32,    10,    11,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    71,
      72,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    32,
      10,    11,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      -1,    71,    72,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    32,    10,    11,    -1,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    32,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    73,    -1,    -1,    -1,    77,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    71,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    -1,    71,    -1,    73,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    81,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    91,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    32,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    32,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,
      -1,    77,    32,    -1,    -1,    81,    -1,    83,    84,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,    71,    -1,
      73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    86,    87,    88,    89,    90,    91,    -1,
      -1,    71,    -1,    73,    -1,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    32,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    32,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    -1,    -1,    -1,    77,    32,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    71,    -1,    73,    -1,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    71,    -1,    73,    -1,
      -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    32,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    32,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,
      -1,    77,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,    71,    -1,
      73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     3,
      -1,    71,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    31,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,     0,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      74,    -1,    76,    77,    78,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    31,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    -1,    76,    31,    78,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    98,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    74,    -1,    76,    77,    78,    -1,    31,
      81,    -1,    -1,    -1,    -1,    -1,    87,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    75,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      85,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    84,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    74,    -1,    76,    31,    78,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      74,    75,    76,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    74,    31,    76,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    70,    -1,    72,    -1,
      74,    -1,    76,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    70,    72,    74,    75,
      76,   128,   129,   132,   133,   134,   135,   141,   144,   145,
     146,   147,   165,   176,   177,   178,     3,    84,    77,    77,
      77,     3,    77,    87,    99,   130,   131,   148,   150,   151,
     129,   129,     3,    84,   129,   129,   129,     0,   177,    84,
       3,   103,   142,   143,     3,     4,     5,     6,     7,     8,
      10,    11,    32,    71,    73,    77,    86,    87,    88,    89,
      90,    91,   101,   102,   104,   105,   108,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   127,   133,   138,   145,   157,   157,   127,   148,    72,
     145,   151,   152,    79,    99,    84,    98,   128,   129,   168,
     179,    77,    81,   149,    84,   136,   137,   138,   165,   142,
      98,    79,    85,    77,   110,    77,   110,   110,    77,    77,
     110,   123,   124,   126,   157,     9,    10,    11,    77,    81,
      83,   112,    87,    92,    93,    88,    89,    12,    13,    14,
      15,    18,    94,    95,    16,    17,    86,    96,    97,    19,
      20,    78,   138,    77,    81,   151,   158,   159,   138,    78,
      78,    79,    78,   145,   151,   131,   148,     3,    58,    59,
      60,    62,    63,    64,    65,    66,    67,    68,    69,    85,
      99,   126,   128,   166,   167,   168,   169,   170,   171,   172,
     174,   175,    84,   124,   160,   128,   168,     3,    78,   129,
     153,   154,   155,   156,    35,    82,    87,   124,   152,   150,
     136,    85,   137,    80,    99,   139,   140,   148,    79,    85,
     127,    85,   143,   157,   157,   157,   124,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    98,   125,    78,
      79,    78,     3,    78,   109,   124,   126,     3,   112,   112,
     112,   113,   113,   114,   114,   115,   115,   115,   115,   115,
     116,   116,   117,   118,   119,   120,   121,    78,   153,   158,
      35,    82,    87,   124,   152,   159,    77,    81,     6,    80,
     127,    80,    77,    77,    77,   166,    77,     3,    99,    99,
      99,   126,    99,    85,   170,    81,    83,   160,   161,   162,
     163,   164,    77,   148,   151,   158,    78,    79,    78,    79,
     124,   152,    82,    82,    35,    82,    87,   124,    85,   127,
      79,    99,    80,    85,    78,    78,    78,    79,   124,   124,
      84,   112,    78,    79,    82,    78,    78,   124,   152,    82,
      82,    35,    82,   124,    78,   153,    35,    82,    87,   124,
     152,    78,   166,    80,   166,   126,   126,   126,    63,   128,
     171,    99,    99,   127,     3,    79,    85,   160,    98,   164,
      57,   155,     3,    82,   124,   124,    82,    82,   140,   127,
      59,   106,   107,   157,   161,   124,    82,   124,   124,    82,
      78,   124,   152,    82,    82,    35,    82,   124,    99,   166,
      78,    78,    78,    77,   171,   171,    82,    85,   160,   162,
      82,    82,    80,    78,    79,    80,    79,    85,    82,    82,
      82,   124,   124,    82,   166,   166,   166,   126,    78,   126,
      78,   126,   160,   124,   107,   124,    85,    82,    82,    61,
      78,   166,    78,   166,    78,   173,    99,   166,   166,   166
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 7:
#line 57 "yapl.y"
    {int_consts++;;}
    break;

  case 167:
#line 355 "yapl.y"
    {pointer_decls++;;}
    break;

  case 255:
#line 512 "yapl.y"
    {ladder_len++;(yyvsp[(6) - (6)].val)=(ladder_len-1);;}
    break;

  case 256:
#line 512 "yapl.y"
    {if(ladder_len>=max){max=ladder_len;} /*printf("ladder_len=%d\n",ladder_len);*/ladder_len=(yyvsp[(6) - (8)].val);;}
    break;

  case 257:
#line 513 "yapl.y"
    {ifs_wo_else++;;}
    break;

  case 270:
#line 535 "yapl.y"
    {global_declarations++;;}
    break;

  case 271:
#line 536 "yapl.y"
    {global_declarations++;;}
    break;

  case 272:
#line 540 "yapl.y"
    {func_definitions++;;}
    break;


/* Line 1267 of yacc.c.  */
#line 2411 "yapl.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 554 "yapl.y"

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

