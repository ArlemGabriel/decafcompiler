/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y" /* yacc.c:337  */

//----------------------------- Declaraciones -----------------------------
#include <iostream>
#include "funcionesParser.h"
using namespace std;

typedef NodeParseTree * pNodeParseTree;
int contNodos=0;
pNodeParseTree nodo0 = new NodeParseTree();
pNodeParseTree nodo1 = new NodeParseTree();

extern int yylex(void);
extern void printTable();
extern int yyparse();
extern FILE *yyin;

void addTokenToTree(string pToken, string pValue, int pRow, int pColumn);
void addParentToLastNode();
void addChildToLastNode();
int yyerror(char *s);

#line 92 "parser.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
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
    RBRACE = 312,
    PRECMIN = 313,
    PRECMAX = 314
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
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   433

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  209

#define YYUNDEFTOK  2
#define YYMAXUTOK   314

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    58,    58,    61,    62,    63,    64,    67,    68,    71,
      74,    77,    78,    79,    80,    82,    85,    86,    89,    90,
      93,    94,    97,   100,   101,   104,   105,   108,   109,   112,
     113,   114,   117,   120,   121,   122,   125,   128,   129,   132,
     133,   136,   137,   138,   139,   140,   141,   142,   143,   146,
     149,   150,   153,   156,   159,   162,   165,   168,   169,   172,
     173,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   203,   204,   205,   208,
     209,   212,   213,   216,   217,   218,   219,   220,   221,   222
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "VOID", "STRING", "THIS",
  "WHILE", "BREAK", "READINTEGER", "INT", "EXTENDS", "IF", "NEW",
  "READLINE", "DOUBLE", "INTERFACE", "IMPLEMENTS", "ELSE", "NEWARRAY",
  "TRUE", "BOOL", "TNULL", "FOR", "RETURN", "PRINT", "FALSE", "ID",
  "CONSINTEGERDEC", "CONSINTEGERHEX", "CONSDOUBLEDEC", "CONSDOUBLECIEN",
  "CONSSTRING", "CONSBOOLEAN", "SUM", "SUBTRACTION", "MULTIPLICATION",
  "DIVISION", "MODULE", "LESSTHAN", "LESSEQUALTHAN", "GREATERTHAN",
  "GREATEREQUALTHAN", "EQUAL", "EEQUAL", "DISTINCT", "AND", "OR",
  "NEGATION", "SEMICOLON", "COMMA", "DOT", "LBRACKET", "RBRACKET",
  "LPAREN", "RPAREN", "LBRACE", "RBRACE", "PRECMIN", "PRECMAX", "$accept",
  "Program", "Decl", "OtraDecl", "VariableDecl", "Variable", "Type",
  "FunctionDecl", "Formals", "FormalsVars", "ClassDecl", "ExtendDecl",
  "ImplementsDecl", "OtroID", "Field", "InterfaceDecl", "Prototype",
  "StmtBlock", "BlockVariables", "BlockStmts", "Stmt", "IfStmt",
  "ElseStmt", "WhileStmt", "ForStmt", "ReturnStmt", "BreakStmt",
  "PrintStmt", "OtraExpr", "ExprOpcional", "Expr", "LValue", "Call",
  "Actuals", "Constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -169

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-169)))

