
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
#line 1 "decaf.y"

	#include "ASTTree.h"
	#include <stdio.h>
	int yylex(void);
	void yyerror(char *);
	void test(struct Node *header);
	struct Node *header;


/* Line 189 of yacc.c  */
#line 83 "decaf.tab.c"

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
     MYBOOL = 258,
     MYBREAK = 259,
     MYCLASS = 260,
     MYELSE = 261,
     MYEXTENDS = 262,
     MYFOR = 263,
     MYIF = 264,
     MYINT = 265,
     MYNEW = 266,
     MYNULL = 267,
     MYRETURN = 268,
     MYSTRING = 269,
     MYTHIS = 270,
     MYVOID = 271,
     MYWHILE = 272,
     MYSTATIC = 273,
     MYPRINT = 274,
     MYREADINTEGER = 275,
     MYREADLINE = 276,
     MYINSTANCEOF = 277,
     MYFALSE = 278,
     MYTRUE = 279,
     MYSTRING2 = 280,
     MYIDENTIFIER = 281,
     MYSPACE = 282,
     MYINTEGER = 283,
     MYDEX = 284,
     MYHET = 285,
     MYLET = 286,
     MYEQU = 287,
     MYUEQU = 288,
     MYAND = 289,
     MYOR = 290
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 10 "decaf.y"

int intValue;
char *stringValue;
struct Node *node;



