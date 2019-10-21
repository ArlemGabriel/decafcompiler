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

pNodeParseTree nodo = new NodeParseTree();
std::vector<pNodeParseTree> *childsToAdd;
/*
void /*createNewNode(string pToken, string pValue, int pRow, int pColumn);
void addNodeToChilds();
void addChildsToNode();
*/

extern int yylex(void);
extern void printTable();
extern int yyparse();
extern FILE *yyin;

int yyerror(char *s);

#line 95 "parser.tab.c" /* yacc.c:337  */
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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   461

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  208

#define YYUNDEFTOK  2
#define YYMAXUTOK   312

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
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    61,    61,    64,    65,    66,    67,    70,    71,    74,
      77,    80,    81,    82,    83,    84,    85,    88,    89,    92,
      93,    96,    97,   100,   103,   104,   107,   108,   111,   112,
     115,   116,   117,   120,   123,   124,   125,   128,   131,   132,
     135,   136,   139,   140,   141,   142,   143,   144,   145,   146,
     149,   152,   153,   156,   159,   162,   165,   168,   171,   172,
     175,   176,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   206,   207,   208,
     211,   212,   215,   216,   219,   220,   221,   222,   223,   224,
     225
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
  "LPAREN", "RPAREN", "LBRACE", "RBRACE", "$accept", "Program", "Decl",
  "OtraDecl", "VariableDecl", "Variable", "Type", "FunctionDecl",
  "Formals", "FormalsVars", "ClassDecl", "ExtendDecl", "ImplementsDecl",
  "OtroID", "Field", "InterfaceDecl", "Prototype", "StmtBlock",
  "BlockVariables", "BlockStmts", "Stmt", "IfStmt", "ElseStmt",
  "WhileStmt", "ForStmt", "ReturnStmt", "BreakStmt", "PrintStmt",
  "OtraExpr", "ExprOpcional", "Expr", "LValue", "Call", "Actuals",
  "Constant", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF -177

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-177)))

