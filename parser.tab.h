/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CLASS = 258,
    VOID = 259,
    STRING = 260,
    THIS = 261,
    WHILE = 262,
    BREAK = 263,
    READINTEGER = 264,
    INT = 265,
    EXTENDS = 266,
    IF = 267,
    NEW = 268,
    READLINE = 269,
    DOUBLE = 270,
    INTERFACE = 271,
    IMPLEMENTS = 272,
    ELSE = 273,
    NEWARRAY = 274,
    TRUE = 275,
    BOOL = 276,
    TNULL = 277,
    FOR = 278,
    RETURN = 279,
    PRINT = 280,
    FALSE = 281,
    ID = 282,
    CONSINTEGERDEC = 283,
    CONSINTEGERHEX = 284,
    CONSDOUBLEDEC = 285,
    CONSDOUBLECIEN = 286,
    CONSSTRING = 287,
    CONSBOOLEAN = 288,
    SUM = 289,
    SUBTRACTION = 290,
    MULTIPLICATION = 291,
    DIVISION = 292,
    MODULE = 293,
    LESSTHAN = 294,
    LESSEQUALTHAN = 295,
    GREATERTHAN = 296,
    GREATEREQUALTHAN = 297,
    EQUAL = 298,
    EEQUAL = 299,
    DISTINCT = 300,
    AND = 301,
    OR = 302,
    NEGATION = 303,
    SEMICOLON = 304,
    COMMA = 305,
    DOT = 306,
    LBRACKET = 307,
    RBRACKET = 308,
    LPAREN = 309,
    RPAREN = 310,
    LBRACE = 311,
    RBRACE = 312
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
