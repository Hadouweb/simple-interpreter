# 1 "parse.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 329 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "parse.c" 2
# 1 "./parse.h" 1


# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/stdint.h" 1 3 4
# 63 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 18 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
typedef __signed char int8_t;
# 19 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 20 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 21 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 22 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 24 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 25 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 26 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 27 "/usr/include/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;





# 1 "/usr/include/sys/_types.h" 1 3 4
# 32 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 533 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 534 "/usr/include/sys/cdefs.h" 2 3 4
# 599 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 600 "/usr/include/sys/cdefs.h" 2 3 4
# 33 "/usr/include/sys/_types.h" 2 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 55 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];


# 1 "/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/usr/include/sys/_types.h" 2 3 4
# 53 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_intptr_t.h" 3 4
typedef __darwin_intptr_t intptr_t;
# 54 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 55 "/usr/include/stdint.h" 2 3 4



# 1 "/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 59 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 60 "/usr/include/stdint.h" 2 3 4
# 64 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/stdint.h" 2 3 4
# 4 "./parse.h" 2
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/stddef.h" 1 3 4
# 51 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 62 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 76 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/stddef.h" 3 4
typedef long unsigned int rsize_t;
# 90 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/stddef.h" 3 4
typedef int wchar_t;
# 118 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/stddef.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/__stddef_max_align_t.h" 1 3 4
# 32 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/__stddef_max_align_t.h" 3 4
typedef long double max_align_t;
# 119 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/stddef.h" 2 3 4
# 5 "./parse.h" 2

enum {
    NT_Unit,
    NT_Stmt,
    NT_Assn,
    NT_Prnt,
    NT_Ctrl,
    NT_Cond,
    NT_Elif,
    NT_Else,
    NT_Dowh,
    NT_Whil,
    NT_Atom,
    NT_Expr,
    NT_Pexp,
    NT_Bexp,
    NT_Uexp,
    NT_Texp,
    NT_Aexp,
    NT_COUNT
};

typedef uint8_t nt_t;

struct token;
struct node {

    uint32_t nchildren;

    union {
        const struct token *token;

        struct {
            nt_t nt;
            struct node **children;
        };
    };
};

struct node parse(const struct token *, size_t);

enum {
    PARSE_OK,
    PARSE_REJECT,
    PARSE_NOMEM,
};






void destroy_tree(struct node);
# 2 "parse.c" 2
# 1 "./lex.h" 1



# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/stddef.h" 1 3 4
# 5 "./lex.h" 2
# 15 "./lex.h"
enum {
    TK_NAME,
    TK_NMBR,
    TK_STRL,
    TK_WSPC,
    TK_LCOM,
    TK_BCOM,
    TK_LPAR,
    TK_RPAR,
    TK_LBRA,
    TK_RBRA,
    TK_LBRC,
    TK_RBRC,
    TK_COND,
    TK_ELIF,
    TK_ELSE,
    TK_DOWH,
    TK_WHIL,
    TK_ASSN,
    TK_EQUL,
    TK_NEQL,
    TK_LTHN,
    TK_GTHN,
    TK_LTEQ,
    TK_GTEQ,
    TK_CONJ,
    TK_DISJ,
    TK_PLUS,
    TK_MINS,
    TK_MULT,
    TK_DIVI,
    TK_MODU,
    TK_NEGA,
    TK_PRNT,
    TK_SCOL,
    TK_QUES,
    TK_COLN,
    TK_COUNT,
    TK_FBEG,
    TK_FEND,
};

typedef uint8_t tk_t;

struct token {
    const uint8_t *beg, *end;
    tk_t tk;
};

int lex(const uint8_t *, size_t, struct token **, size_t *);

enum {
    LEX_OK,
    LEX_NOMEM,
    LEX_UNKNOWN_TOKEN,
};
# 3 "parse.c" 2

# 1 "/usr/include/stdio.h" 1 3 4
# 65 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 172 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 173 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 68 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 73 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 74 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/sys/stdio.h" 1 3 4
# 39 "/usr/include/sys/stdio.h" 3 4
int renameat(int, const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));
# 76 "/usr/include/stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 88 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 122 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
# 231 "/usr/include/stdio.h" 3 4
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);



