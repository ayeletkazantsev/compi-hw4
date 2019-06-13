/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.ypp" /* yacc.c:339  */


#include <iostream>
#include <vector>
#include <utility>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include "source.hpp"
#include "output.hpp"
#include "parser.hpp"
#include "bp.hpp"

using namespace std;
using namespace Parser;
using namespace output;

extern int yylineno;
int yylex();
void yyerror(char const * message);

int precondCnt = 0;
int whileLoopCnt = 0;
string currentReturnType;

bool isDevStage = false; // todo: change to false to turn off debugging cout's

//HW5:
int stringCnt = 0;
CodeBuffer &cf = CodeBuffer::instance();


#line 99 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "parser.tab.hpp".  */
#ifndef YY_YY_CYGDRIVE_C_COMPI_HW5_CMAKE_BUILD_DEBUG_PARSER_TAB_HPP_INCLUDED
# define YY_YY_CYGDRIVE_C_COMPI_HW5_CMAKE_BUILD_DEBUG_PARSER_TAB_HPP_INCLUDED
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
    VOID = 258,
    INT = 259,
    BYTE = 260,
    B = 261,
    BOOL = 262,
    AND = 263,
    OR = 264,
    TRUE = 265,
    FALSE = 266,
    RETURN = 267,
    IF = 268,
    WHILE = 269,
    BREAK = 270,
    CONTINUE = 271,
    PRECOND = 272,
    SC = 273,
    COMMA = 274,
    LPAREN = 275,
    RPAREN = 276,
    LBRACE = 277,
    RBRACE = 278,
    RELOP = 279,
    BINOP = 280,
    ID = 281,
    NUM = 282,
    STRING = 283,
    ASSIGN = 284,
    END_OF_FILE = 285,
    NOT = 286,
    CONFLICT = 287,
    ELSE = 288
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

#endif /* !YY_YY_CYGDRIVE_C_COMPI_HW5_CMAKE_BUILD_DEBUG_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 184 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:358  */

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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   147

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  111

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    72,   117,   133,   133,   133,   137,   136,
     192,   192,   195,   199,   205,   213,   224,   239,   245,   253,
     265,   270,   269,   283,   289,   283,   303,   322,   364,   402,
     409,   421,   457,   457,   473,   485,   497,   497,   511,   520,
     519,   531,   629,   704,   730,   729,   770,   770,   770,   773,
     777,   810,   839,   843,   855,   874,   886,   893,   900,   909,
     920,   931
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "INT", "BYTE", "B", "BOOL",
  "AND", "OR", "TRUE", "FALSE", "RETURN", "IF", "WHILE", "BREAK",
  "CONTINUE", "PRECOND", "SC", "COMMA", "LPAREN", "RPAREN", "LBRACE",
  "RBRACE", "RELOP", "BINOP", "ID", "NUM", "STRING", "ASSIGN",
  "END_OF_FILE", "NOT", "CONFLICT", "ELSE", "$accept", "Program", "M",
  "NewLabel", "Funcs", "$@1", "FuncDecl", "@2", "RetType", "Formals",
  "FormalsList", "FormalDecl", "PreConditions", "PreCondition",
  "Statements", "@3", "Statement", "@4", "@5", "$@6", "$@7",
  "SelectionStatement", "$@8", "Call", "ExpList", "@9", "Type", "Exp", YY_NULLPTR
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
     285,   286,   287,   288
};
# endif

#define YYPACT_NINF -59

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-59)))

