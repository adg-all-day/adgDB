/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 7 "src/parser/adgsql.y"

#include <datastructure/queue.h>

void yyerror(struct queue*, void*, const char *, ...);
bool emit(struct queue *q, char *s, ...);
int yylex(void*, void*);

#line 79 "fuzz/generated/adgsql.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#include "adgsql.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NAME = 3,                       /* NAME  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_INTNUM = 5,                     /* INTNUM  */
  YYSYMBOL_BOOL = 6,                       /* BOOL  */
  YYSYMBOL_APPROXNUM = 7,                  /* APPROXNUM  */
  YYSYMBOL_ASSIGN = 8,                     /* ASSIGN  */
  YYSYMBOL_ANDOP = 9,                      /* ANDOP  */
  YYSYMBOL_IS = 10,                        /* IS  */
  YYSYMBOL_11_ = 11,                       /* '!'  */
  YYSYMBOL_COMPARISON = 12,                /* COMPARISON  */
  YYSYMBOL_13_ = 13,                       /* '|'  */
  YYSYMBOL_14_ = 14,                       /* '&'  */
  YYSYMBOL_SHIFT = 15,                     /* SHIFT  */
  YYSYMBOL_16_ = 16,                       /* '+'  */
  YYSYMBOL_17_ = 17,                       /* '-'  */
  YYSYMBOL_18_ = 18,                       /* '*'  */
  YYSYMBOL_19_ = 19,                       /* '/'  */
  YYSYMBOL_20_ = 20,                       /* '%'  */
  YYSYMBOL_21_ = 21,                       /* '^'  */
  YYSYMBOL_UMINUS = 22,                    /* UMINUS  */
  YYSYMBOL_AND = 23,                       /* AND  */
  YYSYMBOL_AS = 24,                        /* AS  */
  YYSYMBOL_ASC = 25,                       /* ASC  */
  YYSYMBOL_AUTO_INCREMENT = 26,            /* AUTO_INCREMENT  */
  YYSYMBOL_BETWEEN = 27,                   /* BETWEEN  */
  YYSYMBOL_BY = 28,                        /* BY  */
  YYSYMBOL_CASE = 29,                      /* CASE  */
  YYSYMBOL_CHAR = 30,                      /* CHAR  */
  YYSYMBOL_COLUMN = 31,                    /* COLUMN  */
  YYSYMBOL_CREATE = 32,                    /* CREATE  */
  YYSYMBOL_CROSS = 33,                     /* CROSS  */
  YYSYMBOL_CURRENT_DATE = 34,              /* CURRENT_DATE  */
  YYSYMBOL_CURRENT_TIMESTAMP = 35,         /* CURRENT_TIMESTAMP  */
  YYSYMBOL_DATE = 36,                      /* DATE  */
  YYSYMBOL_DATETIME = 37,                  /* DATETIME  */
  YYSYMBOL_DELETE = 38,                    /* DELETE  */
  YYSYMBOL_DESC = 39,                      /* DESC  */
  YYSYMBOL_DISTINCT = 40,                  /* DISTINCT  */
  YYSYMBOL_DOUBLE = 41,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 42,                      /* ELSE  */
  YYSYMBOL_END = 43,                       /* END  */
  YYSYMBOL_EXISTS = 44,                    /* EXISTS  */
  YYSYMBOL_EXPLAIN = 45,                   /* EXPLAIN  */
  YYSYMBOL_FROM = 46,                      /* FROM  */
  YYSYMBOL_GROUP = 47,                     /* GROUP  */
  YYSYMBOL_HAVING = 48,                    /* HAVING  */
  YYSYMBOL_IF = 49,                        /* IF  */
  YYSYMBOL_IN = 50,                        /* IN  */
  YYSYMBOL_INDEX = 51,                     /* INDEX  */
  YYSYMBOL_INNER = 52,                     /* INNER  */
  YYSYMBOL_INSERT = 53,                    /* INSERT  */
  YYSYMBOL_INT = 54,                       /* INT  */
  YYSYMBOL_INTEGER = 55,                   /* INTEGER  */
  YYSYMBOL_INTO = 56,                      /* INTO  */
  YYSYMBOL_JOIN = 57,                      /* JOIN  */
  YYSYMBOL_KEY = 58,                       /* KEY  */
  YYSYMBOL_LEFT = 59,                      /* LEFT  */
  YYSYMBOL_LIKE = 60,                      /* LIKE  */
  YYSYMBOL_LIMIT = 61,                     /* LIMIT  */
  YYSYMBOL_MOD = 62,                       /* MOD  */
  YYSYMBOL_NOT = 63,                       /* NOT  */
  YYSYMBOL_NULLX = 64,                     /* NULLX  */
  YYSYMBOL_ON = 65,                        /* ON  */
  YYSYMBOL_OR = 66,                        /* OR  */
  YYSYMBOL_ORDER = 67,                     /* ORDER  */
  YYSYMBOL_OUTER = 68,                     /* OUTER  */
  YYSYMBOL_PRIMARY = 69,                   /* PRIMARY  */
  YYSYMBOL_RIGHT = 70,                     /* RIGHT  */
  YYSYMBOL_SELECT = 71,                    /* SELECT  */
  YYSYMBOL_SET = 72,                       /* SET  */
  YYSYMBOL_TABLE = 73,                     /* TABLE  */
  YYSYMBOL_THEN = 74,                      /* THEN  */
  YYSYMBOL_TIME = 75,                      /* TIME  */
  YYSYMBOL_TIMESTAMP = 76,                 /* TIMESTAMP  */
  YYSYMBOL_TINYINT = 77,                   /* TINYINT  */
  YYSYMBOL_UNIQUE = 78,                    /* UNIQUE  */
  YYSYMBOL_UPDATE = 79,                    /* UPDATE  */
  YYSYMBOL_VALUES = 80,                    /* VALUES  */
  YYSYMBOL_VARCHAR = 81,                   /* VARCHAR  */
  YYSYMBOL_WHEN = 82,                      /* WHEN  */
  YYSYMBOL_WHERE = 83,                     /* WHERE  */
  YYSYMBOL_XOR = 84,                       /* XOR  */
  YYSYMBOL_FCOUNT = 85,                    /* FCOUNT  */
  YYSYMBOL_86_ = 86,                       /* ';'  */
  YYSYMBOL_87_ = 87,                       /* ','  */
  YYSYMBOL_88_ = 88,                       /* '.'  */
  YYSYMBOL_89_ = 89,                       /* '('  */
  YYSYMBOL_90_ = 90,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 91,                  /* $accept  */
  YYSYMBOL_stmt_list = 92,                 /* stmt_list  */
  YYSYMBOL_stmt = 93,                      /* stmt  */
  YYSYMBOL_select_stmt = 94,               /* select_stmt  */
  YYSYMBOL_opt_where = 95,                 /* opt_where  */
  YYSYMBOL_opt_groupby = 96,               /* opt_groupby  */
  YYSYMBOL_groupby_list = 97,              /* groupby_list  */
  YYSYMBOL_opt_asc_desc = 98,              /* opt_asc_desc  */
  YYSYMBOL_opt_having = 99,                /* opt_having  */
  YYSYMBOL_opt_orderby = 100,              /* opt_orderby  */
  YYSYMBOL_orderby_list = 101,             /* orderby_list  */
  YYSYMBOL_orderby_field = 102,            /* orderby_field  */
  YYSYMBOL_opt_limit = 103,                /* opt_limit  */
  YYSYMBOL_column_list = 104,              /* column_list  */
  YYSYMBOL_select_opts = 105,              /* select_opts  */
  YYSYMBOL_select_expr_list = 106,         /* select_expr_list  */
  YYSYMBOL_select_expr = 107,              /* select_expr  */
  YYSYMBOL_table_references = 108,         /* table_references  */
  YYSYMBOL_table_reference = 109,          /* table_reference  */
  YYSYMBOL_table_factor = 110,             /* table_factor  */
  YYSYMBOL_111_1 = 111,                    /* $@1  */
  YYSYMBOL_opt_as_alias = 112,             /* opt_as_alias  */
  YYSYMBOL_join_table = 113,               /* join_table  */
  YYSYMBOL_opt_inner = 114,                /* opt_inner  */
  YYSYMBOL_opt_outer = 115,                /* opt_outer  */
  YYSYMBOL_left_or_right = 116,            /* left_or_right  */
  YYSYMBOL_join_condition = 117,           /* join_condition  */
  YYSYMBOL_expr = 118,                     /* expr  */
  YYSYMBOL_val_list = 119,                 /* val_list  */
  YYSYMBOL_case_list = 120,                /* case_list  */
  YYSYMBOL_delete_stmt = 121,              /* delete_stmt  */
  YYSYMBOL_del_opt_where = 122,            /* del_opt_where  */
  YYSYMBOL_delete_expr = 123,              /* delete_expr  */
  YYSYMBOL_delete_val_list = 124,          /* delete_val_list  */
  YYSYMBOL_insert_stmt = 125,              /* insert_stmt  */
  YYSYMBOL_opt_into = 126,                 /* opt_into  */
  YYSYMBOL_opt_col_names = 127,            /* opt_col_names  */
  YYSYMBOL_insert_vals_list = 128,         /* insert_vals_list  */
  YYSYMBOL_insert_vals = 129,              /* insert_vals  */
  YYSYMBOL_insert_expr = 130,              /* insert_expr  */
  YYSYMBOL_update_stmt = 131,              /* update_stmt  */
  YYSYMBOL_update_asgn_list = 132,         /* update_asgn_list  */
  YYSYMBOL_update_opt_where = 133,         /* update_opt_where  */
  YYSYMBOL_update_expr = 134,              /* update_expr  */
  YYSYMBOL_update_val_list = 135,          /* update_val_list  */
  YYSYMBOL_opt_if_not_exists = 136,        /* opt_if_not_exists  */
  YYSYMBOL_create_table_stmt = 137,        /* create_table_stmt  */
  YYSYMBOL_create_col_list = 138,          /* create_col_list  */
  YYSYMBOL_create_definition = 139,        /* create_definition  */
  YYSYMBOL_140_2 = 140,                    /* $@2  */
  YYSYMBOL_column_atts = 141,              /* column_atts  */
  YYSYMBOL_data_type = 142                 /* data_type  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   723

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  334

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   331


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    11,     2,     2,     2,    20,    14,     2,
      89,    90,    18,    16,    87,    17,    88,    19,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    86,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    21,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    13,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    12,    15,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   148,   148,   149,   154,   157,   158,   163,   164,   167,
     168,   171,   172,   175,   176,   177,   180,   181,   183,   184,
     187,   188,   191,   193,   194,   195,   198,   199,   202,   203,
     206,   207,   208,   211,   213,   214,   217,   218,   221,   221,
     224,   225,   226,   230,   232,   236,   236,   238,   239,   242,
     243,   247,   250,   251,   252,   253,   254,   255,   256,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   273,   274,   277,   278,   281,   282,   286,   287,   289,
     290,   291,   292,   295,   296,   299,   300,   303,   304,   309,
     312,   315,   316,   318,   319,   320,   321,   322,   323,   326,
     327,   328,   329,   330,   333,   334,   337,   338,   341,   342,
     347,   350,   355,   355,   358,   359,   362,   363,   367,   368,
     371,   376,   377,   378,   379,   380,   383,   384,   385,   386,
     387,   388,   389,   393,   396,   403,   406,   411,   412,   414,
     415,   416,   417,   418,   419,   422,   423,   424,   425,   426,
     429,   430,   433,   434,   437,   438,   443,   444,   448,   451,
     456,   457,   460,   460,   463,   464,   467,   468,   469,   470,
     471,   472,   476,   477,   478,   479,   480,   481,   482
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NAME", "STRING",
  "INTNUM", "BOOL", "APPROXNUM", "ASSIGN", "ANDOP", "IS", "'!'",
  "COMPARISON", "'|'", "'&'", "SHIFT", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'^'", "UMINUS", "AND", "AS", "ASC", "AUTO_INCREMENT", "BETWEEN", "BY",
  "CASE", "CHAR", "COLUMN", "CREATE", "CROSS", "CURRENT_DATE",
  "CURRENT_TIMESTAMP", "DATE", "DATETIME", "DELETE", "DESC", "DISTINCT",
  "DOUBLE", "ELSE", "END", "EXISTS", "EXPLAIN", "FROM", "GROUP", "HAVING",
  "IF", "IN", "INDEX", "INNER", "INSERT", "INT", "INTEGER", "INTO", "JOIN",
  "KEY", "LEFT", "LIKE", "LIMIT", "MOD", "NOT", "NULLX", "ON", "OR",
  "ORDER", "OUTER", "PRIMARY", "RIGHT", "SELECT", "SET", "TABLE", "THEN",
  "TIME", "TIMESTAMP", "TINYINT", "UNIQUE", "UPDATE", "VALUES", "VARCHAR",
  "WHEN", "WHERE", "XOR", "FCOUNT", "';'", "','", "'.'", "'('", "')'",
  "$accept", "stmt_list", "stmt", "select_stmt", "opt_where",
  "opt_groupby", "groupby_list", "opt_asc_desc", "opt_having",
  "opt_orderby", "orderby_list", "orderby_field", "opt_limit",
  "column_list", "select_opts", "select_expr_list", "select_expr",
  "table_references", "table_reference", "table_factor", "$@1",
  "opt_as_alias", "join_table", "opt_inner", "opt_outer", "left_or_right",
  "join_condition", "expr", "val_list", "case_list", "delete_stmt",
  "del_opt_where", "delete_expr", "delete_val_list", "insert_stmt",
  "opt_into", "opt_col_names", "insert_vals_list", "insert_vals",
  "insert_expr", "update_stmt", "update_asgn_list", "update_opt_where",
  "update_expr", "update_val_list", "opt_if_not_exists",
  "create_table_stmt", "create_col_list", "create_definition", "$@2",
  "column_atts", "data_type", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-273)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-46)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     329,   -63,   -20,   -44,  -273,    30,    45,   -45,  -273,  -273,
    -273,  -273,  -273,    32,    99,  -273,   119,    57,    54,  -273,
      47,  -273,    93,   136,    60,    56,    72,  -273,  -273,  -273,
    -273,   177,  -273,   106,  -273,  -273,  -273,  -273,    79,   177,
     -35,  -273,   207,   173,  -273,  -273,    97,    25,  -273,   190,
      73,   200,  -273,   177,   426,   132,   144,   235,   210,   177,
    -273,   177,   220,   177,   177,   177,   177,   177,   177,   212,
     131,   177,   177,    55,   177,   177,  -273,   216,    12,   -34,
    -273,  -273,  -273,  -273,  -273,  -273,    25,   180,  -273,    -8,
     143,  -273,  -273,   454,   206,   177,  -273,   177,   148,   290,
    -273,  -273,    13,   -32,  -273,  -273,  -273,   636,   170,  -273,
     138,   339,   339,  -273,  -273,  -273,  -273,   177,   660,  -273,
     179,   177,   611,   625,    63,    63,   237,  -273,   198,   202,
      76,  -273,   273,   265,    25,   241,    25,   201,   242,    25,
      25,   293,  -273,   113,   224,   177,   177,  -273,   513,   527,
    -273,  -273,    10,   177,   210,   266,  -273,  -273,  -273,   264,
     258,  -273,   325,   232,   177,   660,  -273,  -273,  -273,  -273,
    -273,  -273,    63,   412,   412,   315,   190,   243,   -34,  -273,
     628,  -273,   159,   275,  -273,  -273,    25,   262,    75,     9,
    -273,  -273,  -273,  -273,  -273,   113,  -273,   113,   111,   409,
     277,   597,   542,  -273,   177,  -273,   597,   -32,   302,   299,
     210,  -273,   307,   177,  -273,   278,   270,    63,   254,    63,
     289,   331,    63,    63,    63,   117,   190,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,   294,  -273,  -273,   155,   296,    25,
    -273,   -14,   113,  -273,   113,   113,   113,   113,   113,   113,
    -273,   597,   177,   177,   317,   324,   210,  -273,  -273,  -273,
     253,   326,  -273,  -273,    63,   303,   187,   122,   412,  -273,
     169,   389,   260,    25,  -273,   312,  -273,   409,   386,   386,
    -273,  -273,  -273,   171,   320,   440,   597,   382,   350,   177,
    -273,   324,  -273,   367,   328,    63,  -273,   330,  -273,   359,
    -273,   356,  -273,  -273,  -273,  -273,   177,  -273,  -273,  -273,
     177,   177,  -273,   597,  -273,    63,  -273,   341,  -273,  -273,
    -273,   440,   345,  -273,   440,   353,  -273,  -273,  -273,   177,
    -273,   177,  -273,   597
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,   113,    28,     0,     0,     0,     4,    89,
     110,   133,   158,   156,     0,   112,     0,     0,     0,     1,
       0,     2,     0,     0,    91,   114,    52,    54,    55,    57,
      56,     0,    32,     0,    88,    87,    29,    58,     0,     0,
       5,    30,    42,     0,     3,   157,     0,     0,    90,     0,
       0,     0,    65,     0,     0,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,   137,   162,
      93,    94,    95,    97,    96,    98,     0,    92,    26,     0,
       0,   120,    53,     0,     0,     0,    81,     0,     0,     0,
      70,    38,     7,    34,    36,    37,    31,    66,     0,    71,
      69,    59,    60,    61,    62,    63,    40,     0,    85,    64,
       0,     0,    67,    68,     0,     0,     0,   134,     0,     0,
       0,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   115,     0,   111,     0,     0,    79,     0,     0,
      77,    78,    42,     0,     0,     9,    46,    49,    50,     0,
      47,    72,    73,     0,     0,    86,   139,   140,   141,   143,
     142,   144,     0,   135,   138,     0,     0,     0,   162,   159,
       0,   103,    99,     0,   104,   102,     0,     0,   100,   101,
      27,   121,   122,   124,   123,     0,   125,     0,     0,   118,
       0,    83,     0,    82,     0,    39,     8,    35,     0,    16,
       0,    48,     0,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   161,   176,   177,
     175,   172,   173,   174,     0,   166,   105,   108,     0,     0,
     131,     0,     0,   116,     0,     0,     0,     0,     0,     0,
      80,    84,     0,     0,    18,     0,     0,    74,    76,   149,
     145,     0,   150,   148,     0,     0,   146,   147,   136,   165,
       0,     0,   163,     0,   106,     0,   132,   119,   126,   127,
     128,   129,   130,     0,    10,    13,    17,     0,    23,     0,
      43,     0,   151,   154,     0,     0,   164,     0,   169,     0,
     168,     0,   170,   109,   107,   117,     0,    14,    15,    11,
       0,     0,     6,    51,    44,     0,   152,     0,   178,   167,
     171,    13,    19,    20,    13,    24,   155,   153,    12,     0,
      22,     0,    21,    25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -273,  -273,   428,   391,  -273,  -273,  -273,   -43,  -273,  -273,
    -273,   110,  -273,  -161,  -273,  -273,   388,  -273,   301,  -203,
    -273,   309,  -273,  -273,  -273,  -273,   157,   -17,  -140,   399,
    -273,  -273,   -46,  -202,  -273,  -273,  -273,  -273,   218,   151,
    -273,  -273,  -273,  -116,  -272,  -273,  -273,  -273,   291,  -273,
    -273,  -273
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     6,     7,     8,   155,   209,   284,   309,   254,   288,
     322,   323,   312,    89,    17,    40,    41,   102,   103,   104,
     152,    76,   105,   159,   212,   160,   290,   162,   163,    55,
       9,    48,   237,   238,    10,    16,    50,   144,   198,   199,
      11,    78,   127,   293,   294,    23,    12,   130,   131,   132,
     272,   235
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,    87,   244,   245,   246,   247,   248,   255,   173,   174,
      13,    58,    15,    60,    52,   225,    54,   128,   134,   135,
     156,   136,    57,   317,   215,   -45,    14,   157,    80,    81,
      82,    83,    84,    18,    69,   129,    93,   275,   158,    99,
     133,    21,    42,   326,   107,    19,   110,   111,   112,   113,
     114,   115,    59,   291,   118,   119,   216,   122,   123,   137,
      26,    27,    28,    29,    30,   270,   166,   167,   168,   169,
     170,   303,   138,   257,    31,    32,   276,     1,   148,   141,
     149,    22,   142,     2,   134,   135,    33,   136,   182,    85,
     185,    34,    35,   188,   189,   125,   153,    36,     3,   126,
     154,   260,    24,   263,   165,   120,   266,   267,   268,    26,
      27,    28,    29,    30,    86,   121,     4,   191,   192,   193,
     194,    37,    25,    31,     5,   137,    43,   171,   201,   202,
     195,   217,   218,    44,   219,    33,   206,    45,   138,    46,
      34,    35,    38,    47,     4,    49,    39,    26,    27,    28,
      29,    30,   172,    90,    64,    65,    66,    67,    68,   140,
      51,    31,    98,   178,   134,   135,   179,   136,    56,   135,
      37,   136,   220,    33,    95,    96,    77,   196,    34,    35,
      26,    27,    28,    29,    30,   221,    79,   251,    53,   134,
     135,    38,   136,    88,    31,    39,   217,   218,   242,   219,
      72,   243,   197,    92,   141,   137,    33,   269,    37,   137,
      60,    34,    35,   101,    97,   116,    61,    62,   138,    63,
     117,   139,   138,    64,    65,    66,    67,    68,   124,    38,
     137,    69,   143,    39,   161,   285,   286,   220,   150,   140,
     175,    37,   273,   138,    61,    62,   139,    63,   146,   147,
     221,    64,    65,    66,    67,    68,   141,    70,   242,   296,
     177,   305,    38,   218,   140,   219,    39,    71,   164,    72,
      73,   223,   313,    74,   134,   135,   180,   136,   328,   217,
     218,   330,   219,   108,   109,    70,   298,   176,    97,   321,
     186,    75,   187,   324,   325,    71,   190,    72,    73,    61,
      62,    74,    63,   220,   183,   184,    64,    65,    66,    67,
      68,   200,   324,   208,   333,   137,   221,   261,   262,    75,
     220,   210,   214,   299,   300,   100,   211,   224,   138,   301,
     252,   139,   226,   221,    61,    62,   222,    63,   302,   236,
      70,    64,    65,    66,    67,    68,   240,   253,   241,   140,
      71,   239,    72,    73,   223,   181,    74,    66,    67,    68,
     259,     1,    61,    62,   256,    63,   249,     2,   258,    64,
      65,    66,    67,    68,    75,    70,   217,   218,   264,   219,
     151,   265,     3,   271,   287,    71,   274,    72,    73,   289,
     292,    74,   295,   277,   297,   278,   279,   280,   281,   282,
       4,    72,   304,    70,   246,   247,   248,   306,     5,    75,
     310,   311,   213,    71,   320,    72,    73,   220,   316,    74,
     318,   217,   218,   319,   219,   244,   245,   246,   247,   248,
     221,   327,   329,   222,    20,    61,    62,    75,    63,   332,
     331,    91,    64,    65,    66,    67,    68,   106,   314,    61,
      62,   223,    63,    94,   315,   207,    64,    65,    66,    67,
      68,   205,   220,    61,    62,   307,    63,   283,     0,   227,
      64,    65,    66,    67,    68,   221,    70,     0,   222,   308,
       0,     0,     0,     0,     0,     0,    71,     0,    72,    73,
      70,     0,    74,     0,     0,     0,   223,     0,     0,     0,
      71,     0,    72,    73,    70,     0,    74,     0,    53,     0,
      75,     0,     0,     0,    71,     0,    72,    73,     0,     0,
      74,     0,    61,    62,    75,    63,     0,     0,   145,    64,
      65,    66,    67,    68,     0,     0,    61,    62,    75,    63,
       0,     0,     0,    64,    65,    66,    67,    68,     0,     0,
       0,    61,    62,     0,    63,     0,   203,     0,    64,    65,
      66,    67,    68,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,     0,    72,    73,    70,     0,    74,
       0,     0,     0,     0,     0,   250,     0,    71,     0,    72,
      73,     0,    70,    74,     0,     0,     0,    75,     0,     0,
       0,   204,    71,     0,    72,    73,    61,    62,    74,    63,
       0,    75,     0,    64,    65,    66,    67,    68,     0,     0,
      61,    62,     0,    63,     0,     0,    75,    64,    65,    66,
      67,    68,     0,     0,    61,    62,     0,    63,     0,     0,
       0,    64,    65,    66,    67,    68,    62,    70,    63,     0,
       0,     0,    64,    65,    66,    67,    68,    71,     0,    72,
      73,    70,     0,    74,   228,   229,     0,     0,     0,   230,
     -46,    71,    63,    72,    73,    70,    64,    65,    66,    67,
      68,    75,   231,   232,     0,    71,    70,    72,    73,     0,
       0,     0,     0,     0,     0,    75,    71,     0,    72,    73,
       0,     0,     0,     0,     0,   233,     0,     0,     0,   234,
     -46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -46,     0,    72,    73
};

static const yytype_int16 yycheck[] =
{
      17,    47,    16,    17,    18,    19,    20,   210,   124,   125,
      73,    46,    56,     3,    31,   176,    33,    51,     9,    10,
      52,    12,    39,   295,   164,    57,    46,    59,     3,     4,
       5,     6,     7,     3,    24,    69,    53,   239,    70,    56,
      86,    86,    59,   315,    61,     0,    63,    64,    65,    66,
      67,    68,    87,   256,    71,    72,   172,    74,    75,    50,
       3,     4,     5,     6,     7,   226,     3,     4,     5,     6,
       7,   273,    63,   213,    17,    18,    90,    32,    95,    87,
      97,    49,    90,    38,     9,    10,    29,    12,   134,    64,
     136,    34,    35,   139,   140,    83,    83,    40,    53,    87,
      87,   217,     3,   219,   121,    50,   222,   223,   224,     3,
       4,     5,     6,     7,    89,    60,    71,     4,     5,     6,
       7,    64,     3,    17,    79,    50,    72,    64,   145,   146,
      17,     9,    10,    86,    12,    29,   153,    44,    63,     3,
      34,    35,    85,    83,    71,    89,    89,     3,     4,     5,
       6,     7,    89,    80,    16,    17,    18,    19,    20,    84,
      88,    17,    18,    87,     9,    10,    90,    12,    89,    10,
      64,    12,    50,    29,    42,    43,     3,    64,    34,    35,
       3,     4,     5,     6,     7,    63,    89,   204,    82,     9,
      10,    85,    12,     3,    17,    89,     9,    10,    87,    12,
      62,    90,    89,     3,    87,    50,    29,    90,    64,    50,
       3,    34,    35,     3,    82,     3,     9,    10,    63,    12,
      89,    66,    63,    16,    17,    18,    19,    20,    12,    85,
      50,    24,    89,    89,    64,   252,   253,    50,    90,    84,
       3,    64,    87,    63,     9,    10,    66,    12,    42,    43,
      63,    16,    17,    18,    19,    20,    87,    50,    87,    90,
      58,    90,    85,    10,    84,    12,    89,    60,    89,    62,
      63,    84,   289,    66,     9,    10,     3,    12,   321,     9,
      10,   324,    12,    63,    64,    50,    26,    89,    82,   306,
      89,    84,    50,   310,   311,    60,     3,    62,    63,     9,
      10,    66,    12,    50,    63,    64,    16,    17,    18,    19,
      20,    87,   329,    47,   331,    50,    63,    63,    64,    84,
      50,    57,    90,    63,    64,    90,    68,    12,    63,    69,
      28,    66,    89,    63,     9,    10,    66,    12,    78,    64,
      50,    16,    17,    18,    19,    20,   195,    48,   197,    84,
      60,    89,    62,    63,    84,    90,    66,    18,    19,    20,
      90,    32,     9,    10,    57,    12,    89,    38,    90,    16,
      17,    18,    19,    20,    84,    50,     9,    10,    89,    12,
      90,    50,    53,    89,    67,    60,    90,    62,    63,    65,
      64,    66,    89,   242,     5,   244,   245,   246,   247,   248,
      71,    62,    90,    50,    18,    19,    20,    87,    79,    84,
      28,    61,    87,    60,    58,    62,    63,    50,    90,    66,
      90,     9,    10,    64,    12,    16,    17,    18,    19,    20,
      63,    90,    87,    66,     6,     9,    10,    84,    12,   329,
      87,    50,    16,    17,    18,    19,    20,    59,   291,     9,
      10,    84,    12,    54,    87,   154,    16,    17,    18,    19,
      20,   152,    50,     9,    10,    25,    12,   249,    -1,   178,
      16,    17,    18,    19,    20,    63,    50,    -1,    66,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    62,    63,
      50,    -1,    66,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      60,    -1,    62,    63,    50,    -1,    66,    -1,    82,    -1,
      84,    -1,    -1,    -1,    60,    -1,    62,    63,    -1,    -1,
      66,    -1,     9,    10,    84,    12,    -1,    -1,    74,    16,
      17,    18,    19,    20,    -1,    -1,     9,    10,    84,    12,
      -1,    -1,    -1,    16,    17,    18,    19,    20,    -1,    -1,
      -1,     9,    10,    -1,    12,    -1,    43,    -1,    16,    17,
      18,    19,    20,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    62,    63,    50,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    60,    -1,    62,
      63,    -1,    50,    66,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    74,    60,    -1,    62,    63,     9,    10,    66,    12,
      -1,    84,    -1,    16,    17,    18,    19,    20,    -1,    -1,
       9,    10,    -1,    12,    -1,    -1,    84,    16,    17,    18,
      19,    20,    -1,    -1,     9,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    10,    50,    12,    -1,
      -1,    -1,    16,    17,    18,    19,    20,    60,    -1,    62,
      63,    50,    -1,    66,    36,    37,    -1,    -1,    -1,    41,
      10,    60,    12,    62,    63,    50,    16,    17,    18,    19,
      20,    84,    54,    55,    -1,    60,    50,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    62,    63
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    38,    53,    71,    79,    92,    93,    94,   121,
     125,   131,   137,    73,    46,    56,   126,   105,     3,     0,
      93,    86,    49,   136,     3,     3,     3,     4,     5,     6,
       7,    17,    18,    29,    34,    35,    40,    64,    85,    89,
     106,   107,   118,    72,    86,    44,     3,    83,   122,    89,
     127,    88,   118,    82,   118,   120,    89,   118,    46,    87,
       3,     9,    10,    12,    16,    17,    18,    19,    20,    24,
      50,    60,    62,    63,    66,    84,   112,     3,   132,    89,
       3,     4,     5,     6,     7,    64,    89,   123,     3,   104,
      80,    94,     3,   118,   120,    42,    43,    82,    18,   118,
      90,     3,   108,   109,   110,   113,   107,   118,    63,    64,
     118,   118,   118,   118,   118,   118,     3,    89,   118,   118,
      50,    60,   118,   118,    12,    83,    87,   133,    51,    69,
     138,   139,   140,   123,     9,    10,    12,    50,    63,    66,
      84,    87,    90,    89,   128,    74,    42,    43,   118,   118,
      90,    90,   111,    83,    87,    95,    52,    59,    70,   114,
     116,    64,   118,   119,    89,   118,     3,     4,     5,     6,
       7,    64,    89,   134,   134,     3,    89,    58,    87,    90,
       3,    90,   123,    63,    64,   123,    89,    50,   123,   123,
       3,     4,     5,     6,     7,    17,    64,    89,   129,   130,
      87,   118,   118,    43,    74,   112,   118,   109,    47,    96,
      57,    68,   115,    87,    90,   119,   134,     9,    10,    12,
      50,    63,    66,    84,    12,   104,    89,   139,    36,    37,
      41,    54,    55,    77,    81,   142,    64,   123,   124,    89,
     130,   130,    87,    90,    16,    17,    18,    19,    20,    89,
      43,   118,    28,    48,    99,   110,    57,   119,    90,    90,
     134,    63,    64,   134,    89,    50,   134,   134,   134,    90,
     104,    89,   141,    87,    90,   124,    90,   130,   130,   130,
     130,   130,   130,   129,    97,   118,   118,    67,   100,    65,
     117,   110,    64,   134,   135,    89,    90,     5,    26,    63,
      64,    69,    78,   124,    90,    90,    87,    25,    39,    98,
      28,    61,   103,   118,   117,    87,    90,   135,    90,    64,
      58,   118,   101,   102,   118,   118,   135,    90,    98,    87,
      98,    87,   102,   118
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    93,    94,    94,    95,    95,    96,
      96,    97,    97,    98,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   103,   103,   103,   104,   104,   105,   105,
     106,   106,   106,   107,   108,   108,   109,   109,   111,   110,
     112,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   117,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   119,   119,   118,   118,   118,   118,   118,
     118,   118,   118,   120,   120,   118,   118,   118,   118,    93,
     121,   122,   122,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   124,   124,
      93,   125,   126,   126,   127,   127,   128,   128,   129,   129,
     125,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,    93,   131,   132,   132,   133,   133,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   135,   135,   136,   136,    93,   137,
     138,   138,   140,   139,   139,   139,   141,   141,   141,   141,
     141,   141,   142,   142,   142,   142,   142,   142,   142
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,    10,     0,     2,     0,
       3,     2,     4,     0,     1,     1,     0,     2,     0,     3,
       1,     3,     2,     0,     2,     4,     1,     3,     0,     2,
       1,     3,     1,     2,     1,     3,     1,     1,     0,     3,
       2,     1,     0,     5,     6,     0,     1,     0,     1,     1,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     4,     1,     3,     5,     6,     4,     4,     4,
       6,     3,     5,     4,     5,     3,     4,     1,     1,     1,
       4,     0,     2,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     4,     5,     6,     1,     3,
       1,     6,     1,     0,     0,     3,     3,     5,     1,     3,
       5,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     2,     3,     1,     5,     3,     5,     0,     2,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     4,     5,     6,     1,     3,     0,     2,     1,     7,
       1,     3,     0,     4,     5,     4,     0,     3,     2,     2,
       2,     3,     1,     1,     1,     1,     1,     1,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
        yyerror (result, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, struct queue *result, void *scanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (result);
  YY_USE (scanner);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, struct queue *result, void *scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, result, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, struct queue *result, void *scanner)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, struct queue *result, void *scanner)
{
  YY_USE (yyvaluep);
  YY_USE (result);
  YY_USE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_NAME: /* NAME  */
#line 144 "src/parser/adgsql.y"
            { free(((*yyvaluep).strval)); }
#line 1540 "fuzz/generated/adgsql.tab.c"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 144 "src/parser/adgsql.y"
            { free(((*yyvaluep).strval)); }
#line 1546 "fuzz/generated/adgsql.tab.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (struct queue *result, void *scanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
  case 4: /* stmt: select_stmt  */
#line 154 "src/parser/adgsql.y"
                  { emit(result, "STMT"); }
#line 1825 "fuzz/generated/adgsql.tab.c"
    break;

  case 5: /* select_stmt: SELECT select_opts select_expr_list  */
#line 157 "src/parser/adgsql.y"
                                                                { emit(result, "SELECT %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 1831 "fuzz/generated/adgsql.tab.c"
    break;

  case 6: /* select_stmt: SELECT select_opts select_expr_list FROM table_references opt_where opt_groupby opt_having opt_orderby opt_limit  */
#line 160 "src/parser/adgsql.y"
                                                                { emit(result, "SELECT %d %d", (yyvsp[-8].intval), (yyvsp[-7].intval) + (yyvsp[-5].intval) + (yyvsp[-4].intval) + (yyvsp[-3].intval) + (yyvsp[-2].intval) + (yyvsp[-1].intval) + (yyvsp[0].intval)); }
#line 1837 "fuzz/generated/adgsql.tab.c"
    break;

  case 7: /* opt_where: %empty  */
#line 163 "src/parser/adgsql.y"
                      { (yyval.intval) = 0; }
#line 1843 "fuzz/generated/adgsql.tab.c"
    break;

  case 8: /* opt_where: WHERE expr  */
#line 164 "src/parser/adgsql.y"
                      { emit(result, "WHERE"); (yyval.intval) = 1;}
#line 1849 "fuzz/generated/adgsql.tab.c"
    break;

  case 9: /* opt_groupby: %empty  */
#line 167 "src/parser/adgsql.y"
                                        { (yyval.intval) = 0; }
#line 1855 "fuzz/generated/adgsql.tab.c"
    break;

  case 10: /* opt_groupby: GROUP BY groupby_list  */
#line 168 "src/parser/adgsql.y"
                                        { emit(result, "GROUPBYLIST %d", (yyvsp[0].intval)); (yyval.intval) = 1;}
#line 1861 "fuzz/generated/adgsql.tab.c"
    break;

  case 11: /* groupby_list: expr opt_asc_desc  */
#line 171 "src/parser/adgsql.y"
                                                        { (yyval.intval) = 1; }
#line 1867 "fuzz/generated/adgsql.tab.c"
    break;

  case 12: /* groupby_list: groupby_list ',' expr opt_asc_desc  */
#line 172 "src/parser/adgsql.y"
                                                        { (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 1873 "fuzz/generated/adgsql.tab.c"
    break;

  case 13: /* opt_asc_desc: %empty  */
#line 175 "src/parser/adgsql.y"
                        { (yyval.intval) = 0; }
#line 1879 "fuzz/generated/adgsql.tab.c"
    break;

  case 14: /* opt_asc_desc: ASC  */
#line 176 "src/parser/adgsql.y"
                        { (yyval.intval) = 0; }
#line 1885 "fuzz/generated/adgsql.tab.c"
    break;

  case 15: /* opt_asc_desc: DESC  */
#line 177 "src/parser/adgsql.y"
                        { (yyval.intval) = 1; }
#line 1891 "fuzz/generated/adgsql.tab.c"
    break;

  case 16: /* opt_having: %empty  */
#line 180 "src/parser/adgsql.y"
                                { (yyval.intval) = 0; }
#line 1897 "fuzz/generated/adgsql.tab.c"
    break;

  case 17: /* opt_having: HAVING expr  */
#line 181 "src/parser/adgsql.y"
                                { emit(result, "HAVING"); (yyval.intval) = 1; }
#line 1903 "fuzz/generated/adgsql.tab.c"
    break;

  case 18: /* opt_orderby: %empty  */
#line 183 "src/parser/adgsql.y"
                                        { (yyval.intval) = 0; }
#line 1909 "fuzz/generated/adgsql.tab.c"
    break;

  case 19: /* opt_orderby: ORDER BY orderby_list  */
#line 184 "src/parser/adgsql.y"
                                        { emit(result, "ORDERBYLIST %d", (yyvsp[0].intval)); (yyval.intval) = 1;}
#line 1915 "fuzz/generated/adgsql.tab.c"
    break;

  case 20: /* orderby_list: orderby_field  */
#line 187 "src/parser/adgsql.y"
                                                { (yyval.intval) = 1; }
#line 1921 "fuzz/generated/adgsql.tab.c"
    break;

  case 21: /* orderby_list: orderby_list ',' orderby_field  */
#line 188 "src/parser/adgsql.y"
                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 1927 "fuzz/generated/adgsql.tab.c"
    break;

  case 22: /* orderby_field: expr opt_asc_desc  */
#line 191 "src/parser/adgsql.y"
                                        { emit(result, "ORDERBYITEM %d", (yyvsp[0].intval));}
#line 1933 "fuzz/generated/adgsql.tab.c"
    break;

  case 23: /* opt_limit: %empty  */
#line 193 "src/parser/adgsql.y"
                                        { (yyval.intval) = 0; }
#line 1939 "fuzz/generated/adgsql.tab.c"
    break;

  case 24: /* opt_limit: LIMIT expr  */
#line 194 "src/parser/adgsql.y"
                                        { emit(result, "LIMIT 1"); (yyval.intval) = 1; }
#line 1945 "fuzz/generated/adgsql.tab.c"
    break;

  case 25: /* opt_limit: LIMIT expr ',' expr  */
#line 195 "src/parser/adgsql.y"
                                        { emit(result, "LIMIT 2"); (yyval.intval) = 1; }
#line 1951 "fuzz/generated/adgsql.tab.c"
    break;

  case 26: /* column_list: NAME  */
#line 198 "src/parser/adgsql.y"
                  { emit(result, "COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 1957 "fuzz/generated/adgsql.tab.c"
    break;

  case 27: /* column_list: column_list ',' NAME  */
#line 199 "src/parser/adgsql.y"
                          { emit(result, "COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 1963 "fuzz/generated/adgsql.tab.c"
    break;

  case 28: /* select_opts: %empty  */
#line 202 "src/parser/adgsql.y"
                                      { (yyval.intval) = 0; }
#line 1969 "fuzz/generated/adgsql.tab.c"
    break;

  case 29: /* select_opts: select_opts DISTINCT  */
#line 203 "src/parser/adgsql.y"
                                     { if((yyval.intval) & 02) yyerror(result, scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 1975 "fuzz/generated/adgsql.tab.c"
    break;

  case 30: /* select_expr_list: select_expr  */
#line 206 "src/parser/adgsql.y"
                              { (yyval.intval) = 1; }
#line 1981 "fuzz/generated/adgsql.tab.c"
    break;

  case 31: /* select_expr_list: select_expr_list ',' select_expr  */
#line 207 "src/parser/adgsql.y"
                                       {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 1987 "fuzz/generated/adgsql.tab.c"
    break;

  case 32: /* select_expr_list: '*'  */
#line 208 "src/parser/adgsql.y"
          { emit(result, "SELECTALL"); (yyval.intval) = 1; }
#line 1993 "fuzz/generated/adgsql.tab.c"
    break;

  case 34: /* table_references: table_reference  */
#line 213 "src/parser/adgsql.y"
                                     { (yyval.intval) = 1; }
#line 1999 "fuzz/generated/adgsql.tab.c"
    break;

  case 35: /* table_references: table_references ',' table_reference  */
#line 214 "src/parser/adgsql.y"
                                           { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2005 "fuzz/generated/adgsql.tab.c"
    break;

  case 38: /* $@1: %empty  */
#line 221 "src/parser/adgsql.y"
                   { emit(result, "TABLE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2011 "fuzz/generated/adgsql.tab.c"
    break;

  case 40: /* opt_as_alias: AS NAME  */
#line 224 "src/parser/adgsql.y"
                      { emit (result, "ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2017 "fuzz/generated/adgsql.tab.c"
    break;

  case 41: /* opt_as_alias: NAME  */
#line 225 "src/parser/adgsql.y"
                      { emit (result, "ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2023 "fuzz/generated/adgsql.tab.c"
    break;

  case 43: /* join_table: table_reference opt_inner JOIN table_factor join_condition  */
#line 231 "src/parser/adgsql.y"
                  { emit(result, "JOIN %d", 1); }
#line 2029 "fuzz/generated/adgsql.tab.c"
    break;

  case 44: /* join_table: table_reference left_or_right opt_outer JOIN table_factor join_condition  */
#line 233 "src/parser/adgsql.y"
                  { emit(result, "JOIN %d", (yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2035 "fuzz/generated/adgsql.tab.c"
    break;

  case 47: /* opt_outer: %empty  */
#line 238 "src/parser/adgsql.y"
                      { (yyval.intval) = 0; }
#line 2041 "fuzz/generated/adgsql.tab.c"
    break;

  case 48: /* opt_outer: OUTER  */
#line 239 "src/parser/adgsql.y"
           {(yyval.intval) = 6; }
#line 2047 "fuzz/generated/adgsql.tab.c"
    break;

  case 49: /* left_or_right: LEFT  */
#line 242 "src/parser/adgsql.y"
                    { (yyval.intval) = 2; }
#line 2053 "fuzz/generated/adgsql.tab.c"
    break;

  case 50: /* left_or_right: RIGHT  */
#line 243 "src/parser/adgsql.y"
            { (yyval.intval) = 4; }
#line 2059 "fuzz/generated/adgsql.tab.c"
    break;

  case 51: /* join_condition: ON expr  */
#line 247 "src/parser/adgsql.y"
            { emit(result, "ONEXPR"); }
#line 2065 "fuzz/generated/adgsql.tab.c"
    break;

  case 52: /* expr: NAME  */
#line 250 "src/parser/adgsql.y"
                    { emit(result, "NAME %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2071 "fuzz/generated/adgsql.tab.c"
    break;

  case 53: /* expr: NAME '.' NAME  */
#line 251 "src/parser/adgsql.y"
                   { emit(result, "FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 2077 "fuzz/generated/adgsql.tab.c"
    break;

  case 54: /* expr: STRING  */
#line 252 "src/parser/adgsql.y"
                   { emit(result, "STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2083 "fuzz/generated/adgsql.tab.c"
    break;

  case 55: /* expr: INTNUM  */
#line 253 "src/parser/adgsql.y"
                   { emit(result, "NUMBER %d", (yyvsp[0].intval)); }
#line 2089 "fuzz/generated/adgsql.tab.c"
    break;

  case 56: /* expr: APPROXNUM  */
#line 254 "src/parser/adgsql.y"
                   { emit(result, "FLOAT %g", (yyvsp[0].floatval)); }
#line 2095 "fuzz/generated/adgsql.tab.c"
    break;

  case 57: /* expr: BOOL  */
#line 255 "src/parser/adgsql.y"
                   { emit(result, "BOOL %d", (yyvsp[0].intval)); }
#line 2101 "fuzz/generated/adgsql.tab.c"
    break;

  case 58: /* expr: NULLX  */
#line 256 "src/parser/adgsql.y"
                   { emit(result, "NULL"); }
#line 2107 "fuzz/generated/adgsql.tab.c"
    break;

  case 59: /* expr: expr '+' expr  */
#line 259 "src/parser/adgsql.y"
                    { emit(result, "ADD"); }
#line 2113 "fuzz/generated/adgsql.tab.c"
    break;

  case 60: /* expr: expr '-' expr  */
#line 260 "src/parser/adgsql.y"
                   { emit(result, "SUB"); }
#line 2119 "fuzz/generated/adgsql.tab.c"
    break;

  case 61: /* expr: expr '*' expr  */
#line 261 "src/parser/adgsql.y"
                   { emit(result, "MUL"); }
#line 2125 "fuzz/generated/adgsql.tab.c"
    break;

  case 62: /* expr: expr '/' expr  */
#line 262 "src/parser/adgsql.y"
                   { emit(result, "DIV"); }
#line 2131 "fuzz/generated/adgsql.tab.c"
    break;

  case 63: /* expr: expr '%' expr  */
#line 263 "src/parser/adgsql.y"
                   { emit(result, "MOD"); }
#line 2137 "fuzz/generated/adgsql.tab.c"
    break;

  case 64: /* expr: expr MOD expr  */
#line 264 "src/parser/adgsql.y"
                   { emit(result, "MOD"); }
#line 2143 "fuzz/generated/adgsql.tab.c"
    break;

  case 65: /* expr: '-' expr  */
#line 265 "src/parser/adgsql.y"
                           { emit(result, "NEG"); }
#line 2149 "fuzz/generated/adgsql.tab.c"
    break;

  case 66: /* expr: expr ANDOP expr  */
#line 266 "src/parser/adgsql.y"
                     { emit(result, "AND"); }
#line 2155 "fuzz/generated/adgsql.tab.c"
    break;

  case 67: /* expr: expr OR expr  */
#line 267 "src/parser/adgsql.y"
                  { emit(result, "OR"); }
#line 2161 "fuzz/generated/adgsql.tab.c"
    break;

  case 68: /* expr: expr XOR expr  */
#line 268 "src/parser/adgsql.y"
                   { emit(result, "XOR"); }
#line 2167 "fuzz/generated/adgsql.tab.c"
    break;

  case 69: /* expr: expr COMPARISON expr  */
#line 269 "src/parser/adgsql.y"
                          { emit(result, "CMP %d", (yyvsp[-1].subtok)); }
#line 2173 "fuzz/generated/adgsql.tab.c"
    break;

  case 71: /* expr: expr IS NULLX  */
#line 273 "src/parser/adgsql.y"
                         { emit(result, "ISNULL"); }
#line 2179 "fuzz/generated/adgsql.tab.c"
    break;

  case 72: /* expr: expr IS NOT NULLX  */
#line 274 "src/parser/adgsql.y"
                         { emit(result, "ISNOTNULL"); }
#line 2185 "fuzz/generated/adgsql.tab.c"
    break;

  case 73: /* val_list: expr  */
#line 277 "src/parser/adgsql.y"
               { (yyval.intval) = 1; }
#line 2191 "fuzz/generated/adgsql.tab.c"
    break;

  case 74: /* val_list: expr ',' val_list  */
#line 278 "src/parser/adgsql.y"
                       { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2197 "fuzz/generated/adgsql.tab.c"
    break;

  case 75: /* expr: expr IN '(' val_list ')'  */
#line 281 "src/parser/adgsql.y"
                                     { emit(result, "ISIN %d", (yyvsp[-1].intval)); }
#line 2203 "fuzz/generated/adgsql.tab.c"
    break;

  case 76: /* expr: expr NOT IN '(' val_list ')'  */
#line 282 "src/parser/adgsql.y"
                                     { emit(result, "ISNOTIN %d", (yyvsp[-1].intval));}
#line 2209 "fuzz/generated/adgsql.tab.c"
    break;

  case 77: /* expr: FCOUNT '(' '*' ')'  */
#line 286 "src/parser/adgsql.y"
                         { emit(result, "COUNTALL"); }
#line 2215 "fuzz/generated/adgsql.tab.c"
    break;

  case 78: /* expr: FCOUNT '(' expr ')'  */
#line 287 "src/parser/adgsql.y"
                         { emit(result, "COUNTFIELD"); }
#line 2221 "fuzz/generated/adgsql.tab.c"
    break;

  case 79: /* expr: CASE expr case_list END  */
#line 289 "src/parser/adgsql.y"
                                        { emit(result, "CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 2227 "fuzz/generated/adgsql.tab.c"
    break;

  case 80: /* expr: CASE expr case_list ELSE expr END  */
#line 290 "src/parser/adgsql.y"
                                        { emit(result, "CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 2233 "fuzz/generated/adgsql.tab.c"
    break;

  case 81: /* expr: CASE case_list END  */
#line 291 "src/parser/adgsql.y"
                                        { emit(result, "CASE %d 0", (yyvsp[-1].intval)); }
#line 2239 "fuzz/generated/adgsql.tab.c"
    break;

  case 82: /* expr: CASE case_list ELSE expr END  */
#line 292 "src/parser/adgsql.y"
                                        { emit(result, "CASE %d 1", (yyvsp[-3].intval)); }
#line 2245 "fuzz/generated/adgsql.tab.c"
    break;

  case 83: /* case_list: WHEN expr THEN expr  */
#line 295 "src/parser/adgsql.y"
                                   { (yyval.intval) = 1; }
#line 2251 "fuzz/generated/adgsql.tab.c"
    break;

  case 84: /* case_list: case_list WHEN expr THEN expr  */
#line 296 "src/parser/adgsql.y"
                                         { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2257 "fuzz/generated/adgsql.tab.c"
    break;

  case 85: /* expr: expr LIKE expr  */
#line 299 "src/parser/adgsql.y"
                     { emit(result, "LIKE"); }
#line 2263 "fuzz/generated/adgsql.tab.c"
    break;

  case 86: /* expr: expr NOT LIKE expr  */
#line 300 "src/parser/adgsql.y"
                        { emit(result, "NOTLIKE");}
#line 2269 "fuzz/generated/adgsql.tab.c"
    break;

  case 87: /* expr: CURRENT_TIMESTAMP  */
#line 303 "src/parser/adgsql.y"
                        { emit(result, "NOW"); }
#line 2275 "fuzz/generated/adgsql.tab.c"
    break;

  case 88: /* expr: CURRENT_DATE  */
#line 304 "src/parser/adgsql.y"
                        { emit(result, "NOW"); }
#line 2281 "fuzz/generated/adgsql.tab.c"
    break;

  case 89: /* stmt: delete_stmt  */
#line 309 "src/parser/adgsql.y"
                  { emit(result, "STMT"); }
#line 2287 "fuzz/generated/adgsql.tab.c"
    break;

  case 90: /* delete_stmt: DELETE FROM NAME del_opt_where  */
#line 312 "src/parser/adgsql.y"
                                            { emit(result, "DELETEONE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 2293 "fuzz/generated/adgsql.tab.c"
    break;

  case 92: /* del_opt_where: WHERE delete_expr  */
#line 316 "src/parser/adgsql.y"
                                 { emit(result, "WHERE"); }
#line 2299 "fuzz/generated/adgsql.tab.c"
    break;

  case 93: /* delete_expr: NAME  */
#line 318 "src/parser/adgsql.y"
                           { emit(result, "NAME %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2305 "fuzz/generated/adgsql.tab.c"
    break;

  case 94: /* delete_expr: STRING  */
#line 319 "src/parser/adgsql.y"
                           { emit(result, "STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2311 "fuzz/generated/adgsql.tab.c"
    break;

  case 95: /* delete_expr: INTNUM  */
#line 320 "src/parser/adgsql.y"
                           { emit(result, "NUMBER %d", (yyvsp[0].intval)); }
#line 2317 "fuzz/generated/adgsql.tab.c"
    break;

  case 96: /* delete_expr: APPROXNUM  */
#line 321 "src/parser/adgsql.y"
                           { emit(result, "FLOAT %g", (yyvsp[0].floatval)); }
#line 2323 "fuzz/generated/adgsql.tab.c"
    break;

  case 97: /* delete_expr: BOOL  */
#line 322 "src/parser/adgsql.y"
                           { emit(result, "BOOL %d", (yyvsp[0].intval)); }
#line 2329 "fuzz/generated/adgsql.tab.c"
    break;

  case 98: /* delete_expr: NULLX  */
#line 323 "src/parser/adgsql.y"
                           { emit(result, "NULL"); }
#line 2335 "fuzz/generated/adgsql.tab.c"
    break;

  case 99: /* delete_expr: delete_expr ANDOP delete_expr  */
#line 326 "src/parser/adgsql.y"
                                                { emit(result, "AND"); }
#line 2341 "fuzz/generated/adgsql.tab.c"
    break;

  case 100: /* delete_expr: delete_expr OR delete_expr  */
#line 327 "src/parser/adgsql.y"
                                                { emit(result, "OR"); }
#line 2347 "fuzz/generated/adgsql.tab.c"
    break;

  case 101: /* delete_expr: delete_expr XOR delete_expr  */
#line 328 "src/parser/adgsql.y"
                                                { emit(result, "XOR"); }
#line 2353 "fuzz/generated/adgsql.tab.c"
    break;

  case 102: /* delete_expr: delete_expr COMPARISON delete_expr  */
#line 329 "src/parser/adgsql.y"
                                                { emit(result, "CMP %d", (yyvsp[-1].subtok)); }
#line 2359 "fuzz/generated/adgsql.tab.c"
    break;

  case 104: /* delete_expr: delete_expr IS NULLX  */
#line 333 "src/parser/adgsql.y"
                                       { emit(result, "ISNULL"); }
#line 2365 "fuzz/generated/adgsql.tab.c"
    break;

  case 105: /* delete_expr: delete_expr IS NOT NULLX  */
#line 334 "src/parser/adgsql.y"
                                       { emit(result, "ISNOTNULL"); }
#line 2371 "fuzz/generated/adgsql.tab.c"
    break;

  case 106: /* delete_expr: delete_expr IN '(' delete_val_list ')'  */
#line 337 "src/parser/adgsql.y"
                                                        { emit(result, "ISIN %d", (yyvsp[-1].intval)); }
#line 2377 "fuzz/generated/adgsql.tab.c"
    break;

  case 107: /* delete_expr: delete_expr NOT IN '(' delete_val_list ')'  */
#line 338 "src/parser/adgsql.y"
                                                        { emit(result, "ISNOTIN %d", (yyvsp[-1].intval)); }
#line 2383 "fuzz/generated/adgsql.tab.c"
    break;

  case 108: /* delete_val_list: delete_expr  */
#line 341 "src/parser/adgsql.y"
                                                        { (yyval.intval) = 1; }
#line 2389 "fuzz/generated/adgsql.tab.c"
    break;

  case 109: /* delete_val_list: delete_expr ',' delete_val_list  */
#line 342 "src/parser/adgsql.y"
                                                        { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2395 "fuzz/generated/adgsql.tab.c"
    break;

  case 110: /* stmt: insert_stmt  */
#line 347 "src/parser/adgsql.y"
                  { emit(result, "STMT"); }
#line 2401 "fuzz/generated/adgsql.tab.c"
    break;

  case 111: /* insert_stmt: INSERT opt_into NAME opt_col_names VALUES insert_vals_list  */
#line 352 "src/parser/adgsql.y"
                             { emit(result, "INSERTVALS %d %d %s", (yyvsp[-2].intval), (yyvsp[0].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2407 "fuzz/generated/adgsql.tab.c"
    break;

  case 114: /* opt_col_names: %empty  */
#line 358 "src/parser/adgsql.y"
                         { (yyval.intval) = 0; }
#line 2413 "fuzz/generated/adgsql.tab.c"
    break;

  case 115: /* opt_col_names: '(' column_list ')'  */
#line 359 "src/parser/adgsql.y"
                         { emit(result, "INSERTCOLS %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 2419 "fuzz/generated/adgsql.tab.c"
    break;

  case 116: /* insert_vals_list: '(' insert_vals ')'  */
#line 362 "src/parser/adgsql.y"
                                      { emit(result, "VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 2425 "fuzz/generated/adgsql.tab.c"
    break;

  case 117: /* insert_vals_list: insert_vals_list ',' '(' insert_vals ')'  */
#line 363 "src/parser/adgsql.y"
                                              { emit(result, "VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2431 "fuzz/generated/adgsql.tab.c"
    break;

  case 118: /* insert_vals: insert_expr  */
#line 367 "src/parser/adgsql.y"
                                 { (yyval.intval) = 1; }
#line 2437 "fuzz/generated/adgsql.tab.c"
    break;

  case 119: /* insert_vals: insert_vals ',' insert_expr  */
#line 368 "src/parser/adgsql.y"
                                 { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2443 "fuzz/generated/adgsql.tab.c"
    break;

  case 120: /* insert_stmt: INSERT opt_into NAME opt_col_names select_stmt  */
#line 372 "src/parser/adgsql.y"
                { emit(result, "INSERTSELECT %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2449 "fuzz/generated/adgsql.tab.c"
    break;

  case 121: /* insert_expr: STRING  */
#line 376 "src/parser/adgsql.y"
                   { emit(result, "STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2455 "fuzz/generated/adgsql.tab.c"
    break;

  case 122: /* insert_expr: INTNUM  */
#line 377 "src/parser/adgsql.y"
                   { emit(result, "NUMBER %d", (yyvsp[0].intval)); }
#line 2461 "fuzz/generated/adgsql.tab.c"
    break;

  case 123: /* insert_expr: APPROXNUM  */
#line 378 "src/parser/adgsql.y"
                   { emit(result, "FLOAT %g", (yyvsp[0].floatval)); }
#line 2467 "fuzz/generated/adgsql.tab.c"
    break;

  case 124: /* insert_expr: BOOL  */
#line 379 "src/parser/adgsql.y"
                   { emit(result, "BOOL %d", (yyvsp[0].intval)); }
#line 2473 "fuzz/generated/adgsql.tab.c"
    break;

  case 125: /* insert_expr: NULLX  */
#line 380 "src/parser/adgsql.y"
                   { emit(result, "NULL"); }
#line 2479 "fuzz/generated/adgsql.tab.c"
    break;

  case 126: /* insert_expr: insert_expr '+' insert_expr  */
#line 383 "src/parser/adgsql.y"
                                                { emit(result, "ADD"); }
#line 2485 "fuzz/generated/adgsql.tab.c"
    break;

  case 127: /* insert_expr: insert_expr '-' insert_expr  */
#line 384 "src/parser/adgsql.y"
                                                { emit(result, "SUB"); }
#line 2491 "fuzz/generated/adgsql.tab.c"
    break;

  case 128: /* insert_expr: insert_expr '*' insert_expr  */
#line 385 "src/parser/adgsql.y"
                                                { emit(result, "MUL"); }
#line 2497 "fuzz/generated/adgsql.tab.c"
    break;

  case 129: /* insert_expr: insert_expr '/' insert_expr  */
#line 386 "src/parser/adgsql.y"
                                                { emit(result, "DIV"); }
#line 2503 "fuzz/generated/adgsql.tab.c"
    break;

  case 130: /* insert_expr: insert_expr '%' insert_expr  */
#line 387 "src/parser/adgsql.y"
                                                { emit(result, "MOD"); }
#line 2509 "fuzz/generated/adgsql.tab.c"
    break;

  case 131: /* insert_expr: '-' insert_expr  */
#line 388 "src/parser/adgsql.y"
                                                { emit(result, "NEG"); }
#line 2515 "fuzz/generated/adgsql.tab.c"
    break;

  case 133: /* stmt: update_stmt  */
#line 393 "src/parser/adgsql.y"
                  { emit(result, "STMT"); }
#line 2521 "fuzz/generated/adgsql.tab.c"
    break;

  case 134: /* update_stmt: UPDATE NAME SET update_asgn_list update_opt_where  */
#line 399 "src/parser/adgsql.y"
    { emit(result, "UPDATE %s %d %d", (yyvsp[-3].strval), (yyvsp[-1].intval), (yyvsp[0].intval)); free((yyvsp[-3].strval));}
#line 2527 "fuzz/generated/adgsql.tab.c"
    break;

  case 135: /* update_asgn_list: NAME COMPARISON update_expr  */
#line 404 "src/parser/adgsql.y"
       { if ((yyvsp[-1].subtok) != 4) yyerror(result, scanner, "bad insert assignment to %s", (yyvsp[-2].strval));
	 emit(result, "ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2534 "fuzz/generated/adgsql.tab.c"
    break;

  case 136: /* update_asgn_list: update_asgn_list ',' NAME COMPARISON update_expr  */
#line 407 "src/parser/adgsql.y"
       { if ((yyvsp[-1].subtok) != 4) yyerror(result, scanner, "bad insert assignment to %s", (yyvsp[-2].strval));
	 emit(result, "ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2541 "fuzz/generated/adgsql.tab.c"
    break;

  case 137: /* update_opt_where: %empty  */
#line 411 "src/parser/adgsql.y"
                                { (yyval.intval) = 0; }
#line 2547 "fuzz/generated/adgsql.tab.c"
    break;

  case 138: /* update_opt_where: WHERE update_expr  */
#line 412 "src/parser/adgsql.y"
                                 { emit(result, "WHERE"); (yyval.intval) = 1;}
#line 2553 "fuzz/generated/adgsql.tab.c"
    break;

  case 139: /* update_expr: NAME  */
#line 414 "src/parser/adgsql.y"
                           { emit(result, "NAME %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2559 "fuzz/generated/adgsql.tab.c"
    break;

  case 140: /* update_expr: STRING  */
#line 415 "src/parser/adgsql.y"
                           { emit(result, "STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2565 "fuzz/generated/adgsql.tab.c"
    break;

  case 141: /* update_expr: INTNUM  */
#line 416 "src/parser/adgsql.y"
                           { emit(result, "NUMBER %d", (yyvsp[0].intval)); }
#line 2571 "fuzz/generated/adgsql.tab.c"
    break;

  case 142: /* update_expr: APPROXNUM  */
#line 417 "src/parser/adgsql.y"
                           { emit(result, "FLOAT %g", (yyvsp[0].floatval)); }
#line 2577 "fuzz/generated/adgsql.tab.c"
    break;

  case 143: /* update_expr: BOOL  */
#line 418 "src/parser/adgsql.y"
                           { emit(result, "BOOL %d", (yyvsp[0].intval)); }
#line 2583 "fuzz/generated/adgsql.tab.c"
    break;

  case 144: /* update_expr: NULLX  */
#line 419 "src/parser/adgsql.y"
                           { emit(result, "NULL"); }
#line 2589 "fuzz/generated/adgsql.tab.c"
    break;

  case 145: /* update_expr: update_expr ANDOP update_expr  */
#line 422 "src/parser/adgsql.y"
                                                { emit(result, "AND"); }
#line 2595 "fuzz/generated/adgsql.tab.c"
    break;

  case 146: /* update_expr: update_expr OR update_expr  */
#line 423 "src/parser/adgsql.y"
                                                { emit(result, "OR"); }
#line 2601 "fuzz/generated/adgsql.tab.c"
    break;

  case 147: /* update_expr: update_expr XOR update_expr  */
#line 424 "src/parser/adgsql.y"
                                                { emit(result, "XOR"); }
#line 2607 "fuzz/generated/adgsql.tab.c"
    break;

  case 148: /* update_expr: update_expr COMPARISON update_expr  */
#line 425 "src/parser/adgsql.y"
                                                { emit(result, "CMP %d", (yyvsp[-1].subtok)); }
#line 2613 "fuzz/generated/adgsql.tab.c"
    break;

  case 150: /* update_expr: update_expr IS NULLX  */
#line 429 "src/parser/adgsql.y"
                                       { emit(result, "ISNULL"); }
#line 2619 "fuzz/generated/adgsql.tab.c"
    break;

  case 151: /* update_expr: update_expr IS NOT NULLX  */
#line 430 "src/parser/adgsql.y"
                                       { emit(result, "ISNOTNULL"); }
#line 2625 "fuzz/generated/adgsql.tab.c"
    break;

  case 152: /* update_expr: update_expr IN '(' update_val_list ')'  */
#line 433 "src/parser/adgsql.y"
                                                        { emit(result, "ISIN %d", (yyvsp[-1].intval)); }
#line 2631 "fuzz/generated/adgsql.tab.c"
    break;

  case 153: /* update_expr: update_expr NOT IN '(' update_val_list ')'  */
#line 434 "src/parser/adgsql.y"
                                                        { emit(result, "ISNOTIN %d", (yyvsp[-1].intval)); }
#line 2637 "fuzz/generated/adgsql.tab.c"
    break;

  case 154: /* update_val_list: update_expr  */
#line 437 "src/parser/adgsql.y"
                                                        { (yyval.intval) = 1; }
#line 2643 "fuzz/generated/adgsql.tab.c"
    break;

  case 155: /* update_val_list: update_expr ',' update_val_list  */
#line 438 "src/parser/adgsql.y"
                                                        { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2649 "fuzz/generated/adgsql.tab.c"
    break;

  case 156: /* opt_if_not_exists: %empty  */
#line 443 "src/parser/adgsql.y"
                              { (yyval.intval) = 0; }
#line 2655 "fuzz/generated/adgsql.tab.c"
    break;

  case 157: /* opt_if_not_exists: IF EXISTS  */
#line 444 "src/parser/adgsql.y"
                         { if(!(yyvsp[0].subtok)) yyerror(result, scanner, "IF EXISTS doesn't exist");
                        (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 2662 "fuzz/generated/adgsql.tab.c"
    break;

  case 158: /* stmt: create_table_stmt  */
#line 448 "src/parser/adgsql.y"
                        { emit(result, "STMT"); }
#line 2668 "fuzz/generated/adgsql.tab.c"
    break;

  case 159: /* create_table_stmt: CREATE TABLE opt_if_not_exists NAME '(' create_col_list ')'  */
#line 452 "src/parser/adgsql.y"
                           { emit(result, "CREATE %d %d %s", (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2674 "fuzz/generated/adgsql.tab.c"
    break;

  case 160: /* create_col_list: create_definition  */
#line 456 "src/parser/adgsql.y"
                                   { (yyval.intval) = 1; }
#line 2680 "fuzz/generated/adgsql.tab.c"
    break;

  case 161: /* create_col_list: create_col_list ',' create_definition  */
#line 457 "src/parser/adgsql.y"
                                            { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2686 "fuzz/generated/adgsql.tab.c"
    break;

  case 162: /* $@2: %empty  */
#line 460 "src/parser/adgsql.y"
                   { emit(result, "STARTCOL"); }
#line 2692 "fuzz/generated/adgsql.tab.c"
    break;

  case 163: /* create_definition: $@2 NAME data_type column_atts  */
#line 461 "src/parser/adgsql.y"
                   { emit(result, "COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2698 "fuzz/generated/adgsql.tab.c"
    break;

  case 164: /* create_definition: PRIMARY KEY '(' column_list ')'  */
#line 463 "src/parser/adgsql.y"
                                         { emit(result, "PRIKEY %d", (yyvsp[-1].intval)); }
#line 2704 "fuzz/generated/adgsql.tab.c"
    break;

  case 165: /* create_definition: INDEX '(' column_list ')'  */
#line 464 "src/parser/adgsql.y"
                                         { emit(result, "KEY %d", (yyvsp[-1].intval)); }
#line 2710 "fuzz/generated/adgsql.tab.c"
    break;

  case 166: /* column_atts: %empty  */
#line 467 "src/parser/adgsql.y"
                       { (yyval.intval) = 0; }
#line 2716 "fuzz/generated/adgsql.tab.c"
    break;

  case 167: /* column_atts: column_atts NOT NULLX  */
#line 468 "src/parser/adgsql.y"
                                        { emit(result, "ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2722 "fuzz/generated/adgsql.tab.c"
    break;

  case 169: /* column_atts: column_atts AUTO_INCREMENT  */
#line 470 "src/parser/adgsql.y"
                                        { emit(result, "ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 2728 "fuzz/generated/adgsql.tab.c"
    break;

  case 170: /* column_atts: column_atts UNIQUE  */
#line 471 "src/parser/adgsql.y"
                                        { emit(result, "ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 2734 "fuzz/generated/adgsql.tab.c"
    break;

  case 171: /* column_atts: column_atts PRIMARY KEY  */
#line 472 "src/parser/adgsql.y"
                                        { emit(result, "ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2740 "fuzz/generated/adgsql.tab.c"
    break;

  case 172: /* data_type: INT  */
#line 476 "src/parser/adgsql.y"
         { (yyval.intval) = 40000; }
#line 2746 "fuzz/generated/adgsql.tab.c"
    break;

  case 173: /* data_type: INTEGER  */
#line 477 "src/parser/adgsql.y"
             { (yyval.intval) = 50000; }
#line 2752 "fuzz/generated/adgsql.tab.c"
    break;

  case 174: /* data_type: TINYINT  */
#line 478 "src/parser/adgsql.y"
             { (yyval.intval) = 60000; }
#line 2758 "fuzz/generated/adgsql.tab.c"
    break;

  case 175: /* data_type: DOUBLE  */
#line 479 "src/parser/adgsql.y"
            { (yyval.intval) = 80000; }
#line 2764 "fuzz/generated/adgsql.tab.c"
    break;

  case 176: /* data_type: DATE  */
#line 480 "src/parser/adgsql.y"
          { (yyval.intval) = 100000; }
#line 2770 "fuzz/generated/adgsql.tab.c"
    break;

  case 177: /* data_type: DATETIME  */
#line 481 "src/parser/adgsql.y"
              { (yyval.intval) = 110000; }
#line 2776 "fuzz/generated/adgsql.tab.c"
    break;

  case 178: /* data_type: VARCHAR '(' INTNUM ')'  */
#line 482 "src/parser/adgsql.y"
                            { (yyval.intval) = 130000 + (yyvsp[-1].intval); }
#line 2782 "fuzz/generated/adgsql.tab.c"
    break;


#line 2786 "fuzz/generated/adgsql.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (result, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
                      yytoken, &yylval, result, scanner);
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 486 "src/parser/adgsql.y"


void yyerror(struct queue *q, void* scanner, const char *s, ...)
{
	(void)scanner;
	char buf[256];
	va_list ap;
	
	memzero(buf, sizeof(buf));
	va_start(ap, s);
	
	/* if the error happened at the lexical phase then 
	we print it to stderr as there is no queue ref yet */
	if(!q){
		vfprintf(stderr, s, ap);  
		fprintf(stderr, "\n");
	}else {
		sprintf(buf, s, ap);
	
		/* although unlikely, if we fail to push content to the queue
		   so other program can read the error message, then we fail 
		   over to the stderr */
		if(!queue_offer(q, buf, strlen(buf) + 1)){
			vfprintf(stderr, s, ap);  
			fprintf(stderr, "\n");
		}
	}
	
	va_end(ap);
}

bool emit(struct queue *q, char *s, ...)
{
	char buf[256];
	va_list ap;
	
	memzero(buf, sizeof(buf));
	va_start(ap, s);
	vsnprintf(buf,sizeof(buf), s, ap);
	va_end(ap);

	return queue_offer(q, buf, strlen(buf) + 1);
}
