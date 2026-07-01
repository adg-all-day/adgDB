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

#ifndef YY_YY_FUZZ_GENERATED_ADGSQL_TAB_H_INCLUDED
# define YY_YY_FUZZ_GENERATED_ADGSQL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 15 "src/parser/adgsql.y"
 
#include <compiler/common.h>
#include <datastructure/queue.h>

#line 54 "fuzz/generated/adgsql.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NAME = 258,                    /* NAME  */
    STRING = 259,                  /* STRING  */
    INTNUM = 260,                  /* INTNUM  */
    BOOL = 261,                    /* BOOL  */
    APPROXNUM = 262,               /* APPROXNUM  */
    ASSIGN = 263,                  /* ASSIGN  */
    ANDOP = 264,                   /* ANDOP  */
    IS = 265,                      /* IS  */
    COMPARISON = 266,              /* COMPARISON  */
    SHIFT = 267,                   /* SHIFT  */
    UMINUS = 268,                  /* UMINUS  */
    AND = 269,                     /* AND  */
    AS = 270,                      /* AS  */
    ASC = 271,                     /* ASC  */
    AUTO_INCREMENT = 272,          /* AUTO_INCREMENT  */
    BETWEEN = 273,                 /* BETWEEN  */
    BY = 274,                      /* BY  */
    CASE = 275,                    /* CASE  */
    CHAR = 276,                    /* CHAR  */
    COLUMN = 277,                  /* COLUMN  */
    CREATE = 278,                  /* CREATE  */
    CROSS = 279,                   /* CROSS  */
    CURRENT_DATE = 280,            /* CURRENT_DATE  */
    CURRENT_TIMESTAMP = 281,       /* CURRENT_TIMESTAMP  */
    DATE = 282,                    /* DATE  */
    DATETIME = 283,                /* DATETIME  */
    DELETE = 284,                  /* DELETE  */
    DESC = 285,                    /* DESC  */
    DISTINCT = 286,                /* DISTINCT  */
    DOUBLE = 287,                  /* DOUBLE  */
    ELSE = 288,                    /* ELSE  */
    END = 289,                     /* END  */
    EXISTS = 290,                  /* EXISTS  */
    EXPLAIN = 291,                 /* EXPLAIN  */
    FROM = 292,                    /* FROM  */
    GROUP = 293,                   /* GROUP  */
    HAVING = 294,                  /* HAVING  */
    IF = 295,                      /* IF  */
    IN = 296,                      /* IN  */
    INDEX = 297,                   /* INDEX  */
    INNER = 298,                   /* INNER  */
    INSERT = 299,                  /* INSERT  */
    INT = 300,                     /* INT  */
    INTEGER = 301,                 /* INTEGER  */
    INTO = 302,                    /* INTO  */
    JOIN = 303,                    /* JOIN  */
    KEY = 304,                     /* KEY  */
    LEFT = 305,                    /* LEFT  */
    LIKE = 306,                    /* LIKE  */
    LIMIT = 307,                   /* LIMIT  */
    MOD = 308,                     /* MOD  */
    NOT = 309,                     /* NOT  */
    NULLX = 310,                   /* NULLX  */
    ON = 311,                      /* ON  */
    OR = 312,                      /* OR  */
    ORDER = 313,                   /* ORDER  */
    OUTER = 314,                   /* OUTER  */
    PRIMARY = 315,                 /* PRIMARY  */
    RIGHT = 316,                   /* RIGHT  */
    SELECT = 317,                  /* SELECT  */
    SET = 318,                     /* SET  */
    TABLE = 319,                   /* TABLE  */
    THEN = 320,                    /* THEN  */
    TIME = 321,                    /* TIME  */
    TIMESTAMP = 322,               /* TIMESTAMP  */
    TINYINT = 323,                 /* TINYINT  */
    UNIQUE = 324,                  /* UNIQUE  */
    UPDATE = 325,                  /* UPDATE  */
    VALUES = 326,                  /* VALUES  */
    VARCHAR = 327,                 /* VARCHAR  */
    WHEN = 328,                    /* WHEN  */
    WHERE = 329,                   /* WHERE  */
    XOR = 330,                     /* XOR  */
    FCOUNT = 331                   /* FCOUNT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 32 "src/parser/adgsql.y"

	int intval;
	double floatval;
	char *strval;
	int subtok;

#line 154 "fuzz/generated/adgsql.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (struct queue *result, void *scanner);


#endif /* !YY_YY_FUZZ_GENERATED_ADGSQL_TAB_H_INCLUDED  */
