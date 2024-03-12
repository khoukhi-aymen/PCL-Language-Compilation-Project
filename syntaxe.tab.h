
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_var = 258,
     mc_code = 259,
     mc_const = 260,
     mc_int = 261,
     mc_flt = 262,
     mc_struct = 263,
     err = 264,
     fois = 265,
     plus = 266,
     moins = 267,
     slash = 268,
     par_o = 269,
     par_f = 270,
     mc_and = 271,
     mc_or = 272,
     mc_not = 273,
     mc_sup = 274,
     mc_inf = 275,
     mc_supe = 276,
     mc_infe = 277,
     mc_egale = 278,
     mc_dif = 279,
     mc_aff = 280,
     sep_var = 281,
     dept = 282,
     cro_o = 283,
     cro_f = 284,
     vrgl = 285,
     aco_o = 286,
     aco_f = 287,
     pointvrgl = 288,
     point = 289,
     mc_if = 290,
     mc_else = 291,
     mc_for = 292,
     mc_while = 293,
     idf = 294,
     entier = 295,
     reel = 296
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 44 "syntaxe.y"
char* str;
        int  integer;
        float f; 
		
		
        struct {int type;
                char* res;
                float  val;
                }NT;		



/* Line 1676 of yacc.c  */
#line 106 "syntaxe.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