#define YYTABLE_NINF -61

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     387,    -6,    -2,  -169,  -169,  -169,    15,  -169,    56,  -169,
     387,    14,    37,   387,   387,   387,    60,    20,    23,  -169,
     387,  -169,  -169,    39,    38,  -169,  -169,  -169,    68,    80,
     119,     1,  -169,   119,  -169,  -169,    71,    52,    61,    63,
      55,    85,    65,    57,    58,    75,   410,   119,  -169,  -169,
      74,    77,    78,  -169,    74,   108,  -169,   410,   410,    91,
      61,   119,  -169,   119,   119,  -169,    75,  -169,  -169,  -169,
    -169,   119,    53,    95,    97,  -169,  -169,  -169,   101,   107,
     103,   106,   109,   111,   112,  -169,   115,   145,   127,   130,
    -169,  -169,  -169,  -169,  -169,  -169,   145,   145,   145,  -169,
     104,    53,  -169,  -169,  -169,  -169,  -169,  -169,   136,   290,
     147,  -169,  -169,   142,   143,   145,  -169,   124,   145,   168,
     154,   145,   145,   148,   145,   145,  -169,   290,   166,  -169,
    -169,  -169,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   171,   145,   145,     1,     1,
     188,  -169,   210,   159,  -169,   252,   167,  -169,   271,   271,
     160,  -169,   381,   381,   -32,   -32,   -32,   375,   375,   375,
     375,   347,   347,   328,   309,   165,   232,   290,  -169,  -169,
     114,   114,  -169,   119,   145,   145,   176,  -169,  -169,   145,
    -169,  -169,   202,   -37,   187,   271,   189,   182,   114,  -169,
    -169,   145,  -169,  -169,  -169,  -169,   186,   114,  -169
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    14,    11,    12,     0,    13,     0,     2,
       8,     0,     0,     8,     8,     8,    24,     0,     0,     1,
       8,     3,     9,    10,     0,     4,     5,     6,     0,    26,
      19,    35,     7,    19,    15,    23,     0,     0,    21,     0,
       0,     0,     0,     0,     0,    28,    31,     0,    18,    10,
       0,     0,     0,    32,     0,     0,    25,    31,    31,     0,
      21,    38,    17,    19,    19,    16,    28,    29,    30,    22,
      20,    38,    40,     0,     0,    27,    37,    64,     0,     0,
       0,     0,     0,     0,     0,    99,     0,    60,     0,    86,
      93,    94,    95,    96,    98,    97,     0,     0,     0,    48,
       0,    40,    42,    43,    44,    46,    45,    47,     0,    59,
      63,    65,    62,     0,     0,     0,    55,     0,     0,     0,
       0,     0,    60,     0,     0,    92,    72,    81,     0,    36,
      39,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    35,
       0,    82,     0,     0,    83,     0,     0,    54,    58,    58,
       0,    66,    67,    68,    69,    70,    71,    73,    74,    75,
      76,    77,    78,    79,    80,    87,     0,    61,    34,    33,
      60,    60,    84,     0,    60,     0,     0,    91,    89,    92,
      88,    52,    51,     0,     0,    58,     0,     0,    60,    49,
      85,    60,    57,    56,    90,    50,     0,    60,    53
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,   242,   174,   125,    40,   -30,    48,     5,   193,
    -169,  -169,  -169,   192,   -34,  -169,  -121,   -40,   204,   158,
    -168,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -155,   -85,
     -89,  -169,  -169,    92,  -169
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,    20,    21,    10,    11,    12,    13,    40,    48,
      14,    29,    37,    56,    59,    15,    43,    99,    72,   100,
     101,   102,   199,   103,   104,   105,   106,   107,   186,   108,
     109,   110,   111,   160,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    42,   123,    39,   187,    41,     3,   126,   127,   128,
      62,     4,   191,   192,    65,    24,     5,    39,   200,   145,
     146,    16,     7,    67,    68,    17,   150,   178,   179,   152,
     205,    39,   155,    39,    39,   158,   159,   156,    44,   208,
     202,    39,    18,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,    19,   176,   177,    77,
      78,    79,    80,    22,    23,    81,    82,    83,    73,    74,
      38,    28,    84,    38,    30,    85,    86,    87,    88,    31,
      89,    90,    91,    92,    93,    94,    95,    60,    96,    24,
      49,    34,    52,    33,    58,    35,   195,    36,    45,   194,
     159,    97,   -60,    38,    38,    58,    58,    98,    46,    61,
      50,    47,    51,    54,    53,    24,   206,    24,    42,    42,
      77,    78,    79,    80,     3,    55,    81,    82,    83,     4,
      61,    63,    64,    84,     5,    66,    85,    86,    87,    88,
       7,    89,    90,    91,    92,    93,    94,    95,    69,    96,
     113,    77,   114,   193,    80,   115,   116,   117,    82,    83,
     118,   129,    97,   119,    84,   120,   121,    85,    98,   122,
      61,    57,    89,    90,    91,    92,    93,    94,    95,   151,
      96,   124,    57,    57,   125,   131,    71,    25,    26,    27,
     147,   148,   149,    97,    32,   153,    71,   157,   175,    98,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   154,
     141,   142,   143,   144,   182,   188,   184,   145,   146,   189,
     198,   161,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   196,   141,   142,   143,   144,   201,   204,   203,   145,
     146,   207,     9,   180,   132,   133,   134,   135,   136,   137,
     138,   139,   140,    70,   141,   142,   143,   144,    75,   130,
       0,   145,   146,     0,     0,   181,   132,   133,   134,   135,
     136,   137,   138,   139,   140,    76,   141,   142,   143,   144,
       0,   197,     0,   145,   146,   190,   132,   133,   134,   135,
     136,   137,   138,   139,   140,     0,   141,   142,   143,   144,
       0,     0,   183,   145,   146,   132,   133,   134,   135,   136,
     137,   138,   139,   140,     0,   141,   142,   143,   144,     0,
       0,   185,   145,   146,   132,   133,   134,   135,   136,   137,
     138,   139,   140,     0,   141,   142,   143,   144,     0,     0,
       0,   145,   146,   132,   133,   134,   135,   136,   137,   138,
     139,   140,     0,   141,   142,   143,     0,     0,     0,     0,
     145,   146,   132,   133,   134,   135,   136,   137,   138,   139,
     140,     0,   141,   142,     0,     0,     0,     0,     0,   145,
     146,   132,   133,   134,   135,   136,   137,   138,   139,   140,
       1,     2,     3,     0,     0,     0,     0,     4,   145,   146,
       0,     0,     5,     6,     0,     0,     0,     0,     7,   132,
     133,   134,   135,   136,     2,     3,     0,   134,   135,   136,
       4,     0,     0,     0,     0,     5,   145,   146,     0,     0,
       0,     7,   145,   146
};

