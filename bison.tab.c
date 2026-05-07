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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bison.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "ast.h"
    Node* root;
    int yylex(void);
    void yyerror(const char *s);

#line 81 "bison.tab.c"

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

#include "bison.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_AND = 3,                  /* TOKEN_AND  */
  YYSYMBOL_TOKEN_ARRAY = 4,                /* TOKEN_ARRAY  */
  YYSYMBOL_TOKEN_BEGIN = 5,                /* TOKEN_BEGIN  */
  YYSYMBOL_TOKEN_BY = 6,                   /* TOKEN_BY  */
  YYSYMBOL_TOKEN_CONST = 7,                /* TOKEN_CONST  */
  YYSYMBOL_TOKEN_DEFINITION = 8,           /* TOKEN_DEFINITION  */
  YYSYMBOL_TOKEN_DIV = 9,                  /* TOKEN_DIV  */
  YYSYMBOL_TOKEN_DO = 10,                  /* TOKEN_DO  */
  YYSYMBOL_TOKEN_ELSE = 11,                /* TOKEN_ELSE  */
  YYSYMBOL_TOKEN_ELSIF = 12,               /* TOKEN_ELSIF  */
  YYSYMBOL_TOKEN_END = 13,                 /* TOKEN_END  */
  YYSYMBOL_TOKEN_EXIT = 14,                /* TOKEN_EXIT  */
  YYSYMBOL_TOKEN_FOR = 15,                 /* TOKEN_FOR  */
  YYSYMBOL_TOKEN_IF = 16,                  /* TOKEN_IF  */
  YYSYMBOL_TOKEN_IMPLEMENTATION = 17,      /* TOKEN_IMPLEMENTATION  */
  YYSYMBOL_TOKEN_MOD = 18,                 /* TOKEN_MOD  */
  YYSYMBOL_TOKEN_MODULE = 19,              /* TOKEN_MODULE  */
  YYSYMBOL_TOKEN_NOT = 20,                 /* TOKEN_NOT  */
  YYSYMBOL_TOKEN_OF = 21,                  /* TOKEN_OF  */
  YYSYMBOL_TOKEN_OR = 22,                  /* TOKEN_OR  */
  YYSYMBOL_TOKEN_PROCEDURE = 23,           /* TOKEN_PROCEDURE  */
  YYSYMBOL_TOKEN_READ = 24,                /* TOKEN_READ  */
  YYSYMBOL_TOKEN_REPEAT = 25,              /* TOKEN_REPEAT  */
  YYSYMBOL_TOKEN_RETURN = 26,              /* TOKEN_RETURN  */
  YYSYMBOL_TOKEN_THEN = 27,                /* TOKEN_THEN  */
  YYSYMBOL_TOKEN_TO = 28,                  /* TOKEN_TO  */
  YYSYMBOL_TOKEN_TYPE = 29,                /* TOKEN_TYPE  */
  YYSYMBOL_TOKEN_UNTIL = 30,               /* TOKEN_UNTIL  */
  YYSYMBOL_TOKEN_VAR = 31,                 /* TOKEN_VAR  */
  YYSYMBOL_TOKEN_WHILE = 32,               /* TOKEN_WHILE  */
  YYSYMBOL_TOKEN_WRITE = 33,               /* TOKEN_WRITE  */
  YYSYMBOL_TOKEN_DOUBLEBACK = 34,          /* TOKEN_DOUBLEBACK  */
  YYSYMBOL_TOKEN_LREQ = 35,                /* TOKEN_LREQ  */
  YYSYMBOL_TOKEN_LEQ = 36,                 /* TOKEN_LEQ  */
  YYSYMBOL_TOKEN_REQ = 37,                 /* TOKEN_REQ  */
  YYSYMBOL_TOKEN_DOUBLEDOT = 38,           /* TOKEN_DOUBLEDOT  */
  YYSYMBOL_TOKEN_ASSIGN = 39,              /* TOKEN_ASSIGN  */
  YYSYMBOL_TOKEN_WRITELN = 40,             /* TOKEN_WRITELN  */
  YYSYMBOL_TOKEN_IDENT = 41,               /* TOKEN_IDENT  */
  YYSYMBOL_TOKEN_INTEGER = 42,             /* TOKEN_INTEGER  */
  YYSYMBOL_TOKEN_STRING = 43,              /* TOKEN_STRING  */
  YYSYMBOL_44_ = 44,                       /* '='  */
  YYSYMBOL_45_ = 45,                       /* '>'  */
  YYSYMBOL_46_ = 46,                       /* '<'  */
  YYSYMBOL_47_ = 47,                       /* '+'  */
  YYSYMBOL_48_ = 48,                       /* '-'  */
  YYSYMBOL_49_ = 49,                       /* '*'  */
  YYSYMBOL_50_ = 50,                       /* '/'  */
  YYSYMBOL_51_ = 51,                       /* '&'  */
  YYSYMBOL_52_ = 52,                       /* '('  */
  YYSYMBOL_53_ = 53,                       /* ')'  */
  YYSYMBOL_54_ = 54,                       /* '~'  */
  YYSYMBOL_55_ = 55,                       /* ','  */
  YYSYMBOL_56_ = 56,                       /* '['  */
  YYSYMBOL_57_ = 57,                       /* ']'  */
  YYSYMBOL_58_ = 58,                       /* ':'  */
  YYSYMBOL_59_ = 59,                       /* ';'  */
  YYSYMBOL_60_ = 60,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 61,                  /* $accept  */
  YYSYMBOL_cD = 62,                        /* cD  */
  YYSYMBOL_cE = 63,                        /* cE  */
  YYSYMBOL_R = 64,                         /* R  */
  YYSYMBOL_scE = 65,                       /* scE  */
  YYSYMBOL_aO = 66,                        /* aO  */
  YYSYMBOL_cT = 67,                        /* cT  */
  YYSYMBOL_mO = 68,                        /* mO  */
  YYSYMBOL_cF = 69,                        /* cF  */
  YYSYMBOL_tD = 70,                        /* tD  */
  YYSYMBOL_T = 71,                         /* T  */
  YYSYMBOL_sT = 72,                        /* sT  */
  YYSYMBOL_eN = 73,                        /* eN  */
  YYSYMBOL_iL = 74,                        /* iL  */
  YYSYMBOL_sbT = 75,                       /* sbT  */
  YYSYMBOL_aD = 76,                        /* aD  */
  YYSYMBOL_aT = 77,                        /* aT  */
  YYSYMBOL_pT = 78,                        /* pT  */
  YYSYMBOL_ftL = 79,                       /* ftL  */
  YYSYMBOL_ofL = 80,                       /* ofL  */
  YYSYMBOL_fL = 81,                        /* fL  */
  YYSYMBOL_foT = 82,                       /* foT  */
  YYSYMBOL_oV = 83,                        /* oV  */
  YYSYMBOL_orT = 84,                       /* orT  */
  YYSYMBOL_vD = 85,                        /* vD  */
  YYSYMBOL_fT = 86,                        /* fT  */
  YYSYMBOL_D = 87,                         /* D  */
  YYSYMBOL_dT = 88,                        /* dT  */
  YYSYMBOL_eL = 89,                        /* eL  */
  YYSYMBOL_eL_tail = 90,                   /* eL_tail  */
  YYSYMBOL_E = 91,                         /* E  */
  YYSYMBOL_opt_R_sE = 92,                  /* opt_R_sE  */
  YYSYMBOL_sE = 93,                        /* sE  */
  YYSYMBOL_opt_sign = 94,                  /* opt_sign  */
  YYSYMBOL_sE_tail = 95,                   /* sE_tail  */
  YYSYMBOL_tM = 96,                        /* tM  */
  YYSYMBOL_tM_tail = 97,                   /* tM_tail  */
  YYSYMBOL_F = 98,                         /* F  */
  YYSYMBOL_dpC = 99,                       /* dpC  */
  YYSYMBOL_opt_dT = 100,                   /* opt_dT  */
  YYSYMBOL_opt_aP = 101,                   /* opt_aP  */
  YYSYMBOL_aP = 102,                       /* aP  */
  YYSYMBOL_opt_eL = 103,                   /* opt_eL  */
  YYSYMBOL_S = 104,                        /* S  */
  YYSYMBOL_opt_S = 105,                    /* opt_S  */
  YYSYMBOL_opt_E = 106,                    /* opt_E  */
  YYSYMBOL_ioS = 107,                      /* ioS  */
  YYSYMBOL_io_read_tail = 108,             /* io_read_tail  */
  YYSYMBOL_io_write_tail = 109,            /* io_write_tail  */
  YYSYMBOL_apC = 110,                      /* apC  */
  YYSYMBOL_opt_apC = 111,                  /* opt_apC  */
  YYSYMBOL_sS = 112,                       /* sS  */
  YYSYMBOL_sS_tail = 113,                  /* sS_tail  */
  YYSYMBOL_ifS = 114,                      /* ifS  */
  YYSYMBOL_ifS_elsif = 115,                /* ifS_elsif  */
  YYSYMBOL_ifS_else = 116,                 /* ifS_else  */
  YYSYMBOL_wS = 117,                       /* wS  */
  YYSYMBOL_rS = 118,                       /* rS  */
  YYSYMBOL_fS = 119,                       /* fS  */
  YYSYMBOL_opt_by = 120,                   /* opt_by  */
  YYSYMBOL_pD = 121,                       /* pD  */
  YYSYMBOL_pH = 122,                       /* pH  */
  YYSYMBOL_opt_fp = 123,                   /* opt_fp  */
  YYSYMBOL_B = 124,                        /* B  */
  YYSYMBOL_opt_begin_block = 125,          /* opt_begin_block  */
  YYSYMBOL_dC_list = 126,                  /* dC_list  */
  YYSYMBOL_dC = 127,                       /* dC  */
  YYSYMBOL_cD_list = 128,                  /* cD_list  */
  YYSYMBOL_tD_list = 129,                  /* tD_list  */
  YYSYMBOL_vD_list = 130,                  /* vD_list  */
  YYSYMBOL_fP = 131,                       /* fP  */
  YYSYMBOL_opt_return_type = 132,          /* opt_return_type  */
  YYSYMBOL_opt_fpS_list = 133,             /* opt_fpS_list  */
  YYSYMBOL_fpS_tail = 134,                 /* fpS_tail  */
  YYSYMBOL_fpS = 135,                      /* fpS  */
  YYSYMBOL_opt_var = 136,                  /* opt_var  */
  YYSYMBOL_mD = 137,                       /* mD  */
  YYSYMBOL_P = 138,                        /* P  */
  YYSYMBOL_dM = 139,                       /* dM  */
  YYSYMBOL_dF_list = 140,                  /* dF_list  */
  YYSYMBOL_dF = 141,                       /* dF  */
  YYSYMBOL_cD_listY = 142,                 /* cD_listY  */
  YYSYMBOL_type_list = 143,                /* type_list  */
  YYSYMBOL_type_entry = 144,               /* type_entry  */
  YYSYMBOL_opt_type_def = 145,             /* opt_type_def  */
  YYSYMBOL_vD_listY = 146,                 /* vD_listY  */
  YYSYMBOL_pM = 147,                       /* pM  */
  YYSYMBOL_cU = 148,                       /* cU  */
  YYSYMBOL_opt_IMPL = 149,                 /* opt_IMPL  */
  YYSYMBOL_opt_P = 150                     /* opt_P  */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   270

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  90
/* YYNRULES -- Number of rules.  */
#define YYNRULES  181
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  307

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


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
       2,     2,     2,     2,     2,     2,     2,     2,    51,     2,
      52,    53,    49,    47,    55,    48,    60,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    59,
      46,    44,    45,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    54,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    69,    69,    73,    74,    78,    79,    80,    81,    82,
      83,    87,    88,    89,    90,    94,    95,    96,   100,   101,
     105,   106,   107,   108,   109,   110,   114,   115,   116,   117,
     118,   122,   126,   127,   128,   132,   133,   134,   138,   142,
     143,   147,   151,   155,   156,   160,   161,   165,   169,   170,
     174,   178,   179,   183,   184,   188,   189,   194,   198,   202,
     203,   207,   208,   212,   216,   217,   221,   225,   226,   230,
     234,   235,   236,   240,   241,   245,   249,   250,   254,   255,
     256,   257,   258,   259,   263,   267,   268,   272,   273,   277,
     281,   282,   286,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   302,   303,   307,   308,   312,   313,   317,   318,
     322,   326,   327,   328,   332,   336,   337,   341,   345,   346,
     350,   351,   355,   359,   363,   367,   368,   372,   376,   380,
     381,   385,   389,   390,   394,   395,   399,   400,   401,   402,
     403,   407,   408,   412,   413,   417,   418,   422,   426,   427,
     431,   432,   436,   437,   441,   445,   446,   450,   454,   458,
     462,   463,   467,   468,   469,   470,   474,   475,   479,   480,
     484,   488,   489,   493,   494,   498,   502,   503,   507,   508,
     512,   513
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_AND",
  "TOKEN_ARRAY", "TOKEN_BEGIN", "TOKEN_BY", "TOKEN_CONST",
  "TOKEN_DEFINITION", "TOKEN_DIV", "TOKEN_DO", "TOKEN_ELSE", "TOKEN_ELSIF",
  "TOKEN_END", "TOKEN_EXIT", "TOKEN_FOR", "TOKEN_IF",
  "TOKEN_IMPLEMENTATION", "TOKEN_MOD", "TOKEN_MODULE", "TOKEN_NOT",
  "TOKEN_OF", "TOKEN_OR", "TOKEN_PROCEDURE", "TOKEN_READ", "TOKEN_REPEAT",
  "TOKEN_RETURN", "TOKEN_THEN", "TOKEN_TO", "TOKEN_TYPE", "TOKEN_UNTIL",
  "TOKEN_VAR", "TOKEN_WHILE", "TOKEN_WRITE", "TOKEN_DOUBLEBACK",
  "TOKEN_LREQ", "TOKEN_LEQ", "TOKEN_REQ", "TOKEN_DOUBLEDOT",
  "TOKEN_ASSIGN", "TOKEN_WRITELN", "TOKEN_IDENT", "TOKEN_INTEGER",
  "TOKEN_STRING", "'='", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'&'",
  "'('", "')'", "'~'", "','", "'['", "']'", "':'", "';'", "'.'", "$accept",
  "cD", "cE", "R", "scE", "aO", "cT", "mO", "cF", "tD", "T", "sT", "eN",
  "iL", "sbT", "aD", "aT", "pT", "ftL", "ofL", "fL", "foT", "oV", "orT",
  "vD", "fT", "D", "dT", "eL", "eL_tail", "E", "opt_R_sE", "sE",
  "opt_sign", "sE_tail", "tM", "tM_tail", "F", "dpC", "opt_dT", "opt_aP",
  "aP", "opt_eL", "S", "opt_S", "opt_E", "ioS", "io_read_tail",
  "io_write_tail", "apC", "opt_apC", "sS", "sS_tail", "ifS", "ifS_elsif",
  "ifS_else", "wS", "rS", "fS", "opt_by", "pD", "pH", "opt_fp", "B",
  "opt_begin_block", "dC_list", "dC", "cD_list", "tD_list", "vD_list",
  "fP", "opt_return_type", "opt_fpS_list", "fpS_tail", "fpS", "opt_var",
  "mD", "P", "dM", "dF_list", "dF", "cD_listY", "type_list", "type_entry",
  "opt_type_def", "vD_listY", "pM", "cU", "opt_IMPL", "opt_P", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-238)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-156)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      23,    24,  -238,  -238,    25,    34,    -3,  -238,    33,  -238,
      12,    29,  -238,    56,  -238,    50,    19,    59,  -238,  -238,
      59,    59,    56,    59,    31,   119,    18,  -238,  -238,  -238,
      71,    73,  -238,  -238,    58,  -238,  -238,    18,    18,    62,
    -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
    -238,    56,    59,  -238,  -238,  -238,  -238,  -238,  -238,    59,
      78,   155,    82,    67,    76,    88,    95,  -238,  -238,    17,
      18,  -238,    84,   106,  -238,   101,  -238,  -238,    86,    90,
     135,  -238,    91,   107,    93,  -238,     3,  -238,  -238,   109,
    -238,  -238,     2,    98,  -238,  -238,   120,    30,   116,   106,
       7,    30,   117,   114,   -17,   112,  -238,  -238,  -238,  -238,
    -238,  -238,  -238,  -238,    82,    29,   131,    95,  -238,  -238,
    -238,  -238,    56,  -238,  -238,   122,   118,    95,     6,   121,
     132,     6,  -238,   137,  -238,  -238,   154,    89,    64,   141,
     153,  -238,  -238,   175,    30,    30,  -238,    30,    39,  -238,
    -238,   106,  -238,   128,   129,   145,   133,   134,   149,  -238,
     136,   160,  -238,    15,   -11,   143,  -238,    95,    56,  -238,
    -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,    30,   106,
      30,  -238,    64,   114,  -238,  -238,    30,    64,    17,    18,
    -238,   142,    30,   106,   144,   146,   150,  -238,  -238,   147,
     112,  -238,  -238,     6,  -238,  -238,  -238,   157,  -238,   118,
     197,   151,    20,  -238,    41,   166,   179,   196,  -238,  -238,
    -238,   158,   156,  -238,    64,  -238,    64,  -238,   141,   159,
    -238,   198,    30,   161,   114,    30,  -238,  -238,  -238,   172,
    -238,  -238,  -238,   194,  -238,   -11,   195,  -238,   164,  -238,
     197,  -238,    56,    30,    30,   207,  -238,  -238,  -238,    17,
      18,   142,  -238,  -238,   144,  -238,  -238,   150,  -238,   178,
     151,     6,   162,   167,   168,   215,   199,   106,   210,  -238,
    -238,  -238,  -238,  -238,  -238,  -238,  -238,   183,  -238,   200,
    -238,  -238,    56,   217,   106,  -238,  -238,  -238,   197,  -238,
     106,   196,   167,   216,  -238,  -238,  -238
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     178,     0,   179,   176,     0,     0,     0,     1,     0,   177,
       0,   180,   160,     0,   181,     0,     0,     0,    26,    27,
       0,     0,     0,     0,     0,     3,    11,    18,   134,   166,
       0,     0,   168,   173,     0,   161,    29,    12,    13,     0,
      30,   158,    17,     6,     7,     8,     5,     9,    10,    15,
      16,     0,     0,    24,    22,    23,    20,    21,    25,     0,
       0,   132,   162,     0,   129,   163,   164,   165,    28,     4,
      14,    19,     0,    93,   141,     0,   143,   145,     0,     0,
       0,   135,     0,     0,     0,   159,   150,   128,   130,   171,
     169,    39,     0,     0,   175,   100,     0,    72,     0,    93,
      72,    72,     0,    59,   113,   115,    92,    96,    94,   133,
      95,    97,    98,    99,   136,   180,   137,   138,   139,   134,
     131,   140,     0,   167,   156,     0,   152,     0,     0,     0,
       0,     0,   174,     0,    70,    71,     0,    67,     0,     0,
       0,   103,   101,     0,    72,    72,    60,    72,    72,   112,
     110,    93,   114,     0,     0,     0,     0,     0,     0,     2,
     148,   155,   151,     0,     0,    45,    35,     0,     0,   172,
      32,    36,    37,    33,    34,   170,    40,    57,    72,    93,
      72,    66,     0,    85,    78,    79,    72,     0,    73,    76,
      80,   106,    72,    93,   108,     0,    64,   111,    91,     0,
     115,   142,   134,     0,   144,   146,   127,     0,   147,   152,
       0,    43,    48,    46,     0,     0,     0,   118,    68,    82,
      86,    87,     0,    83,     0,    69,     0,    75,     0,     0,
     123,     0,    72,     0,    62,    72,    63,    89,   116,     0,
      31,   149,   153,     0,   154,     0,     0,    53,     0,    49,
       0,    38,     0,    72,    72,   120,    84,    88,    81,    73,
      76,   106,   104,   122,   108,   105,    61,    64,   157,     0,
      43,     0,    55,    51,     0,   125,     0,    93,     0,    74,
      77,   107,   109,    65,    58,    44,    42,     0,    47,    54,
      50,    41,     0,     0,    93,   121,   117,    56,     0,   126,
      93,   118,    51,     0,   119,    52,   124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -238,   123,   -22,    96,   177,  -179,    -6,  -178,     0,  -238,
    -128,  -156,  -238,  -111,  -238,  -238,   -38,  -238,  -238,  -238,
    -238,   -68,   -54,  -238,   124,  -237,  -135,  -171,    92,   -31,
     -95,  -238,    63,  -238,   -21,    21,   -18,  -154,  -238,  -238,
    -238,    26,  -238,    97,  -238,  -238,  -238,   -15,   -25,  -238,
    -238,   -98,    44,  -238,   -52,  -238,  -238,  -238,  -238,  -238,
    -238,   189,  -238,  -112,  -238,  -238,  -238,  -238,  -238,  -238,
    -238,  -238,  -238,    42,    94,  -238,  -238,  -238,  -238,  -238,
    -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,   138
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    84,    24,    51,    25,    52,    26,    59,    27,   156,
     169,   170,   171,    92,   172,   173,   246,   174,   213,   248,
     249,   290,   250,   288,    93,   244,   104,   146,   195,   236,
     196,   181,   137,   138,   225,   188,   227,   189,   190,   221,
     256,   149,   199,   105,   106,   142,   107,   229,   233,   108,
     150,   109,   152,   110,   255,   278,   111,   112,   113,   293,
      78,    34,    87,    60,    80,    61,    81,   114,   116,   117,
      88,   208,   125,   162,   126,   127,    82,    14,     3,    16,
      35,    62,    65,    90,   129,    66,     9,     4,     5,    15
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,   140,   136,   177,   191,   141,   143,   158,   211,   224,
     164,   226,   220,   273,    37,    38,   163,    36,  -102,  -102,
    -102,    53,   147,    40,   -54,     7,    29,    54,   219,   165,
     166,     1,    30,   223,   124,   148,    55,  -102,    10,    42,
       2,   167,    31,     6,  -155,   168,    70,   166,    32,   194,
      33,   247,   197,     8,   134,   135,   214,   130,   167,    71,
     131,   302,   168,   266,    49,    50,  -102,    56,    57,    58,
     130,    12,   260,   210,    11,   240,    17,   134,   135,    17,
     224,   217,   226,   216,   182,    13,   134,   135,    41,   270,
     239,   222,   -90,   261,   251,   231,   130,   230,    18,    19,
     159,    18,    19,    20,    21,   183,   184,   185,    22,    28,
      23,    22,    63,    23,    64,    68,   186,    67,   187,    72,
      95,    96,    97,    83,    43,    44,    45,    85,    86,    89,
      98,    99,   100,    46,    47,    48,    91,   264,   101,   102,
     267,    42,   115,   286,    94,   118,   215,   103,   120,   119,
     121,   122,   123,   128,    43,    44,    45,   132,   275,   276,
      73,   133,    74,    46,    47,    48,    49,    50,   139,   144,
     145,   151,   155,   176,    75,   160,   178,   161,    31,   295,
     175,   179,   103,   192,    76,   193,    77,   201,   202,   203,
     206,   124,   204,   205,   207,   212,   301,   228,   241,   232,
     237,   243,   303,   234,   252,   235,   245,   253,   254,   258,
     148,   263,   262,   268,   265,   269,   271,   272,   277,   284,
     287,   292,   289,   296,   297,   291,   294,   300,    69,   306,
     274,   247,   285,   180,   305,   298,   283,   153,   279,   282,
     198,   157,   280,   218,   238,   259,   281,   257,   200,   304,
      79,   242,     0,   154,     0,   209,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     299
};