FILE *fopen(const char * restrict, const char * restrict) __asm("_" "fopen" );

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t fread(void * restrict, size_t, size_t, FILE * restrict);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen" );
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict, size_t, size_t, FILE * restrict) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);


__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
# 296 "/usr/include/stdio.h" 3 4
char *ctermid(char *);





FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);
# 315 "/usr/include/stdio.h" 3 4
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen" );
# 337 "/usr/include/stdio.h" 3 4
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
# 348 "/usr/include/stdio.h" 3 4
inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 374 "/usr/include/stdio.h" 3 4
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);



__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *, const char *) __asm("_" "tempnam" );
# 411 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 412 "/usr/include/stdio.h" 2 3 4


int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);





int snprintf(char * restrict, size_t, const char * restrict, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict, size_t, const char * restrict, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
# 436 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 437 "/usr/include/stdio.h" 2 3 4


int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** restrict, size_t * restrict, int, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** restrict, size_t * restrict, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
# 452 "/usr/include/stdio.h" 3 4
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));
# 492 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/secure/_stdio.h" 1 3 4
# 31 "/usr/include/secure/_stdio.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 32 "/usr/include/secure/_stdio.h" 2 3 4
# 42 "/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);
# 52 "/usr/include/secure/_stdio.h" 3 4
extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 493 "/usr/include/stdio.h" 2 3 4
# 5 "parse.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 65 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;






# 1 "/usr/include/sys/_types/_pid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/_types/_id_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/usr/include/sys/wait.h" 2 3 4
# 109 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4








# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 33 "/usr/include/machine/signal.h" 2 3 4
# 83 "/usr/include/sys/signal.h" 2 3 4
# 146 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/usr/include/machine/_mcontext.h" 3 4
# 1 "/usr/include/i386/_mcontext.h" 1 3 4
# 33 "/usr/include/i386/_mcontext.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 89 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};
# 402 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 422 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 454 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 509 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};
# 751 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 771 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 34 "/usr/include/i386/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};
# 76 "/usr/include/i386/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};
# 115 "/usr/include/i386/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/usr/include/machine/_mcontext.h" 2 3 4
# 147 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 149 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 36 "/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 151 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_ucontext.h" 1 3 4
# 34 "/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 152 "/usr/include/sys/signal.h" 2 3 4


# 1 "/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 155 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 156 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_uid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 157 "/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 269 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 331 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 348 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 367 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 390 "/usr/include/sys/signal.h" 3 4
void (*signal(int, void (*)(int)))(int);
# 110 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 80 "/usr/include/sys/resource.h" 3 4
# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/usr/include/sys/resource.h" 2 3 4








typedef __uint64_t rlim_t;
# 152 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 163 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 192 "/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};

typedef struct rusage_info_v3 rusage_info_current;
# 325 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 353 "/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 383 "/usr/include/sys/resource.h" 3 4
int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );
# 111 "/usr/include/sys/wait.h" 2 3 4
# 186 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 130 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((__uint16_t)((_data << 8) | (_data >> 8)));
}

static inline
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{

    return __builtin_bswap32(_data);




}


static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    return __builtin_bswap64(_data);
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 131 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 187 "/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 248 "/usr/include/sys/wait.h" 3 4
pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 29 "/usr/include/alloca.h" 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 30 "/usr/include/alloca.h" 2 3 4


void *alloca(size_t);
# 68 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 74 "/usr/include/stdlib.h" 2 3 4


# 1 "/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 77 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_rune_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 78 "/usr/include/stdlib.h" 2 3 4


# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 81 "/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;



# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 100 "/usr/include/stdlib.h" 2 3 4
# 117 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 128 "/usr/include/stdlib.h" 3 4
void abort(void) __attribute__((noreturn));
int abs(int) __attribute__((const));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((const));
void exit(int) __attribute__((noreturn));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((const));
ldiv_t ldiv(long, long) __attribute__((const));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);
int posix_memalign(void **, size_t, size_t) __attribute__((availability(macosx,introduced=10.6)));
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system" ) __attribute__((availability(macosx,introduced=10.0))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((noreturn));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv" );
long random(void);
int rand_r(unsigned *);

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );







# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 81 "/usr/include/i386/types.h" 3 4
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;


typedef int64_t register_t;
# 97 "/usr/include/i386/types.h" 3 4
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/usr/include/machine/types.h" 2 3 4
# 239 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/sys/_types/_dev_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 241 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_mode_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 242 "/usr/include/stdlib.h" 2 3 4

u_int32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int );
void arc4random_buf(void * , size_t ) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) __attribute__((availability(macosx,introduced=10.7)));

int atexit_b(void (^)(void)) __attribute__((availability(macosx,introduced=10.6)));
void *bsearch_b(const void *, const void *, size_t,
     size_t, int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));



char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((availability(macosx,introduced=10.0,deprecated=10.5,message="Use posix_spawn APIs instead."))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int heapsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int mergesort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg;
void *valloc(size_t);
# 6 "parse.c" 2
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/stdbool.h" 1 3 4
# 7 "parse.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 8 "parse.c" 2





static struct {
    size_t size, allocated;
    struct node *nodes;
} stack;

struct term {

    union {
        const tk_t tk;
        const nt_t nt;
    };


    const uint8_t is_tk: 1;


    const uint8_t is_mt: 1;
};

struct rule {

    const nt_t lhs;


    const struct term rhs[8 + 1];
};
# 62 "parse.c"
static const struct rule grammar[] = {
    {
    	.lhs = NT_Unit,
    	.rhs = {
    		{
    			.tk = TK_COUNT,
    			.is_tk = 1,
    			.is_mt = 0
			},
			{
				.tk = TK_COUNT,
				.is_tk = 1,
				.is_mt = 0
			},
			{
				.tk = TK_COUNT,
				.is_tk = 1,
				.is_mt = 0
			},
			{
				.tk = TK_COUNT,
				.is_tk = 1,
				.is_mt = 0
			},
			{
				.tk = TK_COUNT,
				.is_tk = 1,
				.is_mt = 0
			},
			{
				.tk = TK_COUNT,
				.is_tk = 1,
				.is_mt = 0
			},
			{
				.tk = TK_FBEG,
				.is_tk = 1,
				.is_mt = 0
			},
			{
				.nt = NT_Stmt,
				.is_tk = 0,
				.is_mt = 1
			},
			{
				.tk = TK_FEND,
				.is_tk = 1,
				.is_mt = 0
			},
		}
	},

    { .lhs = NT_Stmt, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Assn, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Stmt, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Prnt, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Stmt, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Ctrl, .is_tk = 0, .is_mt = 0 }, } },

    { .lhs = NT_Assn, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_NAME, .is_tk = 1, .is_mt = 0 }, { .tk = TK_ASSN, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_SCOL, .is_tk = 1, .is_mt = 0 }, } },
    { .lhs = NT_Assn, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Aexp, .is_tk = 0, .is_mt = 0 }, { .tk = TK_ASSN, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_SCOL, .is_tk = 1, .is_mt = 0 }, } },

    { .lhs = NT_Prnt, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_PRNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_SCOL, .is_tk = 1, .is_mt = 0 }, } },
    { .lhs = NT_Prnt, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_PRNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_STRL, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_SCOL, .is_tk = 1, .is_mt = 0 }, } },

    { .lhs = NT_Ctrl, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Cond, .is_tk = 0, .is_mt = 0 }, { .nt = NT_Elif, .is_tk = 0, .is_mt = 1 }, } },
    { .lhs = NT_Ctrl, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Cond, .is_tk = 0, .is_mt = 0 }, { .nt = NT_Elif, .is_tk = 0, .is_mt = 1 }, { .nt = NT_Else, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Ctrl, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Dowh, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Ctrl, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Whil, .is_tk = 0, .is_mt = 0 }, } },

    { .lhs = NT_Cond, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COND, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_LBRC, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Stmt, .is_tk = 0, .is_mt = 1 }, { .tk = TK_RBRC, .is_tk = 1, .is_mt = 0 }, } },
    { .lhs = NT_Elif, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_ELIF, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_LBRC, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Stmt, .is_tk = 0, .is_mt = 1 }, { .tk = TK_RBRC, .is_tk = 1, .is_mt = 0 }, } },
    { .lhs = NT_Else, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_ELSE, .is_tk = 1, .is_mt = 0 }, { .tk = TK_LBRC, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Stmt, .is_tk = 0, .is_mt = 1 }, { .tk = TK_RBRC, .is_tk = 1, .is_mt = 0 }, } },

    { .lhs = NT_Dowh, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_DOWH, .is_tk = 1, .is_mt = 0 }, { .tk = TK_LBRC, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Stmt, .is_tk = 0, .is_mt = 1 }, { .tk = TK_RBRC, .is_tk = 1, .is_mt = 0 }, { .tk = TK_WHIL, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_SCOL, .is_tk = 1, .is_mt = 0 }, } },
    { .lhs = NT_Whil, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_WHIL, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_LBRC, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Stmt, .is_tk = 0, .is_mt = 1 }, { .tk = TK_RBRC, .is_tk = 1, .is_mt = 0 }, } },

    { .lhs = NT_Atom, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_NAME, .is_tk = 1, .is_mt = 0 }, } },
    { .lhs = NT_Atom, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_NMBR, .is_tk = 1, .is_mt = 0 }, } },

    { .lhs = NT_Expr, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Atom, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Expr, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Pexp, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Expr, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Bexp, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Expr, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Uexp, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Expr, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Texp, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Expr, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Aexp, .is_tk = 0, .is_mt = 0 }, } },

    { .lhs = NT_Pexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_LPAR, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_RPAR, .is_tk = 1, .is_mt = 0 }, } },

    { .lhs = NT_Bexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_EQUL, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Bexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_NEQL, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Bexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_LTHN, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Bexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_GTHN, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Bexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_LTEQ, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Bexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_GTEQ, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Bexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_CONJ, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Bexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_DISJ, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Bexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_PLUS, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Bexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_MINS, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Bexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_MULT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Bexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_DIVI, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Bexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_MODU, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },

    { .lhs = NT_Uexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_PLUS, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Uexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_MINS, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },
    { .lhs = NT_Uexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_NEGA, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },

    { .lhs = NT_Texp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_QUES, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_COLN, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, } },

    { .lhs = NT_Aexp, .rhs = { { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_COUNT, .is_tk = 1, .is_mt = 0 }, { .tk = TK_NAME, .is_tk = 1, .is_mt = 0 }, { .tk = TK_LBRA, .is_tk = 1, .is_mt = 0 }, { .nt = NT_Expr, .is_tk = 0, .is_mt = 0 }, { .tk = TK_RBRA, .is_tk = 1, .is_mt = 0 }, } },
};
# 136 "parse.c"
static const uint8_t precedence[TK_MODU - TK_EQUL + 1] = {
    4, 4, 3, 3, 3, 3, 5, 6, 2, 2, 1, 1, 1,
};