/* Line 214 of yacc.c  */
#line 162 "decaf.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 174 "decaf.tab.c"

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   531

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNRULES -- Number of states.  */
#define YYNSTATES  185

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,     2,     2,    42,     2,     2,
      47,    48,    40,    38,    51,    39,    53,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    44,
      36,    52,    37,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    12,    20,    26,    28,    30,
      33,    36,    44,    51,    54,    57,    59,    61,    63,    65,
      67,    70,    74,    76,    80,    81,    85,    88,    90,    93,
      95,    98,   100,   102,   104,   107,   110,   113,   115,   119,
     121,   125,   127,   132,   139,   144,   146,   150,   151,   161,
     167,   173,   181,   183,   186,   188,   193,   195,   199,   200,
     202,   204,   206,   208,   210,   214,   218,   222,   226,   230,
     234,   237,   241,   245,   249,   253,   257,   261,   265,   269,
     272,   276,   280,   285,   291,   298,   300,   302,   304,   306,
     308
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    56,    -1,    57,    44,    -1,    56,    57,
      44,    -1,     5,    62,     7,    62,    45,    58,    46,    -1,
       5,    62,    45,    58,    46,    -1,    59,    -1,    60,    -1,
      58,    59,    -1,    58,    60,    -1,    18,    63,    62,    47,
      64,    48,    65,    -1,    63,    62,    47,    64,    48,    65,
      -1,    61,    44,    -1,    63,    62,    -1,    26,    -1,    10,
      -1,     3,    -1,    14,    -1,    16,    -1,     5,    62,    -1,
      63,    49,    50,    -1,    61,    -1,    64,    51,    61,    -1,
      -1,    45,    66,    46,    -1,    45,    46,    -1,    67,    -1,
      67,    66,    -1,    60,    -1,    68,    44,    -1,    74,    -1,
      73,    -1,    72,    -1,    76,    44,    -1,    75,    44,    -1,
      77,    44,    -1,    65,    -1,    69,    52,    80,    -1,    70,
      -1,    80,    53,    62,    -1,    62,    -1,    80,    49,    80,
      50,    -1,    80,    53,    62,    47,    71,    48,    -1,    62,
      47,    71,    48,    -1,    80,    -1,    80,    51,    71,    -1,
      -1,     8,    47,    68,    44,    79,    44,    68,    48,    65,
      -1,    17,    47,    79,    48,    65,    -1,     9,    47,    79,
      48,    65,    -1,     9,    47,    79,    48,    65,     6,    65,
      -1,    13,    -1,    13,    80,    -1,     4,    -1,    19,    47,
      78,    48,    -1,    80,    -1,    80,    51,    78,    -1,    -1,
      80,    -1,    81,    -1,    69,    -1,    15,    -1,    70,    -1,
      47,    80,    48,    -1,    80,    38,    80,    -1,    80,    39,
      80,    -1,    80,    40,    80,    -1,    80,    41,    80,    -1,
      80,    42,    80,    -1,    39,    80,    -1,    80,    36,    80,
      -1,    80,    31,    80,    -1,    80,    37,    80,    -1,    80,
      30,    80,    -1,    80,    32,    80,    -1,    80,    33,    80,
      -1,    80,    34,    80,    -1,    80,    35,    80,    -1,    43,
      80,    -1,    20,    47,    48,    -1,    21,    47,    48,    -1,
      11,    62,    47,    48,    -1,    11,    63,    49,    80,    50,
      -1,    22,    47,    80,    51,    62,    48,    -1,    28,    -1,
      29,    -1,    24,    -1,    23,    -1,    25,    -1,    12,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    59,    60,    64,    65,    69,    70,    71,
      72,    76,    77,    81,    85,    89,    92,    93,    94,    95,
      96,    97,   101,   102,   103,   107,   108,   111,   112,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   126,   127,
     130,   131,   132,   135,   136,   139,   140,   141,   144,   147,
     150,   151,   154,   155,   158,   161,   164,   165,   166,   169,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   199,   200,   201,   202,   203,
     204
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MYBOOL", "MYBREAK", "MYCLASS", "MYELSE",
  "MYEXTENDS", "MYFOR", "MYIF", "MYINT", "MYNEW", "MYNULL", "MYRETURN",
  "MYSTRING", "MYTHIS", "MYVOID", "MYWHILE", "MYSTATIC", "MYPRINT",
  "MYREADINTEGER", "MYREADLINE", "MYINSTANCEOF", "MYFALSE", "MYTRUE",
  "MYSTRING2", "MYIDENTIFIER", "MYSPACE", "MYINTEGER", "MYDEX", "MYHET",
  "MYLET", "MYEQU", "MYUEQU", "MYAND", "MYOR", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "';'", "'{'", "'}'", "'('", "')'", "'['",
  "']'", "','", "'='", "'.'", "$accept", "Program", "ClassDefs",
  "ClassDef", "Field", "FunctionDef", "VariableDef", "Variable",
  "Identifier", "Type", "Formals", "StmtBlock", "Stmts", "Stmt",
  "SimpleStmt", "LValue", "Call", "Actuals", "ForStmt", "WhileStmt",
  "IfStmt", "ReturnStmt", "BreakStmt", "PrintStmt", "Exprs", "BoolExpr",
  "Expr", "Constant", 0
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
     285,   286,   287,   288,   289,   290,    60,    62,    43,    45,
      42,    47,    37,    33,    59,   123,   125,    40,    41,    91,
      93,    44,    61,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    58,    58,    58,
      58,    59,    59,    60,    61,    62,    63,    63,    63,    63,
      63,    63,    64,    64,    64,    65,    65,    66,    66,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    68,    68,
      69,    69,    69,    70,    70,    71,    71,    71,    72,    73,
      74,    74,    75,    75,    76,    77,    78,    78,    78,    79,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    81,    81,    81,    81,
      81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     7,     5,     1,     1,     2,
       2,     7,     6,     2,     2,     1,     1,     1,     1,     1,
       2,     3,     1,     3,     0,     3,     2,     1,     2,     1,
       2,     1,     1,     1,     2,     2,     2,     1,     3,     1,
       3,     1,     4,     6,     4,     1,     3,     0,     9,     5,
       5,     7,     1,     2,     1,     4,     1,     3,     0,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     4,     5,     6,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,    15,     0,     1,     0,     3,
       0,     0,     4,     0,    17,     0,    16,    18,    19,     0,
       0,     7,     8,     0,     0,     0,    20,     0,     6,     9,
      10,    13,     0,    14,     0,     0,    21,    24,     5,    24,
      22,     0,     0,     0,    14,     0,     0,     0,     0,    12,
      23,    11,    54,     0,     0,     0,    90,    52,    62,     0,
       0,     0,     0,     0,    88,    87,    89,    85,    86,     0,
       0,    26,     0,    29,    41,    37,     0,    27,     0,    61,
      63,    33,    32,    31,     0,     0,     0,     0,    60,     0,
       0,     0,     0,    61,    63,    53,     0,    58,     0,     0,
       0,    70,    79,     0,    47,    25,    28,    30,     0,    35,
      34,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
       0,     0,     0,     0,    56,    80,    81,     0,    64,     0,
      45,    38,    74,    72,    75,    76,    77,    78,    71,    73,
      65,    66,    67,    68,    69,     0,    40,     0,     0,    82,
       0,     0,    55,    58,     0,    44,    47,    42,    47,     0,
      50,    83,    49,    57,     0,    46,     0,     0,     0,    84,
      43,     0,    51,     0,    48
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    20,    21,    22,    23,    74,    41,
      42,    75,    76,    77,    78,    93,    94,   139,    81,    82,
      83,    84,    85,    86,   133,   128,    87,    88
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -105
static const yytype_int16 yypact[] =
{
       6,     8,    33,     6,    -2,  -105,     3,  -105,    13,  -105,
       8,   276,  -105,    16,  -105,     8,  -105,  -105,  -105,   161,
      84,  -105,  -105,    14,   -19,   276,  -105,   -19,  -105,  -105,
    -105,  -105,    31,    36,   206,    37,  -105,   161,  -105,   161,
    -105,   -19,   -35,    -7,  -105,    40,   161,    40,   133,  -105,
    -105,  -105,  -105,    41,    46,    94,  -105,   248,  -105,    48,
      54,    56,    59,    64,  -105,  -105,  -105,  -105,  -105,   248,
     248,  -105,   248,  -105,    66,  -105,    69,   178,    75,    72,
       5,  -105,  -105,  -105,    78,    83,    85,   410,  -105,   248,
     248,    81,    91,  -105,  -105,   410,   248,   248,   103,   112,
     248,    -3,     7,   266,   248,  -105,  -105,  -105,   248,  -105,
    -105,  -105,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,     8,    88,   117,   410,
     119,   215,   120,   121,   290,  -105,  -105,   314,  -105,   122,
     338,   410,   -21,   -21,   478,   478,   458,   434,   -21,   -21,
      -3,    -3,     7,     7,     7,   362,    86,   248,    40,  -105,
     386,    40,  -105,   248,     8,  -105,   248,  -105,   248,   129,
     168,  -105,  -105,  -105,   136,  -105,   137,   248,    40,  -105,
    -105,   148,  -105,    40,  -105
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,  -105,   202,   183,    -5,   -12,    70,    -1,    71,
     171,   -44,   135,  -105,   -85,   -46,   -42,  -104,  -105,  -105,
    -105,  -105,  -105,  -105,    50,   -91,   -45,  -105
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -40
static const yytype_int16 yytable[] =
{
       6,    49,    79,    51,   127,   132,    80,     5,    30,    13,
      10,     1,    95,    45,    26,    29,    46,   120,   121,   122,
     123,   124,    30,    33,   101,   102,    35,   103,   125,    29,
      32,    79,   126,     7,     5,    80,    73,   122,   123,   124,
      44,    47,     9,    79,    46,   129,   125,    80,    11,   -39,
     126,   129,   134,   -39,    91,   137,   125,    12,    31,   140,
     126,    25,   175,   141,   176,    73,   169,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,    36,    24,    37,    39,    48,   160,    14,    89,    15,
      27,    24,   181,    90,    16,    96,    24,    14,    17,    15,
      18,    97,    19,    98,    16,    24,    99,    40,    17,    40,
      18,   100,   129,   104,   170,   105,    50,   172,   134,   107,
       5,   140,   109,   140,   108,   156,    92,   110,   130,   111,
      28,    79,   157,   168,   182,    80,    14,    52,    15,   184,
     131,    53,    54,    16,    55,    56,    57,    17,    58,    18,
      59,   135,    60,    61,    62,    63,    64,    65,    66,     5,
     136,    67,    68,   174,    14,   158,    15,   159,   161,   162,
     165,    16,    69,   177,   178,    17,    70,    18,    48,    71,
      72,    14,    52,    15,   179,   180,    53,    54,    16,    55,
      56,    57,    17,    58,    18,    59,   183,    60,    61,    62,
      63,    64,    65,    66,     5,     8,    67,    68,    34,    14,
      43,    15,   106,   173,     0,     0,    16,    69,     0,     0,
      17,    70,    18,    48,    19,    72,    55,    56,     0,     0,
      58,     0,     0,     0,     0,    61,    62,    63,    64,    65,
      66,     5,     0,    67,    68,     0,     0,     0,     0,     0,
       0,     0,    38,     0,    69,     0,     0,     0,    70,    55,
      56,     0,    72,    58,     0,    36,     0,     0,    61,    62,
      63,    64,    65,    66,     5,     0,    67,    68,     0,    14,
       0,    15,     0,     0,     0,     0,    16,    69,     0,     0,
      17,    70,    18,     0,    19,    72,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,     0,
       0,     0,     0,     0,   138,   125,     0,     0,     0,   126,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,     0,     0,     0,     0,     0,     0,   125,
       0,   163,     0,   126,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,     0,     0,     0,
       0,     0,     0,   125,     0,   164,     0,   126,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,     0,     0,     0,     0,     0,     0,   125,     0,   166,
       0,   126,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,     0,     0,     0,     0,     0,
       0,   125,   167,     0,     0,   126,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,     0,
       0,     0,     0,     0,     0,   125,   171,     0,     0,   126,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,     0,     0,     0,     0,     0,     0,   125,
       0,     0,     0,   126,   112,   113,   114,   115,   116,     0,
     118,   119,   120,   121,   122,   123,   124,     0,     0,     0,
       0,     0,     0,   125,     0,     0,     0,   126,   112,   113,
     114,   115,     0,     0,   118,   119,   120,   121,   122,   123,
     124,     0,     0,     0,     0,     0,     0,   125,   112,   113,
       0,   126,     0,     0,   118,   119,   120,   121,   122,   123,
     124,     0,     0,     0,     0,     0,     0,   125,     0,     0,
       0,   126
};

static const yytype_int16 yycheck[] =
{
       1,    45,    48,    47,    89,    96,    48,    26,    20,    10,
       7,     5,    57,    48,    15,    20,    51,    38,    39,    40,
      41,    42,    34,    24,    69,    70,    27,    72,    49,    34,
      49,    77,    53,     0,    26,    77,    48,    40,    41,    42,
      41,    48,    44,    89,    51,    90,    49,    89,    45,    44,
      53,    96,    97,    48,    55,   100,    49,    44,    44,   104,
      53,    45,   166,   108,   168,    77,   157,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    50,    11,    47,    47,    45,   131,     3,    47,     5,
      19,    20,   177,    47,    10,    47,    25,     3,    14,     5,
      16,    47,    18,    47,    10,    34,    47,    37,    14,    39,
      16,    47,   157,    47,   158,    46,    46,   161,   163,    44,
      26,   166,    44,   168,    52,   126,    55,    44,    47,    44,
      46,   177,    44,    47,   178,   177,     3,     4,     5,   183,
      49,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    48,    19,    20,    21,    22,    23,    24,    25,    26,
      48,    28,    29,   164,     3,    48,     5,    48,    48,    48,
      48,    10,    39,    44,     6,    14,    43,    16,    45,    46,
      47,     3,     4,     5,    48,    48,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    48,    19,    20,    21,
      22,    23,    24,    25,    26,     3,    28,    29,    25,     3,
      39,     5,    77,   163,    -1,    -1,    10,    39,    -1,    -1,
      14,    43,    16,    45,    18,    47,    11,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    39,    -1,    -1,    -1,    43,    11,
      12,    -1,    47,    15,    -1,    50,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    29,    -1,     3,
      -1,     5,    -1,    -1,    -1,    -1,    10,    39,    -1,    -1,
      14,    43,    16,    -1,    18,    47,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    -1,    53,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    51,    -1,    53,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,
      -1,    53,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    53,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    53,    30,    31,    32,    33,    34,    -1,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    53,    30,    31,
      32,    33,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    30,    31,
      -1,    53,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    55,    56,    57,    26,    62,     0,    57,    44,
       7,    45,    44,    62,     3,     5,    10,    14,    16,    18,
      58,    59,    60,    61,    63,    45,    62,    63,    46,    59,
      60,    44,    49,    62,    58,    62,    50,    47,    46,    47,
      61,    63,    64,    64,    62,    48,    51,    48,    45,    65,
      61,    65,     4,     8,     9,    11,    12,    13,    15,    17,
      19,    20,    21,    22,    23,    24,    25,    28,    29,    39,
      43,    46,    47,    60,    62,    65,    66,    67,    68,    69,
      70,    72,    73,    74,    75,    76,    77,    80,    81,    47,
      47,    62,    63,    69,    70,    80,    47,    47,    47,    47,
      47,    80,    80,    80,    47,    46,    66,    44,    52,    44,
      44,    44,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    49,    53,    68,    79,    80,
      47,    49,    79,    78,    80,    48,    48,    80,    48,    71,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    62,    44,    48,    48,
      80,    48,    48,    51,    51,    48,    51,    50,    47,    79,
      65,    50,    65,    78,    62,    71,    71,    44,     6,    48,
      48,    68,    65,    48,    65
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
#line 55 "decaf.y"
    {(yyval.node) = header = mkNode(Node_Program, 1, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 59 "decaf.y"
    {(yyval.node) = mkNode(Node_ClassDefs, 1, (yyvsp[(1) - (2)].node));;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 60 "decaf.y"
    {(yyval.node) = mkNode(Node_ClassDefs, 2, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node));;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 64 "decaf.y"
    {(yyval.node) = mkNode(Node_EClassDef, 3, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node), (yyvsp[(6) - (7)].node));;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 65 "decaf.y"
    {(yyval.node) = mkNode(Node_ClassDef, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 69 "decaf.y"
    {(yyval.node) = mkNode(Node_Field, 1, (yyvsp[(1) - (1)].node));;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 70 "decaf.y"
    {(yyval.node) = mkNode(Node_Field, 1, (yyvsp[(1) - (1)].node));;;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 71 "decaf.y"
    {(yyval.node) = mkNode(Node_Field, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 72 "decaf.y"
    {(yyval.node) = mkNode(Node_Field, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 76 "decaf.y"
    {(yyval.node) = mkNode(Node_SFunctionDef, 4, (yyvsp[(2) - (7)].node), (yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node));;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 77 "decaf.y"
    {(yyval.node) = mkNode(Node_FunctionDef, 4, (yyvsp[(1) - (6)].node), (yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 81 "decaf.y"
    {(yyval.node) = mkNode(Node_VariableDef, 1, (yyvsp[(1) - (2)].node));;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 85 "decaf.y"
    {(yyval.node) = mkNode(Node_Variable, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 89 "decaf.y"
    {(yyval.node) = mkLeaf_variable(yylval.stringValue);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 92 "decaf.y"
    {(yyval.node) = mkLeaf_type(DataType_int);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 93 "decaf.y"
    {(yyval.node) = mkLeaf_type(DataType_bool);;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 94 "decaf.y"
    {(yyval.node) = mkLeaf_type(DataType_string);;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 95 "decaf.y"
    {(yyval.node) = mkLeaf_type(DataType_void);;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 96 "decaf.y"
    {(yyval.node) = mkNode(Node_ClassType, 1, (yyvsp[(2) - (2)].node));;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 97 "decaf.y"
    {(yyval.node) = mkNode(Node_Array, 1, (yyvsp[(1) - (3)].node));;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 101 "decaf.y"
    {(yyval.node) = mkNode(Node_Formals, 1, (yyvsp[(1) - (1)].node));;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 102 "decaf.y"
    {(yyval.node) = mkNode(Node_Formals, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 103 "decaf.y"
    {(yyval.node) = mkLeaf_other(Leaf_Blank);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 107 "decaf.y"
    {(yyval.node) = mkNode(Node_StmtBlock, 1, (yyvsp[(2) - (3)].node));;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 108 "decaf.y"
    {(yyval.node) = mkLeaf_other(Leaf_Blank);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 111 "decaf.y"
    {(yyval.node) = mkNode(Node_Stmts, 1, (yyvsp[(1) - (1)].node));;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 112 "decaf.y"
    {(yyval.node) = mkNode(Node_Stmts, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 115 "decaf.y"
    {(yyval.node) = mkNode(Node_Stmt, 1, (yyvsp[(1) - (1)].node));;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 116 "decaf.y"
    {(yyval.node) = mkNode(Node_Stmt, 1, (yyvsp[(1) - (2)].node));;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 117 "decaf.y"
    {(yyval.node) = mkNode(Node_Stmt, 1, (yyvsp[(1) - (1)].node));;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 118 "decaf.y"
    {(yyval.node) = mkNode(Node_Stmt, 1, (yyvsp[(1) - (1)].node));;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 119 "decaf.y"
    {(yyval.node) = mkNode(Node_Stmt, 1, (yyvsp[(1) - (1)].node));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 120 "decaf.y"
    {(yyval.node) = mkNode(Node_Stmt, 1, (yyvsp[(1) - (2)].node));;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 121 "decaf.y"
    {(yyval.node) = mkNode(Node_Stmt, 1, (yyvsp[(1) - (2)].node));;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 122 "decaf.y"
    {(yyval.node) = mkNode(Node_Stmt, 1, (yyvsp[(1) - (2)].node));;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 123 "decaf.y"
    {(yyval.node) = mkNode(Node_Stmt, 1, (yyvsp[(1) - (1)].node));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 126 "decaf.y"
    {(yyval.node) = mkNode(Node_assign, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 127 "decaf.y"
    {(yyval.node) = mkNode(Node_SimpleStmt, 1, (yyvsp[(1) - (1)].node));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 130 "decaf.y"
    {(yyval.node) = mkNode(Node_LValue, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 131 "decaf.y"
    {(yyval.node) = mkNode(Node_LValue, 1, (yyvsp[(1) - (1)].node));;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 132 "decaf.y"
    {(yyval.node) = mkNode(Node_LValue, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 135 "decaf.y"
    {(yyval.node) = mkNode(Node_Call, 3, (yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node));;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 136 "decaf.y"
    {(yyval.node) = mkNode(Node_Call, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 139 "decaf.y"
    {(yyval.node) = mkNode(Node_Actuals, 1, (yyvsp[(1) - (1)].node));;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 140 "decaf.y"
    {(yyval.node) = mkNode(Node_Actuals, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 141 "decaf.y"
    {(yyval.node) = mkLeaf_other(Leaf_Blank);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 144 "decaf.y"
    {(yyval.node) = mkNode(Node_ForStmt, 4, (yyvsp[(3) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(7) - (9)].node), (yyvsp[(9) - (9)].node));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 147 "decaf.y"
    {(yyval.node) = mkNode(Node_WhileStmt, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 150 "decaf.y"
    {(yyval.node) = mkNode(Node_IfStmt, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 151 "decaf.y"
    {(yyval.node) = mkNode(Node_IfStmt, 3, (yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node));;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 154 "decaf.y"
    {(yyval.node) = mkNode(Node_ReturnStmt, 0);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 155 "decaf.y"
    {(yyval.node) = mkNode(Node_ReturnStmt, 1, (yyvsp[(2) - (2)].node));;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 158 "decaf.y"
    {(yyval.node) = mkLeaf_other(Leaf_break);;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 161 "decaf.y"
    {(yyval.node) = mkNode(Node_PrintStmt, 1, (yyvsp[(3) - (4)].node));;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 164 "decaf.y"
    {(yyval.node) = mkNode(Node_Exprs, 1, (yyvsp[(1) - (1)].node));;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 165 "decaf.y"
    {(yyval.node) = mkNode(Node_Exprs, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 166 "decaf.y"
    {(yyval.node) = mkLeaf_other(Leaf_Blank);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 169 "decaf.y"
    {(yyval.node) = mkNode(Node_BoolExpr, 1, (yyvsp[(1) - (1)].node));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 172 "decaf.y"
    {(yyval.node) = mkNode(Node_Expr, 1, (yyvsp[(1) - (1)].node));;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 173 "decaf.y"
    {(yyval.node) = mkNode(Node_Expr, 1, (yyvsp[(1) - (1)].node));;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 174 "decaf.y"
    {(yyval.node) = mkLeaf_other(Leaf_this);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 175 "decaf.y"
    {(yyval.node) = mkNode(Node_Expr, 1, (yyvsp[(1) - (1)].node));;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 176 "decaf.y"
    {(yyval.node) = mkNode(Node_Expr, 1, (yyvsp[(2) - (3)].node));;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 177 "decaf.y"
    {(yyval.node) = mkNode(Node_add, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 178 "decaf.y"
    {(yyval.node) = mkNode(Node_sub, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 179 "decaf.y"
    {(yyval.node) = mkNode(Node_mul, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 180 "decaf.y"
    {(yyval.node) = mkNode(Node_div, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 181 "decaf.y"
    {(yyval.node) = mkNode(Node_mod, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 182 "decaf.y"
    {(yyval.node) = mkNode(Node_neg, 1, (yyvsp[(2) - (2)].node));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 183 "decaf.y"
    {(yyval.node) = mkNode(Node_l, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 184 "decaf.y"
    {(yyval.node) = mkNode(Node_le, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 185 "decaf.y"
    {(yyval.node) = mkNode(Node_h, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 186 "decaf.y"
    {(yyval.node) = mkNode(Node_he, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 187 "decaf.y"
    {(yyval.node) = mkNode(Node_e, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 188 "decaf.y"
    {(yyval.node) = mkNode(Node_ne, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 189 "decaf.y"
    {(yyval.node) = mkNode(Node_and, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 190 "decaf.y"
    {(yyval.node) = mkNode(Node_or, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 191 "decaf.y"
    {(yyval.node) = mkNode(Node_not, 1, (yyvsp[(2) - (2)].node));;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 192 "decaf.y"
    {(yyval.node) = mkLeaf_other(syscall_readint);;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 193 "decaf.y"
    {(yyval.node) = mkLeaf_other(syscall_readline);;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 194 "decaf.y"
    {(yyval.node) = mkNode(Node_NewClass, 1, (yyvsp[(2) - (4)].node));;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 195 "decaf.y"
    {(yyval.node) = mkNode(Node_NewArray, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 196 "decaf.y"
    {(yyval.node) = mkNode(Node_instanceof, 2, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node));;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 199 "decaf.y"
    {(yyval.node) = mkLeaf_const_int(yylval.intValue);;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 200 "decaf.y"
    {(yyval.node) = mkLeaf_const_int(yylval.intValue);;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 201 "decaf.y"
    {(yyval.node) = mkLeaf_const_bool(1);;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 202 "decaf.y"
    {(yyval.node) = mkLeaf_const_bool(0);;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 203 "decaf.y"
    {(yyval.node) = mkLeaf_const_string(yylval.stringValue);;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 204 "decaf.y"
    {(yyval.node) = mkLeaf_other(Leaf_NULL);;}
    break;



/* Line 1455 of yacc.c  */
#line 2224 "decaf.tab.c"
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
#line 206 "decaf.y"


void yyerror(char *s)
{
	printf("%s\n",s);
}

int main(void)
{
	yyparse();
	createTableFromASTtree(header);
	updateTable(header);
	Check(header);
	genTAC(header);
	printTAC(header);
	test(header);
	getchar();
	return 0;
}









