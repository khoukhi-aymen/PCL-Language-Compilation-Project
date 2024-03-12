
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syntaxe.y"

int nb_ligne=1, col=1;	
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"ts.h"
#include "QUAD.h"
#include "QUAD.c"
#include "optimisation.h"
#include "optimisation.c" 
#include "cod_obg.c"
#include "cod_obg.h"
int valuetype = 0;
int constant;
int i=0 ;
int typePartieGauche;
int j;
int sauvtype , fin_pos ,sauv_debut_do ,sauv_deb_for; 
int a=0;
int k=1;
float val_cst;
int else_pos;
int compatibilite = 0;
int compatibilite2 = 0;
 int nTemp=1;
 float valeur;
 char tempC[12]="";
char val[12]="";
char val1[20]="";
char val2[20]="";
char  * sauv_idf;
char  * sauv_idf_complexe = " ";
char  * sauv_idf_co;
char * id;
typedef struct // structeur pour s'auvgarder les bliotheques importer
     {
        char*  nom_idf  ;
        
     }tab_idf;
 tab_idf  tab[20];
 


/* Line 189 of yacc.c  */
#line 117 "syntaxe.tab.c"

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

/* Line 214 of yacc.c  */
#line 44 "syntaxe.y"
char* str;
        int  integer;
        float f; 
		
		
        struct {int type;
                char* res;
                float  val;
                }NT;		