#define YYTABLE_NINF -62

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-62)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     185,    -9,    -7,  -177,  -177,  -177,    -5,  -177,  -177,    25,
    -177,   423,   -21,   -13,   423,   423,   423,    31,     2,     7,
    -177,   423,  -177,  -177,    17,    21,  -177,  -177,  -177,    52,
      73,   208,   187,  -177,   208,  -177,  -177,    70,    42,    55,
      37,    51,    81,    64,    56,    59,    74,   200,   208,  -177,
    -177,    69,    80,    86,  -177,    69,   108,  -177,   200,   200,
      91,    55,     6,  -177,   208,   208,  -177,    74,  -177,  -177,
    -177,  -177,     6,    53,    95,    97,  -177,  -177,  -177,   101,
     107,   103,   106,   109,   111,   112,  -177,   115,   145,   125,
     127,  -177,  -177,  -177,  -177,  -177,  -177,   145,   145,   145,
    -177,   104,    53,  -177,  -177,  -177,  -177,  -177,  -177,   135,
     326,   142,  -177,  -177,   138,   149,   145,  -177,   139,   145,
     176,   152,   145,   145,   160,   145,   145,   390,   390,   202,
    -177,  -177,  -177,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   184,   145,   145,   187,
     187,   224,  -177,   246,   161,  -177,   288,   168,  -177,   307,
     307,   164,  -177,   409,   409,   390,   390,   390,    90,    90,
      90,    90,   383,   383,   364,   345,   166,   268,   191,  -177,
    -177,   114,   114,  -177,   208,   145,   145,   167,  -177,  -177,
     145,  -177,  -177,  -177,   -42,   175,   307,   177,   170,  -177,
    -177,   145,  -177,  -177,  -177,   173,   114,  -177
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    14,    11,    12,     0,    13,    15,     0,
       2,     8,     0,     0,     8,     8,     8,    25,     0,     0,
       1,     8,     3,     9,    10,     0,     4,     5,     6,     0,
      27,    20,    36,     7,    20,    16,    24,     0,     0,    22,
       0,     0,     0,     0,     0,     0,    29,    32,     0,    19,
      10,     0,     0,     0,    33,     0,     0,    26,    32,    32,
       0,    22,    39,    18,    20,    20,    17,    29,    30,    31,
      23,    21,    39,    41,     0,     0,    28,    38,    65,     0,
       0,     0,     0,     0,     0,     0,   100,     0,    61,     0,
      87,    94,    95,    96,    97,    99,    98,     0,     0,     0,
      49,     0,    41,    43,    44,    45,    47,    46,    48,     0,
      60,    64,    66,    63,     0,     0,     0,    56,     0,     0,
       0,     0,     0,    61,     0,     0,    93,    73,    82,     0,
      37,    40,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      36,     0,    83,     0,     0,    84,     0,     0,    55,    59,
      59,     0,    67,    68,    69,    70,    71,    72,    74,    75,
      76,    77,    78,    79,    80,    81,    88,     0,    62,    35,
      34,    61,    61,    85,     0,    61,     0,     0,    92,    90,
      93,    89,    53,    52,     0,     0,    59,     0,     0,    50,
      86,    61,    58,    57,    91,     0,    61,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -177,  -177,   234,    96,   124,    39,   -31,   -35,     4,   189,
    -177,  -177,  -177,   178,    34,  -177,   -55,   -36,   179,   150,
    -176,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -156,   -86,
     -90,  -177,  -177,    65,  -177
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    21,    22,    11,    12,    13,    14,    41,    49,
      15,    30,    38,    57,    60,    16,    44,   100,    73,   101,
     102,   103,   199,   104,   105,   106,   107,   108,   187,   109,
     110,   111,   112,   161,   113
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    43,   124,    40,   188,   192,   193,   127,   128,   129,
      25,     3,    59,   200,    24,    63,     4,    40,    17,    66,
      18,     5,    19,    59,    59,    20,   151,     7,    23,   153,
     207,    40,   156,    40,    40,   159,   160,   157,    45,    25,
     202,    40,    29,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    31,   177,   178,    78,
      79,    80,    81,    32,    50,    82,    83,    84,    74,    75,
      39,    34,    85,    39,    35,    86,    87,    88,    89,    36,
      90,    91,    92,    93,    94,    95,    96,    61,    97,    25,
      37,    53,    68,    69,   179,   180,   196,    46,    47,   195,
     160,    98,   -61,    39,    39,    48,    51,    99,    52,    62,
      26,    27,    28,    54,    55,   205,    25,    33,    43,    43,
      78,    79,    80,    81,    56,    62,    82,    83,    84,   -62,
     -62,   -62,   -62,    85,    64,    67,    86,    87,    88,    89,
      65,    90,    91,    92,    93,    94,    95,    96,    70,    97,
     114,    78,   115,   194,    81,   116,   117,   118,    83,    84,
     119,   130,    98,   120,    85,   121,   122,    86,    99,   123,
      62,    58,    90,    91,    92,    93,    94,    95,    96,   125,
      97,   126,    58,    58,   132,   148,    72,   149,     1,     2,
       3,    42,     3,    98,   152,     4,    72,     4,   150,    99,
       5,     6,     5,   154,     2,     3,     7,   155,     7,   158,
       4,   176,     8,     3,     8,     5,   183,   185,     4,   189,
     190,     7,   197,     5,   201,   204,   203,     8,   206,     7,
     138,   139,   140,   141,    10,     8,   133,   134,   135,   136,
     137,   138,   139,   140,   141,    76,   142,   143,   144,   145,
      71,    77,   131,   146,   147,   198,     0,   162,   133,   134,
     135,   136,   137,   138,   139,   140,   141,     0,   142,   143,
     144,   145,     0,     0,     0,   146,   147,     0,     0,   181,
     133,   134,   135,   136,   137,   138,   139,   140,   141,     0,
     142,   143,   144,   145,     0,     0,     0,   146,   147,     0,
       0,   182,   133,   134,   135,   136,   137,   138,   139,   140,
     141,     0,   142,   143,   144,   145,     0,     0,     0,   146,
     147,   191,   133,   134,   135,   136,   137,   138,   139,   140,
     141,     0,   142,   143,   144,   145,     0,     0,   184,   146,
     147,   133,   134,   135,   136,   137,   138,   139,   140,   141,
       0,   142,   143,   144,   145,     0,     0,   186,   146,   147,
     133,   134,   135,   136,   137,   138,   139,   140,   141,     0,
     142,   143,   144,   145,     0,     0,     0,   146,   147,   133,
     134,   135,   136,   137,   138,   139,   140,   141,     0,   142,
     143,   144,     0,     0,     0,     0,   146,   147,   133,   134,
     135,   136,   137,   138,   139,   140,   141,     0,   142,   143,
       0,     0,     0,     0,     0,   146,   147,   133,   134,   135,
     136,   137,   138,   139,   140,   141,     1,     2,     3,   138,
     139,   140,   141,     4,   146,   147,     0,     0,     5,     6,
       0,   146,   147,     0,     7,   135,   136,   137,   138,   139,
     140,   141,     0,     0,     0,     0,     0,     0,     0,     0,
     146,   147
};

