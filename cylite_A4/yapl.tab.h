/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_YAPL_TAB_H_INCLUDED
# define YY_YY_YAPL_TAB_H_INCLUDED
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

#line 155 "yapl.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_YAPL_TAB_H_INCLUDED  */