static void print_stack(void)
{
    static const char *const nts[] = {
        "Unit",
        "Stmt",
        "Assn",
        "Prnt",
        "Ctrl",
        "Cond",
        "Elif",
        "Else",
        "Dowh",
        "Whil",
        "Atom",
        "Expr",
        "Pexp",
        "Bexp",
        "Uexp",
        "Texp",
        "Aexp",
    };

    (__builtin_expect(!(sizeof(nts) / sizeof(*nts) == NT_COUNT), 0) ? __assert_rtn(__func__, "parse.c", 162, "sizeof(nts) / sizeof(*nts) == NT_COUNT") : (void)0);

    for (size_t i = 0; i < stack.size; ++i) {
        const struct node *const node = &stack.nodes[i];

        if (node->nchildren) {
            printf("\033[" "1" ";" "33" "m" "%s " "\033[0m", nts[node->nt]);
        } else if (node->token->tk == TK_FBEG) {
            printf("\033[" "1" ";" "32" "m" "^ " "\033[0m");
        } else if (node->token->tk == TK_FEND) {
            printf("\033[" "1" ";" "32" "m" "$ " "\033[0m");
        } else {
            const ptrdiff_t len = node->token->end - node->token->beg;
            printf("\033[" "1" ";" "32" "m" "%.*s " "\033[0m", (int) len, node->token->beg);
        }
    }

    puts("");
}

