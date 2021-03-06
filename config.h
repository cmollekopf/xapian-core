/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if ftime returns void */
/* #undef FTIME_RETURNS_VOID */

/* Define to 1 if you have the `closefrom' function. */
/* #undef HAVE_CLOSEFROM */

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 1

/* Define to 1 if you have the `dirfd' function. */
#define HAVE_DIRFD 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fdatasync' function. */
/* #undef HAVE_FDATASYNC */

/* Define to 1 if you have the `fork' function. */
/* #undef HAVE_FORK */

/* Define to 1 if you have the `fsync' function. */
/* #undef HAVE_FSYNC */

/* Define to 1 if you have the `ftime' function. */
#define HAVE_FTIME 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the `getrlimit' function. */
#define HAVE_GETRLIMIT 1

/* Define to 1 if you have the `getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `hstrerror' function. */
#define HAVE_HSTRERROR 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `link' function. */
#define HAVE_LINK 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define if pread is available on this system */
/* #undef HAVE_PREAD */

/* Define if pwrite is available on this system */
/* #undef HAVE_PWRITE */

/* Define to 1 if you have the `random' function. */
#define HAVE_RANDOM 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `sigsetjmp' function */
#define HAVE_SIGSETJMP 1

/* Define to 1 if you have the `sleep' function. */
/* #undef HAVE_SLEEP */

/* Define to 1 if you have the 'socketpair' function. */
/* #undef HAVE_SOCKETPAIR */

/* Define to 1 if you have the `srandom' function. */
#define HAVE_SRANDOM 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define if you have 'sys_errlist' and 'sys_nerr' */
#define HAVE_SYS_ERRLIST_AND_SYS_NERR 1

/* Define to 1 if you have the <sys/errno.h> header file. */
#define HAVE_SYS_ERRNO_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
/* undef HAVE_SYS_STAT_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the `times' function. */
#define HAVE_TIMES 1

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */

/* Define to 1 if you have the <uuid.h> header file. */
/* #undef HAVE_UUID_H */

/* Define to 1 if you have the 'uuid_unparse_lower' function. */
/* #undef HAVE_UUID_UNPARSE_LOWER */

/* Define to 1 if you have the <uuid/uuid.h> header file. */
/* #undef HAVE_UUID_UUID_H */

/* Define if a suitable valgrind is installed */
/* #undef HAVE_VALGRIND */

/* Define to 1 if you have the <valgrind/memcheck.h> header file. */
/* #undef HAVE_VALGRIND_MEMCHECK_H */

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Define to 1 if you have the `_putenv_s' function. */
/* #undef HAVE__PUTENV_S */

/* Define if you have '_sys_errlist' and '_sys_nerr' */
#define HAVE__SYS_ERRLIST_AND__SYS_NERR 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define on mingw to get _s suffixed "secure" functions declared in headers
   */
/* #undef MINGW_HAS_SECURE_API */

/* Name of package */
#define PACKAGE "xapian-core"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://xapian.org/bugs"

/* Define to the full name of this package. */
#define PACKAGE_NAME "xapian-core"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "xapian-core 1.2.24"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "xapian-core"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.2.24"

/* explicit prototype needed for pread (if any) */
/* #undef PREAD_PROTOTYPE */

/* explicit prototype needed for pwrite (if any) */
/* #undef PWRITE_PROTOTYPE */

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* Define to the name of a function implementing snprintf but not caring about
   ISO C99 return value semantics (if one exists) */
#define SNPRINTF snprintf

/* Define to the name of a function implementing snprintf with ISO C99
   semantics (if one exists) */
#define SNPRINTF_ISO snprintf

/* type to use for 5th parameter to getsockopt */
#define SOCKLEN_T int

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
#define STRERROR_R_CHAR_P 1

/* Define to an unsigned type equivalent to off_t */
#define UNSIGNED_OFF_T unsigned long

/* Define if the testsuite can use RTTI */
#define USE_RTTI 1

/* Version number of package */
#define VERSION "1.2.24"

/* Define if you want assertions (causes some slow-down) */
/* #undef XAPIAN_ASSERTIONS */

/* Define if you want paranoid assertions (causes significant slow-down) */
/* #undef XAPIAN_ASSERTIONS_PARANOID */

/* Define if you want a log of methods called and other debug messages */
/* #undef XAPIAN_DEBUG_LOG */

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define on mingw to the minimum msvcrt version to assume */
/* #undef __MSVCRT_VERSION__ */

/* Define to `int' if <sys/types.h> does not define. */
#define mode_t int

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `int' if <sys/types.h> does not define. */
#define ssize_t int

/* Disable stupid MSVC "performance" warning for converting int to bool. */
#ifdef _MSC_VER
# pragma warning(disable:4800)
#endif

#define __WIN32__ 1


/* _FORTIFY_SOURCE is only supported by GCC >= 4.1 and glibc >= 2.3.4, but it
 * shouldn't cause a problem to define it where it's not supported and some
 * distros may have backported support, so hardcoding version checks is
 * counter-productive.
 *
 * Check if _FORTIFY_SOURCE is already defined to allow the user to override
 * our choice with "./configure CPPFLAGS=-D_FORTIFY_SOURCE=0" or "...=1".
 */
#if defined __GNUC__ && !defined _FORTIFY_SOURCE
# define _FORTIFY_SOURCE 2
#endif

/* For GCC >= 3.0 (and Intel's C++ compiler, which also defines __GNUC__),
 * we can use __builtin_expect to give the compiler hints about branch
 * prediction.  See HACKING for how to use these.
 */
#if defined __GNUC__
/* The arguments of __builtin_expect() are both long, so use !! to ensure that
 * the first argument is always an integer expression, and always 0 or 1, but
 * still has the same truth value for the if or while it is used in.
 */
# define rare(COND) __builtin_expect(!!(COND), 0)
# define usual(COND) __builtin_expect(!!(COND), 1)
#else
# define rare(COND) (COND)
# define usual(COND) (COND)
#endif

/* With Sun CC 5.13 (Studio 12.4) on Solaris 11.2, <math.h> seems to get
 * implicitly included somehow before <cmath>, and compilation fails due
 * to 'std::exception' colliding with 'struct exception'.  It's not clear
 * how to avoid this, so just define the making macro which <cmath> does
 * before it includes <math.h>.
 */
#ifdef __SUNPRO_CC
# define __MATHERR_RENAME_EXCEPTION
#endif

#if !defined __WIN32__ && defined _WIN32 
# define __WIN32__
#endif

#define XAPIAN_LIB_BUILD 1

#if defined __WIN32__
# define _USE_MATH_DEFINES
# define NOMINMAX
#endif