#define YYTABLE_NINF -45

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-45)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -59,     8,   126,   -59,   -59,   -59,   -59,   -59,   -21,   -59,
     -12,   -59,   -59,   126,    12,   -59,   136,    -4,   -59,    26,
      10,   -59,   136,   -59,   -59,   -59,   -10,    27,    45,   -59,
      65,     0,    34,    46,    64,    72,   -59,   -16,    83,   -59,
      94,    88,   -59,   -59,    65,    95,   120,   -59,    65,   -59,
      78,   -59,    80,    65,    65,   -59,   -59,    45,    52,    65,
     -59,    45,   -59,    17,    86,   -59,   -59,   -59,   -59,   -59,
      65,    65,   -59,    92,   100,    97,   -59,   106,    -3,   110,
     -59,   -59,    65,   -59,    65,    65,    14,   -59,   -59,   -59,
     -59,   -59,   117,   -59,   114,    44,    40,   -59,    45,   119,
      65,   -59,    45,   -59,   -59,   -59,   104,   -59,   -59,    45,
     -59
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     5,     1,    11,    46,    47,    48,     0,     6,
       0,    10,     2,     5,     0,     7,    12,     0,    13,    14,
       0,     8,     0,    16,    17,    15,     0,     0,     0,    18,
       0,     0,     0,     0,     0,     0,    23,     0,    21,    20,
       0,     0,    56,    57,     0,    51,    53,    55,     0,    52,
       0,    30,     0,     0,     0,    34,    35,     0,     0,     0,
       9,     0,    29,     0,     0,    54,    58,     4,     4,    19,
       0,     0,    31,     0,     0,    21,    42,     0,    43,     0,
      22,    26,     0,    49,     0,     0,    61,    50,     4,    32,
      24,    41,     0,    28,     0,    59,    60,    36,     0,     0,
       0,    27,     0,    33,    25,    45,    38,    37,    39,     0,
      40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -59,   -59,   -59,     9,   131,   -59,   -59,   -59,   -59,   -59,
     123,   -59,   -59,   -59,    89,   -59,   -58,   -59,   -59,   -59,
     -59,   -59,   -59,   -28,    47,   -59,    21,   -29
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    84,     8,    13,     9,    24,    10,    17,
      18,    19,    26,    29,    38,    61,    39,    57,    99,    98,
     102,   107,   109,    49,    77,    92,    41,    78
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      40,    50,    52,    80,    58,    67,    68,    27,     3,    12,
      42,    43,    28,    59,    14,    64,   -44,    21,    51,    66,
      44,    70,    71,    11,    73,    74,    45,    46,    47,    40,
      79,    48,    16,    40,    11,    81,    23,    20,   -45,    71,
     103,    86,    87,    20,   106,    22,    82,    30,    67,     5,
       6,   110,     7,    94,    53,    95,    96,    31,    32,    33,
      34,    35,    42,    43,    70,    71,    54,    36,    70,    71,
      40,    37,    44,    76,    40,    42,    43,    85,    45,    46,
      47,    40,    55,    48,    90,    44,    67,    68,    67,    68,
      56,    45,    46,    47,    67,    68,    48,    97,    72,    69,
      67,    68,    70,    71,    70,    71,    60,    83,    67,    68,
      70,    71,    62,    88,    63,    58,    70,    71,    67,    68,
      -4,    89,    67,    68,    70,    71,    65,    91,    93,     4,
       5,     6,   101,     7,    70,    71,   100,   108,    70,    71,
       5,     6,   104,     7,    15,    25,    75,   105
};