static void destroy_node(const struct node *const node)
{
    if (node->nchildren) {
        for (size_t child_idx = 0; child_idx < node->nchildren; ++child_idx) {
            destroy_node(node->children[child_idx]);
        }

        free(node->children[0]);
        free(node->children);
    }
}

static void deallocate_stack(void)
{
    free(stack.nodes);
    stack.nodes = ((void*)0);
    stack.size = 0;
    stack.allocated = 0;
}

static void destroy_stack(void)
{
    for (size_t node_idx = 0; node_idx < stack.size; ++node_idx) {
        destroy_node(&stack.nodes[node_idx]);
    }

    deallocate_stack();
}

static inline int term_eq_node(
    const struct term *const term,
    const struct node *const node)
{
    const int node_is_leaf = node->nchildren == 0;

    if (term->is_tk == node_is_leaf) {
        if (node_is_leaf) {
            return term->tk == node->token->tk;
        } else {
            return term->nt == node->nt;
        }
    }

    return 0;
}

static size_t match_rule(const struct rule *const rule, size_t *const at)
{
    const struct term *prev = ((void*)0);
    const struct term *term = &rule->rhs[8];
    ssize_t st_idx = stack.size - 1;

    do {
        if (term_eq_node(term, &stack.nodes[st_idx])) {
            prev = term->is_mt ? term : ((void*)0);
            --term, --st_idx;
        } else if (prev && term_eq_node(prev, &stack.nodes[st_idx])) {
            --st_idx;
        } else if (term->is_mt) {
            prev = ((void*)0);
            --term;
        } else {
            term = ((void*)0);
            break;
        }
    } while (st_idx >= 0 && !(term->is_tk && term->tk == TK_COUNT));

    const int reached_eor = term && term->is_tk && term->tk == TK_COUNT;
    const size_t reduction_size = stack.size - st_idx - 1;

    return reached_eor && reduction_size ?
        (*at = st_idx + 1, reduction_size) : 0;
}

static inline int shift(const struct token *const token)
{
    if (stack.size >= stack.allocated) {
        stack.allocated = (stack.allocated ?: 1) * 8;

        struct node *const tmp = realloc(stack.nodes,
            stack.allocated * sizeof(struct node));

        if (!tmp) {
            return PARSE_NOMEM;
        }

        stack.nodes = tmp;
    }

    stack.nodes[stack.size++] = (struct node) {
        .nchildren = 0,
        .token = token,
    };

    return PARSE_OK;
}

static inline _Bool should_shift_pre(
    const struct rule *const rule,
    const struct token *const tokens,
    size_t *const token_idx)
{
    if (rule->lhs == NT_Unit) {
        return 0;
    }

    while (((tokens[*token_idx].tk) == TK_WSPC || (tokens[*token_idx].tk) == TK_LCOM || (tokens[*token_idx].tk) == TK_BCOM)) {
        ++*token_idx;
    }

    const struct token *const ahead = &tokens[*token_idx];

    if (rule->lhs == NT_Bexp && ahead->tk >= TK_EQUL && ahead->tk <= TK_MODU) {




        const uint8_t p1 = precedence[rule->rhs[8 - 1].tk - TK_EQUL];
        const uint8_t p2 = precedence[ahead->tk - TK_EQUL];

        if (p2 < p1) {
            return 1;
        }
    } else if (rule->lhs == NT_Atom && rule->rhs[8].tk == TK_NAME) {




        if (ahead->tk == TK_ASSN || ahead->tk == TK_LBRA) {
            return 1;
        }
    } else if (rule->lhs == NT_Expr && rule->rhs[8].nt == NT_Aexp) {




        if (ahead->tk == TK_ASSN) {
            return 1;
        }
    }

    return 0;
}

