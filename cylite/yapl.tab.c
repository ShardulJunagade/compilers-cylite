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
     ELIF = 258,
     PASS = 259,
     TRY = 260,
     EXCEPT = 261,
     PRINT = 262,
     RANGE = 263,
     IN = 264,
     FOREACH = 265,
     IDENTIFIER = 266,
     I_CONSTANT = 267,
     F_CONSTANT = 268,
     STRING_LITERAL = 269,
     FUNC_NAME = 270,
     SIZEOF = 271,
     PTR_OP = 272,
     INC_OP = 273,
     DEC_OP = 274,
     LEFT_OP = 275,
     RIGHT_OP = 276,
     LE_OP = 277,
     GE_OP = 278,
     EQ_OP = 279,
     NE_OP = 280,
     TH_OP = 281,
     AND_OP = 282,
     OR_OP = 283,
     MUL_ASSIGN = 284,
     DIV_ASSIGN = 285,
     MOD_ASSIGN = 286,
     ADD_ASSIGN = 287,
     SUB_ASSIGN = 288,
     LEFT_ASSIGN = 289,
     RIGHT_ASSIGN = 290,
     AND_ASSIGN = 291,
     XOR_ASSIGN = 292,
     OR_ASSIGN = 293,
     TYPEDEF_NAME = 294,
     ENUMERATION_CONSTANT = 295,
     TYPEDEF = 296,
     EXTERN = 297,
     STATIC = 298,
     AUTO = 299,
     REGISTER = 300,
     INLINE = 301,
     CONST = 302,
     RESTRICT = 303,
     VOLATILE = 304,
     BOOL = 305,
     CHAR = 306,
     SHORT = 307,
     INT = 308,
     LONG = 309,
     SIGNED = 310,
     UNSIGNED = 311,
     FLOAT = 312,
     DOUBLE = 313,
     VOID = 314,
     COMPLEX = 315,
     IMAGINARY = 316,
     STRUCT = 317,
     UNION = 318,
     ENUM = 319,
     ELLIPSIS = 320,
     CASE = 321,
     DEFAULT = 322,
     IF = 323,
     ELSE = 324,
     SWITCH = 325,
     WHILE = 326,
     DO = 327,
     FOR = 328,
     GOTO = 329,
     CONTINUE = 330,
     BREAK = 331,
     RETURN = 332,
     ALIGNAS = 333,
     ALIGNOF = 334,
     ATOMIC = 335,
     GENERIC = 336,
     NORETURN = 337,
     STATIC_ASSERT = 338,
     THREAD_LOCAL = 339
   };