static const yytype_int16 yycheck[] =
{
      30,    31,    87,    33,   159,     4,     5,    96,    97,    98,
      50,    10,   180,   181,    54,    52,    15,    47,    55,    51,
      52,    27,    21,    57,    58,    27,   115,   148,   149,   118,
     198,    61,   121,    63,    64,   124,   125,   122,    33,   207,
     195,    71,    27,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,     0,   146,   147,     6,
       7,     8,     9,    49,    27,    12,    13,    14,    63,    64,
      30,    11,    19,    33,    54,    22,    23,    24,    25,    56,
      27,    28,    29,    30,    31,    32,    33,    47,    35,    52,
      27,    53,    27,    54,    46,    27,   185,    17,    27,   184,
     189,    48,    49,    63,    64,    57,    58,    54,    56,    56,
      55,    50,    27,    55,    57,    52,   201,    52,   148,   149,
       6,     7,     8,     9,     5,    50,    12,    13,    14,    10,
      56,    54,    54,    19,    15,    27,    22,    23,    24,    25,
      21,    27,    28,    29,    30,    31,    32,    33,    57,    35,
      55,     6,    55,   183,     9,    54,    49,    54,    13,    14,
      54,    57,    48,    54,    19,    54,    54,    22,    54,    54,
      56,    46,    27,    28,    29,    30,    31,    32,    33,    55,
      35,    54,    57,    58,    54,    49,    61,    13,    14,    15,
      43,    49,    49,    48,    20,    27,    71,    49,    27,    54,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    55,
      44,    45,    46,    47,    55,    55,    49,    51,    52,    54,
      18,    55,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    55,    44,    45,    46,    47,    49,    55,    49,    51,
      52,    55,     0,    55,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    60,    44,    45,    46,    47,    66,   101,
      -1,    51,    52,    -1,    -1,    55,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    71,    44,    45,    46,    47,
      -1,   189,    -1,    51,    52,    53,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    46,    47,
      -1,    -1,    50,    51,    52,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    44,    45,    46,    47,    -1,
      -1,    50,    51,    52,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    44,    45,    46,    47,    -1,    -1,
      -1,    51,    52,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,
      51,    52,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,
      52,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    51,    52,
      -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    21,    34,
      35,    36,    37,    38,     4,     5,    -1,    36,    37,    38,
      10,    -1,    -1,    -1,    -1,    15,    51,    52,    -1,    -1,
      -1,    21,    51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    10,    15,    16,    21,    61,    62,
      64,    65,    66,    67,    70,    75,    27,    27,    27,     0,
      62,    63,    49,    27,    52,    63,    63,    63,    11,    71,
      54,    56,    63,    54,    53,    27,    17,    72,    65,    66,
      68,     4,    66,    76,    68,    27,    56,    50,    69,    27,
      55,    27,    27,    57,    55,    50,    73,    64,    67,    74,
      65,    56,    77,    54,    54,    77,    27,    74,    74,    57,
      69,    64,    78,    68,    68,    73,    78,     6,     7,     8,
       9,    12,    13,    14,    19,    22,    23,    24,    25,    27,
      28,    29,    30,    31,    32,    33,    35,    48,    54,    77,
      79,    80,    81,    83,    84,    85,    86,    87,    89,    90,
      91,    92,    94,    55,    55,    54,    49,    54,    54,    54,
      54,    54,    54,    89,    54,    54,    90,    90,    90,    57,
      79,    49,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    44,    45,    46,    47,    51,    52,    43,    49,    49,
      90,    55,    90,    27,    55,    90,    89,    49,    90,    90,
      93,    55,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    27,    90,    90,    76,    76,
      55,    55,    55,    50,    49,    50,    88,    88,    55,    54,
      53,    80,    80,    66,    89,    90,    55,    93,    18,    82,
      55,    49,    88,    49,    55,    80,    89,    55,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    62,    62,    63,    63,    64,
      65,    66,    66,    66,    66,    66,    67,    67,    68,    68,
      69,    69,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    74,    75,    76,    76,    76,    77,    78,    78,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    81,
      82,    82,    83,    84,    85,    86,    87,    88,    88,    89,
      89,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    91,    91,    91,    92,
      92,    93,    93,    94,    94,    94,    94,    94,    94,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     2,     0,     2,
       2,     1,     1,     1,     1,     3,     6,     6,     2,     0,
       3,     0,     7,     2,     0,     3,     0,     3,     0,     2,
       2,     0,     5,     7,     7,     0,     4,     2,     0,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     6,
       2,     0,     5,     9,     3,     2,     6,     3,     0,     1,
       0,     3,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     4,     6,     1,     3,     4,     4,
       6,     2,     0,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

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
#line 58 "parser.y" /* yacc.c:1652  */
    {cout << "Program";addTokenToTree("Program","\"No Value\"",0,0);}
#line 1474 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 61 "parser.y" /* yacc.c:1652  */
    {cout << "Decl 1\n";}
#line 1480 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 62 "parser.y" /* yacc.c:1652  */
    {cout << "Decl 2\n";}
#line 1486 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 63 "parser.y" /* yacc.c:1652  */
    {cout << "Decl 3\n";}
#line 1492 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 64 "parser.y" /* yacc.c:1652  */
    {cout << "Decl 4\n";}
#line 1498 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 67 "parser.y" /* yacc.c:1652  */
    {cout << "OtraDecl\n";}
#line 1504 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 71 "parser.y" /* yacc.c:1652  */
    {cout << "VariableDecl\n";}
#line 1510 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 74 "parser.y" /* yacc.c:1652  */
    {printf("Type Variable %s\n",yyvsp[-2]);}
#line 1516 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 77 "parser.y" /* yacc.c:1652  */
    {printf("Type int\n");}
#line 1522 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 78 "parser.y" /* yacc.c:1652  */
    {cout << "Type double\n";}
#line 1528 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 79 "parser.y" /* yacc.c:1652  */
    {cout << "Type bool\n";}
#line 1534 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 80 "parser.y" /* yacc.c:1652  */
    {printf("Type string\n");}
#line 1540 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 82 "parser.y" /* yacc.c:1652  */
    {cout << "Type ()\n";}
#line 1546 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 85 "parser.y" /* yacc.c:1652  */
    {cout << "FunctionDecl\n";}
#line 1552 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 86 "parser.y" /* yacc.c:1652  */
    {cout << "FunctionDecl\n";}
#line 1558 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 89 "parser.y" /* yacc.c:1652  */
    {cout << "Formals\n";}
#line 1564 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 93 "parser.y" /* yacc.c:1652  */
    {cout << "FormalsVars\n";}
#line 1570 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 97 "parser.y" /* yacc.c:1652  */
    {cout << "ClassDecl\n";}
#line 1576 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 100 "parser.y" /* yacc.c:1652  */
    {cout << "ExtendDecl\n";}
#line 1582 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 104 "parser.y" /* yacc.c:1652  */
    {cout << "ImplementsDecl\n";}
#line 1588 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 108 "parser.y" /* yacc.c:1652  */
    {cout << "OtroID\n";}
#line 1594 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 112 "parser.y" /* yacc.c:1652  */
    {cout << "Field\n";}
#line 1600 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 113 "parser.y" /* yacc.c:1652  */
    {cout << "Field\n";}
#line 1606 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 117 "parser.y" /* yacc.c:1652  */
    {cout << "InterfaceDecl\n";}
#line 1612 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 120 "parser.y" /* yacc.c:1652  */
    {cout << "Prototype\n";}
#line 1618 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 121 "parser.y" /* yacc.c:1652  */
    {cout << "Prototype\n";}
#line 1624 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 125 "parser.y" /* yacc.c:1652  */
    {cout << "StmtBlock\n";}
#line 1630 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 128 "parser.y" /* yacc.c:1652  */
    {cout << "BlockVariables\n";}
#line 1636 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 132 "parser.y" /* yacc.c:1652  */
    {cout << "BlockStmts\n";}
#line 1642 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 136 "parser.y" /* yacc.c:1652  */
    {cout << "Stmt\n";}
#line 1648 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 137 "parser.y" /* yacc.c:1652  */
    {cout << "Stmt\n";}
#line 1654 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 138 "parser.y" /* yacc.c:1652  */
    {cout << "Stmt\n";}
#line 1660 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 139 "parser.y" /* yacc.c:1652  */
    {cout << "Stmt\n";}
#line 1666 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 140 "parser.y" /* yacc.c:1652  */
    {cout << "Stmt\n";}
#line 1672 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 141 "parser.y" /* yacc.c:1652  */
    {cout << "Stmt\n";}
#line 1678 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 142 "parser.y" /* yacc.c:1652  */
    {cout << "Stmt\n";}
#line 1684 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 143 "parser.y" /* yacc.c:1652  */
    {cout << "Stmt\n";}
#line 1690 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 146 "parser.y" /* yacc.c:1652  */
    {cout << "IfStmt\n";}
#line 1696 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 149 "parser.y" /* yacc.c:1652  */
    {cout << "ElseStmt\n";}
#line 1702 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 153 "parser.y" /* yacc.c:1652  */
    {cout << "WhileStmt\n";}
#line 1708 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 156 "parser.y" /* yacc.c:1652  */
    {cout << "ForStmt\n";}
#line 1714 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 159 "parser.y" /* yacc.c:1652  */
    {cout << "ReturnStmt\n";}
#line 1720 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 162 "parser.y" /* yacc.c:1652  */
    {cout << "BreakStmt\n";}
#line 1726 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 165 "parser.y" /* yacc.c:1652  */
    {cout << "PrintStmt\n";}
#line 1732 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 168 "parser.y" /* yacc.c:1652  */
    {cout << "OtraExpr\n";}
#line 1738 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 172 "parser.y" /* yacc.c:1652  */
    {cout << "ExprOpcional\n";}
#line 1744 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 176 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1750 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 177 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1756 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 178 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1762 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 179 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1768 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 180 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1774 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 181 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1780 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 182 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1786 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 183 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1792 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 184 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1798 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 185 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1804 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 186 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1810 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 187 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1816 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 188 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1822 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 189 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1828 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 190 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1834 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 191 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1840 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 192 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1846 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 193 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1852 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 194 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1858 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 195 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1864 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 196 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1870 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 197 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1876 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 198 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1882 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 199 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1888 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 200 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";}
#line 1894 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 203 "parser.y" /* yacc.c:1652  */
    {cout << "LValue\n";}
#line 1900 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 204 "parser.y" /* yacc.c:1652  */
    {cout << "LValue\n";}
#line 1906 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 205 "parser.y" /* yacc.c:1652  */
    {cout << "LValue\n";}
#line 1912 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 208 "parser.y" /* yacc.c:1652  */
    {cout << "Call\n";}
#line 1918 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 209 "parser.y" /* yacc.c:1652  */
    {cout << "Call\n";}
#line 1924 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 212 "parser.y" /* yacc.c:1652  */
    {cout << "Actuals\n";}
#line 1930 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 216 "parser.y" /* yacc.c:1652  */
    {cout << "Constant\n";}
#line 1936 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 217 "parser.y" /* yacc.c:1652  */
    {cout << "Constant\n";}
#line 1942 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 218 "parser.y" /* yacc.c:1652  */
    {cout << "Constant\n";}
#line 1948 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 219 "parser.y" /* yacc.c:1652  */
    {cout << "Constant\n";}
#line 1954 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 220 "parser.y" /* yacc.c:1652  */
    {cout << "Constant\n";}
#line 1960 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 221 "parser.y" /* yacc.c:1652  */
    {cout << "Constant\n";}
#line 1966 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 222 "parser.y" /* yacc.c:1652  */
    {cout << "Constant\n";}
#line 1972 "parser.tab.c" /* yacc.c:1652  */
    break;


#line 1976 "parser.tab.c" /* yacc.c:1652  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 225 "parser.y" /* yacc.c:1918  */


//----------------------------- Funciones -----------------------------

int yyerror(char *s){
	printf("\nERROR\n");
	return 1;
}

int main(int argcount, char **argvector)
{
	// Open a file handle to a particular file:
  FILE *myfile = fopen(argvector[1], "r");
  // Make sure it is valid:
  if (!myfile) {
    cout << "No se puede leer el archivo con código o no existe" << endl;
    return -1;
  }
  // Set Flex to read from it instead of defaulting to STDIN:
  yyin = myfile;

  //yylex();  
  
  // Parse through the input:
  yyparse();
  printTable();
}


//TODO funciones de agregar token, agregar padre, agregar hijo
void addTokenToTree(string pToken, string pValue, int pRow, int pColumn){
	if(contNodos==0){
		nodo0->addData(pToken, pValue, pRow, pColumn);
		contNodos++;
	}
	else{
		nodo1->addData(pToken, pValue, pRow, pColumn);
		contNodos--;
	}
}

void addParentToLastNode(){
	if(contNodos==0){
		nodo0->addParent(nodo1);		
	}
	else{
		nodo1->addParent(nodo0);		
	}
}

void addChildToLastNode(){
	if(contNodos==0){
		nodo0->addChild(nodo1);		
	}
	else{
		nodo1->addChild(nodo0);		
	}
}