static const yytype_int16 yycheck[] =
{
      31,    32,    88,    34,   160,   181,   182,    97,    98,    99,
      52,     5,    47,    55,    27,    51,    10,    48,    27,    55,
      27,    15,    27,    58,    59,     0,   116,    21,    49,   119,
     206,    62,   122,    64,    65,   125,   126,   123,    34,    52,
     196,    72,    11,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,    54,   147,   148,     6,
       7,     8,     9,    56,    27,    12,    13,    14,    64,    65,
      31,    54,    19,    34,    53,    22,    23,    24,    25,    27,
      27,    28,    29,    30,    31,    32,    33,    48,    35,    52,
      17,    27,    58,    59,   149,   150,   186,    27,    56,   185,
     190,    48,    49,    64,    65,    50,    55,    54,    27,    56,
      14,    15,    16,    57,    55,   201,    52,    21,   149,   150,
       6,     7,     8,     9,    50,    56,    12,    13,    14,    39,
      40,    41,    42,    19,    54,    27,    22,    23,    24,    25,
      54,    27,    28,    29,    30,    31,    32,    33,    57,    35,
      55,     6,    55,   184,     9,    54,    49,    54,    13,    14,
      54,    57,    48,    54,    19,    54,    54,    22,    54,    54,
      56,    47,    27,    28,    29,    30,    31,    32,    33,    54,
      35,    54,    58,    59,    49,    43,    62,    49,     3,     4,
       5,     4,     5,    48,    55,    10,    72,    10,    49,    54,
      15,    16,    15,    27,     4,     5,    21,    55,    21,    49,
      10,    27,    27,     5,    27,    15,    55,    49,    10,    55,
      54,    21,    55,    15,    49,    55,    49,    27,    55,    21,
      39,    40,    41,    42,     0,    27,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    67,    44,    45,    46,    47,
      61,    72,   102,    51,    52,   190,    -1,    55,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    -1,    -1,    -1,    51,    52,    -1,    -1,    55,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      44,    45,    46,    47,    -1,    -1,    -1,    51,    52,    -1,
      -1,    55,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      52,    53,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    45,    46,    47,    -1,    -1,    50,    51,    52,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      44,    45,    46,    47,    -1,    -1,    -1,    51,    52,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      45,    46,    -1,    -1,    -1,    -1,    51,    52,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    51,    52,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,    39,
      40,    41,    42,    10,    51,    52,    -1,    -1,    15,    16,
      -1,    51,    52,    -1,    21,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    10,    15,    16,    21,    27,    59,
      60,    62,    63,    64,    65,    68,    73,    27,    27,    27,
       0,    60,    61,    49,    27,    52,    61,    61,    61,    11,
      69,    54,    56,    61,    54,    53,    27,    17,    70,    63,
      64,    66,     4,    64,    74,    66,    27,    56,    50,    67,
      27,    55,    27,    27,    57,    55,    50,    71,    62,    65,
      72,    63,    56,    75,    54,    54,    75,    27,    72,    72,
      57,    67,    62,    76,    66,    66,    71,    76,     6,     7,
       8,     9,    12,    13,    14,    19,    22,    23,    24,    25,
      27,    28,    29,    30,    31,    32,    33,    35,    48,    54,
      75,    77,    78,    79,    81,    82,    83,    84,    85,    87,
      88,    89,    90,    92,    55,    55,    54,    49,    54,    54,
      54,    54,    54,    54,    87,    54,    54,    88,    88,    88,
      57,    77,    49,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    44,    45,    46,    47,    51,    52,    43,    49,
      49,    88,    55,    88,    27,    55,    88,    87,    49,    88,
      88,    91,    55,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    27,    88,    88,    74,
      74,    55,    55,    55,    50,    49,    50,    86,    86,    55,
      54,    53,    78,    78,    64,    87,    88,    55,    91,    80,
      55,    49,    86,    49,    55,    87,    55,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    60,    60,    61,    61,    62,
      63,    64,    64,    64,    64,    64,    64,    65,    65,    66,
      66,    67,    67,    68,    69,    69,    70,    70,    71,    71,
      72,    72,    72,    73,    74,    74,    74,    75,    76,    76,
      77,    77,    78,    78,    78,    78,    78,    78,    78,    78,
      79,    80,    80,    81,    82,    83,    84,    85,    86,    86,
      87,    87,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    89,    89,    89,
      90,    90,    91,    91,    92,    92,    92,    92,    92,    92,
      92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     2,     0,     2,
       2,     1,     1,     1,     1,     1,     3,     6,     6,     2,
       0,     3,     0,     7,     2,     0,     3,     0,     3,     0,
       2,     2,     0,     5,     7,     7,     0,     4,     2,     0,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       6,     2,     0,     5,     9,     3,     2,     6,     3,     0,
       1,     0,     3,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     4,     6,     1,     3,     4,
       4,     6,     2,     0,     1,     1,     1,     1,     1,     1,
       1
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
#line 61 "parser.y" /* yacc.c:1652  */
    {cout << "Program\n"; /*/*createNewNode("Program","\"No Value\"",0,0);			addChildsToNode();*/}
#line 1484 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 64 "parser.y" /* yacc.c:1652  */
    {cout << "Decl 1\n"; /*createNewNode("Decl","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();*/}
#line 1490 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 65 "parser.y" /* yacc.c:1652  */
    {cout << "Decl 2\n"; /*createNewNode("Decl","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();*/}
#line 1496 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 66 "parser.y" /* yacc.c:1652  */
    {cout << "Decl 3\n"; /*createNewNode("Decl","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();*/}
#line 1502 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 67 "parser.y" /* yacc.c:1652  */
    {cout << "Decl 4\n"; /*createNewNode("Decl","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();*/}
#line 1508 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 70 "parser.y" /* yacc.c:1652  */
    {cout << "OtraDecl\n"; /*createNewNode("OtraDecl","\"No Value\"",0,0); 			addChildsToNode();		addNodeToChilds();*/}
#line 1514 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 74 "parser.y" /* yacc.c:1652  */
    {cout << "VariableDecl\n"; /*createNewNode("VariableDecl","\"No Value\"",0,0);	addChildsToNode();		addNodeToChilds();*/}
#line 1520 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 77 "parser.y" /* yacc.c:1652  */
    {printf("Variable %s\n",yyvsp[-1]);/*createNewNode("Variable","\"No Value\"",0,0); 	addChildsToNode();		addNodeToChilds();*/}
#line 1526 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 80 "parser.y" /* yacc.c:1652  */
    {printf("Type int\n");/*createNewNode("Type","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();*/}
#line 1532 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 81 "parser.y" /* yacc.c:1652  */
    {cout << "Type double\n";/*createNewNode("Type","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1538 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 82 "parser.y" /* yacc.c:1652  */
    {cout << "Type bool\n";/*createNewNode("Type","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();*/}
#line 1544 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 83 "parser.y" /* yacc.c:1652  */
    {printf("Type string\n");/*createNewNode("Type","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1550 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 84 "parser.y" /* yacc.c:1652  */
    {cout << "Type id\n";/*createNewNode("Type","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();*/}
#line 1556 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 85 "parser.y" /* yacc.c:1652  */
    {cout << "Type ()\n";/*createNewNode("Type","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();*/}
#line 1562 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 88 "parser.y" /* yacc.c:1652  */
    {cout << "FunctionDecl\n";/*createNewNode("FunctionDecl","\"No Value\"",0,0);	addChildsToNode();		addNodeToChilds();*/}
#line 1568 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 89 "parser.y" /* yacc.c:1652  */
    {cout << "FunctionDecl\n";/*createNewNode("FunctionDecl","\"No Value\"",0,0);	addChildsToNode();		addNodeToChilds();*/}
#line 1574 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 92 "parser.y" /* yacc.c:1652  */
    {cout << "Formals\n";/*createNewNode("Formals","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();*/}
#line 1580 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 96 "parser.y" /* yacc.c:1652  */
    {cout << "FormalsVars\n";/*createNewNode("FormalsVars","\"No Value\"",0,0);		addChildsToNode();		addNodeToChilds();*/}
#line 1586 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 100 "parser.y" /* yacc.c:1652  */
    {cout << "ClassDecl\n";/*createNewNode("ClassDecl","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1592 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 103 "parser.y" /* yacc.c:1652  */
    {cout << "ExtendDecl\n";/*createNewNode("ExtendDecl","\"No Value\"",0,0);		addChildsToNode();		addNodeToChilds();*/}
#line 1598 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 107 "parser.y" /* yacc.c:1652  */
    {cout << "ImplementsDecl\n";/*createNewNode("ImplementsDecl","\"No Value\"",0,0);addChildsToNode();		addNodeToChilds();*/}
#line 1604 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 111 "parser.y" /* yacc.c:1652  */
    {cout << "OtroID\n";/*createNewNode("OtroID","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();*/}
#line 1610 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 115 "parser.y" /* yacc.c:1652  */
    {cout << "Field\n";/*createNewNode("Field","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1616 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 116 "parser.y" /* yacc.c:1652  */
    {cout << "Field\n";/*createNewNode("Field","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1622 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 120 "parser.y" /* yacc.c:1652  */
    {cout << "InterfaceDecl\n";/*createNewNode("InterfaceDecl","\"No Value\"",0,0);	addChildsToNode();		addNodeToChilds();*/}
#line 1628 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 123 "parser.y" /* yacc.c:1652  */
    {cout << "Prototype\n";/*createNewNode("Prototype","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1634 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 124 "parser.y" /* yacc.c:1652  */
    {cout << "Prototype\n";/*createNewNode("Prototype","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1640 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 128 "parser.y" /* yacc.c:1652  */
    {cout << "StmtBlock\n";/*createNewNode("StmtBlock","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1646 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 131 "parser.y" /* yacc.c:1652  */
    {cout << "BlockVariables\n";/*createNewNode("BlockVariables","\"No Value\"",0,0);addChildsToNode();		addNodeToChilds();*/}
#line 1652 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 135 "parser.y" /* yacc.c:1652  */
    {cout << "BlockStmts\n";/*createNewNode("BlockStmts","\"No Value\"",0,0);		addChildsToNode();		addNodeToChilds();*/}
#line 1658 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 139 "parser.y" /* yacc.c:1652  */
    {cout << "Stmt\n";/*createNewNode("Stmt","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1664 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 140 "parser.y" /* yacc.c:1652  */
    {cout << "Stmt\n";/*createNewNode("Stmt","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1670 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 141 "parser.y" /* yacc.c:1652  */
    {cout << "Stmt\n";/*createNewNode("Stmt","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1676 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 142 "parser.y" /* yacc.c:1652  */
    {cout << "Stmt\n";/*createNewNode("Stmt","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1682 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 143 "parser.y" /* yacc.c:1652  */
    {cout << "Stmt\n";/*createNewNode("Stmt","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1688 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 144 "parser.y" /* yacc.c:1652  */
    {cout << "Stmt\n";/*createNewNode("Stmt","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1694 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 145 "parser.y" /* yacc.c:1652  */
    {cout << "Stmt\n";/*createNewNode("Stmt","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1700 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 146 "parser.y" /* yacc.c:1652  */
    {cout << "Stmt\n";/*createNewNode("Stmt","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1706 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 149 "parser.y" /* yacc.c:1652  */
    {cout << "IfStmt\n";/*createNewNode("IfStmt","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();*/}
#line 1712 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 152 "parser.y" /* yacc.c:1652  */
    {cout << "ElseStmt\n";/*createNewNode("ElseStmt","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1718 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 156 "parser.y" /* yacc.c:1652  */
    {cout << "WhileStmt\n";/*createNewNode("WhileStmt","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1724 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 159 "parser.y" /* yacc.c:1652  */
    {cout << "ForStmt\n";/*createNewNode("ForStmt","\"No Value\"",0,0); addChildsToNode();		addNodeToChilds();*/}
#line 1730 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 162 "parser.y" /* yacc.c:1652  */
    {cout << "ReturnStmt\n";/*createNewNode("ReturnStmt","\"No Value\"",0,0);		addChildsToNode();		addNodeToChilds();*/}
#line 1736 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 165 "parser.y" /* yacc.c:1652  */
    {cout << "BreakStmt\n";/*createNewNode("BreakStmt","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1742 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 168 "parser.y" /* yacc.c:1652  */
    {cout << "PrintStmt\n";/*createNewNode("PrintStmt","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1748 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 171 "parser.y" /* yacc.c:1652  */
    {cout << "OtraExpr\n";/*createNewNode("OtraExpr","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1754 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 175 "parser.y" /* yacc.c:1652  */
    {cout << "ExprOpcional\n";/*createNewNode("ExprOpcional","\"No Value\"",0,0);	addChildsToNode();		addNodeToChilds();*/}
#line 1760 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 179 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1766 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 180 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1772 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 181 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1778 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 182 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1784 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 183 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1790 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 184 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1796 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 185 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1802 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 186 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1808 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 187 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1814 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 188 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1820 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 189 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1826 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 190 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1832 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 191 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1838 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 192 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1844 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 193 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1850 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 194 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1856 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 195 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1862 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 196 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1868 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 197 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1874 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 198 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1880 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 199 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1886 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 200 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1892 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 201 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1898 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 202 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1904 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 203 "parser.y" /* yacc.c:1652  */
    {cout << "Expr\n";/*createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1910 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 206 "parser.y" /* yacc.c:1652  */
    {cout << "LValue\n";/*createNewNode("LValue","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();*/}
#line 1916 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 207 "parser.y" /* yacc.c:1652  */
    {cout << "LValue\n";/*createNewNode("LValue","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();*/}
#line 1922 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 208 "parser.y" /* yacc.c:1652  */
    {cout << "LValue\n";/*createNewNode("LValue","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();*/}
#line 1928 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 211 "parser.y" /* yacc.c:1652  */
    {cout << "Call\n";/*createNewNode("Call","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1934 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 212 "parser.y" /* yacc.c:1652  */
    {cout << "Call\n";/*createNewNode("Call","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();*/}
#line 1940 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 215 "parser.y" /* yacc.c:1652  */
    {cout << "Actuals\n";/*createNewNode("Actuals","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();*/}
#line 1946 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 219 "parser.y" /* yacc.c:1652  */
    {cout << "Constant\n";/*createNewNode("Constant","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1952 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 220 "parser.y" /* yacc.c:1652  */
    {cout << "Constant\n";/*createNewNode("Constant","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1958 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 221 "parser.y" /* yacc.c:1652  */
    {cout << "Constant\n";/*createNewNode("Constant","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1964 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 222 "parser.y" /* yacc.c:1652  */
    {cout << "Constant\n";/*createNewNode("Constant","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1970 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 223 "parser.y" /* yacc.c:1652  */
    {cout << "Constant\n";/*createNewNode("Constant","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1976 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 224 "parser.y" /* yacc.c:1652  */
    {cout << "Constant\n";/*createNewNode("Constant","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1982 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 225 "parser.y" /* yacc.c:1652  */
    {cout << "Constant\n";/*createNewNode("Constant","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();*/}
#line 1988 "parser.tab.c" /* yacc.c:1652  */
    break;


#line 1992 "parser.tab.c" /* yacc.c:1652  */
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
#line 228 "parser.y" /* yacc.c:1918  */


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

/*
void create/*createNewNode(string pToken, string pValue, int pRow, int pColumn){
	nodo= newNode(pToken, pValue, pRow, pColumn);		
}

void addNodeToChilds(){			
		childsToAdd->push_back(nodo);
}	

void addChildsToNode(){
	nodo->addChilds(childsToAdd);	
	childsToAdd= NULL;
}

/*
void /*createNewNode(string pToken, string pValue, int pRow, int pColumn){
	if(contNodos==0){
		nodo1 = new pNodeParseTree();
		nodo0->addData(pToken, pValue, pRow, pColumn);
		contNodos++;
	}
	else if(contNodos==1){
		nodo2 = new pNodeParseTree();
		nodo1->addData(pToken, pValue, pRow, pColumn);
		contNodos++;
	}
	else{
		nodo0 = new pNodeParseTree();
		nodo2->addData(pToken, pValue, pRow, pColumn);
		contNodos=0;
	}
}

void addChildToLastNode(){
	if(contNodos==0){
		nodo0->addChild(nodo2);		
	}
	else if(contNodos==1){
		nodo1->addChild(nodo0);		
	}
	else{
		nodo2->addChild(nodo1);		
	}
}//*/
/*WIP
void addParentToLastNode(){
	if(contNodos==0){
		nodo0->addParent(nodo1);		
	}
	else{
		nodo1->addParent(nodo0);		
	}
}//*/