#endif
/* Tokens.  */
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
#line 285 "yapl.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 298 "yapl.tab.c"

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
#define YYLAST   2627

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNRULES -- Number of states.  */
#define YYNSTATES  486

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   339

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
     469,   471,   473,   475,   477,   482,   487,   490,   492,   494,
     498,   502,   507,   514,   520,   526,   533,   539,   544,   549,
     554,   558,   563,   567,   570,   573,   575,   577,   580,   584,
     586,   588,   592,   595,   598,   600,   602,   606,   609,   611,
     614,   616,   618,   622,   625,   629,   635,   640,   646,   651,
     655,   659,   663,   668,   675,   681,   687,   694,   699,   704,
     707,   711,   715,   720,   724,   729,   731,   734,   736,   741,
     745,   748,   750,   753,   757,   760,   768,   770,   772,   776,
     781,   785,   788,   792,   794,   797,   799,   801,   803,   806,
     808,   810,   812,   814,   816,   822,   830,   836,   844,   850,
     858,   865,   873,   880,   888,   892,   895,   898,   901,   905,
     907,   910,   912,   914,   919,   923,   925
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     183,     0,    -1,    11,    -1,   110,    -1,   112,    -1,    85,
     134,    86,    -1,   113,    -1,    12,    -1,    13,    -1,    40,
      -1,    11,    -1,    14,    -1,    15,    -1,    81,    85,   132,
      87,   114,    86,    -1,   115,    -1,   114,    87,   115,    -1,
     164,    88,   132,    -1,    67,    88,   132,    -1,   109,    -1,
     116,    89,   134,    90,    -1,   116,    85,    86,    -1,   116,
      85,   117,    86,    -1,   116,    91,    11,    -1,   116,    17,
      11,    -1,   116,    18,    -1,   116,    19,    -1,    85,   164,
      86,    92,   168,    93,    -1,    85,   164,    86,    92,   168,
      87,    93,    -1,   132,    -1,   117,    87,   132,    -1,   116,
      -1,    18,   118,    -1,    19,   118,    -1,   119,   120,    -1,
      16,   118,    -1,    16,    85,   164,    86,    -1,    79,    85,
     164,    86,    -1,    94,    -1,    95,    -1,    96,    -1,    97,
      -1,    98,    -1,    99,    -1,   118,    -1,    85,   164,    86,
     120,    -1,   120,    -1,   121,    95,   120,    -1,   121,   100,
     120,    -1,   121,   101,   120,    -1,   121,    -1,   122,    96,
     121,    -1,   122,    97,   121,    -1,   122,    -1,   123,    20,
     122,    -1,   123,    21,   122,    -1,   123,    -1,   124,   102,
     123,    -1,   124,   103,   123,    -1,   124,    22,   123,    -1,
     124,    23,   123,    -1,   124,    26,   123,    -1,   124,    -1,
     125,    24,   124,    -1,   125,    25,   124,    -1,   125,    -1,
     126,    94,   125,    -1,   126,    -1,   127,   104,   126,    -1,
     127,    -1,   128,   105,   127,    -1,   128,    -1,   129,    27,
     128,    -1,   129,    -1,   130,    28,   129,    -1,   130,    -1,
     131,    -1,   118,   133,   132,    -1,   106,    -1,    29,    -1,
      30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,
      35,    -1,    36,    -1,    37,    -1,    38,    -1,   132,    -1,
     134,    87,   132,    -1,   131,    -1,   137,   107,    -1,   137,
     138,   107,    -1,   172,    -1,   140,   137,    -1,   140,    -1,
     141,   137,    -1,   141,    -1,   153,   137,    -1,   153,    -1,
     154,   137,    -1,   154,    -1,   155,   137,    -1,   155,    -1,
     139,    -1,   138,    87,   139,    -1,   156,   106,   167,    -1,
     156,    -1,    41,    -1,    42,    -1,    43,    -1,    84,    -1,
      44,    -1,    45,    -1,    59,    -1,    51,    -1,    52,    -1,
      53,    -1,    54,    -1,    57,    -1,    58,    -1,    55,    -1,
      56,    -1,    50,    -1,    60,    -1,    61,    -1,   152,    -1,
     142,    -1,   149,    -1,    39,    -1,   143,    92,   144,    93,
      -1,   143,    11,    92,   144,    93,    -1,   143,    11,    -1,
      62,    -1,    63,    -1,   145,    -1,   144,   145,    -1,   146,
     107,    -1,   146,   147,   107,    -1,   172,    -1,   141,   146,
      -1,   141,    -1,   153,   146,    -1,   153,    -1,   148,    -1,
     147,    87,   148,    -1,    88,   135,    -1,   156,    88,   135,
      -1,   156,    -1,    64,    92,   150,    93,    -1,    64,    92,
     150,    87,    93,    -1,    64,    11,    92,   150,    93,    -1,
      64,    11,    92,   150,    87,    93,    -1,    64,    11,    -1,
     151,    -1,   150,    87,   151,    -1,   111,   106,   135,    -1,
     111,    -1,    80,    85,   164,    86,    -1,    47,    -1,    48,
      -1,    49,    -1,    46,    -1,    82,    -1,    78,    85,   164,
      86,    -1,    78,    85,   135,    86,    -1,   158,   157,    -1,
     157,    -1,    11,    -1,    85,   156,    86,    -1,   157,    89,
      90,    -1,   157,    89,    95,    90,    -1,   157,    89,    43,
     159,   132,    90,    -1,   157,    89,    43,   132,    90,    -1,
     157,    89,   159,    95,    90,    -1,   157,    89,   159,    43,
     132,    90,    -1,   157,    89,   159,   132,    90,    -1,   157,
      89,   159,    90,    -1,   157,    89,   132,    90,    -1,   157,
      85,   160,    86,    -1,   157,    85,    86,    -1,   157,    85,
     163,    86,    -1,    95,   159,   158,    -1,    95,   159,    -1,
      95,   158,    -1,    95,    -1,   153,    -1,   159,   153,    -1,
     161,    87,    65,    -1,   161,    -1,   162,    -1,   161,    87,
     162,    -1,   137,   156,    -1,   137,   165,    -1,   137,    -1,
      11,    -1,   163,    87,    11,    -1,   146,   165,    -1,   146,
      -1,   158,   166,    -1,   158,    -1,   166,    -1,    85,   165,
      86,    -1,    89,    90,    -1,    89,    95,    90,    -1,    89,
      43,   159,   132,    90,    -1,    89,    43,   132,    90,    -1,
      89,   159,    43,   132,    90,    -1,    89,   159,   132,    90,
      -1,    89,   159,    90,    -1,    89,   132,    90,    -1,   166,
      89,    90,    -1,   166,    89,    95,    90,    -1,   166,    89,
      43,   159,   132,    90,    -1,   166,    89,    43,   132,    90,
      -1,   166,    89,   159,   132,    90,    -1,   166,    89,   159,
      43,   132,    90,    -1,   166,    89,   159,    90,    -1,   166,
      89,   132,    90,    -1,    85,    86,    -1,    85,   160,    86,
      -1,   166,    85,    86,    -1,   166,    85,   160,    86,    -1,
      92,   168,    93,    -1,    92,   168,    87,    93,    -1,   132,
      -1,   169,   167,    -1,   167,    -1,   168,    87,   169,   167,
      -1,   168,    87,   167,    -1,   170,   106,    -1,   171,    -1,
     170,   171,    -1,    89,   135,    90,    -1,    91,    11,    -1,
      83,    85,   135,    87,    14,    86,   107,    -1,   180,    -1,
     179,    -1,    11,    88,   173,    -1,    66,   135,    88,   173,
      -1,    67,    88,   173,    -1,    92,    93,    -1,    92,   176,
      93,    -1,   177,    -1,   176,   177,    -1,   136,    -1,   173,
      -1,   107,    -1,   134,   107,    -1,   174,    -1,   175,    -1,
     178,    -1,   181,    -1,   182,    -1,    70,    85,   134,    86,
     179,    -1,    68,    85,   134,    86,   179,    69,   179,    -1,
      68,    85,   134,    86,   173,    -1,    68,    85,   134,    86,
     179,    69,   180,    -1,    71,    85,   134,    86,   173,    -1,
      72,   173,    71,    85,   134,    86,   107,    -1,    73,    85,
     178,   178,    86,   173,    -1,    73,    85,   178,   178,   134,
      86,   173,    -1,    73,    85,   136,   178,    86,   173,    -1,
      73,    85,   136,   178,   134,    86,   173,    -1,    74,    11,
     107,    -1,    75,   107,    -1,    76,   107,    -1,    77,   107,
      -1,    77,   134,   107,    -1,   184,    -1,   183,   184,    -1,
     185,    -1,   136,    -1,   137,   156,   186,   175,    -1,   137,
     156,   175,    -1,   136,    -1,   186,   136,    -1
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

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ELIF", "PASS", "TRY", "EXCEPT", "PRINT",
  "RANGE", "IN", "FOREACH", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
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
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "matched_statement", "unmatched_statement",
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,    40,    41,    44,    58,    91,
      93,    46,   123,   125,    38,    42,    43,    45,   126,    33,
      47,    37,    60,    62,    94,   124,    61,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
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

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
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

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    92,    93,    71,    94,    95,   410,   411,    96,   273,
     149,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   150,   151,   267,   210,   111,    31,   127,
      55,    56,    33,    34,    35,    36,   134,   135,   113,   244,
     245,    37,    72,    73,    38,    39,    40,    41,   118,    58,
      59,   121,   297,   231,   232,   233,   412,   298,   186,   326,
     327,   328,   329,   330,    42,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,    43,    44,    45,   129
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -366
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

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
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

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
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

  case 166:
#line 354 "yapl.y"
    {pointer_decls++;;}
    break;

  case 255:
#line 516 "yapl.y"
    { ladder_len++; if(ladder_len>max) max=ladder_len; ladder_len--; ;}
    break;

  case 256:
#line 520 "yapl.y"
    { ifs_wo_else++; ;}
    break;

  case 269:
#line 542 "yapl.y"
    {global_declarations++;;}
    break;

  case 270:
#line 543 "yapl.y"
    {global_declarations++;;}
    break;

  case 271:
#line 547 "yapl.y"
    {func_definitions++;;}
    break;


/* Line 1267 of yacc.c.  */
#line 2451 "yapl.tab.c"
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