static const yytype_uint8 yycheck[] =
{
      28,    30,    31,    61,    20,     8,     9,    17,     0,    30,
      10,    11,    22,    29,    26,    44,    19,    21,    18,    48,
      20,    24,    25,     2,    53,    54,    26,    27,    28,    57,
      59,    31,    20,    61,    13,    18,    26,    16,    24,    25,
      98,    70,    71,    22,   102,    19,    29,    20,     8,     4,
       5,   109,     7,    82,    20,    84,    85,    12,    13,    14,
      15,    16,    10,    11,    24,    25,    20,    22,    24,    25,
      98,    26,    20,    21,   102,    10,    11,    68,    26,    27,
      28,   109,    18,    31,    75,    20,     8,     9,     8,     9,
      18,    26,    27,    28,     8,     9,    31,    88,    18,    21,
       8,     9,    24,    25,    24,    25,    23,    21,     8,     9,
      24,    25,    18,    21,    26,    20,    24,    25,     8,     9,
      23,    21,     8,     9,    24,    25,     6,    21,    18,     3,
       4,     5,    18,     7,    24,    25,    19,    33,    24,    25,
       4,     5,    23,     7,    13,    22,    57,   100
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    36,     0,     3,     4,     5,     7,    38,    40,
      42,    60,    30,    39,    26,    38,    20,    43,    44,    45,
      60,    21,    19,    26,    41,    44,    46,    17,    22,    47,
      20,    12,    13,    14,    15,    16,    22,    26,    48,    50,
      57,    60,    10,    11,    20,    26,    27,    28,    31,    57,
      61,    18,    61,    20,    20,    18,    18,    51,    20,    29,
      23,    49,    18,    26,    61,     6,    61,     8,     9,    21,
      24,    25,    18,    61,    61,    48,    21,    58,    61,    61,
      50,    18,    29,    21,    37,    37,    61,    61,    21,    21,
      37,    21,    59,    18,    61,    61,    61,    37,    53,    52,
      19,    18,    54,    50,    23,    58,    50,    55,    33,    56,
      50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    34,    35,    36,    37,    38,    39,    38,    41,    40,
      42,    42,    43,    43,    44,    44,    45,    46,    46,    47,
      48,    49,    48,    51,    52,    50,    50,    50,    50,    50,
      50,    50,    53,    50,    50,    50,    54,    50,    55,    56,
      55,    57,    57,    58,    59,    58,    60,    60,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     0,     0,     0,     3,     0,    10,
       1,     1,     0,     1,     1,     3,     2,     0,     2,     4,
       1,     0,     3,     0,     0,     6,     3,     5,     4,     2,
       2,     3,     0,     6,     2,     2,     0,     7,     1,     0,
       4,     4,     3,     1,     0,     4,     1,     1,     1,     3,
       3,     1,     1,     1,     2,     1,     1,     1,     2,     4,
       4,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
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
  unsigned long int yylno = yyrline[yyrule];
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
| yyreduce -- Do a reduction.  |
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
#line 53 "parser.ypp" /* yacc.c:1646  */
    {

    if (!checkMainFuncLegal())
    {
        errorMainMissing();
        exit(0);
    }

    // end of global scope
    if (isDevStage) {
       cout << "DEBUG: end of global scope" << endl;
    }
    endScope();
    closeScope(); // pop symbol & offset tables
    return 0;

}
#line 1361 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 73 "parser.ypp" /* yacc.c:1646  */
    {
    // start of global scope
    if (isDevStage) {
        cout << "DEBUG: start of global scope" << endl;
    }
	openGlobalScope();

	// push print to global scope stack
	pushFunctionDeclarationWithoutOpenScope("VOID", "print");

	// push printi to global scope stack
	pushFunctionDeclarationWithoutOpenScope("VOID", "printi");

	// HW5
	initRegisters();

    // print
    cf.emit("_print:");
    cf.emit("lw $a0, 0($sp)");
    cf.emit("li $v0, 4");
    cf.emit("syscall");
    cf.emit("addu $sp, $sp, 4");
    cf.emit("jr $ra");

    // printi
    cf.emit("_printi:");
    cf.emit("lw $a0, 0($sp)");
    cf.emit("li $v0, 1");
    cf.emit("syscall");
    cf.emit("addu $sp, $sp, 4");
    cf.emit("jr $ra");

    // Division by zero handler
    cf.emitData("div_by_zero_error: .asciiz \"Error division by zero\\n\"");
    cf.emit("div_zero:");
    cf.emit("la $a0, div_by_zero_error");
    cf.emit("li $v0, 4"); // Syscall to print
    cf.emit("syscall");
    cf.emit("li $v0, 10"); // Syscall to terminate
    cf.emit("syscall");
}
#line 1407 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 118 "parser.ypp" /* yacc.c:1646  */
    {
    (yyval) = new Type();
	(yyval)->label = cf.genLabel();
}
#line 1416 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 133 "parser.ypp" /* yacc.c:1646  */
    {cf.printDataBuffer(); cf.printCodeBuffer();}
#line 1422 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 137 "parser.ypp" /* yacc.c:1646  */
    {
	// check if id is free
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[-3]));
    string name = id->name;

	if (!checkFuncIdFree(name) || !checkIdFree(name))
	{
	    errorDef(yylineno,name);
	    exit(0);
	}

	// get parameters from input
	string retType = (yyvsp[-4])->type;
	MultiNameMultiTypeInfo* formals = dynamic_cast<MultiNameMultiTypeInfo*>((yyvsp[-1]));
	vector<pair<string, string> > args = formals->types_names;

	(yyval) = new FuncInfo(name,retType,args);

	// push function to global scope symbol table and open new scope for arguments
	pushFunctionDeclarationToStackAndOpenScope(retType, name, args);

    // start of function scope starts here
    if (isDevStage) {
            cout << "DEBUG: start of function scope: " << name << endl;
    }

    // HW5:
    if (name == "main") cf.emit("main:");
    else cf.emit(name + "_f:");

    cf.emit("move $fp, $sp");
    cf.emit("subu $fp, 4");
}
#line 1460 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 169 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[-8]));
	string name = id->name;
    currentReturnType = "";

    // HW5:
    cf.bpatch((yyvsp[-1])->next_list,cf.genLabel()); //todo: check if this is correct

    endScope(); // print "end scope" message
    printPreconditions(name, precondCnt); // print num of precondition
	closeScope(); // pop symbol & offset tables

    // end of function scope starts here
    if (isDevStage) {
        cout << "DEBUG: end of function scope: " << name << endl;
    }

    //HW5
    clearTempRegisters();
    cf.emit("jr $ra");
}
#line 1486 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 192 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); currentReturnType = (yyvsp[0])->type;}
#line 1492 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 192 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("VOID"); currentReturnType = "VOID";}
#line 1498 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 196 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = new MultiNameMultiTypeInfo();
}
#line 1506 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 200 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
}
#line 1514 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 206 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* formalDec = dynamic_cast<NameTypeInfo*>((yyvsp[0]));
	vector<pair<string,string> > v;
	v.push_back(pair<string,string>(formalDec->type, formalDec->name));

	(yyval) = new MultiNameMultiTypeInfo(v);
}
#line 1526 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 214 "parser.ypp" /* yacc.c:1646  */
    {
	MultiNameMultiTypeInfo* formalList = dynamic_cast<MultiNameMultiTypeInfo*>((yyvsp[0]));
	NameTypeInfo* formalDec = dynamic_cast<NameTypeInfo*>((yyvsp[-2]));
	vector<pair<string,string> > v(formalList->types_names);
	v.push_back(pair<string,string>(formalDec->type,formalDec->name));

	(yyval) = new MultiNameMultiTypeInfo(v);
}
#line 1539 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 225 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[0]));

    // check id is free
    if (!checkIdFree(id->name) || !checkFuncIdFree(id->name))
    {
        errorDef(yylineno,id->name);
        exit(0);
    }

	(yyval) = new NameTypeInfo((yyvsp[-1])->type, id->name);
}
#line 1556 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 240 "parser.ypp" /* yacc.c:1646  */
    {
	precondCnt = 0;

	//todo: hw5
}
#line 1566 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 246 "parser.ypp" /* yacc.c:1646  */
    {
	precondCnt++;

	//todo: hw5
}
#line 1576 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 254 "parser.ypp" /* yacc.c:1646  */
    {
	if (getExpType((yyvsp[-1])) != "BOOL") {
	    errorMismatch(yylineno);
	    exit(0);
	}
	(yyval) = (yyvsp[-1]);

	//todo: hw5
}
#line 1590 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 266 "parser.ypp" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
}
#line 1598 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 270 "parser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0])->next_list.size() > 0)
        cf.bpatch((yyvsp[0])->next_list,cf.genLabel());
}
#line 1607 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 274 "parser.ypp" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]);
    //todo check if this is correct
    (yyval)->next_list = (yyvsp[-1])->next_list;
    (yyval)->break_list = cf.merge((yyvsp[-2])->break_list,(yyvsp[-1])->break_list);
    (yyval)->continue_list = cf.merge((yyvsp[-2])->continue_list,(yyvsp[-1])->continue_list);
}
#line 1619 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 283 "parser.ypp" /* yacc.c:1646  */
    {
    // start of block scope
    if (isDevStage) {
        cout << "DEBUG: start of block scope" << endl;
    }
    openScope();
}
#line 1631 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 289 "parser.ypp" /* yacc.c:1646  */
    {
    // end of block scope
    if (isDevStage) {
        cout << "DEBUG: end of block scope" << endl;
    }
    endScope(); // print "end scope" message
    closeScope();

    // HW5:
    cf.bpatch((yyvsp[-2])->next_list,(yyvsp[-1])->label);
    (yyval) = (yyvsp[-2]);
    (yyval)->next_list = vector<int>();

}
#line 1650 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 304 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[-1]));
    string name = id->name;

    // check id is free
    if (!checkIdFree(name) || !checkFuncIdFree(name))
    {
        errorDef(yylineno,name);
        exit(0);
    }

	pushIdentifierToStack((yyvsp[-2])->type,id->name);

	// HW5:
	(yyval) = new Type();
    cf.emit("subu $sp, $sp, 4"); // Move stack pointer
    cf.emit("sw $0, 0($sp)"); // Initialize to zero
}
#line 1673 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 323 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[-3]));
	string name = id->name;

    // check id is free
    if (!checkIdFree(name) || !checkFuncIdFree(name))
    {
        errorDef(yylineno,name);
        exit(0);
    }

    if (!isValidAssigment((yyvsp[-4]), (yyvsp[-1]))) {
        errorMismatch(yylineno);
        exit(0);
    }

	pushIdentifierToStack((yyvsp[-4])->type,id->name);

	//HW5:
	string type = (yyvsp[-4])->type;
	int reg = getAvailableRegister();
    setRegister(reg,false);
	if (type == "BOOL") {
        cf.bpatch((yyvsp[-1])->true_list,cf.genLabel());
        cf.emit("subu $sp, $sp, 4"); // Allocate room on stack
        cf.emit("li $" + to_string(reg) + ", 1");
        cf.emit("sw $"+ to_string(reg) +", 0($sp)");
        setRegister(reg,true);
        (yyval)->next_list = cf.makelist(cf.emit("j  "));
        cf.bpatch((yyvsp[-1])->false_list,cf.genLabel());
        cf.emit("subu $sp, $sp, 4"); // Allocate room on stack
        cf.emit("sw $0, 0($sp)");
	}
	else
	{
       // Push expression ($4) to stack; Allocate local variable
       cf.emit("subu $sp, $sp, 4");
       cf.emit("sw $" + to_string((yyvsp[-1])->reg) + ", 0($sp)");
       setRegister((yyvsp[-1])->reg,true); // Free exp register
	}
}
#line 1719 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 365 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[-3]));
    string name = id->name;

    // check id is defined
    if (checkIdFree(name))
    {
        errorUndef(yylineno,name);
        exit(0);
    }

    if (!isValidAssigment((yyvsp[-3]), (yyvsp[-1]))) {
        errorMismatch(yylineno);
        exit(0);
    }

    // HW5:
    string expType = getExpType((yyvsp[-1]));
    SymbolTableEntry* e = getIdEntry(name,false);
    int reg = getAvailableRegister();
    setRegister(reg,false);
    if (expType == "BOOL")
    {
        cf.bpatch((yyvsp[-1])->true_list,cf.genLabel());
        cf.emit("li $" + to_string(reg) + ", 1");
        cf.emit("sw $"+ to_string(reg) +"," + to_string((-4) * e->offset) + "($fp)");
        setRegister(reg,true);
        (yyval)->next_list = cf.makelist(cf.emit("j  "));
        cf.bpatch((yyvsp[-1])->false_list,cf.genLabel());
        cf.emit("sw $0," + to_string((-4) * e->offset) + "($fp)");
    }
    else
    {
        cf.emit("sw $" + to_string((yyvsp[-1])->reg) + "," + to_string((-4) * e->offset) + "($fp)");
        setRegister((yyvsp[-1])->reg, true);
    }
}
#line 1761 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 403 "parser.ypp" /* yacc.c:1646  */
    {
    // HW5:
    (yyval) = new Type();
    setRegister((yyvsp[-1])->reg,true);
    (yyval)->next_list = cf.merge((yyvsp[-1])->true_list,(yyvsp[-1])->false_list);
}
#line 1772 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 410 "parser.ypp" /* yacc.c:1646  */
    {
	if (currentReturnType!="VOID")
	{
		errorMismatch(yylineno);
		exit(0);
	}

	(yyval) = new Type();
	//todo: empty_func_stack()?
	cf.emit("jr $ra");
}
#line 1788 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 422 "parser.ypp" /* yacc.c:1646  */
    {
    if (currentReturnType!="INT" && currentReturnType != "BYTE" && currentReturnType != "BOOL")
    {
        errorMismatch(yylineno);
        exit(0);
    }
    if (!isValidReturn(currentReturnType,(yyvsp[-1])))
    {
        errorMismatch(yylineno);
    		exit(0);
    }

    // HW5:
    string type = getExpType((yyvsp[-1]));
    if (type == "BOOL")
    {
        cf.bpatch((yyvsp[-1])->true_list,cf.genLabel());
        cf.emit("li $v0, 1");
        int quad = cf.emit("j ");
        cf.bpatch((yyvsp[-1])->false_list,cf.genLabel());
        cf.emit("li $v0, 0");
        cf.bpatch(cf.makelist(quad), cf.genLabel());
        //empty_func_stack();
        cf.emit("jr $ra");
    }
    else
    {
        // Clear local variables
        cf.emit("add $v0, $" + to_string((yyvsp[-1])->reg) + ", 0");
        //TODO: empty_func_stack();
        cf.emit("jr $ra");
    }

    clearTempRegisters();
}
#line 1828 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 457 "parser.ypp" /* yacc.c:1646  */
    {
	whileLoopCnt++;
	if (getExpType((yyvsp[-1])) != "BOOL")
	{
		errorMismatch(yylineno);
		exit(0);
	}
	openScope();
}
#line 1842 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 466 "parser.ypp" /* yacc.c:1646  */
    {
	whileLoopCnt--;
	endScope();
	closeScope();

	//todo: hw5
}
#line 1854 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 474 "parser.ypp" /* yacc.c:1646  */
    {
	if (whileLoopCnt == 0)
	{
		errorUnexpectedBreak(yylineno);
		exit(0);
	}

	//todo: hw5
    (yyval) = new Type();
    (yyval)->break_list = cf.makelist(cf.emit("j "));
}
#line 1870 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 486 "parser.ypp" /* yacc.c:1646  */
    {
	//todo: hw5 while table?
	if (whileLoopCnt == 0)
	{
		errorUnexpectedContinue(yylineno);
		exit(0);
	}

	(yyval) = new Type();
	(yyval)->continue_list = cf.makelist(cf.emit("j  "));
}
#line 1886 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 497 "parser.ypp" /* yacc.c:1646  */
    {
    if (isDevStage) {
        cout << "DEBUG: start of if scope" << endl;
    }

    if (getExpType((yyvsp[-2])) != "BOOL") {
        errorMismatch(yylineno);
        exit(0);
    }

    openScope();
}
#line 1903 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 512 "parser.ypp" /* yacc.c:1646  */
    {
    if (isDevStage) {
        cout << "DEBUG: end of if scope" << endl;
    }
    endScope(); // print "end scope" message
    closeScope();
}
#line 1915 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 520 "parser.ypp" /* yacc.c:1646  */
    {
    if (isDevStage) {
        cout << "DEBUG: end of if scope (with ELSE)" << endl;
    }

    endScope(); // print "end scope" message
    closeScope();
    openScope();
}
#line 1929 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 528 "parser.ypp" /* yacc.c:1646  */
    {endScope(); closeScope();}