static inline _Bool should_shift_post(
    const struct rule *const rule,
    const struct token *const tokens,
    size_t *const token_idx)
{
    if (rule->lhs == NT_Unit) {
        return 0;
    }

    while (((tokens[*token_idx].tk) == TK_WSPC || (tokens[*token_idx].tk) == TK_LCOM || (tokens[*token_idx].tk) == TK_BCOM)) {
        ++*token_idx;
    }

    const struct token *const ahead = &tokens[*token_idx];

    if (rule->lhs == NT_Cond || rule->lhs == NT_Elif) {

        if (ahead->tk == TK_ELIF || ahead->tk == TK_ELSE) {
            return 1;
        }
    }

    return 0;
}

static int reduce(const struct rule *const rule,
    const size_t at, const size_t size)
{
    struct node *const child_nodes = malloc(size * sizeof(struct node));

    if (!child_nodes) {
        return PARSE_NOMEM;
    }

    struct node *const reduce_at = &stack.nodes[at];
    struct node **const old_children = reduce_at->children;
    reduce_at->children = malloc(size * sizeof(struct node *)) ?: old_children;

    if (reduce_at->children == old_children) {
        return free(child_nodes), PARSE_NOMEM;
    }

    for (size_t child_idx = 0, st_idx = at;
        st_idx < stack.size;
        ++st_idx, ++child_idx) {

        child_nodes[child_idx] = stack.nodes[st_idx];
        reduce_at->children[child_idx] = &child_nodes[child_idx];
    }

    child_nodes[0].children = old_children;
    reduce_at->nchildren = size;
    reduce_at->nt = rule->lhs;
    stack.size = at + 1;
    return PARSE_OK;
}

struct node parse(const struct token *const tokens, const size_t ntokens)
{
    static const struct token
        reject = { .tk = PARSE_REJECT },
        nomem = { .tk = PARSE_NOMEM };

    static const struct node
        err_reject = { .nchildren = 0, .token = &reject },
        err_nomem = { .nchildren = 0, .token = &nomem };
# 405 "parse.c"
    for (size_t token_idx = 0; token_idx < ntokens; ) {
        if (((tokens[token_idx].tk) == TK_WSPC || (tokens[token_idx].tk) == TK_LCOM || (tokens[token_idx].tk) == TK_BCOM)) {
            ++token_idx;
            continue;
        }

        if (shift(&tokens[token_idx++])) { puts("\033[" "1" ";" "31" "m" "Out of memory on shift!" "\033[0m"); return destroy_stack(), err_nomem; };
        printf("\033[" "1" ";" "36" "m" "Shift: " "\033[0m"), print_stack();

        try_reduce_again:;
        const struct rule *rule = grammar;

        do {
            size_t reduction_at, reduction_size;

            if ((reduction_size = match_rule(rule, &reduction_at))) {
                const _Bool do_shift = should_shift_pre(rule, tokens, &token_idx);

                if (!do_shift) {
                    if (reduce(rule, reduction_at, reduction_size)) { puts("\033[" "1" ";" "31" "m" "Out of memory on reduce!" "\033[0m"); return destroy_stack(), err_nomem; };
                    const ptrdiff_t rule_number = rule - grammar + 1;
                    printf("\033[" "1" ";" "34" "m" "Red%02td: " "\033[0m", rule_number), print_stack();
                }

                if (do_shift || should_shift_post(rule, tokens, &token_idx)) {
                    if (shift(&tokens[token_idx++])) { puts("\033[" "1" ";" "31" "m" "Out of memory on shift!" "\033[0m"); return destroy_stack(), err_nomem; };
                    printf("\033[" "1" ";" "36" "m" "Shift: " "\033[0m"), print_stack();
                }

                goto try_reduce_again;
            }
        } while (++rule != grammar + (sizeof(grammar) / sizeof(*grammar)));
    }




    const int accepted = stack.size == 1 &&
        stack.nodes[0].nchildren && stack.nodes[0].nt == NT_Unit;

    printf(accepted ? "\033[" "1" ";" "32" "m" "ACCEPT " "\033[0m" : "\033[" "1" ";" "31" "m" "REJECT " "\033[0m"), print_stack();

    if (accepted) {
        const struct node ret = stack.nodes[0];
        return deallocate_stack(), ret;
    } else {
        return destroy_stack(), err_reject;
    }
}

void destroy_tree(const struct node root)
{
    destroy_node(&root);
}