static const yytype_int16 yycheck[] =
{
      22,    99,    97,   131,   139,   100,   101,   119,   164,   188,
       4,   189,   183,   250,    20,    21,   127,    17,    11,    12,
      13,     3,    39,    23,     4,     0,     7,     9,   182,    23,
      41,     8,    13,   187,    31,    52,    18,    30,    41,    22,
      17,    52,    23,    19,    41,    56,    52,    41,    29,   144,
      31,    31,   147,    19,    47,    48,   167,    55,    52,    59,
      58,   298,    56,   234,    47,    48,    59,    49,    50,    51,
      55,    59,   226,    58,    41,   203,    20,    47,    48,    20,
     259,   179,   260,   178,    20,    56,    47,    48,    57,   245,
     202,   186,    53,   228,    53,   193,    55,   192,    42,    43,
     122,    42,    43,    47,    48,    41,    42,    43,    52,    59,
      54,    52,    41,    54,    41,    53,    52,    59,    54,    41,
      14,    15,    16,    41,    35,    36,    37,    60,    52,    41,
      24,    25,    26,    44,    45,    46,    41,   232,    32,    33,
     235,    22,    41,   271,    60,    59,   168,    41,    13,    59,
      59,    44,    59,    44,    35,    36,    37,    59,   253,   254,
       5,    41,     7,    44,    45,    46,    47,    48,    52,    52,
      56,    59,    41,    41,    19,    53,    39,    59,    23,   277,
      59,    27,    41,    30,    29,    10,    31,    59,    59,    44,
      41,    31,    59,    59,    58,    52,   294,    55,    41,    55,
      53,     4,   300,    57,    38,    55,    55,    28,    12,    53,
      52,    13,    53,    41,    53,    21,    21,    53,    11,    41,
      58,     6,    55,    13,    41,    57,    27,    10,    51,    13,
     252,    31,   270,   137,   302,   289,   267,   114,   259,   264,
     148,   117,   260,   180,   200,   224,   261,   221,   151,   301,
      61,   209,    -1,   115,    -1,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     292
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    17,   139,   148,   149,    19,     0,    19,   147,
      41,    41,    59,    56,   138,   150,   140,    20,    42,    43,
      47,    48,    52,    54,    63,    65,    67,    69,    59,     7,
      13,    23,    29,    31,   122,   141,    69,    67,    67,    63,
      69,    57,    22,    35,    36,    37,    44,    45,    46,    47,
      48,    64,    66,     3,     9,    18,    49,    50,    51,    68,
     124,   126,   142,    41,    41,   143,   146,    59,    53,    65,
      67,    69,    41,     5,     7,    19,    29,    31,   121,   122,
     125,   127,   137,    41,    62,    60,    52,   123,   131,    41,
     144,    41,    74,    85,    60,    14,    15,    16,    24,    25,
      26,    32,    33,    41,    87,   104,   105,   107,   110,   112,
     114,   117,   118,   119,   128,    41,   129,   130,    59,    59,
      13,    59,    44,    59,    31,   133,   135,   136,    44,   145,
      55,    58,    59,    41,    47,    48,    91,    93,    94,    52,
     112,    91,   106,    91,    52,    56,    88,    39,    52,   102,
     111,    59,   113,    62,   150,    41,    70,    85,   124,    63,
      53,    59,   134,    74,     4,    23,    41,    52,    56,    71,
      72,    73,    75,    76,    78,    59,    41,    71,    39,    27,
      64,    92,    20,    41,    42,    43,    52,    54,    96,    98,
      99,    87,    30,    10,    91,    89,    91,    91,    89,   103,
     104,    59,    59,    44,    59,    59,    41,    58,   132,   135,
      58,    72,    52,    79,    74,    63,    91,   112,    93,    98,
      88,   100,    91,    98,    66,    95,    68,    97,    55,   108,
      91,   112,    55,   109,    57,    55,    90,    53,   113,   124,
      71,    41,   134,     4,    86,    55,    77,    31,    80,    81,
      83,    53,    38,    28,    12,   115,   101,   102,    53,    96,
      98,    87,    53,    13,    91,    53,    88,    91,    41,    21,
      72,    21,    53,    86,    63,    91,    91,    11,   116,    95,
      97,   108,   109,    90,    41,    77,    71,    58,    84,    55,
      82,    57,     6,   120,    27,   112,    13,    41,    83,    63,
      10,   112,    86,   112,   115,    82,    13
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    64,    64,    64,
      64,    65,    65,    65,    65,    66,    66,    66,    67,    67,
      68,    68,    68,    68,    68,    68,    69,    69,    69,    69,
      69,    70,    71,    71,    71,    72,    72,    72,    73,    74,
      74,    75,    76,    77,    77,    78,    78,    79,    80,    80,
      81,    82,    82,    83,    83,    84,    84,    85,    86,    87,
      87,    88,    88,    89,    90,    90,    91,    92,    92,    93,
      94,    94,    94,    95,    95,    96,    97,    97,    98,    98,
      98,    98,    98,    98,    99,   100,   100,   101,   101,   102,
     103,   103,   104,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   111,   111,   111,   112,   113,   113,   114,   115,   115,
     116,   116,   117,   118,   119,   120,   120,   121,   122,   123,
     123,   124,   125,   125,   126,   126,   127,   127,   127,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   132,   132,
     133,   133,   134,   134,   135,   136,   136,   137,   138,   139,
     140,   140,   141,   141,   141,   141,   142,   142,   143,   143,
     144,   145,   145,   146,   146,   147,   148,   148,   149,   149,
     150,   150
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       2,     3,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     5,     5,     0,     3,     1,     2,     4,     0,     1,
       3,     0,     4,     1,     0,     0,     2,     3,     3,     1,
       2,     4,     3,     2,     0,     3,     2,     0,     2,     3,
       1,     1,     0,     0,     3,     2,     0,     3,     1,     1,
       1,     3,     2,     2,     3,     0,     1,     0,     1,     3,
       0,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     1,     5,     5,     0,     3,     0,     3,
       2,     2,     1,     0,     2,     0,     3,     7,     0,     5,
       0,     2,     5,     4,    10,     0,     2,     4,     3,     0,
       1,     3,     0,     2,     0,     2,     2,     2,     2,     2,
       2,     0,     3,     0,     3,     0,     3,     4,     0,     2,
       0,     2,     0,     3,     4,     0,     1,     6,     3,     8,
       0,     2,     2,     2,     2,     2,     0,     3,     0,     2,
       3,     0,     2,     0,     3,     7,     1,     2,     0,     1,
       0,     1
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
        yyerror (YY_("syntax error: cannot back up")); \
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
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
      yychar = yylex ();
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
  case 2: /* cD: TOKEN_IDENT '=' cE  */
#line 69 "bison.y"
                            { (yyval.node) = makeNode("=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1443 "bison.tab.c"
    break;

  case 3: /* cE: scE  */
#line 73 "bison.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1449 "bison.tab.c"
    break;

  case 4: /* cE: scE R scE  */
#line 74 "bison.y"
                            { (yyval.node) = makeNode((yyvsp[-1].node)->label, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1455 "bison.tab.c"
    break;

  case 5: /* R: '='  */
#line 78 "bison.y"
                            { (yyval.node) = makeLeaf("="); }
#line 1461 "bison.tab.c"
    break;

  case 6: /* R: TOKEN_LREQ  */
#line 79 "bison.y"
                            { (yyval.node) = makeLeaf("LREQ"); }
#line 1467 "bison.tab.c"
    break;

  case 7: /* R: TOKEN_LEQ  */
#line 80 "bison.y"
                            { (yyval.node) = makeLeaf("LEQ"); }
#line 1473 "bison.tab.c"
    break;

  case 8: /* R: TOKEN_REQ  */
#line 81 "bison.y"
                            { (yyval.node) = makeLeaf("REQ"); }
#line 1479 "bison.tab.c"
    break;

  case 9: /* R: '>'  */
#line 82 "bison.y"
                            { (yyval.node) = makeLeaf(">"); }
#line 1485 "bison.tab.c"
    break;

  case 10: /* R: '<'  */
#line 83 "bison.y"
                            { (yyval.node) = makeLeaf("<"); }
#line 1491 "bison.tab.c"
    break;

  case 11: /* scE: cT  */
#line 87 "bison.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1497 "bison.tab.c"
    break;

  case 12: /* scE: '+' cT  */
#line 88 "bison.y"
                            { (yyval.node) = makeNode("+u", NULL, (yyvsp[0].node)); }
#line 1503 "bison.tab.c"
    break;

  case 13: /* scE: '-' cT  */
#line 89 "bison.y"
                            { (yyval.node) = makeNode("-u", NULL, (yyvsp[0].node)); }
#line 1509 "bison.tab.c"
    break;

  case 14: /* scE: scE aO cT  */
#line 90 "bison.y"
                            { (yyval.node) = makeNode((yyvsp[-1].node)->label, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1515 "bison.tab.c"
    break;

  case 15: /* aO: '+'  */
#line 94 "bison.y"
                            { (yyval.node) = makeLeaf("+"); }
#line 1521 "bison.tab.c"
    break;

  case 16: /* aO: '-'  */
#line 95 "bison.y"
                            { (yyval.node) = makeLeaf("-"); }
#line 1527 "bison.tab.c"
    break;

  case 17: /* aO: TOKEN_OR  */
#line 96 "bison.y"
                            { (yyval.node) = makeLeaf("OR"); }
#line 1533 "bison.tab.c"
    break;

  case 18: /* cT: cF  */
#line 100 "bison.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1539 "bison.tab.c"
    break;

  case 19: /* cT: cT mO cF  */
#line 101 "bison.y"
                            { (yyval.node) = makeNode((yyvsp[-1].node)->label, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1545 "bison.tab.c"
    break;

  case 20: /* mO: '*'  */
#line 105 "bison.y"
                            { (yyval.node) = makeLeaf("*"); }
#line 1551 "bison.tab.c"
    break;

  case 21: /* mO: '/'  */
#line 106 "bison.y"
                            { (yyval.node) = makeLeaf("/"); }
#line 1557 "bison.tab.c"
    break;

  case 22: /* mO: TOKEN_DIV  */
#line 107 "bison.y"
                            { (yyval.node) = makeLeaf("DIV"); }
#line 1563 "bison.tab.c"
    break;

  case 23: /* mO: TOKEN_MOD  */
#line 108 "bison.y"
                            { (yyval.node) = makeLeaf("MOD"); }
#line 1569 "bison.tab.c"
    break;

  case 24: /* mO: TOKEN_AND  */
#line 109 "bison.y"
                            { (yyval.node) = makeLeaf("AND"); }
#line 1575 "bison.tab.c"
    break;

  case 25: /* mO: '&'  */
#line 110 "bison.y"
                            { (yyval.node) = makeLeaf("&"); }
#line 1581 "bison.tab.c"
    break;

  case 26: /* cF: TOKEN_INTEGER  */
#line 114 "bison.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1587 "bison.tab.c"
    break;

  case 27: /* cF: TOKEN_STRING  */
#line 115 "bison.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1593 "bison.tab.c"
    break;

  case 28: /* cF: '(' cE ')'  */
#line 116 "bison.y"
                            { (yyval.node) = (yyvsp[-1].node); }
#line 1599 "bison.tab.c"
    break;

  case 29: /* cF: TOKEN_NOT cF  */
#line 117 "bison.y"
                            { (yyval.node) = makeNode("NOT", NULL, (yyvsp[0].node)); }
#line 1605 "bison.tab.c"
    break;

  case 30: /* cF: '~' cF  */
#line 118 "bison.y"
                            { (yyval.node) = makeNode("NOT", NULL, (yyvsp[0].node)); }
#line 1611 "bison.tab.c"
    break;

  case 31: /* tD: TOKEN_IDENT '=' T  */
#line 122 "bison.y"
                            { (yyval.node) = makeNode("=", (yyvsp[-2].node), (yyvsp[0].node)); root = (yyval.node); }
#line 1617 "bison.tab.c"
    break;

  case 32: /* T: sT  */
#line 126 "bison.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1623 "bison.tab.c"
    break;

  case 33: /* T: aD  */
#line 127 "bison.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1629 "bison.tab.c"
    break;

  case 34: /* T: pT  */
#line 128 "bison.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1635 "bison.tab.c"
    break;

  case 35: /* sT: TOKEN_IDENT  */
#line 132 "bison.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1641 "bison.tab.c"
    break;

  case 36: /* sT: eN  */
#line 133 "bison.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1647 "bison.tab.c"
    break;

  case 37: /* sT: sbT  */
#line 134 "bison.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1653 "bison.tab.c"
    break;

  case 38: /* eN: '(' iL ')'  */
#line 138 "bison.y"
                            { (yyval.node) = (yyvsp[-1].node); }
#line 1659 "bison.tab.c"
    break;

  case 39: /* iL: TOKEN_IDENT  */
#line 142 "bison.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1665 "bison.tab.c"
    break;

  case 40: /* iL: iL ',' TOKEN_IDENT  */
#line 143 "bison.y"
                            { (yyval.node) = makeNode("LIST", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1671 "bison.tab.c"
    break;

  case 41: /* sbT: '[' cE TOKEN_DOUBLEDOT cE ']'  */
#line 147 "bison.y"
                                    { (yyval.node) = makeNode("..", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1677 "bison.tab.c"
    break;

  case 42: /* aD: TOKEN_ARRAY sT aT TOKEN_OF T  */
#line 151 "bison.y"
                                    { (yyval.node) = makeNode("ARRAY", (yyvsp[-3].node), makeNode("OF", (yyvsp[-2].node), (yyvsp[0].node))); }
#line 1683 "bison.tab.c"
    break;

  case 43: /* aT: %empty  */
#line 155 "bison.y"
                                    { (yyval.node) = NULL; }
#line 1689 "bison.tab.c"
    break;

  case 44: /* aT: ',' sT aT  */
#line 156 "bison.y"
                                    { (yyval.node) = makeNode("List", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1695 "bison.tab.c"
    break;

  case 45: /* pT: TOKEN_PROCEDURE  */
#line 160 "bison.y"
                                    { (yyval.node) = makeLeaf("PROCEDURE"); }
#line 1701 "bison.tab.c"
    break;

  case 46: /* pT: TOKEN_PROCEDURE ftL  */
#line 161 "bison.y"
                                    { (yyval.node) = makeNode("ftL", NULL, makeLeaf("PROCEDURE")); }
#line 1707 "bison.tab.c"
    break;

  case 47: /* ftL: '(' ofL ')' orT  */
#line 165 "bison.y"
                                    { (yyval.node) = makeNode("ftL", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1713 "bison.tab.c"
    break;

  case 48: /* ofL: %empty  */
#line 169 "bison.y"
                                    { (yyval.node) = NULL; }
#line 1719 "bison.tab.c"
    break;

  case 49: /* ofL: fL  */
#line 170 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1725 "bison.tab.c"
    break;

  case 50: /* fL: oV fT foT  */
#line 174 "bison.y"
                                     { (yyval.node) = makeNode("PARAMS", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1731 "bison.tab.c"
    break;

  case 51: /* foT: %empty  */
#line 178 "bison.y"
                                    { (yyval.node) = NULL; }
#line 1737 "bison.tab.c"
    break;

  case 52: /* foT: ',' oV fT foT  */
#line 179 "bison.y"
                                    { (yyval.node) = makeNode(",", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1743 "bison.tab.c"
    break;

  case 53: /* oV: TOKEN_VAR  */
#line 183 "bison.y"
                                    { (yyval.node) = makeLeaf("VAR"); }
#line 1749 "bison.tab.c"
    break;

  case 54: /* oV: %empty  */
#line 184 "bison.y"
                                    { (yyval.node) = NULL; }
#line 1755 "bison.tab.c"
    break;

  case 55: /* orT: %empty  */
#line 188 "bison.y"
                                    { (yyval.node) = NULL; }
#line 1761 "bison.tab.c"
    break;

  case 56: /* orT: ':' TOKEN_IDENT  */
#line 189 "bison.y"
                                    { (yyval.node) = makeNode("RET", (yyvsp[0].node), NULL); }
#line 1767 "bison.tab.c"
    break;

  case 57: /* vD: iL ':' T  */
#line 194 "bison.y"
                                    { (yyval.node) = makeNode(":", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1773 "bison.tab.c"
    break;

  case 58: /* fT: TOKEN_ARRAY TOKEN_OF TOKEN_IDENT  */
#line 198 "bison.y"
                                     { (yyval.node) = makeNode("OF", makeLeaf("ARRAY"), (yyvsp[0].node)); }
#line 1779 "bison.tab.c"
    break;

  case 59: /* D: TOKEN_IDENT  */
#line 202 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1785 "bison.tab.c"
    break;

  case 60: /* D: TOKEN_IDENT dT  */
#line 203 "bison.y"
                                    { (yyval.node) = makeNode("D", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1791 "bison.tab.c"
    break;

  case 61: /* dT: '[' eL ']' dT  */
#line 207 "bison.y"
                                    { (yyval.node) = makeNode("dT", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1797 "bison.tab.c"
    break;

  case 62: /* dT: '[' eL ']'  */
#line 208 "bison.y"
                                    { (yyval.node) = makeNode("dT", (yyvsp[-1].node), NULL); }
#line 1803 "bison.tab.c"
    break;

  case 63: /* eL: E eL_tail  */
#line 212 "bison.y"
                                    { (yyval.node) = makeNode("eL", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1809 "bison.tab.c"
    break;

  case 64: /* eL_tail: %empty  */
#line 216 "bison.y"
                                    { (yyval.node) = NULL; }
#line 1815 "bison.tab.c"
    break;

  case 65: /* eL_tail: ',' E eL_tail  */
#line 217 "bison.y"
                                    { (yyval.node) = makeNode(",", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1821 "bison.tab.c"
    break;

  case 66: /* E: sE opt_R_sE  */
#line 221 "bison.y"
                                    { (yyval.node) = makeNode("E", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1827 "bison.tab.c"
    break;

  case 67: /* opt_R_sE: %empty  */
#line 225 "bison.y"
                                    { (yyval.node) = NULL; }
#line 1833 "bison.tab.c"
    break;

  case 68: /* opt_R_sE: R sE  */
#line 226 "bison.y"
                                    { (yyval.node) = makeNode((yyvsp[-1].node)->label, (yyvsp[0].node), NULL); }
#line 1839 "bison.tab.c"
    break;

  case 69: /* sE: opt_sign tM sE_tail  */
#line 230 "bison.y"
                                    { (yyval.node) = makeNode("sE", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1845 "bison.tab.c"
    break;

  case 70: /* opt_sign: '+'  */
#line 234 "bison.y"
                                    { (yyval.node) = makeLeaf("+u"); }
#line 1851 "bison.tab.c"
    break;

  case 71: /* opt_sign: '-'  */
#line 235 "bison.y"
                                    { (yyval.node) = makeLeaf("-u"); }
#line 1857 "bison.tab.c"
    break;

  case 72: /* opt_sign: %empty  */
#line 236 "bison.y"
                                    { (yyval.node) = NULL; }
#line 1863 "bison.tab.c"
    break;

  case 73: /* sE_tail: %empty  */
#line 240 "bison.y"
                                    { (yyval.node) = NULL; }
#line 1869 "bison.tab.c"
    break;

  case 74: /* sE_tail: aO tM sE_tail  */
#line 241 "bison.y"
                                    { (yyval.node) = makeNode((yyvsp[-2].node)->label, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1875 "bison.tab.c"
    break;

  case 75: /* tM: F tM_tail  */
#line 245 "bison.y"
                                    { (yyval.node) = makeNode("tM", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1881 "bison.tab.c"
    break;

  case 76: /* tM_tail: %empty  */
#line 249 "bison.y"
                                    { (yyval.node) = NULL; }
#line 1887 "bison.tab.c"
    break;

  case 77: /* tM_tail: mO F tM_tail  */
#line 250 "bison.y"
                                    { (yyval.node) = makeNode((yyvsp[-2].node)->label, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1893 "bison.tab.c"
    break;

  case 78: /* F: TOKEN_INTEGER  */
#line 254 "bison.y"
                                    { (yyval.node) = makeLeaf("INT"); }
#line 1899 "bison.tab.c"
    break;

  case 79: /* F: TOKEN_STRING  */
#line 255 "bison.y"
                                    { (yyval.node) = makeLeaf("STRING"); }
#line 1905 "bison.tab.c"
    break;

  case 80: /* F: dpC  */
#line 256 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1911 "bison.tab.c"
    break;

  case 81: /* F: '(' E ')'  */
#line 257 "bison.y"
                                    { (yyval.node) = (yyvsp[-1].node); }
#line 1917 "bison.tab.c"
    break;

  case 82: /* F: TOKEN_NOT F  */
#line 258 "bison.y"
                                    { (yyval.node) = makeNode("NOT", NULL, (yyvsp[0].node)); }
#line 1923 "bison.tab.c"
    break;

  case 83: /* F: '~' F  */
#line 259 "bison.y"
                                    { (yyval.node) = makeNode("NOT", NULL, (yyvsp[0].node)); }
#line 1929 "bison.tab.c"
    break;

  case 84: /* dpC: TOKEN_IDENT opt_dT opt_aP  */
#line 263 "bison.y"
                                    { (yyval.node) = makeNode("dpC", (yyvsp[-2].node), makeNode("ARGS", (yyvsp[-1].node), (yyvsp[0].node))); }
#line 1935 "bison.tab.c"
    break;

  case 85: /* opt_dT: %empty  */
#line 267 "bison.y"
                                    { (yyval.node) = NULL; }
#line 1941 "bison.tab.c"
    break;

  case 86: /* opt_dT: dT  */
#line 268 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1947 "bison.tab.c"
    break;

  case 87: /* opt_aP: %empty  */
#line 272 "bison.y"
                                    { (yyval.node) = NULL; }
#line 1953 "bison.tab.c"
    break;

  case 88: /* opt_aP: aP  */
#line 273 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1959 "bison.tab.c"
    break;

  case 89: /* aP: '(' opt_eL ')'  */
#line 277 "bison.y"
                                    { (yyval.node) = (yyvsp[-1].node); }
#line 1965 "bison.tab.c"
    break;

  case 90: /* opt_eL: %empty  */
#line 281 "bison.y"
                                    { (yyval.node) = NULL; }
#line 1971 "bison.tab.c"
    break;

  case 91: /* opt_eL: eL  */
#line 282 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1977 "bison.tab.c"
    break;

  case 92: /* S: opt_S  */
#line 286 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1983 "bison.tab.c"
    break;

  case 93: /* opt_S: %empty  */
#line 290 "bison.y"
                                    { (yyval.node) = NULL; }
#line 1989 "bison.tab.c"
    break;

  case 94: /* opt_S: apC  */
#line 291 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1995 "bison.tab.c"
    break;

  case 95: /* opt_S: ifS  */
#line 292 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2001 "bison.tab.c"
    break;

  case 96: /* opt_S: ioS  */
#line 293 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2007 "bison.tab.c"
    break;

  case 97: /* opt_S: wS  */
#line 294 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2013 "bison.tab.c"
    break;

  case 98: /* opt_S: rS  */
#line 295 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2019 "bison.tab.c"
    break;

  case 99: /* opt_S: fS  */
#line 296 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2025 "bison.tab.c"
    break;

  case 100: /* opt_S: TOKEN_EXIT  */
#line 297 "bison.y"
                                    { (yyval.node) = makeLeaf("EXIT"); }
#line 2031 "bison.tab.c"
    break;

  case 101: /* opt_S: TOKEN_RETURN opt_E  */
#line 298 "bison.y"
                                    { (yyval.node) = makeNode("RETURN", (yyvsp[0].node), NULL); }
#line 2037 "bison.tab.c"
    break;

  case 102: /* opt_E: %empty  */
#line 302 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2043 "bison.tab.c"
    break;

  case 103: /* opt_E: E  */
#line 303 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2049 "bison.tab.c"
    break;

  case 104: /* ioS: TOKEN_READ '(' D io_read_tail ')'  */
#line 307 "bison.y"
                                            { (yyval.node) = makeNode("READ", (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 2055 "bison.tab.c"
    break;

  case 105: /* ioS: TOKEN_WRITE '(' E io_write_tail ')'  */
#line 308 "bison.y"
                                            { (yyval.node) = makeNode("WRITE", (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 2061 "bison.tab.c"
    break;

  case 106: /* io_read_tail: %empty  */
#line 312 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2067 "bison.tab.c"
    break;

  case 107: /* io_read_tail: ',' D io_read_tail  */
#line 313 "bison.y"
                                    { (yyval.node) = makeNode(",", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2073 "bison.tab.c"
    break;

  case 108: /* io_write_tail: %empty  */
#line 317 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2079 "bison.tab.c"
    break;

  case 109: /* io_write_tail: ',' E io_write_tail  */
#line 318 "bison.y"
                                    { (yyval.node) = makeNode(",", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2085 "bison.tab.c"
    break;

  case 110: /* apC: D opt_apC  */
#line 322 "bison.y"
                                    { (yyval.node) = makeNode("apC", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2091 "bison.tab.c"
    break;

  case 111: /* opt_apC: TOKEN_ASSIGN E  */
#line 326 "bison.y"
                                    { (yyval.node) = makeNode("ASSIGN", (yyvsp[0].node), NULL); }
#line 2097 "bison.tab.c"
    break;

  case 112: /* opt_apC: aP  */
#line 327 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2103 "bison.tab.c"
    break;

  case 113: /* opt_apC: %empty  */
#line 328 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2109 "bison.tab.c"
    break;

  case 114: /* sS: S sS_tail  */
#line 332 "bison.y"
                                    { (yyval.node) = makeNode("sS", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2115 "bison.tab.c"
    break;

  case 115: /* sS_tail: %empty  */
#line 336 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2121 "bison.tab.c"
    break;

  case 116: /* sS_tail: ';' S sS_tail  */
#line 337 "bison.y"
                                    { (yyval.node) = makeNode(";", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2127 "bison.tab.c"
    break;

  case 117: /* ifS: TOKEN_IF E TOKEN_THEN sS ifS_elsif ifS_else TOKEN_END  */
#line 341 "bison.y"
                                                            { (yyval.node) = makeNode("IF", (yyvsp[-5].node), makeNode("THEN", (yyvsp[-3].node), makeNode("REST", (yyvsp[-2].node), (yyvsp[-1].node)))); }
#line 2133 "bison.tab.c"
    break;

  case 118: /* ifS_elsif: %empty  */
#line 345 "bison.y"
                                                { (yyval.node) = NULL; }
#line 2139 "bison.tab.c"
    break;

  case 119: /* ifS_elsif: TOKEN_ELSIF E TOKEN_THEN sS ifS_elsif  */
#line 346 "bison.y"
                                                { (yyval.node) = makeNode("ELSIF", (yyvsp[-3].node), makeNode("THEN", (yyvsp[-1].node), (yyvsp[0].node))); }
#line 2145 "bison.tab.c"
    break;

  case 120: /* ifS_else: %empty  */
#line 350 "bison.y"
                                                { (yyval.node) = NULL; }
#line 2151 "bison.tab.c"
    break;

  case 121: /* ifS_else: TOKEN_ELSE sS  */
#line 351 "bison.y"
                                                { (yyval.node) = makeNode("ELSE", (yyvsp[0].node), NULL); }
#line 2157 "bison.tab.c"
    break;

  case 122: /* wS: TOKEN_WHILE E TOKEN_DO sS TOKEN_END  */
#line 355 "bison.y"
                                                { (yyval.node) = makeNode("WHILE", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2163 "bison.tab.c"
    break;

  case 123: /* rS: TOKEN_REPEAT sS TOKEN_UNTIL E  */
#line 359 "bison.y"
                                                { (yyval.node) = makeNode("REPEAT", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2169 "bison.tab.c"
    break;

  case 124: /* fS: TOKEN_FOR TOKEN_IDENT TOKEN_ASSIGN E TOKEN_TO E opt_by TOKEN_DO sS TOKEN_END  */
#line 363 "bison.y"
                                                                                    { (yyval.node) = makeNode("FOR", (yyvsp[-8].node), makeNode("RANGE", (yyvsp[-6].node), makeNode("TO", (yyvsp[-4].node), makeNode("BODY", (yyvsp[-3].node), (yyvsp[-1].node))))); }
#line 2175 "bison.tab.c"
    break;

  case 125: /* opt_by: %empty  */
#line 367 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2181 "bison.tab.c"
    break;

  case 126: /* opt_by: TOKEN_BY cE  */
#line 368 "bison.y"
                                    { (yyval.node) = makeNode("BY", (yyvsp[0].node), NULL); }
#line 2187 "bison.tab.c"
    break;

  case 127: /* pD: pH ';' B TOKEN_IDENT  */
#line 372 "bison.y"
                                    { (yyval.node) = makeNode("pD", (yyvsp[-3].node), makeNode(";", (yyvsp[-1].node), (yyvsp[0].node))); }
#line 2193 "bison.tab.c"
    break;

  case 128: /* pH: TOKEN_PROCEDURE TOKEN_IDENT opt_fp  */
#line 376 "bison.y"
                                        { (yyval.node) = makeNode("PROCEDURE", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2199 "bison.tab.c"
    break;

  case 129: /* opt_fp: %empty  */
#line 380 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2205 "bison.tab.c"
    break;

  case 130: /* opt_fp: fP  */
#line 381 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2211 "bison.tab.c"
    break;

  case 131: /* B: dC_list opt_begin_block TOKEN_END  */
#line 385 "bison.y"
                                        { (yyval.node) = makeNode("B", (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 2217 "bison.tab.c"
    break;

  case 132: /* opt_begin_block: %empty  */
#line 389 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2223 "bison.tab.c"
    break;

  case 133: /* opt_begin_block: TOKEN_BEGIN sS  */
#line 390 "bison.y"
                                    { (yyval.node) = makeNode("BEGIN", (yyvsp[0].node), NULL); }
#line 2229 "bison.tab.c"
    break;

  case 134: /* dC_list: %empty  */
#line 394 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2235 "bison.tab.c"
    break;

  case 135: /* dC_list: dC_list dC  */
#line 395 "bison.y"
                                    { (yyval.node) = makeNode("dC_LIST", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2241 "bison.tab.c"
    break;

  case 136: /* dC: TOKEN_CONST cD_list  */
#line 399 "bison.y"
                                    { (yyval.node) = makeNode("CONST", (yyvsp[0].node), NULL); }
#line 2247 "bison.tab.c"
    break;

  case 137: /* dC: TOKEN_TYPE tD_list  */
#line 400 "bison.y"
                                    { (yyval.node) = makeNode("TYPE", (yyvsp[0].node), NULL); }
#line 2253 "bison.tab.c"
    break;

  case 138: /* dC: TOKEN_VAR vD_list  */
#line 401 "bison.y"
                                    { (yyval.node) = makeNode("VAR", (yyvsp[0].node), NULL); }
#line 2259 "bison.tab.c"
    break;

  case 139: /* dC: pD ';'  */
#line 402 "bison.y"
                                    { (yyval.node) = makeNode("pD;", (yyvsp[-1].node), NULL); }
#line 2265 "bison.tab.c"
    break;

  case 140: /* dC: mD ';'  */
#line 403 "bison.y"
                                    { (yyval.node) = makeNode("mD;", (yyvsp[-1].node), NULL); }
#line 2271 "bison.tab.c"
    break;

  case 141: /* cD_list: %empty  */
#line 407 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2277 "bison.tab.c"
    break;

  case 142: /* cD_list: cD_list cD ';'  */
#line 408 "bison.y"
                                    { (yyval.node) = makeNode("cD", (yyvsp[-1].node), (yyvsp[-2].node)); }
#line 2283 "bison.tab.c"
    break;

  case 143: /* tD_list: %empty  */
#line 412 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2289 "bison.tab.c"
    break;

  case 144: /* tD_list: tD_list tD ';'  */
#line 413 "bison.y"
                                    { (yyval.node) = makeNode("tD", (yyvsp[-1].node), (yyvsp[-2].node)); }
#line 2295 "bison.tab.c"
    break;

  case 145: /* vD_list: %empty  */
#line 417 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2301 "bison.tab.c"
    break;

  case 146: /* vD_list: vD_list vD ';'  */
#line 418 "bison.y"
                                    { (yyval.node) = makeNode("vD", (yyvsp[-1].node), (yyvsp[-2].node)); }
#line 2307 "bison.tab.c"
    break;

  case 147: /* fP: '(' opt_fpS_list ')' opt_return_type  */
#line 422 "bison.y"
                                            { (yyval.node) = makeNode("fP", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2313 "bison.tab.c"
    break;

  case 148: /* opt_return_type: %empty  */
#line 426 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2319 "bison.tab.c"
    break;

  case 149: /* opt_return_type: ':' TOKEN_IDENT  */
#line 427 "bison.y"
                                    { (yyval.node) = makeNode("RET", NULL, (yyvsp[0].node)); }
#line 2325 "bison.tab.c"
    break;

  case 150: /* opt_fpS_list: %empty  */
#line 431 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2331 "bison.tab.c"
    break;

  case 151: /* opt_fpS_list: fpS fpS_tail  */
#line 432 "bison.y"
                                    { (yyval.node) = makeNode("fpS_LIST", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2337 "bison.tab.c"
    break;

  case 152: /* fpS_tail: %empty  */
#line 436 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2343 "bison.tab.c"
    break;

  case 153: /* fpS_tail: ';' fpS fpS_tail  */
#line 437 "bison.y"
                                    { (yyval.node) = makeNode(";", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2349 "bison.tab.c"
    break;

  case 154: /* fpS: opt_var iL ':' fT  */
#line 441 "bison.y"
                                    { (yyval.node) = makeNode("fpS", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2355 "bison.tab.c"
    break;

  case 155: /* opt_var: %empty  */
#line 445 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2361 "bison.tab.c"
    break;

  case 156: /* opt_var: TOKEN_VAR  */
#line 446 "bison.y"
                                    { (yyval.node) = makeLeaf("VAR"); }
#line 2367 "bison.tab.c"
    break;

  case 157: /* mD: TOKEN_MODULE TOKEN_IDENT opt_P ';' B TOKEN_IDENT  */
#line 450 "bison.y"
                                                        { (yyval.node) = makeNode("MODULE", (yyvsp[-4].node), makeNode("BODY", (yyvsp[-3].node), (yyvsp[0].node))); }
#line 2373 "bison.tab.c"
    break;

  case 158: /* P: '[' cE ']'  */
#line 454 "bison.y"
                                    { (yyval.node) = makeNode("P", (yyvsp[-1].node), NULL); }
#line 2379 "bison.tab.c"
    break;

  case 159: /* dM: TOKEN_DEFINITION TOKEN_MODULE TOKEN_IDENT ';' dF_list TOKEN_END TOKEN_IDENT '.'  */
#line 458 "bison.y"
                                                                                    { (yyval.node) = makeNode("dM", (yyvsp[-5].node), makeNode("BODY", (yyvsp[-3].node), (yyvsp[-1].node))); }
#line 2385 "bison.tab.c"
    break;

  case 160: /* dF_list: %empty  */
#line 462 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2391 "bison.tab.c"
    break;

  case 161: /* dF_list: dF_list dF  */
#line 463 "bison.y"
                                    { (yyval.node) = makeNode("dF_LIST", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2397 "bison.tab.c"
    break;

  case 162: /* dF: TOKEN_CONST cD_listY  */
#line 467 "bison.y"
                                     { (yyval.node) = makeNode("CONST", (yyvsp[0].node), NULL); }
#line 2403 "bison.tab.c"
    break;

  case 163: /* dF: TOKEN_TYPE type_list  */
#line 468 "bison.y"
                                    { (yyval.node) = makeNode("TYPE", (yyvsp[0].node), NULL); }
#line 2409 "bison.tab.c"
    break;

  case 164: /* dF: TOKEN_VAR vD_listY  */
#line 469 "bison.y"
                                     { (yyval.node) = makeNode("VAR", (yyvsp[0].node), NULL); }
#line 2415 "bison.tab.c"
    break;

  case 165: /* dF: pH ';'  */
#line 470 "bison.y"
                                    { (yyval.node) = makeNode("pH;", (yyvsp[-1].node), NULL); }
#line 2421 "bison.tab.c"
    break;

  case 166: /* cD_listY: %empty  */
#line 474 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2427 "bison.tab.c"
    break;

  case 167: /* cD_listY: cD_listY cD ';'  */
#line 475 "bison.y"
                                     { (yyval.node) = makeNode("cD", (yyvsp[-1].node), (yyvsp[-2].node)); }
#line 2433 "bison.tab.c"
    break;

  case 168: /* type_list: %empty  */
#line 479 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2439 "bison.tab.c"
    break;

  case 169: /* type_list: type_list type_entry  */
#line 480 "bison.y"
                                    { (yyval.node) = makeNode("TYPE_ENTRY", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2445 "bison.tab.c"
    break;

  case 170: /* type_entry: TOKEN_IDENT opt_type_def ';'  */
#line 484 "bison.y"
                                    { (yyval.node) = makeNode("TYPE_DEF", (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 2451 "bison.tab.c"
    break;

  case 171: /* opt_type_def: %empty  */
#line 488 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2457 "bison.tab.c"
    break;

  case 172: /* opt_type_def: '=' T  */
#line 489 "bison.y"
                                    { (yyval.node) = makeNode("=", (yyvsp[0].node), NULL); }
#line 2463 "bison.tab.c"
    break;

  case 173: /* vD_listY: %empty  */
#line 493 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2469 "bison.tab.c"
    break;

  case 174: /* vD_listY: vD_listY vD ';'  */
#line 494 "bison.y"
                                     { (yyval.node) = makeNode("vD", (yyvsp[-1].node), (yyvsp[-2].node)); }
#line 2475 "bison.tab.c"
    break;

  case 175: /* pM: TOKEN_MODULE TOKEN_IDENT opt_P ';' B TOKEN_IDENT '.'  */
#line 498 "bison.y"
                                                            { (yyval.node) = makeNode("pM", (yyvsp[-5].node), makeNode("BODY", (yyvsp[-4].node), (yyvsp[-1].node))); }
#line 2481 "bison.tab.c"
    break;

  case 176: /* cU: dM  */
#line 502 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2487 "bison.tab.c"
    break;

  case 177: /* cU: opt_IMPL pM  */
#line 503 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2493 "bison.tab.c"
    break;

  case 178: /* opt_IMPL: %empty  */
#line 507 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2499 "bison.tab.c"
    break;

  case 179: /* opt_IMPL: TOKEN_IMPLEMENTATION  */
#line 508 "bison.y"
                                    { (yyval.node) = makeLeaf("IMPLEMENTATION"); }
#line 2505 "bison.tab.c"
    break;

  case 180: /* opt_P: %empty  */
#line 512 "bison.y"
                                    { (yyval.node) = NULL; }
#line 2511 "bison.tab.c"
    break;

  case 181: /* opt_P: P  */
#line 513 "bison.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2517 "bison.tab.c"
    break;


#line 2521 "bison.tab.c"

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
      yyerror (YY_("syntax error"));
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 517 "bison.y"


void yyerror(const char* s) {
    fprintf(stderr, "Parse error: %s\n", s);
}

void printTree(Node* root, int depth) {
    int i;

    if (root == NULL) {
        return;
    }

    printTree(root->right, depth + 4);

    for (i = 0; i < depth; i++) {
        printf(" ");
    }
    printf("%s\n", root->label);

    printTree(root->left, depth + 4);
}



int main(void) {
    Node* root = NULL;

    if (yyparse() == 0) {
        printf("Parse successful\n");
        printTree(root, 0);
    }

    return 0;
}