#line 1935 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 532 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[-3]));
    string name = id->name;

	// check if id is undefined
    if (checkFuncIdFree(name))
    {
        errorUndefFunc(yylineno,name);
        exit(0);
    }

    // check if arguments for function are correct
    NameMultiTypeInfo* expList = dynamic_cast<NameMultiTypeInfo*>((yyvsp[-1]));
    vector<string> exp_args_types = expList->types;

    if (!checkPrototypeOfFunction(name,exp_args_types))
    {
        vector<string> args = getArgumentTypesOfFunc(name);
        errorPrototypeMismatch(yylineno,name,args);
        exit(0);
    }

    string type = getExpFuncReturnType((yyvsp[-3]));
    (yyval) = new Type(type);

    //HW5
    vector<int> argumentsRegs = expList->registers;
    vector<int> backupRegisters;

    // backup register only if it is used and not by arguments
    for (int i=8; i<=25; ++i)
    {
        if (isRegisterAvailable(i) == false && find(argumentsRegs.begin(), argumentsRegs.end(), i) == argumentsRegs.end())
            {
                cf.emit("subu $sp, $sp, 4");
                cf.emit("sw $" + to_string(i) + ", ($sp)");
                backupRegisters.push_back(i);
            }
    }



    //Push $fp and $ra to stack
    cf.emit("subu $sp, $sp, 4");
    cf.emit("sw $fp, ($sp)");
    cf.emit("subu $sp, $sp, 4");
    cf.emit("sw $ra, ($sp)");

    //Push function's arguments on stack
    cout << "test: " << expList->registers[0] << endl;

    for (int i = exp_args_types.size()-1; i>=0; --i)
    {
        cf.emit("subu $sp, $sp, 4");
        cf.emit("sw $"+ to_string(argumentsRegs[i]) + ", ($sp)");
        setRegister(argumentsRegs[i],true);
    }

    // not sure if this code is correct...
   // cf.emit("subu $sp, $sp, 4");
    //cf.emit("sw $" + to_string($2->reg) + ", ($sp)");
   // setRegister($2->reg,true);

    clearTempRegisters();

    cf.emit("subu $fp, $sp, 4");

    if (name == "main") cf.emit("jal main");
    else cf.emit("jal _" + name);

    cf.emit("lw $ra, ($sp)");
    cf.emit("addu $sp, $sp, 4");
    cf.emit("lw $fp, ($sp)");
    cf.emit("addu $sp, $sp, 4");

    //Restore backuped registers
    for (int i=0; i < backupRegisters.size(); ++i)
    {
        cf.emit("lw $" + to_string(backupRegisters[i]) + ", ($sp)");
        cf.emit("addu $sp, $sp, 4");
        setRegister(backupRegisters[i], false);
    }

    if (type == "BOOL"){
        int quad = cf.emit("beq $v0, 0, ");
        (yyval)->true_list = cf.makelist(cf.emit("j "));
        cf.bpatch(cf.makelist(quad),cf.genLabel());
        (yyval)->false_list=cf.makelist(cf.emit("j "));
    }
    else
    {
        int reg = getAvailableRegister();
        cf.emit("add $" + to_string(reg) + ", $v0, 0");
        (yyval)->reg = reg;
    }

}
#line 2037 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 630 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[-2]));
    string name = id->name;

	// check if id is undefined
    if (checkFuncIdFree(name))
    {
        errorUndefFunc(yylineno,name);
        exit(0);
    }

    // check if arguments for function are correct
    vector<string> args_types; //empty vector because function doesn't have any arguments
    if (!checkPrototypeOfFunction(name,args_types))
    {
        vector<string> args = getArgumentTypesOfFunc(name);
        errorPrototypeMismatch(yylineno,name,args);
        exit(0);
    }

    string type = getExpFuncReturnType((yyvsp[-2]));
    (yyval) = new Type(type);

    // HW5:
    vector<int> backupRegisters;

    for (int i=8; i<=25; ++i)
    {
        if (isRegisterAvailable(i) == false)
        {
            cf.emit("subu $sp, $sp, 4");
            cf.emit("sw $" + to_string(i) + ", ($sp)");
            backupRegisters.push_back(i);
        }
    }

    cf.emit("subu $sp, $sp, 4");
    cf.emit("sw $fp, ($sp)");
    cf.emit("subu $sp, $sp, 4");
    cf.emit("sw $ra, ($sp)");

    clearTempRegisters();

    cf.emit("subu $fp, $sp, 4");
    if (name != "main") name = name + "_";
    cf.emit("jal " + name);
    cf.emit("lw $ra, ($sp)");
    cf.emit("addu $sp, $sp, 4");
    cf.emit("lw $fp, ($sp)");
    cf.emit("addu $sp, $sp, 4");

    for (int i=backupRegisters.size()-1; i>=0; --i) //Restore registers
    {
        setRegister(backupRegisters[i],false);
        cf.emit("lw $" + to_string(backupRegisters[i]) + ", ($sp)");
        cf.emit("addu $sp, $sp, 4");
    }

    if (type == "BOOL")
    {
        int quad = cf.emit("beq $v0, 0, ");
        (yyval)->true_list = cf.makelist(cf.emit("j "));
        cf.bpatch(cf.makelist(quad),cf.genLabel());
        (yyval)->false_list=cf.makelist(cf.emit("j "));
    }
    else
    {
        int reg = getAvailableRegister();
        cf.emit("add $" + to_string(reg) + ", $v0, 0");
        (yyval)->reg = reg;
    }
}
#line 2114 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 705 "parser.ypp" /* yacc.c:1646  */
    {
    // HW5:
    string expType = getExpType((yyvsp[0]));
    int reg;
    if (expType == "BOOL"){
        reg = getAvailableRegister();
        setRegister(reg,false);
        cf.bpatch((yyvsp[0])->true_list,cf.genLabel());
        cf.emit("li $" + to_string(reg) + ", 1");
        int quad = cf.emit("j  ");
        cf.bpatch((yyvsp[0])->false_list,cf.genLabel());
        cf.emit("li $" + to_string(reg) + ", 0");
        cf.bpatch(cf.makelist(quad),cf.genLabel());
    }
    else if (expType == "STRING")
    {
        reg = getAvailableRegister();
        setRegister(reg,false);
        cf.emit("la $" + to_string(reg) + ", " + (yyvsp[0])->label);
    }
    else reg = (yyvsp[0])->reg;

    (yyval) = new NameMultiTypeInfo(getExpType((yyvsp[0])), reg);
}
#line 2143 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 730 "parser.ypp" /* yacc.c:1646  */
    {
    // HW5:
    string expType = getExpType((yyvsp[0]));
    int reg;
    if (expType == "BOOL"){
        reg = getAvailableRegister();
        setRegister(reg,false);
        cf.bpatch((yyvsp[0])->true_list,cf.genLabel());
        cf.emit("li $" + to_string(reg) + ", 1");
        int quad = cf.emit("j  ");
        cf.bpatch((yyvsp[0])->false_list,cf.genLabel());
        cf.emit("li $" + to_string(reg) + ", 0");
        cf.bpatch(cf.makelist(quad),cf.genLabel());
    }
    else if (expType == "STRING")
    {
        reg = getAvailableRegister();
        setRegister(reg,false);
        cf.emit("la $" + to_string(reg) + ", " + (yyvsp[0])->label);
    }
    else reg = (yyvsp[0])->reg;

    (yyval) = new NameMultiTypeInfo(getExpType((yyvsp[0])), reg);
}
#line 2172 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 755 "parser.ypp" /* yacc.c:1646  */
    {
	NameMultiTypeInfo* expList = dynamic_cast<NameMultiTypeInfo*>((yyvsp[-1]));
	vector<string> types = expList->types;
	vector<int> regs = expList->registers; //HW5
	string type = getExpType((yyvsp[-3]));
    int reg = getAvailableRegister(); //HW5
    setRegister(reg, false); //HW5
	types.push_back(type);
	regs.push_back(reg); //HW5

	(yyval) = new NameMultiTypeInfo(types,regs); //HW5

}
#line 2190 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 770 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("INT");}
#line 2196 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 770 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("BYTE");}
#line 2202 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 770 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("BOOL");}
#line 2208 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 774 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
}
#line 2216 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 778 "parser.ypp" /* yacc.c:1646  */
    {
	if (!isValidBinOp((yyvsp[-2]), (yyvsp[0]))) {
	    errorMismatch(yylineno);
	    exit(0);
	}
    string type = getExpType((yyvsp[-2]));
	(yyval) = new Type(type);

	NameTypeInfo* binop = dynamic_cast<NameTypeInfo*>((yyvsp[-1]));
	string op = binop->name;
	string cmd;

	if (op == "*") cmd = "mul ";
	if (op == "/") {
	    cf.emit("beqz $" + to_string((yyvsp[0])->reg) + ", div_zero");
	    cmd = "div ";
	}
	if (op == "+") cmd = "addu ";
	if (op == "-") cmd = "subu ";


    // e.g.: addu $1,$1,$2 , puts result of addu into $1
    cf.emit(cmd + "$" + to_string((yyvsp[-2])->reg) + ", $" + to_string((yyvsp[-2])->reg) + ", $" + to_string((yyvsp[0])->reg));

    //set register of 2nd operand as available
    setRegister((yyvsp[0])->reg,true);

    if (type == "BYTE")
        cf.emit("and $" + to_string((yyvsp[-2])->reg) + ", $" + to_string((yyvsp[-2])->reg) + ", 255");

    (yyval)->reg = (yyvsp[-2])->reg;
}
#line 2253 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 811 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[0]));
	string name = id->name;
	if (checkIdFree(name))
	{
	    errorUndef(yylineno,name);
	    exit(0);
	}
	//$$ = $1;
	string type = getExpType((yyvsp[0]));
	(yyval) = new Type(type);

    // HW5:
    //allocating new register for local variable
    int reg = getAvailableRegister();
    setRegister(reg,false);
    SymbolTableEntry* e=getIdEntry(name,false);
    cf.emit("lw $" + to_string(reg) + ", " + to_string((-4)*(e->offset)) + "($fp)");

    if (type == "BOOL")
    {
        (yyval)->true_list = cf.makelist(cf.emit("beq $" + to_string(reg) + ", 1,  "));
        (yyval)->false_list = cf.makelist(cf.emit("j  "));
        setRegister(reg,true);
    }
    else
        (yyval)->reg = reg;
}
#line 2286 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 840 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = new Type(getExpType((yyvsp[0])));
}
#line 2294 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 844 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);

    // HW5:
    NameTypeInfo* num = dynamic_cast<NameTypeInfo*>((yyvsp[0]));
    int reg = getAvailableRegister();
    (yyval)->reg = reg;
    setRegister(reg,false);
    // Save NUM's value to register
    cf.emit("li $" + to_string(reg) + ", " + num->name);
}
#line 2310 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 856 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* numId = dynamic_cast<NameTypeInfo*>((yyvsp[-1]));
	int num = atoi(numId->name.c_str());

	if (num > 255)
	{
		errorByteTooLarge(yylineno,numId->name);
		exit(0);
	}

	(yyval) = new Type("BYTE");

    // HW5:
    int reg = getAvailableRegister();
    (yyval)->reg = reg;
    setRegister(reg,false);
    cf.emit("li $" + to_string(reg) + ", " + numId->name);
}
#line 2333 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 875 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = new Type("STRING");

	// HW5:
	NameTypeInfo* s = dynamic_cast<NameTypeInfo*>((yyvsp[0]));
	string string_content = s->name;
	string label = "string_" + to_string(stringCnt);
	stringCnt++;
	cf.emitData(label + ": .asciiz " + string_content);
	(yyval)->label = label;
}
#line 2349 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 887 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = new Type("BOOL");

	// HW5:
	(yyval)->true_list = cf.makelist(cf.emit("j "));
}
#line 2360 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 894 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = new Type("BOOL");

	// HW5:
	(yyval)->false_list = cf.makelist(cf.emit("j "));
}
#line 2371 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 901 "parser.ypp" /* yacc.c:1646  */
    {
	checkExpressionType((yyvsp[0]),"BOOL",yylineno);
	(yyval) = new Type("BOOL");

    // HW5:
    (yyval)->true_list = (yyvsp[0])->false_list;
    (yyval)->false_list = (yyvsp[0])->true_list;
}
#line 2384 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 910 "parser.ypp" /* yacc.c:1646  */
    {
	checkExpressionType((yyvsp[-3]),"BOOL",yylineno);
	checkExpressionType((yyvsp[-1]),"BOOL",yylineno);
	(yyval) = new Type("BOOL");

    // HW5:
    cf.bpatch((yyvsp[-3])->true_list,(yyvsp[-1])->label);
    (yyval)->true_list = (yyvsp[0])->true_list;
    (yyval)->false_list = cf.merge((yyvsp[-3])->false_list,(yyvsp[0])->false_list);
}
#line 2399 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 921 "parser.ypp" /* yacc.c:1646  */
    {
	checkExpressionType((yyvsp[-3]),"BOOL",yylineno);
	checkExpressionType((yyvsp[-1]),"BOOL",yylineno);
	(yyval) = new Type("BOOL");

	// HW5:
    cf.bpatch((yyvsp[-3])->false_list,(yyvsp[-1])->label);
    (yyval)->true_list = cf.merge((yyvsp[-3])->true_list,(yyvsp[0])->true_list);
    (yyval)->false_list = (yyvsp[0])->false_list;
}
#line 2414 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 932 "parser.ypp" /* yacc.c:1646  */
    {
    string type_right_exp = getExpType((yyvsp[0]));
    string type_left_exp = getExpType((yyvsp[-2]));
 	if (type_right_exp!="INT" && type_right_exp!="BYTE") {errorMismatch(yylineno); exit(0);}
	if (type_left_exp!="INT" && type_left_exp!="BYTE") {errorMismatch(yylineno); exit(0);}
	(yyval) = new Type("BOOL");

    // HW5:
	NameTypeInfo* relop = dynamic_cast<NameTypeInfo*>((yyvsp[-1]));
	string op = relop->name;

	if (op == "<")
	    (yyval)->true_list = cf.makelist(cf.emit("blt $" + to_string((yyvsp[-2])->reg) + ", $" + to_string((yyvsp[0])->reg) + ",  "));
	if (op == "<=")
	    (yyval)->true_list = cf.makelist(cf.emit("ble $" + to_string((yyvsp[-2])->reg) + ", $" + to_string((yyvsp[0])->reg) + ",  "));
	if (op == ">")
	    (yyval)->true_list = cf.makelist(cf.emit("bgt $" + to_string((yyvsp[-2])->reg) + ", $" + to_string((yyvsp[0])->reg) + ",  "));
	if (op == ">=")
	    (yyval)->true_list = cf.makelist(cf.emit("bge $" + to_string((yyvsp[-2])->reg) + ", $" + to_string((yyvsp[0])->reg) + ",  "));

	(yyval)->false_list = cf.makelist(cf.emit("j "));

	setRegister((yyvsp[-2])->reg,true);
	setRegister((yyvsp[0])->reg,true);
}
#line 2444 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2448 "/cygdrive/c/compi-hw5/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
#line 959 "parser.ypp" /* yacc.c:1906  */


void yyerror(const char * message)
{
	errorSyn(yylineno);
	exit(0);
}


int main() {
	yyparse();

	//HW5
	cout << "came here" << endl;
	cf.printCodeBuffer();
    cf.printDataBuffer();

}