/* Line 214 of yacc.c  */
#line 207 "syntaxe.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 219 "syntaxe.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   181

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNRULES -- Number of states.  */
#define YYNSTATES  179

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    16,    24,    25,    28,    31,    34,    37,
      38,    43,    47,    49,    53,    57,    59,    61,    63,    68,
      74,    76,    78,    82,    84,    86,    88,    93,   100,   105,
     107,   109,   112,   115,   118,   121,   122,   128,   133,   138,
     143,   145,   150,   155,   159,   163,   175,   177,   179,   183,
     189,   191,   197,   203,   209,   215,   221,   227,   233,   239,
     241,   243,   247,   251,   255,   259,   261,   266,   271,   275,
     277,   279
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    39,    28,    44,     3,    28,    45,    29,
       4,    28,    58,    29,    29,    -1,     8,    28,    45,    29,
      39,    33,    44,    -1,    -1,    48,    45,    -1,    51,    45,
      -1,    55,    45,    -1,    46,    45,    -1,    -1,     8,    39,
      47,    33,    -1,    39,    30,    47,    -1,    39,    -1,    50,
      49,    33,    -1,    39,    30,    49,    -1,    39,    -1,     6,
      -1,     7,    -1,     5,    54,    53,    33,    -1,     5,    39,
      25,    52,    33,    -1,    40,    -1,    41,    -1,    39,    30,
      53,    -1,    39,    -1,     6,    -1,     7,    -1,    57,    27,
      56,    33,    -1,    39,    31,    40,    32,    30,    56,    -1,
      39,    31,    40,    32,    -1,     6,    -1,     7,    -1,    59,
      58,    -1,    62,    58,    -1,    64,    58,    -1,    67,    58,
      -1,    -1,    60,    36,    28,    58,    29,    -1,    61,    28,
      58,    29,    -1,    35,    14,    70,    15,    -1,    63,    25,
      72,    33,    -1,    39,    -1,    39,    31,    40,    32,    -1,
      39,    31,    39,    32,    -1,    39,    34,    39,    -1,    65,
      58,    29,    -1,    37,    14,    39,    27,    72,    27,    66,
      27,    72,    15,    28,    -1,    40,    -1,    39,    -1,    68,
      58,    29,    -1,    69,    14,    70,    15,    28,    -1,    38,
      -1,    14,    71,    19,    71,    15,    -1,    14,    71,    20,
      71,    15,    -1,    14,    71,    21,    71,    15,    -1,    14,
      71,    22,    71,    15,    -1,    14,    71,    23,    71,    15,
      -1,    14,    71,    24,    71,    15,    -1,    14,    70,    16,
      70,    15,    -1,    14,    70,    17,    70,    15,    -1,    71,
      -1,    72,    -1,    72,    11,    72,    -1,    72,    12,    72,
      -1,    72,    10,    72,    -1,    72,    13,    72,    -1,    39,
      -1,    39,    31,    40,    32,    -1,    39,    31,    39,    32,
      -1,    39,    34,    39,    -1,    40,    -1,    41,    -1,    14,
      72,    15,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    75,    82,    86,    87,    88,    89,    90,
      94,    97,   104,   111,   115,   122,   129,   129,   132,   133,
     144,   144,   147,   153,   159,   159,   162,   165,   170,   178,
     178,   182,   183,   184,   185,   186,   190,   195,   201,   207,
     231,   244,   271,   305,   337,   346,   360,   361,   371,   377,
     380,   387,   400,   409,   419,   429,   438,   448,   458,   467,
     469,   473,   485,   497,   506,   517,   530,   546,   568,   588,
     598,   605
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_var", "mc_code", "mc_const",
  "mc_int", "mc_flt", "mc_struct", "err", "fois", "plus", "moins", "slash",
  "par_o", "par_f", "mc_and", "mc_or", "mc_not", "mc_sup", "mc_inf",
  "mc_supe", "mc_infe", "mc_egale", "mc_dif", "mc_aff", "sep_var", "dept",
  "cro_o", "cro_f", "vrgl", "aco_o", "aco_f", "pointvrgl", "point",
  "mc_if", "mc_else", "mc_for", "mc_while", "idf", "entier", "\".\"",
  "$accept", "S", "def_struct", "declaration", "struct", "liste_idf",
  "var", "liste_idf_var", "type_var", "const", "valeur", "liste_idf_const",
  "type_const", "array", "liste_idf_tab", "type_array", "instruction",
  "int_if", "A", "B", "affectation", "partie_gauche", "for", "debut_for",
  "bornesup", "while", "m_while", "deb_while", "condition", "expr_ar",
  "expr", 0
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
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    45,    45,    45,
      46,    47,    47,    48,    49,    49,    50,    50,    51,    51,
      52,    52,    53,    53,    54,    54,    55,    56,    56,    57,
      57,    58,    58,    58,    58,    58,    59,    60,    61,    62,
      63,    63,    63,    63,    64,    65,    66,    66,    67,    68,
      69,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    12,     7,     0,     2,     2,     2,     2,     0,
       4,     3,     1,     3,     3,     1,     1,     1,     4,     5,
       1,     1,     3,     1,     1,     1,     4,     6,     4,     1,
       1,     2,     2,     2,     2,     0,     5,     4,     4,     4,
       1,     4,     4,     3,     3,    11,     1,     1,     3,     5,
       1,     5,     5,     5,     5,     5,     5,     5,     5,     1,
       1,     3,     3,     3,     3,     1,     4,     4,     3,     1,
       1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     4,     1,     0,     0,     9,     0,     0,
      16,    17,     0,     0,     9,     9,     0,     9,     9,     0,
       9,    24,    25,     0,     0,     0,     0,     8,     5,    15,
       0,     6,     7,     0,     0,     0,    23,     0,    12,     0,
       0,     0,    13,     0,     0,     0,    20,    21,     0,     0,
      18,     0,    10,     4,    14,     0,    26,     0,    19,    22,
      11,     3,     0,    35,    28,     0,     0,    50,    40,     0,
      35,     0,     0,    35,     0,    35,    35,    35,    35,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    35,    32,
       0,    33,     0,    34,     0,     0,    27,     0,    65,    69,
      70,     0,    59,    60,     0,     0,     0,    43,     2,    35,
       0,     0,     0,    44,    48,     0,     0,    59,    60,     0,
       0,    38,     0,     0,     0,     0,     0,    42,    41,     0,
      37,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,     0,     0,    68,    63,    61,    62,    64,
       0,    36,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    66,     0,    57,    58,    51,    52,    53,    54,
      55,    56,    47,    46,     0,     0,     0,     0,    45
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    13,    14,    39,    15,    30,    16,    17,
      48,    37,    24,    18,    44,    19,    69,    70,    71,    72,
      73,    74,    75,    76,   174,    77,    78,    79,   101,   102,
     103
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -97
static const yytype_int16 yypact[] =
{
     -37,   -13,    13,    19,   -97,     3,    43,    93,    21,    -2,
      27,    39,    30,    45,    93,    93,    33,    93,    93,    57,
      93,   -97,   -97,    87,    74,    75,    76,   -97,   -97,    66,
      83,   -97,   -97,    78,    89,    42,    91,    86,    94,    95,
      96,    33,   -97,    99,    98,   116,   -97,   -97,   100,    74,
     -97,    75,   -97,    19,   -97,    85,   -97,   104,   -97,   -97,
     -97,   -97,   102,   -15,    97,   108,   109,   -97,   -28,   106,
     -15,   101,   110,   -15,   111,   -15,   -15,   -15,   -15,   112,
      78,    12,   103,    -1,   105,   114,   -97,   113,   -15,   -97,
      16,   -97,   117,   -97,   118,    12,   -97,    12,   -22,   -97,
     -97,   124,   -97,    92,   121,   119,   120,   -97,   -97,   -15,
     125,    16,    48,   -97,   -97,   130,    90,    67,    65,    69,
     122,   -97,    16,    16,    16,    16,    16,   -97,   -97,   126,
     -97,    65,   -97,   128,    12,    12,    16,    16,    16,    16,
      16,    16,   -97,   127,   131,   -97,   -97,    15,    15,   -97,
      52,   -97,   -97,   134,   135,   138,   142,   143,   145,   147,
     149,   -97,   -97,    71,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   139,    16,    82,   137,   -97
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -97,   -97,   115,    53,   -97,   123,   -97,   129,   -97,   -97,
     -97,   132,   -97,   -97,    60,   -97,   -59,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -87,   -96,
     -90
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -31
static const yytype_int16 yytable[] =
{
     112,   117,     1,    83,    21,    22,    84,   118,   115,   119,
     116,    86,   120,     4,    89,     3,    91,    92,    93,    94,
      65,   131,    66,    67,    68,   122,    97,     5,   125,   110,
     111,     7,   146,   147,   148,   149,   150,    23,   105,   106,
     155,   156,   157,   158,   159,   160,     8,   153,   154,    20,
     129,    98,    99,   100,   -29,    98,    99,   100,   122,   123,
     124,   125,   122,   123,   124,   125,   -30,    27,    28,    25,
      31,    32,    29,    34,    26,   122,   123,   124,   125,   163,
     142,   132,    46,    47,    33,   176,   136,   137,   138,   139,
     140,   141,   122,   123,   124,   125,    41,   177,     9,    10,
      11,    12,   122,   123,   124,   125,   134,   135,   143,   144,
     172,   173,    35,    36,    38,    40,    42,    43,    45,    50,
      57,    49,    81,    82,    51,    62,    95,    80,    52,    53,
      55,    56,    63,    58,    64,    85,    90,    87,    88,   121,
      96,   109,   104,   108,   107,   133,   113,   114,   126,   164,
     165,   127,   128,   166,   130,   151,   152,   167,   168,   161,
     169,   145,   170,   162,   171,   178,   175,     0,    61,     0,
      54,     0,     0,     0,    60,     0,     0,     0,     0,     0,
       0,    59
};

static const yytype_int16 yycheck[] =
{
      90,    97,    39,    31,     6,     7,    34,    97,    95,    31,
      97,    70,    34,     0,    73,    28,    75,    76,    77,    78,
      35,   111,    37,    38,    39,    10,    14,     8,    13,    88,
      14,    28,   122,   123,   124,   125,   126,    39,    39,    40,
     136,   137,   138,   139,   140,   141,     3,   134,   135,    28,
     109,    39,    40,    41,    27,    39,    40,    41,    10,    11,
      12,    13,    10,    11,    12,    13,    27,    14,    15,    39,
      17,    18,    39,    20,    29,    10,    11,    12,    13,    27,
      15,    33,    40,    41,    27,   175,    19,    20,    21,    22,
      23,    24,    10,    11,    12,    13,    30,    15,     5,     6,
       7,     8,    10,    11,    12,    13,    16,    17,    39,    40,
      39,    40,    25,    39,    39,    39,    33,    39,    29,    33,
       4,    30,    14,    14,    30,    40,    14,    30,    33,    33,
      31,    33,    28,    33,    32,    29,    25,    36,    28,    15,
      80,    28,    39,    29,    39,    15,    29,    29,    27,    15,
      15,    32,    32,    15,    29,    29,    28,    15,    15,    32,
      15,    39,    15,    32,    15,    28,    27,    -1,    53,    -1,
      41,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    39,    43,    28,     0,     8,    44,    28,     3,     5,
       6,     7,     8,    45,    46,    48,    50,    51,    55,    57,
      28,     6,     7,    39,    54,    39,    29,    45,    45,    39,
      49,    45,    45,    27,    45,    25,    39,    53,    39,    47,
      39,    30,    33,    39,    56,    29,    40,    41,    52,    30,
      33,    30,    33,    33,    49,    31,    33,     4,    33,    53,
      47,    44,    40,    28,    32,    35,    37,    38,    39,    58,
      59,    60,    61,    62,    63,    64,    65,    67,    68,    69,
      30,    14,    14,    31,    34,    29,    58,    36,    28,    58,
      25,    58,    58,    58,    58,    14,    56,    14,    39,    40,
      41,    70,    71,    72,    39,    39,    40,    39,    29,    28,
      58,    14,    72,    29,    29,    70,    70,    71,    72,    31,
      34,    15,    10,    11,    12,    13,    27,    32,    32,    58,
      29,    72,    33,    15,    16,    17,    19,    20,    21,    22,
      23,    24,    15,    39,    40,    39,    72,    72,    72,    72,
      72,    29,    28,    70,    70,    71,    71,    71,    71,    71,
      71,    32,    32,    27,    15,    15,    15,    15,    15,    15,
      15,    15,    39,    40,    66,    27,    72,    15,    28
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 2:

/* Line 1455 of yacc.c  */
#line 70 "syntaxe.y"
    {printf("\nprogramme syntaxiquement correct\n\n");
                                                  YYACCEPT;
					                             ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 75 "syntaxe.y"
    {if(doubleDeclaration(strdup((yyvsp[(5) - (7)].str))) == 1){
		                                   printf("\t\n\nerror semantique double definition de l'id %s, a la ligne %d et la colonne %d\n",(yyvsp[(5) - (7)].str),nb_ligne,col);
	                                       }else{
		                                   
				                           inserer(strdup((yyvsp[(5) - (7)].str)),3,0,0);
								           }
	                                      ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 97 "syntaxe.y"
    {if(doubleDeclaration(strdup((yyvsp[(1) - (3)].str))) == 1){
		                         printf("\t\n\nerror semantique double declaration de l'id %s, a la ligne %d et la colonne %d\n",(yyvsp[(1) - (3)].str),nb_ligne,col);
	                            }else{
		                         
				                 inserer(strdup((yyvsp[(1) - (3)].str)),3,0,0);
								    }
	                          ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 104 "syntaxe.y"
    {if(doubleDeclaration(strdup((yyvsp[(1) - (1)].str))) == 1){
		            printf("\t\n\nerror semantique double declaration de l'id %s, a la ligne %d et la colonne %d\n",(yyvsp[(1) - (1)].str),nb_ligne,col);
	              }else{
		                
				        inserer(strdup((yyvsp[(1) - (1)].str)),3,0,0);}
	           ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 115 "syntaxe.y"
    {if(doubleDeclaration(strdup((yyvsp[(1) - (3)].str))) == 1){
		                         printf("\t\n\nerror semantique double declaration de l'id %s, a la ligne %d et la colonne %d\n",(yyvsp[(1) - (3)].str),nb_ligne,col);
	                            }else{
		                         
				                 inserer(strdup((yyvsp[(1) - (3)].str)),sauvtype,0,0);
								    }
	                          ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 122 "syntaxe.y"
    {if(doubleDeclaration(strdup((yyvsp[(1) - (1)].str))) == 1){
		            printf("\t\n\nerror semantique double declaration de l'id %s, a la ligne %d et la colonne %d\n",(yyvsp[(1) - (1)].str),nb_ligne,col);
	              }else{
		                
				        inserer(strdup((yyvsp[(1) - (1)].str)),sauvtype,0,0);}
	           ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 129 "syntaxe.y"
    {sauvtype = 1;  ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 129 "syntaxe.y"
    {sauvtype = 2; ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 133 "syntaxe.y"
    {  
										    
		                                       if(doubleDeclaration(strdup((yyvsp[(2) - (5)].str))) == 1){
		                                               printf("\t\n\nerror semantique double declaration de l'id %s, a la ligne %d et la colonne %d\n",(yyvsp[(2) - (5)].str),nb_ligne,col);
	                                            }else{
														  inserer_cst(strdup((yyvsp[(2) - (5)].str)),sauvtype,0,1,val_cst);
														  val_cst = 0;
														  }
	                                        ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 144 "syntaxe.y"
    {sauvtype = 1;val_cst = (yyvsp[(1) - (1)].integer);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 144 "syntaxe.y"
    {sauvtype = 2;val_cst = (yyvsp[(1) - (1)].f);;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 147 "syntaxe.y"
    {if(doubleDeclaration(strdup((yyvsp[(1) - (3)].str))) == 1){
		                                      printf("\t\n\nerror semantique double declaration de l'id %s, a la ligne %d et la colonne %d\n",(yyvsp[(1) - (3)].str),nb_ligne,col);
	                                       }else{
				                             inserer(strdup((yyvsp[(1) - (3)].str)),sauvtype,0,1);
											 }
	                                      ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 153 "syntaxe.y"
    {if(doubleDeclaration(strdup((yyvsp[(1) - (1)].str))) == 1){
		            printf("\t\n\nerror semantique double declaration de l'id %s, a la ligne %d et la colonne %d\n",(yyvsp[(1) - (1)].str),nb_ligne,col);
	              }else{
				        inserer(strdup((yyvsp[(1) - (1)].str)),sauvtype,0,1);
						}
	           ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 159 "syntaxe.y"
    {sauvtype = 1; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 159 "syntaxe.y"
    {sauvtype = 2; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 165 "syntaxe.y"
    {if(doubleDeclaration(strdup((yyvsp[(1) - (6)].str))) == 1){
		                                                    printf("\t\n\nerror semantique double declaration de l'id %s, a la ligne %d et la colonne %d\n",(yyvsp[(1) - (6)].str),nb_ligne,col);
	                                                      }else{
				                                           inserer(strdup((yyvsp[(1) - (6)].str)),sauvtype,(yyvsp[(3) - (6)].integer),0);}
	                                                    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 170 "syntaxe.y"
    {if(doubleDeclaration(strdup((yyvsp[(1) - (4)].str))) == 1){
		                                        printf("\t\n\nerror semantique double declaration de l'id %s, a la ligne %d et la colonne %d\n",(yyvsp[(1) - (4)].str),nb_ligne,col);
	                                        }else{
												 
											     inserer(strdup((yyvsp[(1) - (4)].str)),sauvtype,(yyvsp[(3) - (4)].integer),0);}
	                                  ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 178 "syntaxe.y"
    {sauvtype = 1;;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 178 "syntaxe.y"
    {sauvtype = 2;;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 190 "syntaxe.y"
    { fin_pos = depiler_qc(&pile1); 
                                             q[fin_pos].op1= ToSTR(indq); 
											
										   ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 195 "syntaxe.y"
    {else_pos = depiler_qc(&pile1); 
                              q[else_pos].op1= ToSTR(indq+1); 
							  empiler_qc(&pile1, indq); 
							  quad("BR","","","");
							  ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 201 "syntaxe.y"
    { empiler_qc(&pile1, indq); 
                                quad("BZ","",strdup((yyvsp[(3) - (4)].NT).res),""); 
							  ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 207 "syntaxe.y"
    { 
                                                   if(a != compatibilite){printf("\n\nerror semantique a la ligne %d ,et a la colonne %d,-----type incompatible-------",nb_ligne,col)  ;}
                                                   compatibilite=0;  
												   
												   if (strstr(sauv_idf_complexe, "[") != NULL || strstr(sauv_idf_complexe, ".") != NULL) {
                                                      quad(":=", (yyvsp[(3) - (4)].NT).res, "", sauv_idf_complexe);
                                                      sauv_idf_complexe = " ";
                                                    } else {
                                                      quad(":=", (yyvsp[(3) - (4)].NT).res, "", sauv_idf);
													  
                                                    }
												   
												   
												   if(dec(sauv_idf) == 1){
													   inserer(strdup(sauv_idf),a,0,0);
													   inser_val(sauv_idf,(yyvsp[(3) - (4)].NT).val);
												   }
                                                   else{
													   
													   inser_val(sauv_idf,(yyvsp[(3) - (4)].NT).val);}
													
             
                                                 ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 231 "syntaxe.y"
    {if(dec((yyvsp[(1) - (1)].str)) == 1){
		                printf("\t\n \n error semantique idf  %s est non declare, a la ligne %d et la colonne %d\n \n",(yyvsp[(1) - (1)].str),nb_ligne,col);
		               }
					   if(CONST_VALEUR((yyvsp[(1) - (1)].str)) == 1) {
							    printf("\n\n erreur semantique : a la ligne %d,la constant %s a deja une valeur\n", nb_ligne,(yyvsp[(1) - (1)].str));
					   }else{
					   
					   a = returntype((yyvsp[(1) - (1)].str));
                       					   
					   sauv_idf=strdup((yyvsp[(1) - (1)].str));
					   
					   }
	                ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 244 "syntaxe.y"
    {if(dec((yyvsp[(1) - (4)].str)) == 1){
		                                   printf("\t\n \n error semantique idf  %s est non declare, a la ligne %d et la colonne %d\n \n",(yyvsp[(1) - (4)].str),nb_ligne,col);
		                                  }
										  
										  a = returntype((yyvsp[(1) - (4)].str)); 
										  
										  if(veriftailletab((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer)) == 1){
							                  printf("\n\n error semantique a la ligne %d ,et a la colonne %d,-----taille  du tableau  depasse la capacite-------\n\n",nb_ligne,col);
							              } 
										  sauv_idf_co = malloc(strlen((yyvsp[(1) - (4)].str)) + strlen(ToSTR((yyvsp[(3) - (4)].integer))) + 4);  // +4 pour les crochets et le caractère nul

                                          if (sauv_idf_co != NULL) {
                                              sprintf(sauv_idf_co, "%s[%d]", (yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].integer));

                                             // Utilisez sauv_idf_co selon vos besoins
										      sauv_idf_complexe = malloc(strlen(sauv_idf_co) + 1);  // +1 pour le caractère nul

                                              // Vérifier si l'allocation a réussi
                                              if (sauv_idf_complexe != NULL) {
                                              // Copier la chaîne de sauv_idf dans sauv_idf_complexe
                                              strcpy(sauv_idf_complexe, sauv_idf_co);
                                          }

                                          free(sauv_idf_co);  // Libérez la mémoire allouée
                                          }
										
	                                     ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 271 "syntaxe.y"
    {if(dec((yyvsp[(1) - (4)].str)) == 1){
		                                   printf("\t\n \n error semantique idf  %s est non declare, a la ligne %d et la colonne %d\n \n",(yyvsp[(1) - (4)].str),nb_ligne,col);
		                                  }
										  
										  if(dec((yyvsp[(3) - (4)].str)) == 1){
		                                   printf("\t\n \n error semantique idf  %s est non declare, a la ligne %d et la colonne %d\n \n",(yyvsp[(3) - (4)].str),nb_ligne,col);
		                                  }
										  
										  a = returntype((yyvsp[(1) - (4)].str)); 
										  
										  if(veriftailletab((yyvsp[(1) - (4)].str),VAL_IDF((yyvsp[(3) - (4)].str))) == 1){
							                  printf("\n\n error semantique a la ligne %d ,et a la colonne %d,-----taille  du tableau  depasse la capacite-------\n\n",nb_ligne,col);
							              }
										  
										  sauv_idf_co = malloc(strlen((yyvsp[(1) - (4)].str)) + strlen((yyvsp[(3) - (4)].str)) + 4);  // +4 pour les crochets et le caractère nul

                                          if (sauv_idf_co != NULL) {
                                              sprintf(sauv_idf_co, "%s[%s]", (yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].str));

                                             // Utilisez sauv_idf_co selon vos besoins
										      sauv_idf_complexe = malloc(strlen(sauv_idf_co) + 1);  // +1 pour le caractère nul

                                              // Vérifier si l'allocation a réussi
                                              if (sauv_idf_complexe != NULL) {
                                              // Copier la chaîne de sauv_idf dans sauv_idf_complexe
                                              strcpy(sauv_idf_complexe, sauv_idf_co);
                                          }

                                          free(sauv_idf_co);  // Libérez la mémoire allouée
                                          }
										  
										  
										  
	                                     ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 305 "syntaxe.y"
    {        if(dec((yyvsp[(1) - (3)].str)) == 1){
		                                   printf("\t\n \n error semantique idf  %s est non declare, a la ligne %d et la colonne %d\n \n",(yyvsp[(1) - (3)].str),nb_ligne,col);
		                                  }
										  
										  if(dec((yyvsp[(3) - (3)].str)) == 1){
		                                   printf("\t\n \n error semantique idf  %s est non declare, a la ligne %d et la colonne %d\n \n",(yyvsp[(3) - (3)].str),nb_ligne,col);
		                                  }
										  
										  a = returntype((yyvsp[(3) - (3)].str)); 
										  
										  //printf("%f\n",VAL_IDF($3));
										  //sprintf(sauv_idf,"%s[%f]",$1,VAL_IDF($3));
										  sauv_idf_co = malloc(strlen((yyvsp[(1) - (3)].str)) + strlen((yyvsp[(3) - (3)].str)) + 4);  // +4 pour les crochets et le caractère nul

                                          if (sauv_idf_co != NULL) {
                                              sprintf(sauv_idf_co, "%s.%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));

                                             // Utilisez sauv_idf_co selon vos besoins
										      sauv_idf_complexe = malloc(strlen(sauv_idf_co) + 1);  // +1 pour le caractère nul

                                              // Vérifier si l'allocation a réussi
                                              if (sauv_idf_complexe != NULL) {
                                              // Copier la chaîne de sauv_idf dans sauv_idf_complexe
                                              strcpy(sauv_idf_complexe, sauv_idf_co);
                                          }

                                          free(sauv_idf_co);  // Libérez la mémoire allouée
                                          }
	                                     ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 337 "syntaxe.y"
    { 
                                  sauv_idf = depiler(&sauv_var); 
                                  quad("+",strdup(sauv_idf),(yyval.NT).res,strdup(sauv_idf)); 
                                  sauv_deb_for = depiler_qc(&pileFOR); 
								  quad("BR",ToSTR(sauv_deb_for),"",""); 
								  q[sauv_deb_for].op1= ToSTR(indq);								  
								;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 346 "syntaxe.y"
    {    if(dec((yyvsp[(3) - (11)].str)) == 1){
		                                                                         printf("\t\n \n error semantique idf  %s est non declare, a la ligne %d et la colonne %d\n \n",(yyvsp[(3) - (11)].str),nb_ligne,col);
		                                                                         }
																				 a = returntype((yyvsp[(3) - (11)].str));
																				 if(a != sauvtype){printf("\n\nerror semantique a la ligne %d ,et a la colonne %d,-----type incompatible-------",nb_ligne,col)  ;}
																				 if(a != compatibilite2){printf("\n\nerror semantique a la ligne %d ,et a la colonne %d,-----type incompatible-------",nb_ligne,col)  ;}
                                                                                 compatibilite=0;
																				 quad(":=",(yyvsp[(5) - (11)].NT).res,"",(yyvsp[(3) - (11)].str)); 
																				 empiler_qc(&pileFOR,indq); 
																				 quad("BG","",(yyvsp[(3) - (11)].str),(yyvsp[(9) - (11)].NT).res);
                                                                                 (yyval.NT).res = strdup((yyvsp[(7) - (11)].NT).res);																				 
																				 empiler_Str(&sauv_var, (yyvsp[(3) - (11)].str));
	                                                                           ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 360 "syntaxe.y"
    {(yyval.NT).res = ToSTR((yyvsp[(1) - (1)].integer));int x = (yyvsp[(1) - (1)].integer);;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 361 "syntaxe.y"
    {
		         (yyval.NT).res = strdup((yyvsp[(1) - (1)].str));
				 (yyval.NT).val = VAL_IDF((yyvsp[(1) - (1)].str));
			     if(dec((yyvsp[(1) - (1)].str)) == 1){
		            printf("\t\n \n error semantique idf  %s est non declare, a la ligne %d et la colonne %d\n \n",(yyvsp[(1) - (1)].str),nb_ligne,col);
		          }
				  sauvtype = returntype((yyvsp[(1) - (1)].str));
		       ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 371 "syntaxe.y"
    { int sauv_fin_while = depiler_qc(&pile2);
                                    sauv_debut_do = depiler_qc(&pile2); 
                                    quad("BR",ToSTR(sauv_debut_do),"","");
                                    q[sauv_fin_while].op1 = ToSTR(indq);
								  ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 377 "syntaxe.y"
    {empiler_qc(&pile2,indq);
                                                quad("BZ","",(yyvsp[(3) - (5)].NT).res,"");
												;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 380 "syntaxe.y"
    { empiler_qc(&pile2,indq);  ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 387 "syntaxe.y"
    {
	                                          if(compatibilite != compatibilite2){
												  printf("\n\nerror semantique a la ligne %d ,et a la colonne %d,-----type incompatible-------",nb_ligne,col)  ;
											  }
											  printf("%f\t",(yyvsp[(2) - (5)].NT));
											  compatibilite=0;
											  compatibilite2=0;
	                                          sprintf(tempC, "T%d",nTemp);
                                              nTemp++;
											  (yyval.NT).res=strdup(tempC);
											  tempC[0]='\0'; 
											  createQuadCompare (6,(yyvsp[(2) - (5)].NT).res,(yyvsp[(4) - (5)].NT).res,(yyval.NT).res);
											 ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 400 "syntaxe.y"
    {
	                                          if(compatibilite != compatibilite2){
												  printf("\n\nerror semantique a la ligne %d ,et a la colonne %d,-----type incompatible-------",nb_ligne,col)  ;
											  }
			                                  sprintf(tempC, "T%d",nTemp);
		                                      nTemp++;(yyval.NT).res=strdup(tempC);
											  tempC[0]='\0'; 
											  createQuadCompare (5,(yyvsp[(2) - (5)].NT).res,(yyvsp[(4) - (5)].NT).res,(yyval.NT).res);
											 ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 409 "syntaxe.y"
    {
	                                            if(compatibilite != compatibilite2){
												  printf("\n\nerror semantique a la ligne %d ,et a la colonne %d,-----type incompatible-------",nb_ligne,col)  ;
											    }
			                                   sprintf(tempC, "T%d",nTemp);
		                                       nTemp++;(yyval.NT).res=strdup(tempC);
											   tempC[0]='\0'; 
											   createQuadCompare (3,(yyvsp[(2) - (5)].NT).res,(yyvsp[(4) - (5)].NT).res,(yyval.NT).res);
											  ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 419 "syntaxe.y"
    {
	                                          if(compatibilite != compatibilite2){
												  printf("\n\nerror semantique a la ligne %d ,et a la colonne %d,-----type incompatible-------",nb_ligne,col)  ;
											  }
											  sprintf(tempC, "T%d",nTemp);
		                                       nTemp++;(yyval.NT).res=strdup(tempC);
											   tempC[0]='\0'; 
											   createQuadCompare (4,(yyvsp[(2) - (5)].NT).res,(yyvsp[(4) - (5)].NT).res,(yyval.NT).res);
											  ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 429 "syntaxe.y"
    {
	                                             if(compatibilite != compatibilite2){
												  printf("\n\nerror semantique a la ligne %d ,et a la colonne %d,-----type incompatible-------",nb_ligne,col)  ;
											     }
											     sprintf(tempC, "T%d",nTemp);
		                                         nTemp++;(yyval.NT).res=strdup(tempC);
												 tempC[0]='\0'; 
												 createQuadCompare (1,(yyvsp[(2) - (5)].NT).res,(yyvsp[(4) - (5)].NT).res,(yyval.NT).res);
												;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 438 "syntaxe.y"
    {
	                                              if(compatibilite != compatibilite2){
												     printf("\n\nerror semantique a la ligne %d ,et a la colonne %d,-----type incompatible-------",nb_ligne,col)  ;
											      }
											     sprintf(tempC, "T%d",nTemp);
		                                         nTemp++;(yyval.NT).res=strdup(tempC);
												 tempC[0]='\0'; 
												 createQuadCompare (2,(yyvsp[(2) - (5)].NT).res,(yyvsp[(4) - (5)].NT).res,(yyval.NT).res);
												 ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 448 "syntaxe.y"
    {
	                                                 if(compatibilite != compatibilite2){
												      printf("\n\nerror semantique a la ligne %d ,et a la colonne %d,-----type incompatible-------",nb_ligne,col)  ;
											        }
												   sprintf(tempC, "T%d",nTemp);
		                                           nTemp++;(yyval.NT).res=strdup(tempC);
												   tempC[0]='\0'; 
												   createQuadLogic (3,(yyvsp[(2) - (5)].NT).res,(yyvsp[(4) - (5)].NT).res,(yyval.NT).res);
												  ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 458 "syntaxe.y"
    {
	                                               if(compatibilite != compatibilite2){
												     printf("\n\nerror semantique a la ligne %d ,et a la colonne %d,-----type incompatible-------",nb_ligne,col)  ;
											      }
												  sprintf(tempC, "T%d",nTemp);
		                                          nTemp++;(yyval.NT).res=strdup(tempC);
												  tempC[0]='\0';											  
												  createQuadLogic (2,(yyvsp[(2) - (5)].NT).res,(yyvsp[(4) - (5)].NT).res,(yyval.NT).res);
												 ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 469 "syntaxe.y"
    { (yyval.NT).res = (yyvsp[(1) - (1)].NT).res;
                //$$.val = $1.val; 
			  ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 473 "syntaxe.y"
    {             sprintf(tempC, "T%d",nTemp);
                                   nTemp++;
								   (yyval.NT).res=strdup(tempC);
								   tempC[0]='\0'; 
								   //printf("%s",tempC);
								   (yyval.NT).val = (yyvsp[(1) - (3)].NT).val + (yyvsp[(3) - (3)].NT).val;
								   compatibilite = 2;								   
                                   //printf("%d ",compatibilite);				
								   quad ("+",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);
				     ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 485 "syntaxe.y"
    {            sprintf(tempC, "T%d",nTemp);
	                                nTemp++;
									(yyval.NT).res=strdup(tempC);
									tempC[0]='\0'; 
									//printf("%s",tempC);
									(yyval.NT).val = (yyvsp[(1) - (3)].NT).val - (yyvsp[(3) - (3)].NT).val;
									compatibilite = 2;	
                                    //printf("%d ",compatibilite);									   
									quad ("-",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);
					   ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 497 "syntaxe.y"
    {            sprintf(tempC, "T%d",nTemp);
	                                nTemp++;(yyval.NT).res=strdup(tempC);
									tempC[0]='\0';
									//printf("%s",tempC);
									(yyval.NT).val = (yyvsp[(1) - (3)].NT).val * (yyvsp[(3) - (3)].NT).val;
									compatibilite = 2;
									//printf("%d ",compatibilite);											
									quad ("*",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res); 
					   ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 506 "syntaxe.y"
    {            sprintf(tempC, "T%d",nTemp);
	                                nTemp++;(yyval.NT).res=strdup(tempC);
									tempC[0]='\0';
                                    //printf("%s",tempC);	
                                    (yyval.NT).val = (yyvsp[(1) - (3)].NT).val / (yyvsp[(3) - (3)].NT).val;
									compatibilite = 2;	
                                    //printf("%d ",compatibilite);									
									quad ("/",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);
									//printf("%s",$3.res);
									  if ((yyvsp[(3) - (3)].NT).val==0){  printf( "\n\n erreur semantique ---- division sur 0----- a la ligne %d ,et a la colonne %d\n",nb_ligne,col);}
                                   ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 517 "syntaxe.y"
    {if(dec((yyvsp[(1) - (1)].str)) == 1){
		    printf("\t\n\n error semantique idf  %s est non declare, a la ligne %d et la colonne %d\n",(yyvsp[(1) - (1)].str),nb_ligne,col);
		   }
		   
		                           compatibilite = returntype(strdup((yyvsp[(1) - (1)].str))) ;		   
		                           compatibilite2 = returntype(strdup((yyvsp[(1) - (1)].str)));
                                   
		   
		   (yyval.NT).res=strdup((yyvsp[(1) - (1)].str));
		   //printf("%f\n",VAL_IDF($1));
		   (yyval.NT).val=VAL_IDF((yyvsp[(1) - (1)].str));
		   //printf("(%s)-----%f\n",$1,$$.val);
	     ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 530 "syntaxe.y"
    { if(dec((yyvsp[(1) - (4)].str)) == 1){
		                         printf("\t\n \n error semantique idf  %s est non declare, a la ligne %d et la colonne %d\n \n",(yyvsp[(1) - (4)].str),nb_ligne,col);
		                        }
								
								 compatibilite = returntype(strdup((yyvsp[(1) - (4)].str))) ;
								 compatibilite2 = returntype(strdup((yyvsp[(1) - (4)].str)));     
	                          
							    if(veriftailletab((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer)) == 1){
							       printf("error semantique a la ligne %d ,et a la colonne %d,-----taille  du tableau  depasse la capacite-------",nb_ligne,col);
							      }     
							    sprintf(val1, "%s[%d]",(yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer)); 
								(yyval.NT).val = VAL_IDF(val1);
								//val = $$.val;
								sprintf(val2, "%f",VAL_IDF(val1));
							    (yyval.NT).res=strdup(val1);
							  ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 546 "syntaxe.y"
    {if(dec((yyvsp[(1) - (4)].str)) == 1){
		                         printf("\t\n \n error semantique idf  %s est non declare, a la ligne %d et la colonne %d\n \n",(yyvsp[(1) - (4)].str),nb_ligne,col);
		                        }
							 if(dec((yyvsp[(3) - (4)].str)) == 1){
		                         printf("\t\n \n error semantique idf  %s est non declare, a la ligne %d et la colonne %d\n \n",(yyvsp[(3) - (4)].str),nb_ligne,col);
		                        }
								
						     compatibilite = returntype(strdup((yyvsp[(1) - (4)].str))) ;
					         compatibilite2 = returntype(strdup((yyvsp[(1) - (4)].str)));                              
										                 
	                          
							    if(veriftailletab((yyvsp[(1) - (4)].str),VAL_IDF((yyvsp[(3) - (4)].str))) == 1){
							       printf("\n\n error semantique a la ligne %d ,et a la colonne %d,-----taille  du tableau  depasse la capacite-------",nb_ligne,col);
							      }
                                //char*	val1;							  
							    sprintf(val1, "%s[%f]",(yyvsp[(1) - (4)].str),VAL_IDF((yyvsp[(3) - (4)].str)));
								(yyval.NT).val = VAL_IDF(val1);
                                //printf("ççççç  %f  çççççç",$$.val);
                                sprintf(val2, "%s[%s]",(yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].str));								
							    (yyval.NT).res=strdup(val2);
								//printf("ççççç  %s çççççç",$$.res);
	                        ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 568 "syntaxe.y"
    {      if(dec((yyvsp[(1) - (3)].str)) == 1){
		                         printf("\t\n \n error semantique idf  %s est non declare, a la ligne %d et la colonne %d\n \n",(yyvsp[(1) - (3)].str),nb_ligne,col);
		                        }
							 if(dec((yyvsp[(3) - (3)].str)) == 1){
		                         printf("\t\n \n error semantique idf  %s est non declare, a la ligne %d et la colonne %d\n \n",(yyvsp[(3) - (3)].str),nb_ligne,col);
		                        }
								
								 if(compatibilite == 0) {compatibilite = returntype(strdup((yyvsp[(1) - (3)].str))) ;
								                         compatibilite2 = returntype(strdup((yyvsp[(1) - (3)].str)));                              
										                } 
	                          
                                //char*	val1;							  
							    sprintf(val1, "%s.%s",(yyvsp[(1) - (3)].str),VAL_IDF((yyvsp[(3) - (3)].str)));
								(yyval.NT).val = VAL_IDF(val1);
                                printf("ççççç  %f  çççççç",(yyval.NT).val);
                                sprintf(val2, "%s.%s",(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));								
							    (yyval.NT).res=strdup(val2);
								//printf("ççççç  %s çççççç",$$.res);
	                ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 588 "syntaxe.y"
    {    
                      if(compatibilite == 0) {compatibilite = 1;}
                      if(compatibilite2 == 0) {compatibilite2 = 1;}							   							   
                      sprintf(val, "%d",(yyvsp[(1) - (1)].integer)); 
					  (yyval.NT).res=strdup(val); 
					  (yyval.NT).val=(yyvsp[(1) - (1)].integer);
                      //printf("%s ",$$.res);					  
			;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 598 "syntaxe.y"
    {  if(compatibilite == 0) {compatibilite = 2;} 
            if(compatibilite2 == 0) {compatibilite2 = 2;}		
             sprintf(val, "%f",(yyvsp[(1) - (1)].f));			 
			 (yyval.NT).res=strdup(val);     
			 (yyval.NT).val=(yyvsp[(1) - (1)].f);  
          ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 605 "syntaxe.y"
    { (yyval.NT).res=(yyvsp[(2) - (3)].NT).res;   (yyval.NT).val=(yyvsp[(2) - (3)].NT).val;;}
    break;



/* Line 1455 of yacc.c  */
#line 2343 "syntaxe.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 607 "syntaxe.y"

yyerror(char*msg)           
 {
 printf(" erreur syntaxique a la ligne %d et a la colonne %d \n", nb_ligne, col);
  exit ;
 }
main()
{
 init();

yyparse();
printf("\n \n");

printf("\n-----------------------------------   les quadruplets   --------------------------------\n");
afficherQuad();

printf("\n\n\n-------------------------------------Partie optimisation--------------------------------\n\n\n");



printf("\n            ****************************************************************************     \n");



printf("\n                         -------------Verification 2*X------------     \n");

checkX2();
afficherQuad();
printf("\n            ****************************************************************************     \n");



printf("\n                         -------------Simplification algébrique------------     \n");

simplifierAlg();
afficherQuad();


printf("\n            ****************************************************************************     \n");



printf("\n                         -------------  Les IDSs non utilisées ------------     \n");

checkVarUse();
afficherQuad();
printf("\n            ****************************************************************************     \n");



printf("\n                         -------------propagation de copie------------     \n");

Propagation_de_copie( );
afficherQuad();
printf("\n            ****************************************************************************     \n");




printf("\n                         -------------propagation Arithemetique------------     \n");
propArth();
afficherQuad();

printf("\n            ****************************************************************************     \n");


printf("\n                         -------------elimination des tempons repetees------------     \n");
eliminer();
afficherQuad();

printf("\n   ------------------------------------>  optimisation final bravo  <-------------------------------------     \n");

optimisation();

printf("\n\t \t \t ******** bravo! bravo! bravo! objectif atteint vous etes les meilleurs ********\n\n\n");
printf("\t\t\t\t\t ------------------------------------------------\n");
afficherQuadFinal();
printf("\t\t\t\t\t ------------------------------------------------\n");

printf("\n\n\n-------------------------------------Partie code machine--------------------------------\n\n\n");
assembler();

printf("\n \n");
//  table des mots clés et séparateurs
afficher();    
printf("\n \n");

// table  IDF 
printHachTable();
printf("\n\n");

    
}
yywrape(){}


 
