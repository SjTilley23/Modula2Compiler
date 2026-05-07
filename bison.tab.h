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

#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
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
    TOKEN_AND = 258,               /* TOKEN_AND  */
    TOKEN_ARRAY = 259,             /* TOKEN_ARRAY  */
    TOKEN_BEGIN = 260,             /* TOKEN_BEGIN  */
    TOKEN_BY = 261,                /* TOKEN_BY  */
    TOKEN_CONST = 262,             /* TOKEN_CONST  */
    TOKEN_DEFINITION = 263,        /* TOKEN_DEFINITION  */
    TOKEN_DIV = 264,               /* TOKEN_DIV  */
    TOKEN_DO = 265,                /* TOKEN_DO  */
    TOKEN_ELSE = 266,              /* TOKEN_ELSE  */
    TOKEN_ELSIF = 267,             /* TOKEN_ELSIF  */
    TOKEN_END = 268,               /* TOKEN_END  */
    TOKEN_EXIT = 269,              /* TOKEN_EXIT  */
    TOKEN_FOR = 270,               /* TOKEN_FOR  */
    TOKEN_IF = 271,                /* TOKEN_IF  */
    TOKEN_IMPLEMENTATION = 272,    /* TOKEN_IMPLEMENTATION  */
    TOKEN_MOD = 273,               /* TOKEN_MOD  */
    TOKEN_MODULE = 274,            /* TOKEN_MODULE  */
    TOKEN_NOT = 275,               /* TOKEN_NOT  */
    TOKEN_OF = 276,                /* TOKEN_OF  */
    TOKEN_OR = 277,                /* TOKEN_OR  */
    TOKEN_PROCEDURE = 278,         /* TOKEN_PROCEDURE  */
    TOKEN_READ = 279,              /* TOKEN_READ  */
    TOKEN_REPEAT = 280,            /* TOKEN_REPEAT  */
    TOKEN_RETURN = 281,            /* TOKEN_RETURN  */
    TOKEN_THEN = 282,              /* TOKEN_THEN  */
    TOKEN_TO = 283,                /* TOKEN_TO  */
    TOKEN_TYPE = 284,              /* TOKEN_TYPE  */
    TOKEN_UNTIL = 285,             /* TOKEN_UNTIL  */
    TOKEN_VAR = 286,               /* TOKEN_VAR  */
    TOKEN_WHILE = 287,             /* TOKEN_WHILE  */
    TOKEN_WRITE = 288,             /* TOKEN_WRITE  */
    TOKEN_DOUBLEBACK = 289,        /* TOKEN_DOUBLEBACK  */
    TOKEN_LREQ = 290,              /* TOKEN_LREQ  */
    TOKEN_LEQ = 291,               /* TOKEN_LEQ  */
    TOKEN_REQ = 292,               /* TOKEN_REQ  */
    TOKEN_DOUBLEDOT = 293,         /* TOKEN_DOUBLEDOT  */
    TOKEN_ASSIGN = 294,            /* TOKEN_ASSIGN  */
    TOKEN_WRITELN = 295,           /* TOKEN_WRITELN  */
    TOKEN_IDENT = 296,             /* TOKEN_IDENT  */
    TOKEN_INTEGER = 297,           /* TOKEN_INTEGER  */
    TOKEN_STRING = 298             /* TOKEN_STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 55 "bison.y"

    struct Node* node;

#line 111 "bison.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */
