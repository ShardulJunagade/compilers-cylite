/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 41 "yapl.y"
{
	int val;
	struct symtab *symp;
}
/* Line 1529 of yacc.c.  */
#line 222 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

