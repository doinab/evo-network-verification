#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/llvm-gcc-4.2/bin/../lib/gcc/i686-apple-darwin11/4.2.1/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 214
typedef long unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/opt/local/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 37 "/usr/include/i386/_types.h" 3
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
#line 70
typedef int __darwin_ct_rune_t;








#line 76
typedef union __nesc_unnamed4242 {
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
# 58 "/usr/include/sys/_types.h" 3
struct __darwin_pthread_handler_rec {

  void (*__routine)(void *arg_0x1004d5738);
  void *__arg;
  struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t {
#line 64
  long __sig;
#line 64
  char __opaque[56];
};
#line 65
struct _opaque_pthread_cond_t {
#line 65
  long __sig;
#line 65
  char __opaque[40];
};
#line 66
struct _opaque_pthread_condattr_t {
#line 66
  long __sig;
#line 66
  char __opaque[8];
};
#line 67
struct _opaque_pthread_mutex_t {
#line 67
  long __sig;
#line 67
  char __opaque[56];
};
#line 68
struct _opaque_pthread_mutexattr_t {
#line 68
  long __sig;
#line 68
  char __opaque[8];
};
#line 69
struct _opaque_pthread_once_t {
#line 69
  long __sig;
#line 69
  char __opaque[8];
};
#line 70
struct _opaque_pthread_rwlock_t {
#line 70
  long __sig;
#line 70
  char __opaque[192];
};
#line 71
struct _opaque_pthread_rwlockattr_t {
#line 71
  long __sig;
#line 71
  char __opaque[16];
};
#line 72
struct _opaque_pthread_t {
#line 72
  long __sig;
#line 72
  struct __darwin_pthread_handler_rec *__cleanup_stack;
#line 72
  char __opaque[1168];
};
#line 94
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

#line 112
typedef struct _opaque_pthread_attr_t 
__darwin_pthread_attr_t;

#line 114
typedef struct _opaque_pthread_cond_t 
__darwin_pthread_cond_t;

#line 116
typedef struct _opaque_pthread_condattr_t 
__darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;

#line 119
typedef struct _opaque_pthread_mutex_t 
__darwin_pthread_mutex_t;

#line 121
typedef struct _opaque_pthread_mutexattr_t 
__darwin_pthread_mutexattr_t;

#line 123
typedef struct _opaque_pthread_once_t 
__darwin_pthread_once_t;

#line 125
typedef struct _opaque_pthread_rwlock_t 
__darwin_pthread_rwlock_t;

#line 127
typedef struct _opaque_pthread_rwlockattr_t 
__darwin_pthread_rwlockattr_t;

#line 129
typedef struct _opaque_pthread_t *
__darwin_pthread_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
# 39 "/usr/include/_types.h" 3
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 20 "/usr/include/stdint.h" 3
typedef signed char int8_t;




typedef short int16_t;




typedef int int32_t;




typedef long long int64_t;




typedef unsigned char uint8_t;




typedef unsigned short uint16_t;




typedef unsigned int uint32_t;




typedef unsigned long long uint64_t;



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






typedef long intptr_t;




typedef unsigned long uintptr_t;







typedef long int intmax_t;








typedef long unsigned int uintmax_t;
# 266 "/usr/include/inttypes.h" 3
#line 263
typedef struct __nesc_unnamed4243 {
  intmax_t quot;
  intmax_t rem;
} imaxdiv_t;
# 281 "/opt/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 303
static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 81 "/usr/include/string.h" 3
int memcmp(const void *arg_0x10077a1f0, const void *arg_0x10077a4c8, size_t arg_0x10077a770);
void *memcpy(void *arg_0x100779020, const void *arg_0x1007792f8, size_t arg_0x1007795a0);

void *memset(void *arg_0x10077fbf0, int arg_0x10077fe58, size_t arg_0x10077e140);


int strcmp(const char *arg_0x100783100, const char *arg_0x1007833d8);

char *strcpy(char *arg_0x100782820, const char *arg_0x100782af8);


size_t strlen(const char *arg_0x100787dd8);




char *strrchr(const char *arg_0x100789c18, int arg_0x100789e80);
#line 155
typedef __darwin_ssize_t ssize_t;
# 83 "/usr/include/sys/wait.h" 3
#line 79
typedef enum __nesc_unnamed4244 {
  P_ALL, 
  P_PID, 
  P_PGID
} idtype_t;






typedef __darwin_pid_t pid_t;




typedef __darwin_id_t id_t;
# 39 "/usr/include/i386/signal.h" 3
typedef int sig_atomic_t;
# 43 "/usr/include/mach/i386/_structs.h" 3
struct __darwin_i386_thread_state {

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
#line 89
struct __darwin_fp_control {

  unsigned short __invalid : 1, 
  __denorm : 1, 
  __zdiv : 1, 
  __ovrfl : 1, 
  __undfl : 1, 
  __precis : 1,  : 
  2, 
  __pc : 2, 





  __rc : 2,  : 






  1,  : 
  3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
#line 147
struct __darwin_fp_status {

  unsigned short __invalid : 1, 
  __denorm : 1, 
  __zdiv : 1, 
  __ovrfl : 1, 
  __undfl : 1, 
  __precis : 1, 
  __stkflt : 1, 
  __errsumm : 1, 
  __c0 : 1, 
  __c1 : 1, 
  __c2 : 1, 
  __tos : 3, 
  __c3 : 1, 
  __busy : 1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
#line 191
struct __darwin_mmst_reg {

  char __mmst_reg[10];
  char __mmst_rsrv[6];
};
#line 210
struct __darwin_xmm_reg {

  char __xmm_reg[16];
};
#line 232
struct __darwin_i386_float_state {

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
  char __fpu_rsrv4[14 * 16];
  int __fpu_reserved1;
};


struct __darwin_i386_avx_state {

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
  char __fpu_rsrv4[14 * 16];
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
#line 402
struct __darwin_i386_exception_state {

  __uint16_t __trapno;
  __uint16_t __cpu;
  __uint32_t __err;
  __uint32_t __faultvaddr;
};
#line 422
struct __darwin_x86_debug_state32 {

  unsigned int __dr0;
  unsigned int __dr1;
  unsigned int __dr2;
  unsigned int __dr3;
  unsigned int __dr4;
  unsigned int __dr5;
  unsigned int __dr6;
  unsigned int __dr7;
};
#line 454
struct __darwin_x86_thread_state64 {

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
#line 509
struct __darwin_x86_float_state64 {

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
  char __fpu_rsrv4[6 * 16];
  int __fpu_reserved1;
};


struct __darwin_x86_avx_state64 {

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
  char __fpu_rsrv4[6 * 16];
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
#line 751
struct __darwin_x86_exception_state64 {

  __uint16_t __trapno;
  __uint16_t __cpu;
  __uint32_t __err;
  __uint64_t __faultvaddr;
};
#line 771
struct __darwin_x86_debug_state64 {

  __uint64_t __dr0;
  __uint64_t __dr1;
  __uint64_t __dr2;
  __uint64_t __dr3;
  __uint64_t __dr4;
  __uint64_t __dr5;
  __uint64_t __dr6;
  __uint64_t __dr7;
};
# 48 "/usr/include/i386/_structs.h" 3
struct __darwin_mcontext32 {

  struct __darwin_i386_exception_state __es;
  struct __darwin_i386_thread_state __ss;
  struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32 {

  struct __darwin_i386_exception_state __es;
  struct __darwin_i386_thread_state __ss;
  struct __darwin_i386_avx_state __fs;
};
#line 86
struct __darwin_mcontext64 {

  struct __darwin_x86_exception_state64 __es;
  struct __darwin_x86_thread_state64 __ss;
  struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64 {

  struct __darwin_x86_exception_state64 __es;
  struct __darwin_x86_thread_state64 __ss;
  struct __darwin_x86_avx_state64 __fs;
};
#line 127
typedef struct __darwin_mcontext64 *mcontext_t;
# 75 "/usr/include/sys/_structs.h" 3
struct __darwin_sigaltstack {

  void *ss_sp;
  __darwin_size_t ss_size;
  int ss_flags;
};
#line 128
struct __darwin_ucontext {

  int uc_onstack;
  __darwin_sigset_t uc_sigmask;
  struct __darwin_sigaltstack uc_stack;
  struct __darwin_ucontext *uc_link;
  __darwin_size_t uc_mcsize;
  struct __darwin_mcontext64 *uc_mcontext;
};
#line 218
typedef struct __darwin_sigaltstack stack_t;








typedef struct __darwin_ucontext ucontext_t;
# 157 "/usr/include/sys/signal.h" 3
typedef __darwin_pthread_attr_t pthread_attr_t;




typedef __darwin_sigset_t sigset_t;









typedef __darwin_uid_t uid_t;


union sigval {

  int sival_int;
  void *sival_ptr;
};





struct sigevent {
  int sigev_notify;
  int sigev_signo;
  union sigval sigev_value;
  void (*sigev_notify_function)(union sigval arg_0x1010108d0);
  pthread_attr_t *sigev_notify_attributes;
};
#line 205
#line 194
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
#line 286
union __sigaction_u {
  void (*__sa_handler)(int arg_0x1010169f8);
  void (*__sa_sigaction)(int arg_0x1010150c8, struct __siginfo *arg_0x101015428, 
  void *arg_0x1010156e8);
};


struct __sigaction {
  union __sigaction_u __sigaction_u;
  void (*sa_tramp)(void *arg_0x10101d5e0, int arg_0x10101d848, int arg_0x10101dab0, siginfo_t *arg_0x10101ddb0, void *arg_0x10101c0c8);
  sigset_t sa_mask;
  int sa_flags;
};




struct sigaction {
  union __sigaction_u __sigaction_u;
  sigset_t sa_mask;
  int sa_flags;
};
#line 348
typedef void (*sig_t)(int arg_0x10101ab40);
#line 365
struct sigvec {
  void (*sv_handler)(int arg_0x101027608);
  int sv_mask;
  int sv_flags;
};
#line 384
struct sigstack {
  char *ss_sp;
  int ss_onstack;
};
# 100 "/usr/include/sys/_structs.h" 3
struct timeval {

  __darwin_time_t tv_sec;
  __darwin_suseconds_t tv_usec;
};
# 89 "/usr/include/sys/resource.h" 3
typedef __uint64_t rlim_t;
#line 151
struct rusage {
  struct timeval ru_utime;
  struct timeval ru_stime;








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
#line 222
struct rlimit {
  rlim_t rlim_cur;
  rlim_t rlim_max;
};
# 201 "/usr/include/sys/wait.h" 3
union wait {
  int w_status;



  struct __nesc_unnamed4245 {

    unsigned int w_Termsig : 7, 
    w_Coredump : 1, 
    w_Retcode : 8, 
    w_Filler : 16;
  } 






  w_T;





  struct __nesc_unnamed4246 {

    unsigned int w_Stopval : 8, 
    w_Stopsig : 8, 
    w_Filler : 16;
  } 





  w_S;
};
# 81 "/usr/include/stdlib.h" 3
typedef __darwin_ct_rune_t ct_rune_t;




typedef __darwin_rune_t rune_t;
#line 100
#line 97
typedef struct __nesc_unnamed4247 {
  int quot;
  int rem;
} div_t;




#line 102
typedef struct __nesc_unnamed4248 {
  long quot;
  long rem;
} ldiv_t;





#line 108
typedef struct __nesc_unnamed4249 {
  long long quot;
  long long rem;
} lldiv_t;
#line 160
void free(void *arg_0x101054590);








void *malloc(size_t arg_0x10105a020);
# 80 "/usr/include/i386/types.h" 3
typedef unsigned char u_int8_t;




typedef unsigned short u_int16_t;




typedef unsigned int u_int32_t;




typedef unsigned long long u_int64_t;


typedef int64_t register_t;
#line 114
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 258 "/usr/include/stdlib.h" 3
typedef __darwin_dev_t dev_t;




typedef __darwin_mode_t mode_t;
# 49 "/usr/include/architecture/i386/math.h" 3
typedef float float_t;
typedef double double_t;
#line 301
extern double log(double arg_0x101115020);
#line 343
extern double pow(double arg_0x1011290c8, double arg_0x101129330);


extern double sqrt(double arg_0x1011285a0);





extern double erfc(double arg_0x101125590);
#line 369
extern double floor(double arg_0x10112f680);
#line 570
struct exception {
  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 70 "/usr/include/runetype.h" 3
typedef __darwin_wint_t wint_t;
#line 86
#line 81
typedef struct __nesc_unnamed4250 {
  __darwin_rune_t __min;
  __darwin_rune_t __max;
  __darwin_rune_t __map;
  __uint32_t *__types;
} _RuneEntry;




#line 88
typedef struct __nesc_unnamed4251 {
  int __nranges;
  _RuneEntry *__ranges;
} _RuneRange;




#line 93
typedef struct __nesc_unnamed4252 {
  char __name[14];
  __uint32_t __mask;
} _RuneCharClass;
#line 127
#line 98
typedef struct __nesc_unnamed4253 {
  char __magic[8];
  char __encoding[32];

  __darwin_rune_t (*__sgetrune)(const char *arg_0x10118d0c8, __darwin_size_t arg_0x10118d3c8, char const **arg_0x10118d6d8);
  int (*__sputrune)(__darwin_rune_t arg_0x10118ddd0, char *arg_0x10118c0c8, __darwin_size_t arg_0x10118c3c8, char **arg_0x10118c6a0);
  __darwin_rune_t __invalid_rune;

  __uint32_t __runetype[1 << 8];
  __darwin_rune_t __maplower[1 << 8];
  __darwin_rune_t __mapupper[1 << 8];






  _RuneRange __runetype_ext;
  _RuneRange __maplower_ext;
  _RuneRange __mapupper_ext;

  void *__variable;
  int __variable_len;




  int __ncharclasses;
  _RuneCharClass *__charclasses;
} _RuneLocale;
# 73 "/usr/include/stdio.h" 3
typedef __darwin_va_list va_list;
#line 85
typedef __darwin_off_t fpos_t;










struct __sbuf {
  unsigned char *_base;
  int _size;
};


struct __sFILEX;
#line 161
#line 130
typedef struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;


  void *_cookie;
  int (*_close)(void *arg_0x1011d60c8);
  int (*_read)(void *arg_0x1011d6730, char *arg_0x1011d69d0, int arg_0x1011d6c38);
  fpos_t (*_seek)(void *arg_0x1011d4338, fpos_t arg_0x1011d45e0, int arg_0x1011d4848);
  int (*_write)(void *arg_0x1011d3020, const char *arg_0x1011d32f8, int arg_0x1011d3560);


  struct __sbuf _ub;
  struct __sFILEX *_extra;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  fpos_t _offset;
} FILE;
#line 243
int fflush(FILE *arg_0x1011dc0c8);








int fprintf(FILE *arg_0x1011e9ad8, const char *arg_0x1011e9db0, ...) __attribute((__format__(__printf__, 2, 3))) ;
#line 267
int printf(const char *arg_0x1011eb338, ...) __attribute((__format__(__printf__, 1, 2))) ;
#line 282
int vfprintf(FILE *arg_0x101201910, const char *arg_0x101201be8, va_list arg_0x101200020) __attribute((__format__(__printf__, 2, 0))) ;
#line 306
FILE *fdopen(int arg_0x1011fc840, const char *arg_0x1011fcb18) __asm ("_""fdopen");

int fileno(FILE *arg_0x10120d930);
#line 414
typedef __darwin_off_t off_t;










int snprintf(char *arg_0x10121c868, size_t arg_0x10121cb10, const char *arg_0x10121cde8, ...) __attribute((__format__(__printf__, 3, 4))) ;
# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/tos.h"
typedef uint8_t bool;










enum __nesc_unnamed4254 {
#line 76
  FALSE = 0, TRUE = 1
};
extern uint16_t TOS_NODE_ID;
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_tossim.h"
typedef long long int sim_time_t;

void sim_init();

void sim_end();

void sim_random_seed(int seed);
int sim_random();

sim_time_t sim_time();
void sim_set_time(sim_time_t time);
sim_time_t sim_ticks_per_sec();

unsigned long sim_node();
void sim_set_node(unsigned long node);

int sim_print_time(char *buf, int bufLen, sim_time_t time);
int sim_print_now(char *buf, int bufLen);
char *sim_time_string();

void sim_add_channel(char *channel, FILE *file);
bool sim_remove_channel(char *channel, FILE *file);

bool sim_run_next_event();
# 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_event_queue.h"
struct sim_event;
typedef struct sim_event sim_event_t;

struct sim_event {
  sim_time_t time;
  unsigned long mote;
  bool force;

  bool cancelled;
  void *data;

  void (*handle)(sim_event_t *e);
  void (*cleanup)(sim_event_t *e);
};

static sim_event_t *sim_queue_allocate_event();

void sim_queue_init();
void sim_queue_insert(sim_event_t *event);
bool sim_queue_is_empty();
long long int sim_queue_peek_time();
sim_event_t *sim_queue_pop();

void sim_queue_cleanup_none(sim_event_t *e);
void sim_queue_cleanup_event(sim_event_t *e);
void sim_queue_cleanup_data(sim_event_t *e);
void sim_queue_cleanup_total(sim_event_t *e);
# 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_mote.h"
long long int sim_mote_euid(int mote);
void sim_mote_set_euid(int mote, long long int euid);

long long int sim_mote_start_time(int mote);
void sim_mote_set_start_time(int mote, long long int t);

bool sim_mote_is_on(int mote);
void sim_mote_turn_on(int mote);
void sim_mote_turn_off(int mote);
int sim_mote_get_variable_info(int mote, char *name, void **addr, size_t *len);
void sim_mote_enqueue_boot_event(int mote);
# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_log.h"
static inline void sim_log_init();
static inline void sim_log_add_channel(char *output, FILE *file);
static inline bool sim_log_remove_channel(char *output, FILE *file);
static void sim_log_commit_change();

static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
# 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/tos.h"
struct __nesc_attr_atmostonce {
};
#line 98
struct __nesc_attr_atleastonce {
};
#line 99
struct __nesc_attr_exactlyonce {
};
# 43 "/usr/llvm-gcc-4.2/bin/../lib/gcc/i686-apple-darwin11/4.2.1/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 9 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/hashtable.h"
struct hashtable;
typedef struct hashtable hashtable_t;
#line 78
struct hashtable *
create_hashtable(unsigned int minsize, 
unsigned int (*hashfunction)(void *arg_0x101262d98), 
int (*key_eq_fn)(void *arg_0x101261548, void *arg_0x1012617e8));
#line 103
#line 102
int 
hashtable_insert(struct hashtable *h, void *k, void *v);
#line 120
void *
hashtable_search(struct hashtable *h, void *k);
# 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_log.c"
enum __nesc_unnamed4255 {
  DEFAULT_CHANNEL_SIZE = 8
};




#line 51
typedef struct sim_log_output {
  int num;
  FILE **files;
} sim_log_output_t;






#line 56
typedef struct sim_log_channel {
  const char *name;
  int numOutputs;
  int size;
  FILE **outputs;
} sim_log_channel_t;

enum __nesc_unnamed4256 {
  SIM_LOG_OUTPUT_COUNT = 348U
};

sim_log_output_t outputs[SIM_LOG_OUTPUT_COUNT];
struct hashtable *channelTable = (void *)0;


inline static unsigned int sim_log_hash(void *key);
inline static int sim_log_eq(void *key1, void *key2);
#line 84
static void fillInOutput(int id, char *name);
#line 159
static inline void sim_log_init();
#line 172
static inline void sim_log_add_channel(char *name, FILE *file);
#line 212
static inline bool sim_log_remove_channel(char *output, FILE *file);
#line 234
static void sim_log_commit_change();
#line 246
static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
#line 261
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
#line 276
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
#line 306
inline static unsigned int sim_log_hash(void *key);










inline static int sim_log_eq(void *key1, void *key2);
# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/heap.h"
#line 61
typedef struct heap {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long int heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long int *key);
static inline void heap_insert(heap_t *heap, void *data, long long int key);
# 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/heap.c"
const int STARTING_SIZE = 511;






#line 62
typedef struct node {
  void *data;
  long long int key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);








static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long int heap_get_min_key(heap_t *heap);
#line 114
static void *heap_pop_min_data(heap_t *heap, long long int *key);
#line 130
static inline void expand_heap(heap_t *heap);
#line 144
static inline void heap_insert(heap_t *heap, void *data, long long int key);
#line 158
static void swap(node_t *first, node_t *second);
#line 171
static void down_heap(heap_t *heap, int findex);
#line 197
static void up_heap(heap_t *heap, int findex);
# 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
static heap_t eventHeap;

void sim_queue_init()   ;



void sim_queue_insert(sim_event_t *event)   ;




sim_event_t *sim_queue_pop()   ;




bool sim_queue_is_empty()   ;



long long int sim_queue_peek_time()   ;









void sim_queue_cleanup_none(sim_event_t *event)   ;




void sim_queue_cleanup_event(sim_event_t *event)   ;




void sim_queue_cleanup_data(sim_event_t *event)   ;





void sim_queue_cleanup_total(sim_event_t *event)   ;






static sim_event_t *sim_queue_allocate_event();
# 88 "/usr/include/sys/_structs.h" 3
struct timespec {

  __darwin_time_t tv_sec;
  long tv_nsec;
};
#line 186
#line 184
typedef struct fd_set {
  __int32_t fds_bits[1024 % (sizeof(__int32_t ) * 8) == 0 ? 1024 / (sizeof(__int32_t ) * 8) : 1024 / (sizeof(__int32_t ) * 8) + 1];
} fd_set;
# 82 "/usr/include/sys/time.h" 3
typedef __darwin_time_t time_t;




typedef __darwin_suseconds_t suseconds_t;






struct itimerval {
  struct timeval it_interval;
  struct timeval it_value;
};
#line 144
struct timezone {
  int tz_minuteswest;
  int tz_dsttime;
};
#line 187
struct clockinfo {
  int hz;
  int tick;
  int tickadj;
  int stathz;
  int profhz;
};
# 77 "/usr/include/time.h" 3
typedef __darwin_clock_t clock_t;
#line 90
struct tm {
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
  long tm_gmtoff;
  char *tm_zone;
};
#line 127
struct tm;
struct tm;
struct tm;
#line 142
struct tm;
struct tm;
# 211 "/usr/include/sys/time.h" 3
int gettimeofday(struct timeval *arg_0x10136d9e8, void *arg_0x10136dc88);
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_noise.h"
enum __nesc_unnamed4257 {
  NOISE_MIN = -115, 
  NOISE_MAX = -5, 
  NOISE_MIN_QUANTIZE = -115, 
  NOISE_QUANTIZE_INTERVAL = 5, 
  NOISE_BIN_SIZE = (NOISE_MAX - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1, 
  NOISE_HISTORY = 20, 
  NOISE_DEFAULT_ELEMENT_SIZE = 8, 
  NOISE_HASHTABLE_SIZE = 128, 
  NOISE_MIN_TRACE = 128, 
  NOISE_NUM_VALUES = NOISE_MAX - NOISE_MIN + 1
};








#line 64
typedef struct sim_noise_hash_t {
  char key[NOISE_HISTORY];
  int numElements;
  int size;
  char *elements;
  char flag;
  float dist[NOISE_NUM_VALUES];
} sim_noise_hash_t;
#line 83
#line 73
typedef struct sim_noise_node_t {
  char key[NOISE_HISTORY];
  char freqKey[NOISE_HISTORY];
  char lastNoiseVal;
  uint32_t noiseGenTime;
  struct hashtable *noiseTable;
  char *noiseTrace;
  uint32_t noiseTraceLen;
  uint32_t noiseTraceIndex;
  bool generated;
} sim_noise_node_t;

void sim_noise_init();

char sim_noise_generate(uint16_t node_id, uint32_t cur_t);
void sim_noise_trace_add(uint16_t node_id, char val);
void sim_noise_create_model(uint16_t node_id);
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
static sim_time_t sim_ticks;
static unsigned long current_node;
static int sim_seed;

static int __nesc_nido_resolve(int mote, char *varname, uintptr_t *addr, size_t *size);

void sim_init()   ;
#line 80
void sim_end()   ;





int sim_random()   ;
#line 102
void sim_random_seed(int seed)   ;







sim_time_t sim_time()   ;


void sim_set_time(sim_time_t t)   ;



sim_time_t sim_ticks_per_sec()   ;



unsigned long sim_node()   ;


void sim_set_node(unsigned long node)   ;




bool sim_run_next_event()   ;
#line 156
int sim_print_time(char *buf, int len, sim_time_t ftime)   ;
#line 179
int sim_print_now(char *buf, int len)   ;



char simTimeBuf[128];
char *sim_time_string()   ;




void sim_add_channel(char *channel, FILE *file)   ;



bool sim_remove_channel(char *channel, FILE *file)   ;
# 99 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_csma.h"
int sim_csma_init_high();
int sim_csma_init_low();
int sim_csma_high();
int sim_csma_low();
int sim_csma_symbols_per_sec();
int sim_csma_bits_per_symbol();
int sim_csma_preamble_length();
int sim_csma_exponent_base();
int sim_csma_max_iterations();
int sim_csma_min_free_samples();
int sim_csma_rxtx_delay();
int sim_csma_ack_time();

void sim_csma_set_init_high(int val);
void sim_csma_set_init_low(int val);
void sim_csma_set_high(int val);
void sim_csma_set_low(int val);
void sim_csma_set_symbols_per_sec(int val);
void sim_csma_set_bits_per_symbol(int val);
void sim_csma_set_preamble_length(int val);
void sim_csma_set_exponent_base(int val);
void sim_csma_set_max_iterations(int val);
void sim_csma_set_min_free_samples(int val);
void sim_csma_set_rxtx_delay(int val);
void sim_csma_set_ack_time(int val);
# 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_csma.c"
int csmaInitHigh = 640;
int csmaInitLow = 20;
int csmaHigh = 160;
int csmaLow = 20;
int csmaSymbolsPerSec = 65536;
int csmaBitsPerSymbol = 4;
int csmaPreambleLength = 12;
int csmaExponentBase = 1;
int csmaMaxIterations = 0;
int csmaMinFreeSamples = 1;
int csmaRxTxDelay = 11;
int csmaAckTime = 34;

int sim_csma_init_high()   ;


int sim_csma_init_low()   ;


int sim_csma_high()   ;


int sim_csma_low()   ;


int sim_csma_symbols_per_sec()   ;


int sim_csma_bits_per_symbol()   ;


int sim_csma_preamble_length()   ;


int sim_csma_exponent_base()   ;


int sim_csma_max_iterations()   ;


int sim_csma_min_free_samples()   ;


int sim_csma_rxtx_delay()   ;


int sim_csma_ack_time()   ;





void sim_csma_set_init_high(int val)   ;


void sim_csma_set_init_low(int val)   ;


void sim_csma_set_high(int val)   ;


void sim_csma_set_low(int val)   ;


void sim_csma_set_symbols_per_sec(int val)   ;


void sim_csma_set_bits_per_symbol(int val)   ;


void sim_csma_set_preamble_length(int val)   ;


void sim_csma_set_exponent_base(int val)   ;


void sim_csma_set_max_iterations(int val)   ;


void sim_csma_set_min_free_samples(int val)   ;


void sim_csma_set_rxtx_delay(int val)   ;


void sim_csma_set_ack_time(int val)   ;
# 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_gain.h"
#line 53
typedef struct gain_entry {
  int mote;
  double gain;
  struct gain_entry *next;
} gain_entry_t;

void sim_gain_add(int src, int dest, double gain);
double sim_gain_value(int src, int dest);
bool sim_gain_connected(int src, int dest);
void sim_gain_remove(int src, int dest);
void sim_gain_set_noise_floor(int node, double mean, double range);
double sim_gain_sample_noise(int node);



void sim_gain_set_sensitivity(double value);
double sim_gain_sensitivity();

gain_entry_t *sim_gain_first(int src);
gain_entry_t *sim_gain_next(gain_entry_t *e);
# 6 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_gain.c"
#line 3
typedef struct sim_gain_noise {
  double mean;
  double range;
} sim_gain_noise_t;


gain_entry_t *connectivity[1000 + 1];
sim_gain_noise_t localNoise[1000 + 1];
double sensitivity = 4.0;

static inline gain_entry_t *sim_gain_allocate_link(int mote);
void sim_gain_deallocate_link(gain_entry_t *linkToDelete);

gain_entry_t *sim_gain_first(int src)   ;






gain_entry_t *sim_gain_next(gain_entry_t *currentLink)   ;



void sim_gain_add(int src, int dest, double gain)   ;
#line 55
double sim_gain_value(int src, int dest)   ;
#line 73
bool sim_gain_connected(int src, int dest)   ;
#line 89
void sim_gain_remove(int src, int dest)   ;
#line 124
void sim_gain_set_noise_floor(int node, double mean, double range)   ;
#line 148
double sim_gain_sample_noise(int node)   ;
#line 161
static inline gain_entry_t *sim_gain_allocate_link(int mote);







void sim_gain_deallocate_link(gain_entry_t *linkToDelete)   ;



void sim_gain_set_sensitivity(double s)   ;



double sim_gain_sensitivity()   ;
# 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/randomlib.c"
static double randU[97];
#line 39
static double randC;
#line 39
static double randCD;
#line 39
static double randCM;
static int i97;
#line 40
static int j97;
static int test = FALSE;
#line 55
static inline void RandomInitialise(int ij, int kl);
#line 103
static double RandomUniform(void );
# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/randomlib.h"
static inline void RandomInitialise(int arg_0x101460d00, int arg_0x10145d020);
static double RandomUniform(void );
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_noise.c"
int numCase1 = 0;
int numCase2 = 0;
int numTotal = 0;


uint32_t FreqKeyNum = 0;

sim_noise_node_t noiseData[1000];

inline static unsigned int sim_noise_hash(void *key);
inline static int sim_noise_eq(void *key1, void *key2);

void makeNoiseModel(uint16_t node_id);
void makePmfDistr(uint16_t node_id);
uint8_t search_bin_num(char noise);

void sim_noise_init()   ;
#line 84
void sim_noise_create_model(uint16_t node_id)   ;
#line 97
void sim_noise_trace_add(uint16_t node_id, char noiseVal)   ;
#line 113
uint8_t search_bin_num(char noise)   ;









char search_noise_from_bin_num(int i)   ;






inline static unsigned int sim_noise_hash(void *key);









inline static int sim_noise_eq(void *key1, void *key2);



void sim_noise_add(uint16_t node_id, char noise)   ;
#line 192
void sim_noise_dist(uint16_t node_id)   ;
#line 245
void arrangeKey(uint16_t node_id)   ;









void makePmfDistr(uint16_t node_id)   ;
#line 283
int dummy;
static inline void sim_noise_alarm();



char sim_noise_gen(uint16_t node_id)   ;
#line 364
char sim_noise_generate(uint16_t node_id, uint32_t cur_t)   ;
#line 419
void makeNoiseModel(uint16_t node_id)   ;
# 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_packet.h"
typedef struct sim_packet {
} 
#line 59
sim_packet_t;

void sim_packet_set_source(sim_packet_t *msg, uint16_t src);
uint16_t sim_packet_source(sim_packet_t *msg);

void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest);
uint16_t sim_packet_destination(sim_packet_t *msg);

void sim_packet_set_length(sim_packet_t *msg, uint8_t len);
uint16_t sim_packet_length(sim_packet_t *msg);

void sim_packet_set_type(sim_packet_t *msg, uint8_t type);
uint8_t sim_packet_type(sim_packet_t *msg);

uint8_t *sim_packet_data(sim_packet_t *msg);
void sim_packet_set_strength(sim_packet_t *msg, uint16_t str);

void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t);
uint8_t sim_packet_max_length(sim_packet_t *msg);

sim_packet_t *sim_packet_allocate();
void sim_packet_free(sim_packet_t *m);
# 6 "/Users/doinabucur/local/src/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4258 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4259 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 12 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimRadioMsg.h"
#line 6
typedef nx_struct tossim_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) tossim_header_t;



#line 14
typedef nx_struct tossim_footer {
  nxle_uint16_t crc;
} __attribute__((packed)) tossim_footer_t;





#line 18
typedef nx_struct tossim_metadata {
  nx_int8_t strength;
  nx_uint8_t ack;
  nx_uint16_t time;
} __attribute__((packed)) tossim_metadata_t;
# 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4260 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4261 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4262 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/platform_message.h"
#line 50
typedef union message_header {
  tossim_header_t tossim;
  serial_header_t serial;
} message_header_t;



#line 55
typedef union message_footer {
  tossim_footer_t tossim;
} message_footer_t;



#line 59
typedef union message_metadata {
  tossim_metadata_t tossim;
} message_metadata_t;
# 19 "/Users/doinabucur/local/src/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_packet.c"
void active_message_deliver(int node, message_t *m, sim_time_t t);

inline static tossim_header_t *getHeader(message_t *msg);



void sim_packet_set_source(sim_packet_t *msg, uint16_t src)   ;




uint16_t sim_packet_source(sim_packet_t *msg)   ;




void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)   ;




uint16_t sim_packet_destination(sim_packet_t *msg)   ;




void sim_packet_set_length(sim_packet_t *msg, uint8_t length)   ;



uint16_t sim_packet_length(sim_packet_t *msg)   ;




void sim_packet_set_type(sim_packet_t *msg, uint8_t type)   ;




uint8_t sim_packet_type(sim_packet_t *msg)   ;




uint8_t *sim_packet_data(sim_packet_t *p)   ;



void sim_packet_set_strength(sim_packet_t *p, uint16_t str)   ;




void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)   ;







uint8_t sim_packet_max_length(sim_packet_t *msg)   ;



sim_packet_t *sim_packet_allocate()   ;



void sim_packet_free(sim_packet_t *p)   ;
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4263 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 25 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/atm128_sim.h"
enum __nesc_unnamed4264 {

  ATM128_PINF = 0x00, 


  ATM128_PINE = 0x01, 


  ATM128_DDRE = 0x02, 


  ATM128_PORTE = 0x03, 


  ATM128_ADCW = 0x04, 

  ATM128_ADC = 0x04, 

  ATM128_ADCL = 0x04, 
  ATM128_ADCH = 0x05, 


  ATM128_ADCSR = 0x06, 
  ATM128_ADCSRA = 0x06, 


  ATM128_ADMUX = 0x07, 


  ATM128_ACSR = 0x08, 


  ATM128_UBRR0L = 0x09, 


  ATM128_UCSR0B = 0x0A, 


  ATM128_UCSR0A = 0x0B, 


  ATM128_UDR0 = 0x0C, 


  ATM128_SPCR = 0x0D, 


  ATM128_SPSR = 0x0E, 


  ATM128_SPDR = 0x0F, 


  ATM128_PIND = 0x10, 


  ATM128_DDRD = 0x11, 


  ATM128_PORTD = 0x12, 


  ATM128_PINC = 0x13, 


  ATM128_DDRC = 0x14, 


  ATM128_PORTC = 0x15, 


  ATM128_PINB = 0x16, 


  ATM128_DDRB = 0x17, 


  ATM128_PORTB = 0x18, 


  ATM128_PINA = 0x19, 


  ATM128_DDRA = 0x1A, 


  ATM128_PORTA = 0x1B, 




  ATM128_SFIOR = 0x20, 


  ATM128_WDTCR = 0x21, 


  ATM128_OCDR = 0x22, 


  ATM128_OCR2 = 0x23, 


  ATM128_TCNT2 = 0x24, 


  ATM128_TCCR2 = 0x25, 


  ATM128_ICR1 = 0x26, 
  ATM128_ICR1L = 0x26, 
  ATM128_ICR1H = 0x27, 


  ATM128_OCR1B = 0x28, 
  ATM128_OCR1BL = 0x28, 
  ATM128_OCR1BH = 0x29, 


  ATM128_OCR1A = 0x2A, 
  ATM128_OCR1AL = 0x2A, 
  ATM128_OCR1AH = 0x2B, 


  ATM128_TCNT1 = 0x2C, 
  ATM128_TCNT1L = 0x2C, 
  ATM128_TCNT1H = 0x2D, 


  ATM128_TCCR1B = 0x2E, 


  ATM128_TCCR1A = 0x2F, 


  ATM128_ASSR = 0x30, 


  ATM128_OCR0 = 0x31, 


  ATM128_TCNT0 = 0x32, 


  ATM128_TCCR0 = 0x33, 


  ATM128_MCUSR = 0x34, 
  ATM128_MCUCSR = 0x34, 


  ATM128_MCUCR = 0x35, 


  ATM128_TIFR = 0x36, 


  ATM128_TIMSK = 0x37, 


  ATM128_EIFR = 0x38, 


  ATM128_EIMSK = 0x39, 


  ATM128_EICRB = 0x3A, 


  ATM128_RAMPZ = 0x3B, 


  ATM128_XDIV = 0x3C, 




  ATM128_SREG = 0x3F, 




  ATM128_DDRF = 0x61, 


  ATM128_PORTF = 0x62, 


  ATM128_PING = 0x63, 


  ATM128_DDRG = 0x64, 


  ATM128_PORTG = 0x65, 


  ATM128_SPMCR = 0x68, 
  ATM128_SPMCSR = 0x68, 


  ATM128_EICRA = 0x6A, 


  ATM128_XMCRB = 0x6C, 


  ATM128_XMCRA = 0x6D, 


  ATM128_OSCCAL = 0x6F, 


  ATM128_TWBR = 0x70, 


  ATM128_TWSR = 0x71, 


  ATM128_TWAR = 0x72, 


  ATM128_TWDR = 0x73, 


  ATM128_TWCR = 0x74, 


  ATM128_OCR1C = 0x78, 
  ATM128_OCR1CL = 0x78, 
  ATM128_OCR1CH = 0x79, 


  ATM128_TCCR1C = 0x7A, 


  ATM128_ETIFR = 0x7C, 


  ATM128_ETIMSK = 0x7D, 


  ATM128_ICR3 = 0x80, 
  ATM128_ICR3L = 0x80, 
  ATM128_ICR3H = 0x81, 


  ATM128_OCR3C = 0x82, 
  ATM128_OCR3CL = 0x82, 
  ATM128_OCR3CH = 0x83, 


  ATM128_OCR3B = 0x84, 
  ATM128_OCR3BL = 0x84, 
  ATM128_OCR3BH = 0x85, 


  ATM128_OCR3A = 0x86, 
  ATM128_OCR3AL = 0x86, 
  ATM128_OCR3AH = 0x87, 


  ATM128_TCNT3 = 0x88, 
  ATM128_TCNT3L = 0x88, 
  ATM128_TCNT3H = 0x89, 


  ATM128_TCCR3B = 0x8A, 


  ATM128_TCCR3A = 0x8B, 


  ATM128_TCCR3C = 0x8C, 


  ATM128_UBRR0H = 0x90, 


  ATM128_UCSR0C = 0x95, 


  ATM128_UBRR1H = 0x98, 


  ATM128_UBRR1L = 0x99, 


  ATM128_UCSR1B = 0x9A, 


  ATM128_UCSR1A = 0x9B, 


  ATM128_UDR1 = 0x9C, 


  ATM128_UCSR1C = 0x9D
};
#line 673
enum __nesc_unnamed4265 {

  TWINT = 7, 
  TWEA = 6, 
  TWSTA = 5, 
  TWSTO = 4, 
  TWWC = 3, 
  TWEN = 2, 
  TWIE = 0, 


  TWA6 = 7, 
  TWA5 = 6, 
  TWA4 = 5, 
  TWA3 = 4, 
  TWA2 = 3, 
  TWA1 = 2, 
  TWA0 = 1, 
  TWGCE = 0, 


  TWS7 = 7, 
  TWS6 = 6, 
  TWS5 = 5, 
  TWS4 = 4, 
  TWS3 = 3, 
  TWPS1 = 1, 
  TWPS0 = 0, 


  SRL2 = 6, 
  SRL1 = 5, 
  SRL0 = 4, 
  SRW01 = 3, 
  SRW00 = 2, 
  SRW11 = 1, 


  XMBK = 7, 
  XMM2 = 2, 
  XMM1 = 1, 
  XMM0 = 0, 


  XDIVEN = 7, 
  XDIV6 = 6, 
  XDIV5 = 5, 
  XDIV4 = 4, 
  XDIV3 = 3, 
  XDIV2 = 2, 
  XDIV1 = 1, 
  XDIV0 = 0, 


  RAMPZ0 = 0, 


  ISC31 = 7, 
  ISC30 = 6, 
  ISC21 = 5, 
  ISC20 = 4, 
  ISC11 = 3, 
  ISC10 = 2, 
  ISC01 = 1, 
  ISC00 = 0, 


  ISC71 = 7, 
  ISC70 = 6, 
  ISC61 = 5, 
  ISC60 = 4, 
  ISC51 = 3, 
  ISC50 = 2, 
  ISC41 = 1, 
  ISC40 = 0, 


  SPMIE = 7, 
  RWWSB = 6, 
  RWWSRE = 4, 
  BLBSET = 3, 
  PGWRT = 2, 
  PGERS = 1, 
  SPMEN = 0, 


  INT7 = 7, 
  INT6 = 6, 
  INT5 = 5, 
  INT4 = 4, 
  INT3 = 3, 
  INT2 = 2, 
  INT1 = 1, 
  INT0 = 0, 


  INTF7 = 7, 
  INTF6 = 6, 
  INTF5 = 5, 
  INTF4 = 4, 
  INTF3 = 3, 
  INTF2 = 2, 
  INTF1 = 1, 
  INTF0 = 0, 


  OCIE2 = 7, 
  TOIE2 = 6, 
  TICIE1 = 5, 
  OCIE1A = 4, 
  OCIE1B = 3, 
  TOIE1 = 2, 
  OCIE0 = 1, 
  TOIE0 = 0, 


  OCF2 = 7, 
  TOV2 = 6, 
  ICF1 = 5, 
  OCF1A = 4, 
  OCF1B = 3, 
  TOV1 = 2, 
  OCF0 = 1, 
  TOV0 = 0, 


  TICIE3 = 5, 
  OCIE3A = 4, 
  OCIE3B = 3, 
  TOIE3 = 2, 
  OCIE3C = 1, 
  OCIE1C = 0, 


  ICF3 = 5, 
  OCF3A = 4, 
  OCF3B = 3, 
  TOV3 = 2, 
  OCF3C = 1, 
  OCF1C = 0, 


  SRE = 7, 
  SRW = 6, 
  SRW10 = 6, 
  SE = 5, 
  SM1 = 4, 
  SM0 = 3, 
  SM2 = 2, 
  IVSEL = 1, 
  IVCE = 0, 


  JTD = 7, 
  JTRF = 4, 
  WDRF = 3, 
  BORF = 2, 
  EXTRF = 1, 
  PORF = 0, 


  FOC = 7, 
  WGM0 = 6, 
  COM1 = 5, 
  COM0 = 4, 
  WGM1 = 3, 
  CS2 = 2, 
  CS1 = 1, 
  CS0 = 0, 


  FOC0 = 7, 
  WGM00 = 6, 
  COM01 = 5, 
  COM00 = 4, 
  WGM01 = 3, 
  CS02 = 2, 
  CS01 = 1, 
  CS00 = 0, 


  FOC2 = 7, 
  WGM20 = 6, 
  COM21 = 5, 
  COM20 = 4, 
  WGM21 = 3, 
  CS22 = 2, 
  CS21 = 1, 
  CS20 = 0, 


  AS0 = 3, 
  TCN0UB = 2, 
  OCR0UB = 1, 
  TCR0UB = 0, 


  COMA1 = 7, 
  COMA0 = 6, 
  COMB1 = 5, 
  COMB0 = 4, 
  COMC1 = 3, 
  COMC0 = 2, 
  WGMA1 = 1, 
  WGMA0 = 0, 


  COM1A1 = 7, 
  COM1A0 = 6, 
  COM1B1 = 5, 
  COM1B0 = 4, 
  COM1C1 = 3, 
  COM1C0 = 2, 
  WGM11 = 1, 
  WGM10 = 0, 


  COM3A1 = 7, 
  COM3A0 = 6, 
  COM3B1 = 5, 
  COM3B0 = 4, 
  COM3C1 = 3, 
  COM3C0 = 2, 
  WGM31 = 1, 
  WGM30 = 0, 


  ICNC = 7, 
  ICES = 6, 
  WGMB3 = 4, 
  WGMB2 = 3, 
  CSB2 = 2, 
  CSB1 = 1, 
  CSB0 = 0, 


  ICNC1 = 7, 
  ICES1 = 6, 
  WGM13 = 4, 
  WGM12 = 3, 
  CS12 = 2, 
  CS11 = 1, 
  CS10 = 0, 


  ICNC3 = 7, 
  ICES3 = 6, 
  WGM33 = 4, 
  WGM32 = 3, 
  CS32 = 2, 
  CS31 = 1, 
  CS30 = 0, 


  FOCA = 7, 
  FOCB = 6, 
  FOCC = 5, 


  FOC3A = 7, 
  FOC3B = 6, 
  FOC3C = 5, 


  FOC1A = 7, 
  FOC1B = 6, 
  FOC1C = 5, 


  IDRD = 7, 
  OCDR7 = 7, 
  OCDR6 = 6, 
  OCDR5 = 5, 
  OCDR4 = 4, 
  OCDR3 = 3, 
  OCDR2 = 2, 
  OCDR1 = 1, 
  OCDR0 = 0, 


  WDCE = 4, 
  WDE = 3, 
  WDP2 = 2, 
  WDP1 = 1, 
  WDP0 = 0, 


  TSM = 7, 
  ADHSM = 4, 
  ACME = 3, 
  PUD = 2, 
  PSR0 = 1, 
  PSR321 = 0, 


  SPIF = 7, 
  WCOL = 6, 
  SPI2X = 0, 


  SPIE = 7, 
  SPE = 6, 
  DORD = 5, 
  MSTR = 4, 
  CPOL = 3, 
  CPHA = 2, 
  SPR1 = 1, 
  SPR0 = 0, 


  UMSEL = 6, 
  UPM1 = 5, 
  UPM0 = 4, 
  USBS = 3, 
  UCSZ1 = 2, 
  UCSZ0 = 1, 
  UCPOL = 0, 


  UMSEL1 = 6, 
  UPM11 = 5, 
  UPM10 = 4, 
  USBS1 = 3, 
  UCSZ11 = 2, 
  UCSZ10 = 1, 
  UCPOL1 = 0, 


  UMSEL0 = 6, 
  UPM01 = 5, 
  UPM00 = 4, 
  USBS0 = 3, 
  UCSZ01 = 2, 
  UCSZ00 = 1, 
  UCPOL0 = 0, 


  RXC = 7, 
  TXC = 6, 
  UDRE = 5, 
  FE = 4, 
  DOR = 3, 
  UPE = 2, 
  U2X = 1, 
  MPCM = 0, 


  RXC1 = 7, 
  TXC1 = 6, 
  UDRE1 = 5, 
  FE1 = 4, 
  DOR1 = 3, 
  UPE1 = 2, 
  U2X1 = 1, 
  MPCM1 = 0, 


  RXC0 = 7, 
  TXC0 = 6, 
  UDRE0 = 5, 
  FE0 = 4, 
  DOR0 = 3, 
  UPE0 = 2, 
  U2X0 = 1, 
  MPCM0 = 0, 


  RXCIE = 7, 
  TXCIE = 6, 
  UDRIE = 5, 
  RXEN = 4, 
  TXEN = 3, 
  UCSZ = 2, 
  UCSZ2 = 2, 
  RXB8 = 1, 
  TXB8 = 0, 


  RXCIE1 = 7, 
  TXCIE1 = 6, 
  UDRIE1 = 5, 
  RXEN1 = 4, 
  TXEN1 = 3, 
  UCSZ12 = 2, 
  RXB81 = 1, 
  TXB81 = 0, 


  RXCIE0 = 7, 
  TXCIE0 = 6, 
  UDRIE0 = 5, 
  RXEN0 = 4, 
  TXEN0 = 3, 
  UCSZ02 = 2, 
  RXB80 = 1, 
  TXB80 = 0, 


  ACD = 7, 
  ACBG = 6, 
  ACO = 5, 
  ACI = 4, 
  ACIE = 3, 
  ACIC = 2, 
  ACIS1 = 1, 
  ACIS0 = 0, 


  ADEN = 7, 
  ADSC = 6, 
  ADFR = 5, 
  ADIF = 4, 
  ADIE = 3, 
  ADPS2 = 2, 
  ADPS1 = 1, 
  ADPS0 = 0, 


  REFS1 = 7, 
  REFS0 = 6, 
  ADLAR = 5, 
  MUX4 = 4, 
  MUX3 = 3, 
  MUX2 = 2, 
  MUX1 = 1, 
  MUX0 = 0, 


  PA7 = 7, 
  PA6 = 6, 
  PA5 = 5, 
  PA4 = 4, 
  PA3 = 3, 
  PA2 = 2, 
  PA1 = 1, 
  PA0 = 0, 


  DDA7 = 7, 
  DDA6 = 6, 
  DDA5 = 5, 
  DDA4 = 4, 
  DDA3 = 3, 
  DDA2 = 2, 
  DDA1 = 1, 
  DDA0 = 0, 


  PINA7 = 7, 
  PINA6 = 6, 
  PINA5 = 5, 
  PINA4 = 4, 
  PINA3 = 3, 
  PINA2 = 2, 
  PINA1 = 1, 
  PINA0 = 0, 


  PB7 = 7, 
  PB6 = 6, 
  PB5 = 5, 
  PB4 = 4, 
  PB3 = 3, 
  PB2 = 2, 
  PB1 = 1, 
  PB0 = 0, 


  DDB7 = 7, 
  DDB6 = 6, 
  DDB5 = 5, 
  DDB4 = 4, 
  DDB3 = 3, 
  DDB2 = 2, 
  DDB1 = 1, 
  DDB0 = 0, 


  PINB7 = 7, 
  PINB6 = 6, 
  PINB5 = 5, 
  PINB4 = 4, 
  PINB3 = 3, 
  PINB2 = 2, 
  PINB1 = 1, 
  PINB0 = 0, 


  PC7 = 7, 
  PC6 = 6, 
  PC5 = 5, 
  PC4 = 4, 
  PC3 = 3, 
  PC2 = 2, 
  PC1 = 1, 
  PC0 = 0, 


  DDC7 = 7, 
  DDC6 = 6, 
  DDC5 = 5, 
  DDC4 = 4, 
  DDC3 = 3, 
  DDC2 = 2, 
  DDC1 = 1, 
  DDC0 = 0, 


  PINC7 = 7, 
  PINC6 = 6, 
  PINC5 = 5, 
  PINC4 = 4, 
  PINC3 = 3, 
  PINC2 = 2, 
  PINC1 = 1, 
  PINC0 = 0, 


  PD7 = 7, 
  PD6 = 6, 
  PD5 = 5, 
  PD4 = 4, 
  PD3 = 3, 
  PD2 = 2, 
  PD1 = 1, 
  PD0 = 0, 


  DDD7 = 7, 
  DDD6 = 6, 
  DDD5 = 5, 
  DDD4 = 4, 
  DDD3 = 3, 
  DDD2 = 2, 
  DDD1 = 1, 
  DDD0 = 0, 


  PIND7 = 7, 
  PIND6 = 6, 
  PIND5 = 5, 
  PIND4 = 4, 
  PIND3 = 3, 
  PIND2 = 2, 
  PIND1 = 1, 
  PIND0 = 0, 


  PE7 = 7, 
  PE6 = 6, 
  PE5 = 5, 
  PE4 = 4, 
  PE3 = 3, 
  PE2 = 2, 
  PE1 = 1, 
  PE0 = 0, 


  DDE7 = 7, 
  DDE6 = 6, 
  DDE5 = 5, 
  DDE4 = 4, 
  DDE3 = 3, 
  DDE2 = 2, 
  DDE1 = 1, 
  DDE0 = 0, 


  PINE7 = 7, 
  PINE6 = 6, 
  PINE5 = 5, 
  PINE4 = 4, 
  PINE3 = 3, 
  PINE2 = 2, 
  PINE1 = 1, 
  PINE0 = 0, 


  PF7 = 7, 
  PF6 = 6, 
  PF5 = 5, 
  PF4 = 4, 
  PF3 = 3, 
  PF2 = 2, 
  PF1 = 1, 
  PF0 = 0, 


  DDF7 = 7, 
  DDF6 = 6, 
  DDF5 = 5, 
  DDF4 = 4, 
  DDF3 = 3, 
  DDF2 = 2, 
  DDF1 = 1, 
  DDF0 = 0, 


  PINF7 = 7, 
  PINF6 = 6, 
  PINF5 = 5, 
  PINF4 = 4, 
  PINF3 = 3, 
  PINF2 = 2, 
  PINF1 = 1, 
  PINF0 = 0, 


  PG4 = 4, 
  PG3 = 3, 
  PG2 = 2, 
  PG1 = 1, 
  PG0 = 0, 


  DDG4 = 4, 
  DDG3 = 3, 
  DDG2 = 2, 
  DDG1 = 1, 
  DDG0 = 0, 


  PING4 = 4, 
  PING3 = 3, 
  PING2 = 2, 
  PING1 = 1, 
  PING0 = 0
};
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
uint8_t atm128RegFile[1000][0xa0];
#line 85
static __inline void __nesc_enable_interrupt();



static __inline void __nesc_disable_interrupt();




typedef uint8_t __nesc_atomic_t;



#line 97
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;








#line 106
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;
#line 120
typedef uint8_t mcu_power_t  ;





enum __nesc_unnamed4266 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};
# 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4267 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4268 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4269 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 94
typedef struct __nesc_unnamed4270 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4271 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4272 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4273 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4274 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4275 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4276 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4277 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/micaz/sim/platform_hardware.h"
enum __nesc_unnamed4278 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7, 
  CHANNEL_BANDGAP = 30, 
  CHANNEL_GND = 31, 

  ATM128_TIMER0_TICKSPPS = 32768
};
# 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimMainP.nc"
static void __nesc_nido_initialise(int node);
# 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4279 {
#line 40
  int notUsed;
} 
#line 40
TMilli;
typedef struct __nesc_unnamed4280 {
#line 41
  int notUsed;
} 
#line 41
T32khz;
typedef struct __nesc_unnamed4281 {
#line 42
  int notUsed;
} 
#line 42
TMicro;
# 19 "MultihopOscilloscope.h"
enum __nesc_unnamed4282 {


  NREADINGS = 5, 

  DEFAULT_INTERVAL = 1024, 
  AM_OSCILLOSCOPE = 0x93
};







#line 28
typedef nx_struct oscilloscope {
  nx_uint16_t version;
  nx_uint16_t interval;
  nx_uint16_t id;
  nx_uint16_t count;
  nx_uint16_t readings[NREADINGS];
} __attribute__((packed)) oscilloscope_t;
# 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/Collection.h"
enum __nesc_unnamed4283 {
  AM_COLLECTION_DATA = 20, 
  AM_COLLECTION_CONTROL = 21, 
  AM_COLLECTION_DEBUG = 22
};

typedef uint8_t collection_id_t;
typedef nx_uint8_t nx_collection_id_t;
# 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4284 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4285 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4286 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4287 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4288 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4289 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4290 {

  uint8_t flat;
  struct __nesc_unnamed4291 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 130
#line 120
typedef union __nesc_unnamed4292 {

  uint8_t flat;
  struct __nesc_unnamed4293 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4294 {

  uint8_t flat;
  struct __nesc_unnamed4295 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 163
#line 150
typedef union __nesc_unnamed4296 {

  uint8_t flat;
  struct __nesc_unnamed4297 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 178
#line 167
typedef union __nesc_unnamed4298 {

  uint8_t flat;
  struct __nesc_unnamed4299 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4300 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4301 {

  uint8_t flat;
  struct __nesc_unnamed4302 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4303 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 241
#line 231
typedef union __nesc_unnamed4304 {

  uint8_t flat;
  struct __nesc_unnamed4305 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 259
#line 250
typedef union __nesc_unnamed4306 {

  uint8_t flat;
  struct __nesc_unnamed4307 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 309
#line 297
typedef union __nesc_unnamed4308 {

  uint8_t flat;
  struct __nesc_unnamed4309 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 324
#line 312
typedef union __nesc_unnamed4310 {

  uint8_t flat;
  struct __nesc_unnamed4311 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/Ctp.h"
enum __nesc_unnamed4312 {

  AM_CTP_ROUTING = 0x70, 
  AM_CTP_DATA = 0x71, 
  AM_CTP_DEBUG = 0x72, 


  CTP_OPT_PULL = 0x80, 
  CTP_OPT_ECN = 0x40, 
  CTP_OPT_ALL = 0xff
};

typedef nx_uint8_t nx_ctp_options_t;
typedef uint8_t ctp_options_t;









#line 66
typedef nx_struct __nesc_unnamed4313 {
  nx_ctp_options_t options;
  nx_uint8_t thl;
  nx_uint16_t etx;
  nx_am_addr_t origin;
  nx_uint8_t originSeqNo;
  nx_collection_id_t type;
  nx_uint8_t ( data)[0];
} __attribute__((packed)) ctp_data_header_t;






#line 76
typedef nx_struct __nesc_unnamed4314 {
  nx_ctp_options_t options;
  nx_am_addr_t parent;
  nx_uint16_t etx;
  nx_uint8_t ( data)[0];
} __attribute__((packed)) ctp_routing_header_t;
# 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngine.h"
enum __nesc_unnamed4315 {

  FORWARD_PACKET_TIME = 7
};




enum __nesc_unnamed4316 {
  SENDDONE_OK_OFFSET = FORWARD_PACKET_TIME, 
  SENDDONE_OK_WINDOW = FORWARD_PACKET_TIME, 
  SENDDONE_NOACK_OFFSET = FORWARD_PACKET_TIME, 
  SENDDONE_NOACK_WINDOW = FORWARD_PACKET_TIME, 
  SENDDONE_FAIL_OFFSET = FORWARD_PACKET_TIME << 2, 
  SENDDONE_FAIL_WINDOW = SENDDONE_FAIL_OFFSET, 
  LOOPY_OFFSET = FORWARD_PACKET_TIME << 2, 
  LOOPY_WINDOW = LOOPY_OFFSET, 
  CONGESTED_WAIT_OFFSET = FORWARD_PACKET_TIME << 2, 
  CONGESTED_WAIT_WINDOW = CONGESTED_WAIT_OFFSET, 
  NO_ROUTE_RETRY = 10000
};








enum __nesc_unnamed4317 {
  MAX_RETRIES = 30
};
#line 104
#line 100
typedef struct __nesc_unnamed4318 {
  message_t * msg;
  uint8_t client;
  uint8_t retries;
} fe_queue_entry_t;
# 7 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpDebugMsg.h"
enum __nesc_unnamed4319 {
  NET_C_DEBUG_STARTED = 0xDE, 

  NET_C_FE_MSG_POOL_EMPTY = 0x10, 
  NET_C_FE_SEND_QUEUE_FULL = 0x11, 
  NET_C_FE_NO_ROUTE = 0x12, 
  NET_C_FE_SUBSEND_OFF = 0x13, 
  NET_C_FE_SUBSEND_BUSY = 0x14, 
  NET_C_FE_BAD_SENDDONE = 0x15, 
  NET_C_FE_QENTRY_POOL_EMPTY = 0x16, 
  NET_C_FE_SUBSEND_SIZE = 0x17, 
  NET_C_FE_LOOP_DETECTED = 0x18, 
  NET_C_FE_SEND_BUSY = 0x19, 

  NET_C_FE_SENDQUEUE_EMPTY = 0x50, 
  NET_C_FE_PUT_MSGPOOL_ERR = 0x51, 
  NET_C_FE_PUT_QEPOOL_ERR = 0x52, 
  NET_C_FE_GET_MSGPOOL_ERR = 0x53, 
  NET_C_FE_GET_QEPOOL_ERR = 0x54, 
  NET_C_FE_QUEUE_SIZE = 0x55, 

  NET_C_FE_SENT_MSG = 0x20, 
  NET_C_FE_RCV_MSG = 0x21, 
  NET_C_FE_FWD_MSG = 0x22, 
  NET_C_FE_DST_MSG = 0x23, 
  NET_C_FE_SENDDONE_FAIL = 0x24, 
  NET_C_FE_SENDDONE_WAITACK = 0x25, 
  NET_C_FE_SENDDONE_FAIL_ACK_SEND = 0x26, 
  NET_C_FE_SENDDONE_FAIL_ACK_FWD = 0x27, 
  NET_C_FE_DUPLICATE_CACHE = 0x28, 
  NET_C_FE_DUPLICATE_QUEUE = 0x29, 
  NET_C_FE_DUPLICATE_CACHE_AT_SEND = 0x2A, 
  NET_C_FE_CONGESTION_SENDWAIT = 0x2B, 
  NET_C_FE_CONGESTION_BEGIN = 0x2C, 
  NET_C_FE_CONGESTION_END = 0x2D, 



  NET_C_FE_CONGESTED = 0x2E, 

  NET_C_TREE_NO_ROUTE = 0x30, 
  NET_C_TREE_NEW_PARENT = 0x31, 
  NET_C_TREE_ROUTE_INFO = 0x32, 
  NET_C_TREE_SENT_BEACON = 0x33, 
  NET_C_TREE_RCV_BEACON = 0x34, 

  NET_C_DBG_1 = 0x40, 
  NET_C_DBG_2 = 0x41, 
  NET_C_DBG_3 = 0x42
};
#line 79
#line 58
typedef nx_struct CollectionDebugMsg {
  nx_uint8_t type;
  nx_union __nesc_unnamed4320 {
    nx_uint16_t arg;
    nx_struct __nesc_unnamed4321 {
      nx_uint16_t msg_uid;
      nx_am_addr_t origin;
      nx_am_addr_t other_node;
    } __attribute__((packed)) msg;
    nx_struct __nesc_unnamed4322 {
      nx_am_addr_t parent;
      nx_uint8_t hopcount;
      nx_uint16_t metric;
    } __attribute__((packed)) route_info;
    nx_struct __nesc_unnamed4323 {
      nx_uint16_t a;
      nx_uint16_t b;
      nx_uint16_t c;
    } __attribute__((packed)) dbg;
  } __attribute__((packed)) data;
  nx_uint16_t seqno;
} __attribute__((packed)) CollectionDebugMsg;
# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/./LinkEstimator.h"
enum __nesc_unnamed4324 {


  NUM_ENTRIES_FLAG = 15
};
#line 62
#line 59
typedef nx_struct linkest_header {
  nx_uint8_t flags;
  nx_uint8_t seq;
} __attribute__((packed)) linkest_header_t;







#line 67
typedef nx_struct neighbor_stat_entry {
  nx_am_addr_t ll_addr;
  nx_uint8_t inquality;
} __attribute__((packed)) neighbor_stat_entry_t;




#line 73
typedef nx_struct linkest_footer {
  neighbor_stat_entry_t neighborList[1];
} __attribute__((packed)) linkest_footer_t;



enum __nesc_unnamed4325 {
  VALID_ENTRY = 0x1, 


  MATURE_ENTRY = 0x2, 


  INIT_ENTRY = 0x4, 


  PINNED_ENTRY = 0x8
};
#line 119
#line 94
typedef struct neighbor_table_entry {

  am_addr_t ll_addr;

  uint8_t lastseq;


  uint8_t rcvcnt;

  uint8_t failcnt;

  uint8_t flags;


  uint8_t inquality;


  uint16_t etx;



  uint8_t data_success;


  uint8_t data_total;
} neighbor_table_entry_t;
# 4 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/TreeRouting.h"
enum __nesc_unnamed4326 {
  AM_TREE_ROUTING_CONTROL = 0xCE, 
  BEACON_INTERVAL = 8192, 
  INVALID_ADDR = 0xFFFF, 
  ETX_THRESHOLD = 50, 
  PARENT_SWITCH_THRESHOLD = 15, 
  MAX_METRIC = 0xFFFF
};







#line 14
typedef struct __nesc_unnamed4327 {
  am_addr_t parent;
  uint16_t etx;
  bool haveHeard;
  bool congested;
} route_info_t;




#line 21
typedef struct __nesc_unnamed4328 {
  am_addr_t neighbor;
  route_info_t info;
} routing_table_entry;

static __inline void routeInfoInit(route_info_t *ri);
typedef message_t MultihopOscilloscopeC$UARTMessagePool$t;
typedef uint16_t MultihopOscilloscopeC$Read$val_t;
typedef message_t *MultihopOscilloscopeC$UARTQueue$t;
typedef TMilli MultihopOscilloscopeC$Timer$precision_tag;
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Timer0$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Compare$size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
typedef uint16_t /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$width_t;
typedef /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$width_t /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$Read$val_t;
enum CtpP$__nesc_unnamed4329 {
  CtpP$CLIENT_COUNT = 1U, CtpP$FORWARD_COUNT = 12, CtpP$TREE_ROUTING_TABLE_SIZE = 10, CtpP$QUEUE_SIZE = CtpP$CLIENT_COUNT + CtpP$FORWARD_COUNT, CtpP$CACHE_SIZE = 4
};
typedef message_t */*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$t;
typedef TMilli /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$precision_tag;
typedef fe_queue_entry_t */*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t;
typedef fe_queue_entry_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$t;
typedef message_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$t;
typedef message_t /*CtpP.MessagePoolP*/PoolC$0$pool_t;
typedef /*CtpP.MessagePoolP*/PoolC$0$pool_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t;
typedef /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$t;
typedef fe_queue_entry_t /*CtpP.QEntryPoolP*/PoolC$1$pool_t;
typedef /*CtpP.QEntryPoolP*/PoolC$1$pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t;
typedef /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$t;
typedef fe_queue_entry_t */*CtpP.SendQueueP*/QueueC$0$queue_t;
typedef /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$t;
typedef message_t */*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$t;
enum AMQueueP$__nesc_unnamed4330 {
  AMQueueP$NUM_CLIENTS = 2U
};
typedef TMilli /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$precision_tag;
typedef TMilli /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$precision_tag;
typedef uint16_t RandomMlcgC$SeedInit$parameter;
enum SerialAMQueueP$__nesc_unnamed4331 {
  SerialAMQueueP$NUM_CLIENTS = 2U
};
typedef message_t /*MultihopOscilloscopeAppC.UARTMessagePoolP*/PoolC$2$pool_t;
typedef /*MultihopOscilloscopeAppC.UARTMessagePoolP*/PoolC$2$pool_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t;
typedef /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$t;
typedef message_t */*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t;
typedef /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$t;
typedef message_t /*MultihopOscilloscopeAppC.DebugMessagePool*/PoolC$3$pool_t;
typedef /*MultihopOscilloscopeAppC.DebugMessagePool*/PoolC$3$pool_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t;
typedef /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$t;
typedef message_t */*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t;
typedef /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$t;
typedef message_t *UARTDebugSenderP$SendQueue$t;
typedef message_t UARTDebugSenderP$MessagePool$t;
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
#line 62
static error_t MotePlatformP$SubInit$default$init(void );
#line 62
static error_t MotePlatformP$PlatformInit$init(void );
# 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void );
static bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void );
static bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void );
static bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );
# 11 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
static void Atm128EnergyHandlerP$Energy$pin_state_clear(uint8_t port, uint8_t bit);
static void Atm128EnergyHandlerP$Energy$pin_state_flip(uint8_t port, uint8_t bit);
#line 5
static void Atm128EnergyHandlerP$Energy$mcu_state_change(uint8_t powerstate);




static void Atm128EnergyHandlerP$Energy$pin_state_set(uint8_t port, uint8_t bit);
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void );
# 76 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void McuSleepC$McuSleep$sleep(void );
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MeasureClockC$Init$init(void );
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SimSchedulerBasicP$TaskBasic$postTask(
# 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x101569ab0);
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP$TaskBasic$default$runTask(
# 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x101569ab0);
# 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SimSchedulerBasicP$Scheduler$init(void );







static bool SimSchedulerBasicP$Scheduler$runNextTask(void );
# 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimMote.nc"
static void SimMoteP$SimMote$setEuid(long long int euid);


static int SimMoteP$SimMote$getVariableInfo(char *name, void **ptr, size_t *len);

static void SimMoteP$SimMote$turnOff(void );
#line 48
static void SimMoteP$SimMote$turnOn(void );
#line 43
static long long int SimMoteP$SimMote$getEuid(void );


static bool SimMoteP$SimMote$isOn(void );
#line 45
static long long int SimMoteP$SimMote$getStartTime(void );
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t TossimActiveMessageC$AMSend$send(
# 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x10194c788, 
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 123
static uint8_t TossimActiveMessageC$AMSend$maxPayloadLength(
# 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x10194c788);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Snoop$default$receive(
# 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x101960480, 
# 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t TossimActiveMessageC$Packet$payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


TossimActiveMessageC$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void );
#line 94
static void TossimActiveMessageC$Packet$setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Receive$default$receive(
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x101962908, 
# 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 85 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static void TossimActiveMessageC$Model$receive(message_t *msg);
#line 76
static void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t error);










static bool TossimActiveMessageC$Model$shouldAck(message_t *msg);
# 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t TossimActiveMessageC$AMPacket$source(
#line 84
message_t * amsg);
#line 68
static am_addr_t TossimActiveMessageC$AMPacket$address(void );









static am_addr_t TossimActiveMessageC$AMPacket$destination(
#line 74
message_t * amsg);
#line 103
static void TossimActiveMessageC$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t TossimActiveMessageC$AMPacket$type(
#line 143
message_t * amsg);
#line 162
static void TossimActiveMessageC$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool TossimActiveMessageC$AMPacket$isForMe(
#line 133
message_t * amsg);
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$stopDoneTask$runTask(void );
# 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimPacketModelC$Packet$send(int node, message_t *msg, uint8_t len);
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$sendDoneTask$runTask(void );
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t TossimPacketModelC$Init$init(void );
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$startDoneTask$runTask(void );
# 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t TossimPacketModelC$Control$start(void );
# 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static error_t TossimPacketModelC$PacketAcknowledgements$requestAck(
#line 53
message_t * msg);
#line 85
static bool TossimPacketModelC$PacketAcknowledgements$wasAcked(
#line 80
message_t * msg);
# 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC$GainRadioModel$receive(message_t *msg);
#line 59
static void TossimPacketModelC$GainRadioModel$acked(message_t *msg);

static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg);
#line 48
static void CpmModelC$Model$putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool CpmModelC$Model$clearChannel(void );
static void CpmModelC$Model$setPendingTransmission(void );
# 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
# 8 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/PacketEnergyEstimator.nc"
static void PacketEnergyEstimatorP$Energy$poweron_start(void );
#line 5
static void PacketEnergyEstimatorP$Energy$send_busy(int arg_0x101a00888, uint8_t arg_0x101a00b38, int arg_0x101a00da0);
static void PacketEnergyEstimatorP$Energy$recv_done(int arg_0x1019fe638);
#line 4
static void PacketEnergyEstimatorP$Energy$send_done(int arg_0x101a01930, uint8_t arg_0x101a01be0, sim_time_t arg_0x101a00020);
#line 3
static void PacketEnergyEstimatorP$Energy$send_start(int arg_0x1019d9b48, uint8_t arg_0x1019d9df8, int arg_0x101a010c8);
# 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Boot.nc"
static void MultihopOscilloscopeC$Boot$booted(void );
# 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void MultihopOscilloscopeC$SerialControl$startDone(error_t error);
#line 138
static void MultihopOscilloscopeC$SerialControl$stopDone(error_t error);
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void MultihopOscilloscopeC$uartSendTask$runTask(void );
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



MultihopOscilloscopeC$Snoop$receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void MultihopOscilloscopeC$RadioControl$startDone(error_t error);
#line 138
static void MultihopOscilloscopeC$RadioControl$stopDone(error_t error);
# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void MultihopOscilloscopeC$Send$sendDone(
#line 96
message_t * msg, 



error_t error);
# 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Read.nc"
static void MultihopOscilloscopeC$Read$readDone(error_t result, MultihopOscilloscopeC$Read$val_t val);
# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void MultihopOscilloscopeC$SerialSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



MultihopOscilloscopeC$Receive$receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void MultihopOscilloscopeC$Timer$fired(void );
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP$Init$init(void );
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Leds.nc"
static void LedsP$Leds$led0Toggle(void );




static void LedsP$Leds$led1On(void );










static void LedsP$Leds$led1Toggle(void );
#line 100
static void LedsP$Leds$led2Toggle(void );
#line 56
static void LedsP$Leds$led0On(void );
#line 89
static void LedsP$Leds$led2On(void );
# 109 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
# 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
# 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
# 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
#line 61
static HplAtm128Timer0AsyncP$Timer0$timer_size HplAtm128Timer0AsyncP$Timer0$get(void );
#line 110
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void );
#line 67
static void HplAtm128Timer0AsyncP$Timer0$set(HplAtm128Timer0AsyncP$Timer0$timer_size t);
# 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );
# 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void );
#line 46
static void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t control);
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP$Compare$size_type HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(HplAtm128Timer0AsyncP$Compare$size_type t);










static void HplAtm128Timer0AsyncP$Compare$start(void );
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
# 136 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
# 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x101e41da0);
# 92 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x101e41da0);
# 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x101e41da0, 
# 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x101e41da0, 
# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x101e41da0);
# 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Read.nc"
static error_t /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$Read$read(void );
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$senseResult$runTask(void );
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubReceive$receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/CollectionPacket.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(message_t *msg);





static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(message_t *msg);
# 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor);
# 31 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Intercept.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$default$forward(
# 114 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x101f3f9b0, 
# 20 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Intercept.nc"
message_t * msg, 

void * payload, 








uint8_t len);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength(void );
#line 94
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$default$receive(
# 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x101f41e08, 
# 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$send(
# 111 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x101f42108, 
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$getPayload(
# 111 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x101f42108, 
# 122 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$maxPayloadLength(
# 111 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x101f42108);
# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$default$sendDone(
# 111 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x101f42108, 
# 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$fired(void );
# 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$startDone(error_t error);
#line 138
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$stopDone(error_t error);
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$runTask(void );
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Init$init(void );
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$default$receive(
# 112 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x101f41270, 
# 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 7 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpCongestion.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpCongestion$isCongested(void );
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$routeFound(void );
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$noRoute(void );
# 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpPacket.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$option(message_t *msg, ctp_options_t opt);





static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setEtx(message_t *msg, uint16_t etx);
#line 49
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$clearOption(message_t *msg, ctp_options_t option);







static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getEtx(message_t *msg);


static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(message_t *msg);
#line 46
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setOption(message_t *msg, ctp_options_t option);







static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(message_t *msg);








static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(message_t *msg);





static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$matchInstance(message_t *m1, message_t *m2);
#line 66
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(message_t *msg);
#line 55
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setThl(message_t *msg, uint8_t thl);
# 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$StdControl$start(void );
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSnoop$receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/CollectionId.nc"
static collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$default$fetch(
# 146 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x101f62318);
# 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$t * 


/*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$get(void );
#line 61
static bool /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$empty(void );
#line 89
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$put(
#line 85
/*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$t * newVal);
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Init$init(void );
# 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$t * 


/*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$get(void );
#line 61
static bool /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$empty(void );
#line 89
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$put(
#line 85
/*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$t * newVal);
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Init$init(void );
# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*CtpP.SendQueueP*/QueueC$0$Queue$t  

/*CtpP.SendQueueP*/QueueC$0$Queue$head(void );
#line 90
static error_t /*CtpP.SendQueueP*/QueueC$0$Queue$enqueue(
#line 86
/*CtpP.SendQueueP*/QueueC$0$Queue$t  newVal);
#line 101
static 
#line 99
/*CtpP.SendQueueP*/QueueC$0$Queue$t  

/*CtpP.SendQueueP*/QueueC$0$Queue$element(uint8_t idx);
#line 65
static uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$maxSize(void );
#line 81
static 
#line 79
/*CtpP.SendQueueP*/QueueC$0$Queue$t  

/*CtpP.SendQueueP*/QueueC$0$Queue$dequeue(void );
#line 50
static bool /*CtpP.SendQueueP*/QueueC$0$Queue$empty(void );







static uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$size(void );
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Cache.nc"
static void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$insert(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$t item);







static bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$lookup(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$t item);
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Init$init(void );
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



LinkEstimatorP$SubReceive$receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static error_t LinkEstimatorP$LinkEstimator$txAck(am_addr_t neighbor);
#line 55
static error_t LinkEstimatorP$LinkEstimator$pinNeighbor(am_addr_t neighbor);










static error_t LinkEstimatorP$LinkEstimator$txNoAck(am_addr_t neighbor);
#line 52
static error_t LinkEstimatorP$LinkEstimator$insertNeighbor(am_addr_t neighbor);
#line 69
static error_t LinkEstimatorP$LinkEstimator$clearDLQ(am_addr_t neighbor);
#line 58
static error_t LinkEstimatorP$LinkEstimator$unpinNeighbor(am_addr_t neighbor);
#line 49
static uint16_t LinkEstimatorP$LinkEstimator$getLinkQuality(uint16_t neighbor);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t LinkEstimatorP$Packet$payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


LinkEstimatorP$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t LinkEstimatorP$Packet$maxPayloadLength(void );
# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void LinkEstimatorP$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
#line 80
static error_t LinkEstimatorP$Send$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

LinkEstimatorP$Send$getPayload(
#line 132
message_t * msg, 


uint8_t len);
#line 123
static uint8_t LinkEstimatorP$Send$maxPayloadLength(void );
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LinkEstimatorP$Init$init(void );
# 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t LinkEstimatorP$StdControl$start(void );
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 123
static uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength(void );
# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x102299020, 
# 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x10229be18, 
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 112
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(
# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x10229be18);
# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x10229be18, 
# 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );
#line 75
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
# 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/RootControl.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$isRoot(void );
#line 41
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$setRoot(void );
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$runTask(void );
# 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor);
# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingPacket.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpRoutingPacket$getOption(message_t * msg, ctp_options_t opt);
# 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$startDone(error_t error);
#line 138
static void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$stopDone(error_t error);
# 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$recomputeRoutes(void );
#line 71
static void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerRouteUpdate(void );
#line 64
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getEtx(uint16_t *etx);
#line 78
static void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerImmediateRouteUpdate(void );









static void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$setNeighborCongested(am_addr_t n, bool congested);
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$runTask(void );
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$Init$init(void );
# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$fired(void );
#line 83
static void /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$fired(void );
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CompareBit.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$CompareBit$shouldInsert(message_t * msg, void * payload, uint8_t len);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Router*/CtpRoutingEngineP$0$BeaconReceive$receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$StdControl$start(void );
# 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$Routing$hasRoute(void );
#line 48
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$Routing$nextHop(void );
# 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC$Random$rand16(void );
#line 46
static uint32_t RandomMlcgC$Random$rand32(void );
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RandomMlcgC$Init$init(void );
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(
#line 96
message_t * msg, 



error_t error);
# 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/LinkPacketMetadata.nc"
static bool DummyActiveMessageP$LinkPacketMetadata$highChannelQuality(
#line 44
message_t * msg);
# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/CollectionId.nc"
static collection_id_t /*MultihopOscilloscopeAppC.CollectionSenderC.CollectionSenderP.CollectionIdP*/CollectionIdP$0$CollectionId$fetch(void );
# 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SerialActiveMessageC$SplitControl$start(void );
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t SerialActiveMessageC$AMSend$send(
# 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
am_id_t arg_0x1024af3c8, 
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

SerialActiveMessageC$AMSend$getPayload(
# 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
am_id_t arg_0x1024af3c8, 
# 132 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t SerialActiveMessageC$Packet$payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


SerialActiveMessageC$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 94
static void SerialActiveMessageC$Packet$setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialActiveMessageC$startDone$runTask(void );
#line 75
static void SerialActiveMessageC$stopDone$runTask(void );
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t SerialActiveMessageC$AMPacket$destination(
#line 74
message_t * amsg);
#line 103
static void SerialActiveMessageC$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t SerialActiveMessageC$AMPacket$type(
#line 143
message_t * amsg);
#line 162
static void SerialActiveMessageC$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(
#line 96
message_t * msg, 



error_t error);
#line 75
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(
# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x10229be18, 
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$getPayload(
# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x10229be18, 
# 122 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 100
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(
# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x10229be18, 
# 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask(void );
#line 75
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask(void );
# 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$t * 


/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$get(void );
#line 89
static error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$put(
#line 85
/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$t * newVal);
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Init$init(void );
# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$t  

/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$head(void );
#line 90
static error_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$enqueue(
#line 86
/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$t  newVal);
#line 65
static uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$maxSize(void );
#line 81
static 
#line 79
/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$t  

/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$dequeue(void );
#line 50
static bool /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$empty(void );







static uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$size(void );
# 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$t * 


/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$get(void );
#line 61
static bool /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$empty(void );
#line 89
static error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$put(
#line 85
/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$t * newVal);
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Init$init(void );
# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$t  

/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$head(void );
#line 90
static error_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$enqueue(
#line 86
/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$t  newVal);
#line 65
static uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$maxSize(void );
#line 81
static 
#line 79
/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$t  

/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$dequeue(void );
#line 50
static bool /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$empty(void );







static uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$size(void );
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$sendDone(
#line 96
message_t * msg, 



error_t error);
# 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
static error_t UARTDebugSenderP$CollectionDebug$logEvent(uint8_t type);
#line 73
static error_t UARTDebugSenderP$CollectionDebug$logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node);





static error_t UARTDebugSenderP$CollectionDebug$logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric);
#line 67
static error_t UARTDebugSenderP$CollectionDebug$logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);
# 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Boot.nc"
static void UARTDebugSenderP$Boot$booted(void );
# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void UARTDebugSenderP$UARTSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void UARTDebugSenderP$sendTask$runTask(void );
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP$MoteInit$init(void );
#line 62
static error_t PlatformP$MeasureClock$init(void );
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void );






static inline error_t PlatformP$Init$init(void );
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MotePlatformP$SubInit$init(void );
# 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void MotePlatformP$SerialIdPin$makeInput(void );
#line 41
static void MotePlatformP$SerialIdPin$clr(void );
# 26 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void );
#line 38
static inline error_t MotePlatformP$SubInit$default$init(void );
# 11 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$Energy$pin_state_clear(uint8_t port, uint8_t bit);
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$Energy$pin_state_flip(uint8_t port, uint8_t bit);
#line 10
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$Energy$pin_state_set(uint8_t port, uint8_t bit);
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );






static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void );







static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
# 11 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$Energy$pin_state_clear(uint8_t port, uint8_t bit);
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$Energy$pin_state_flip(uint8_t port, uint8_t bit);
#line 10
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$Energy$pin_state_set(uint8_t port, uint8_t bit);
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );






static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void );







static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
# 11 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$Energy$pin_state_clear(uint8_t port, uint8_t bit);
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$Energy$pin_state_flip(uint8_t port, uint8_t bit);
#line 10
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$Energy$pin_state_set(uint8_t port, uint8_t bit);
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );






static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void );







static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
# 11 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$Energy$pin_state_clear(uint8_t port, uint8_t bit);
# 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );
#line 69
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
# 11 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandlerP.nc"
uint8_t Atm128EnergyHandlerP$bitstate[1000][3];
uint8_t Atm128EnergyHandlerP$active[1000];


static void Atm128EnergyHandlerP$Energy$mcu_state_change(uint8_t powerstate);
#line 49
static inline void Atm128EnergyHandlerP$Energy$pin_state_set(uint8_t port, uint8_t bit);





static void Atm128EnergyHandlerP$Energy$pin_state_clear(uint8_t port, uint8_t bit);
#line 69
static void Atm128EnergyHandlerP$Energy$pin_state_flip(uint8_t port, uint8_t bit);
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void );
# 5 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
static void McuSleepC$Atm128EnergyHandler$mcu_state_change(uint8_t powerstate);
# 25 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/atm128_sim.h"
enum McuSleepC$__nesc_unnamed4332 {

  McuSleepC$ATM128_PINF = 0x00, 


  McuSleepC$ATM128_PINE = 0x01, 


  McuSleepC$ATM128_DDRE = 0x02, 


  McuSleepC$ATM128_PORTE = 0x03, 


  McuSleepC$ATM128_ADCW = 0x04, 

  McuSleepC$ATM128_ADC = 0x04, 

  McuSleepC$ATM128_ADCL = 0x04, 
  McuSleepC$ATM128_ADCH = 0x05, 


  McuSleepC$ATM128_ADCSR = 0x06, 
  McuSleepC$ATM128_ADCSRA = 0x06, 


  McuSleepC$ATM128_ADMUX = 0x07, 


  McuSleepC$ATM128_ACSR = 0x08, 


  McuSleepC$ATM128_UBRR0L = 0x09, 


  McuSleepC$ATM128_UCSR0B = 0x0A, 


  McuSleepC$ATM128_UCSR0A = 0x0B, 


  McuSleepC$ATM128_UDR0 = 0x0C, 


  McuSleepC$ATM128_SPCR = 0x0D, 


  McuSleepC$ATM128_SPSR = 0x0E, 


  McuSleepC$ATM128_SPDR = 0x0F, 


  McuSleepC$ATM128_PIND = 0x10, 


  McuSleepC$ATM128_DDRD = 0x11, 


  McuSleepC$ATM128_PORTD = 0x12, 


  McuSleepC$ATM128_PINC = 0x13, 


  McuSleepC$ATM128_DDRC = 0x14, 


  McuSleepC$ATM128_PORTC = 0x15, 


  McuSleepC$ATM128_PINB = 0x16, 


  McuSleepC$ATM128_DDRB = 0x17, 


  McuSleepC$ATM128_PORTB = 0x18, 


  McuSleepC$ATM128_PINA = 0x19, 


  McuSleepC$ATM128_DDRA = 0x1A, 


  McuSleepC$ATM128_PORTA = 0x1B, 




  McuSleepC$ATM128_SFIOR = 0x20, 


  McuSleepC$ATM128_WDTCR = 0x21, 


  McuSleepC$ATM128_OCDR = 0x22, 


  McuSleepC$ATM128_OCR2 = 0x23, 


  McuSleepC$ATM128_TCNT2 = 0x24, 


  McuSleepC$ATM128_TCCR2 = 0x25, 


  McuSleepC$ATM128_ICR1 = 0x26, 
  McuSleepC$ATM128_ICR1L = 0x26, 
  McuSleepC$ATM128_ICR1H = 0x27, 


  McuSleepC$ATM128_OCR1B = 0x28, 
  McuSleepC$ATM128_OCR1BL = 0x28, 
  McuSleepC$ATM128_OCR1BH = 0x29, 


  McuSleepC$ATM128_OCR1A = 0x2A, 
  McuSleepC$ATM128_OCR1AL = 0x2A, 
  McuSleepC$ATM128_OCR1AH = 0x2B, 


  McuSleepC$ATM128_TCNT1 = 0x2C, 
  McuSleepC$ATM128_TCNT1L = 0x2C, 
  McuSleepC$ATM128_TCNT1H = 0x2D, 


  McuSleepC$ATM128_TCCR1B = 0x2E, 


  McuSleepC$ATM128_TCCR1A = 0x2F, 


  McuSleepC$ATM128_ASSR = 0x30, 


  McuSleepC$ATM128_OCR0 = 0x31, 


  McuSleepC$ATM128_TCNT0 = 0x32, 


  McuSleepC$ATM128_TCCR0 = 0x33, 


  McuSleepC$ATM128_MCUSR = 0x34, 
  McuSleepC$ATM128_MCUCSR = 0x34, 


  McuSleepC$ATM128_MCUCR = 0x35, 


  McuSleepC$ATM128_TIFR = 0x36, 


  McuSleepC$ATM128_TIMSK = 0x37, 


  McuSleepC$ATM128_EIFR = 0x38, 


  McuSleepC$ATM128_EIMSK = 0x39, 


  McuSleepC$ATM128_EICRB = 0x3A, 


  McuSleepC$ATM128_RAMPZ = 0x3B, 


  McuSleepC$ATM128_XDIV = 0x3C, 




  McuSleepC$ATM128_SREG = 0x3F, 




  McuSleepC$ATM128_DDRF = 0x61, 


  McuSleepC$ATM128_PORTF = 0x62, 


  McuSleepC$ATM128_PING = 0x63, 


  McuSleepC$ATM128_DDRG = 0x64, 


  McuSleepC$ATM128_PORTG = 0x65, 


  McuSleepC$ATM128_SPMCR = 0x68, 
  McuSleepC$ATM128_SPMCSR = 0x68, 


  McuSleepC$ATM128_EICRA = 0x6A, 


  McuSleepC$ATM128_XMCRB = 0x6C, 


  McuSleepC$ATM128_XMCRA = 0x6D, 


  McuSleepC$ATM128_OSCCAL = 0x6F, 


  McuSleepC$ATM128_TWBR = 0x70, 


  McuSleepC$ATM128_TWSR = 0x71, 


  McuSleepC$ATM128_TWAR = 0x72, 


  McuSleepC$ATM128_TWDR = 0x73, 


  McuSleepC$ATM128_TWCR = 0x74, 


  McuSleepC$ATM128_OCR1C = 0x78, 
  McuSleepC$ATM128_OCR1CL = 0x78, 
  McuSleepC$ATM128_OCR1CH = 0x79, 


  McuSleepC$ATM128_TCCR1C = 0x7A, 


  McuSleepC$ATM128_ETIFR = 0x7C, 


  McuSleepC$ATM128_ETIMSK = 0x7D, 


  McuSleepC$ATM128_ICR3 = 0x80, 
  McuSleepC$ATM128_ICR3L = 0x80, 
  McuSleepC$ATM128_ICR3H = 0x81, 


  McuSleepC$ATM128_OCR3C = 0x82, 
  McuSleepC$ATM128_OCR3CL = 0x82, 
  McuSleepC$ATM128_OCR3CH = 0x83, 


  McuSleepC$ATM128_OCR3B = 0x84, 
  McuSleepC$ATM128_OCR3BL = 0x84, 
  McuSleepC$ATM128_OCR3BH = 0x85, 


  McuSleepC$ATM128_OCR3A = 0x86, 
  McuSleepC$ATM128_OCR3AL = 0x86, 
  McuSleepC$ATM128_OCR3AH = 0x87, 


  McuSleepC$ATM128_TCNT3 = 0x88, 
  McuSleepC$ATM128_TCNT3L = 0x88, 
  McuSleepC$ATM128_TCNT3H = 0x89, 


  McuSleepC$ATM128_TCCR3B = 0x8A, 


  McuSleepC$ATM128_TCCR3A = 0x8B, 


  McuSleepC$ATM128_TCCR3C = 0x8C, 


  McuSleepC$ATM128_UBRR0H = 0x90, 


  McuSleepC$ATM128_UCSR0C = 0x95, 


  McuSleepC$ATM128_UBRR1H = 0x98, 


  McuSleepC$ATM128_UBRR1L = 0x99, 


  McuSleepC$ATM128_UCSR1B = 0x9A, 


  McuSleepC$ATM128_UCSR1A = 0x9B, 


  McuSleepC$ATM128_UDR1 = 0x9C, 


  McuSleepC$ATM128_UCSR1C = 0x9D
};
#line 673
enum McuSleepC$__nesc_unnamed4333 {

  McuSleepC$TWINT = 7, 
  McuSleepC$TWEA = 6, 
  McuSleepC$TWSTA = 5, 
  McuSleepC$TWSTO = 4, 
  McuSleepC$TWWC = 3, 
  McuSleepC$TWEN = 2, 
  McuSleepC$TWIE = 0, 


  McuSleepC$TWA6 = 7, 
  McuSleepC$TWA5 = 6, 
  McuSleepC$TWA4 = 5, 
  McuSleepC$TWA3 = 4, 
  McuSleepC$TWA2 = 3, 
  McuSleepC$TWA1 = 2, 
  McuSleepC$TWA0 = 1, 
  McuSleepC$TWGCE = 0, 


  McuSleepC$TWS7 = 7, 
  McuSleepC$TWS6 = 6, 
  McuSleepC$TWS5 = 5, 
  McuSleepC$TWS4 = 4, 
  McuSleepC$TWS3 = 3, 
  McuSleepC$TWPS1 = 1, 
  McuSleepC$TWPS0 = 0, 


  McuSleepC$SRL2 = 6, 
  McuSleepC$SRL1 = 5, 
  McuSleepC$SRL0 = 4, 
  McuSleepC$SRW01 = 3, 
  McuSleepC$SRW00 = 2, 
  McuSleepC$SRW11 = 1, 


  McuSleepC$XMBK = 7, 
  McuSleepC$XMM2 = 2, 
  McuSleepC$XMM1 = 1, 
  McuSleepC$XMM0 = 0, 


  McuSleepC$XDIVEN = 7, 
  McuSleepC$XDIV6 = 6, 
  McuSleepC$XDIV5 = 5, 
  McuSleepC$XDIV4 = 4, 
  McuSleepC$XDIV3 = 3, 
  McuSleepC$XDIV2 = 2, 
  McuSleepC$XDIV1 = 1, 
  McuSleepC$XDIV0 = 0, 


  McuSleepC$RAMPZ0 = 0, 


  McuSleepC$ISC31 = 7, 
  McuSleepC$ISC30 = 6, 
  McuSleepC$ISC21 = 5, 
  McuSleepC$ISC20 = 4, 
  McuSleepC$ISC11 = 3, 
  McuSleepC$ISC10 = 2, 
  McuSleepC$ISC01 = 1, 
  McuSleepC$ISC00 = 0, 


  McuSleepC$ISC71 = 7, 
  McuSleepC$ISC70 = 6, 
  McuSleepC$ISC61 = 5, 
  McuSleepC$ISC60 = 4, 
  McuSleepC$ISC51 = 3, 
  McuSleepC$ISC50 = 2, 
  McuSleepC$ISC41 = 1, 
  McuSleepC$ISC40 = 0, 


  McuSleepC$SPMIE = 7, 
  McuSleepC$RWWSB = 6, 
  McuSleepC$RWWSRE = 4, 
  McuSleepC$BLBSET = 3, 
  McuSleepC$PGWRT = 2, 
  McuSleepC$PGERS = 1, 
  McuSleepC$SPMEN = 0, 


  McuSleepC$INT7 = 7, 
  McuSleepC$INT6 = 6, 
  McuSleepC$INT5 = 5, 
  McuSleepC$INT4 = 4, 
  McuSleepC$INT3 = 3, 
  McuSleepC$INT2 = 2, 
  McuSleepC$INT1 = 1, 
  McuSleepC$INT0 = 0, 


  McuSleepC$INTF7 = 7, 
  McuSleepC$INTF6 = 6, 
  McuSleepC$INTF5 = 5, 
  McuSleepC$INTF4 = 4, 
  McuSleepC$INTF3 = 3, 
  McuSleepC$INTF2 = 2, 
  McuSleepC$INTF1 = 1, 
  McuSleepC$INTF0 = 0, 


  McuSleepC$OCIE2 = 7, 
  McuSleepC$TOIE2 = 6, 
  McuSleepC$TICIE1 = 5, 
  McuSleepC$OCIE1A = 4, 
  McuSleepC$OCIE1B = 3, 
  McuSleepC$TOIE1 = 2, 
  McuSleepC$OCIE0 = 1, 
  McuSleepC$TOIE0 = 0, 


  McuSleepC$OCF2 = 7, 
  McuSleepC$TOV2 = 6, 
  McuSleepC$ICF1 = 5, 
  McuSleepC$OCF1A = 4, 
  McuSleepC$OCF1B = 3, 
  McuSleepC$TOV1 = 2, 
  McuSleepC$OCF0 = 1, 
  McuSleepC$TOV0 = 0, 


  McuSleepC$TICIE3 = 5, 
  McuSleepC$OCIE3A = 4, 
  McuSleepC$OCIE3B = 3, 
  McuSleepC$TOIE3 = 2, 
  McuSleepC$OCIE3C = 1, 
  McuSleepC$OCIE1C = 0, 


  McuSleepC$ICF3 = 5, 
  McuSleepC$OCF3A = 4, 
  McuSleepC$OCF3B = 3, 
  McuSleepC$TOV3 = 2, 
  McuSleepC$OCF3C = 1, 
  McuSleepC$OCF1C = 0, 


  McuSleepC$SRE = 7, 
  McuSleepC$SRW = 6, 
  McuSleepC$SRW10 = 6, 
  McuSleepC$SE = 5, 
  McuSleepC$SM1 = 4, 
  McuSleepC$SM0 = 3, 
  McuSleepC$SM2 = 2, 
  McuSleepC$IVSEL = 1, 
  McuSleepC$IVCE = 0, 


  McuSleepC$JTD = 7, 
  McuSleepC$JTRF = 4, 
  McuSleepC$WDRF = 3, 
  McuSleepC$BORF = 2, 
  McuSleepC$EXTRF = 1, 
  McuSleepC$PORF = 0, 


  McuSleepC$FOC = 7, 
  McuSleepC$WGM0 = 6, 
  McuSleepC$COM1 = 5, 
  McuSleepC$COM0 = 4, 
  McuSleepC$WGM1 = 3, 
  McuSleepC$CS2 = 2, 
  McuSleepC$CS1 = 1, 
  McuSleepC$CS0 = 0, 


  McuSleepC$FOC0 = 7, 
  McuSleepC$WGM00 = 6, 
  McuSleepC$COM01 = 5, 
  McuSleepC$COM00 = 4, 
  McuSleepC$WGM01 = 3, 
  McuSleepC$CS02 = 2, 
  McuSleepC$CS01 = 1, 
  McuSleepC$CS00 = 0, 


  McuSleepC$FOC2 = 7, 
  McuSleepC$WGM20 = 6, 
  McuSleepC$COM21 = 5, 
  McuSleepC$COM20 = 4, 
  McuSleepC$WGM21 = 3, 
  McuSleepC$CS22 = 2, 
  McuSleepC$CS21 = 1, 
  McuSleepC$CS20 = 0, 


  McuSleepC$AS0 = 3, 
  McuSleepC$TCN0UB = 2, 
  McuSleepC$OCR0UB = 1, 
  McuSleepC$TCR0UB = 0, 


  McuSleepC$COMA1 = 7, 
  McuSleepC$COMA0 = 6, 
  McuSleepC$COMB1 = 5, 
  McuSleepC$COMB0 = 4, 
  McuSleepC$COMC1 = 3, 
  McuSleepC$COMC0 = 2, 
  McuSleepC$WGMA1 = 1, 
  McuSleepC$WGMA0 = 0, 


  McuSleepC$COM1A1 = 7, 
  McuSleepC$COM1A0 = 6, 
  McuSleepC$COM1B1 = 5, 
  McuSleepC$COM1B0 = 4, 
  McuSleepC$COM1C1 = 3, 
  McuSleepC$COM1C0 = 2, 
  McuSleepC$WGM11 = 1, 
  McuSleepC$WGM10 = 0, 


  McuSleepC$COM3A1 = 7, 
  McuSleepC$COM3A0 = 6, 
  McuSleepC$COM3B1 = 5, 
  McuSleepC$COM3B0 = 4, 
  McuSleepC$COM3C1 = 3, 
  McuSleepC$COM3C0 = 2, 
  McuSleepC$WGM31 = 1, 
  McuSleepC$WGM30 = 0, 


  McuSleepC$ICNC = 7, 
  McuSleepC$ICES = 6, 
  McuSleepC$WGMB3 = 4, 
  McuSleepC$WGMB2 = 3, 
  McuSleepC$CSB2 = 2, 
  McuSleepC$CSB1 = 1, 
  McuSleepC$CSB0 = 0, 


  McuSleepC$ICNC1 = 7, 
  McuSleepC$ICES1 = 6, 
  McuSleepC$WGM13 = 4, 
  McuSleepC$WGM12 = 3, 
  McuSleepC$CS12 = 2, 
  McuSleepC$CS11 = 1, 
  McuSleepC$CS10 = 0, 


  McuSleepC$ICNC3 = 7, 
  McuSleepC$ICES3 = 6, 
  McuSleepC$WGM33 = 4, 
  McuSleepC$WGM32 = 3, 
  McuSleepC$CS32 = 2, 
  McuSleepC$CS31 = 1, 
  McuSleepC$CS30 = 0, 


  McuSleepC$FOCA = 7, 
  McuSleepC$FOCB = 6, 
  McuSleepC$FOCC = 5, 


  McuSleepC$FOC3A = 7, 
  McuSleepC$FOC3B = 6, 
  McuSleepC$FOC3C = 5, 


  McuSleepC$FOC1A = 7, 
  McuSleepC$FOC1B = 6, 
  McuSleepC$FOC1C = 5, 


  McuSleepC$IDRD = 7, 
  McuSleepC$OCDR7 = 7, 
  McuSleepC$OCDR6 = 6, 
  McuSleepC$OCDR5 = 5, 
  McuSleepC$OCDR4 = 4, 
  McuSleepC$OCDR3 = 3, 
  McuSleepC$OCDR2 = 2, 
  McuSleepC$OCDR1 = 1, 
  McuSleepC$OCDR0 = 0, 


  McuSleepC$WDCE = 4, 
  McuSleepC$WDE = 3, 
  McuSleepC$WDP2 = 2, 
  McuSleepC$WDP1 = 1, 
  McuSleepC$WDP0 = 0, 


  McuSleepC$TSM = 7, 
  McuSleepC$ADHSM = 4, 
  McuSleepC$ACME = 3, 
  McuSleepC$PUD = 2, 
  McuSleepC$PSR0 = 1, 
  McuSleepC$PSR321 = 0, 


  McuSleepC$SPIF = 7, 
  McuSleepC$WCOL = 6, 
  McuSleepC$SPI2X = 0, 


  McuSleepC$SPIE = 7, 
  McuSleepC$SPE = 6, 
  McuSleepC$DORD = 5, 
  McuSleepC$MSTR = 4, 
  McuSleepC$CPOL = 3, 
  McuSleepC$CPHA = 2, 
  McuSleepC$SPR1 = 1, 
  McuSleepC$SPR0 = 0, 


  McuSleepC$UMSEL = 6, 
  McuSleepC$UPM1 = 5, 
  McuSleepC$UPM0 = 4, 
  McuSleepC$USBS = 3, 
  McuSleepC$UCSZ1 = 2, 
  McuSleepC$UCSZ0 = 1, 
  McuSleepC$UCPOL = 0, 


  McuSleepC$UMSEL1 = 6, 
  McuSleepC$UPM11 = 5, 
  McuSleepC$UPM10 = 4, 
  McuSleepC$USBS1 = 3, 
  McuSleepC$UCSZ11 = 2, 
  McuSleepC$UCSZ10 = 1, 
  McuSleepC$UCPOL1 = 0, 


  McuSleepC$UMSEL0 = 6, 
  McuSleepC$UPM01 = 5, 
  McuSleepC$UPM00 = 4, 
  McuSleepC$USBS0 = 3, 
  McuSleepC$UCSZ01 = 2, 
  McuSleepC$UCSZ00 = 1, 
  McuSleepC$UCPOL0 = 0, 


  McuSleepC$RXC = 7, 
  McuSleepC$TXC = 6, 
  McuSleepC$UDRE = 5, 
  McuSleepC$FE = 4, 
  McuSleepC$DOR = 3, 
  McuSleepC$UPE = 2, 
  McuSleepC$U2X = 1, 
  McuSleepC$MPCM = 0, 


  McuSleepC$RXC1 = 7, 
  McuSleepC$TXC1 = 6, 
  McuSleepC$UDRE1 = 5, 
  McuSleepC$FE1 = 4, 
  McuSleepC$DOR1 = 3, 
  McuSleepC$UPE1 = 2, 
  McuSleepC$U2X1 = 1, 
  McuSleepC$MPCM1 = 0, 


  McuSleepC$RXC0 = 7, 
  McuSleepC$TXC0 = 6, 
  McuSleepC$UDRE0 = 5, 
  McuSleepC$FE0 = 4, 
  McuSleepC$DOR0 = 3, 
  McuSleepC$UPE0 = 2, 
  McuSleepC$U2X0 = 1, 
  McuSleepC$MPCM0 = 0, 


  McuSleepC$RXCIE = 7, 
  McuSleepC$TXCIE = 6, 
  McuSleepC$UDRIE = 5, 
  McuSleepC$RXEN = 4, 
  McuSleepC$TXEN = 3, 
  McuSleepC$UCSZ = 2, 
  McuSleepC$UCSZ2 = 2, 
  McuSleepC$RXB8 = 1, 
  McuSleepC$TXB8 = 0, 


  McuSleepC$RXCIE1 = 7, 
  McuSleepC$TXCIE1 = 6, 
  McuSleepC$UDRIE1 = 5, 
  McuSleepC$RXEN1 = 4, 
  McuSleepC$TXEN1 = 3, 
  McuSleepC$UCSZ12 = 2, 
  McuSleepC$RXB81 = 1, 
  McuSleepC$TXB81 = 0, 


  McuSleepC$RXCIE0 = 7, 
  McuSleepC$TXCIE0 = 6, 
  McuSleepC$UDRIE0 = 5, 
  McuSleepC$RXEN0 = 4, 
  McuSleepC$TXEN0 = 3, 
  McuSleepC$UCSZ02 = 2, 
  McuSleepC$RXB80 = 1, 
  McuSleepC$TXB80 = 0, 


  McuSleepC$ACD = 7, 
  McuSleepC$ACBG = 6, 
  McuSleepC$ACO = 5, 
  McuSleepC$ACI = 4, 
  McuSleepC$ACIE = 3, 
  McuSleepC$ACIC = 2, 
  McuSleepC$ACIS1 = 1, 
  McuSleepC$ACIS0 = 0, 


  McuSleepC$ADEN = 7, 
  McuSleepC$ADSC = 6, 
  McuSleepC$ADFR = 5, 
  McuSleepC$ADIF = 4, 
  McuSleepC$ADIE = 3, 
  McuSleepC$ADPS2 = 2, 
  McuSleepC$ADPS1 = 1, 
  McuSleepC$ADPS0 = 0, 


  McuSleepC$REFS1 = 7, 
  McuSleepC$REFS0 = 6, 
  McuSleepC$ADLAR = 5, 
  McuSleepC$MUX4 = 4, 
  McuSleepC$MUX3 = 3, 
  McuSleepC$MUX2 = 2, 
  McuSleepC$MUX1 = 1, 
  McuSleepC$MUX0 = 0, 


  McuSleepC$PA7 = 7, 
  McuSleepC$PA6 = 6, 
  McuSleepC$PA5 = 5, 
  McuSleepC$PA4 = 4, 
  McuSleepC$PA3 = 3, 
  McuSleepC$PA2 = 2, 
  McuSleepC$PA1 = 1, 
  McuSleepC$PA0 = 0, 


  McuSleepC$DDA7 = 7, 
  McuSleepC$DDA6 = 6, 
  McuSleepC$DDA5 = 5, 
  McuSleepC$DDA4 = 4, 
  McuSleepC$DDA3 = 3, 
  McuSleepC$DDA2 = 2, 
  McuSleepC$DDA1 = 1, 
  McuSleepC$DDA0 = 0, 


  McuSleepC$PINA7 = 7, 
  McuSleepC$PINA6 = 6, 
  McuSleepC$PINA5 = 5, 
  McuSleepC$PINA4 = 4, 
  McuSleepC$PINA3 = 3, 
  McuSleepC$PINA2 = 2, 
  McuSleepC$PINA1 = 1, 
  McuSleepC$PINA0 = 0, 


  McuSleepC$PB7 = 7, 
  McuSleepC$PB6 = 6, 
  McuSleepC$PB5 = 5, 
  McuSleepC$PB4 = 4, 
  McuSleepC$PB3 = 3, 
  McuSleepC$PB2 = 2, 
  McuSleepC$PB1 = 1, 
  McuSleepC$PB0 = 0, 


  McuSleepC$DDB7 = 7, 
  McuSleepC$DDB6 = 6, 
  McuSleepC$DDB5 = 5, 
  McuSleepC$DDB4 = 4, 
  McuSleepC$DDB3 = 3, 
  McuSleepC$DDB2 = 2, 
  McuSleepC$DDB1 = 1, 
  McuSleepC$DDB0 = 0, 


  McuSleepC$PINB7 = 7, 
  McuSleepC$PINB6 = 6, 
  McuSleepC$PINB5 = 5, 
  McuSleepC$PINB4 = 4, 
  McuSleepC$PINB3 = 3, 
  McuSleepC$PINB2 = 2, 
  McuSleepC$PINB1 = 1, 
  McuSleepC$PINB0 = 0, 


  McuSleepC$PC7 = 7, 
  McuSleepC$PC6 = 6, 
  McuSleepC$PC5 = 5, 
  McuSleepC$PC4 = 4, 
  McuSleepC$PC3 = 3, 
  McuSleepC$PC2 = 2, 
  McuSleepC$PC1 = 1, 
  McuSleepC$PC0 = 0, 


  McuSleepC$DDC7 = 7, 
  McuSleepC$DDC6 = 6, 
  McuSleepC$DDC5 = 5, 
  McuSleepC$DDC4 = 4, 
  McuSleepC$DDC3 = 3, 
  McuSleepC$DDC2 = 2, 
  McuSleepC$DDC1 = 1, 
  McuSleepC$DDC0 = 0, 


  McuSleepC$PINC7 = 7, 
  McuSleepC$PINC6 = 6, 
  McuSleepC$PINC5 = 5, 
  McuSleepC$PINC4 = 4, 
  McuSleepC$PINC3 = 3, 
  McuSleepC$PINC2 = 2, 
  McuSleepC$PINC1 = 1, 
  McuSleepC$PINC0 = 0, 


  McuSleepC$PD7 = 7, 
  McuSleepC$PD6 = 6, 
  McuSleepC$PD5 = 5, 
  McuSleepC$PD4 = 4, 
  McuSleepC$PD3 = 3, 
  McuSleepC$PD2 = 2, 
  McuSleepC$PD1 = 1, 
  McuSleepC$PD0 = 0, 


  McuSleepC$DDD7 = 7, 
  McuSleepC$DDD6 = 6, 
  McuSleepC$DDD5 = 5, 
  McuSleepC$DDD4 = 4, 
  McuSleepC$DDD3 = 3, 
  McuSleepC$DDD2 = 2, 
  McuSleepC$DDD1 = 1, 
  McuSleepC$DDD0 = 0, 


  McuSleepC$PIND7 = 7, 
  McuSleepC$PIND6 = 6, 
  McuSleepC$PIND5 = 5, 
  McuSleepC$PIND4 = 4, 
  McuSleepC$PIND3 = 3, 
  McuSleepC$PIND2 = 2, 
  McuSleepC$PIND1 = 1, 
  McuSleepC$PIND0 = 0, 


  McuSleepC$PE7 = 7, 
  McuSleepC$PE6 = 6, 
  McuSleepC$PE5 = 5, 
  McuSleepC$PE4 = 4, 
  McuSleepC$PE3 = 3, 
  McuSleepC$PE2 = 2, 
  McuSleepC$PE1 = 1, 
  McuSleepC$PE0 = 0, 


  McuSleepC$DDE7 = 7, 
  McuSleepC$DDE6 = 6, 
  McuSleepC$DDE5 = 5, 
  McuSleepC$DDE4 = 4, 
  McuSleepC$DDE3 = 3, 
  McuSleepC$DDE2 = 2, 
  McuSleepC$DDE1 = 1, 
  McuSleepC$DDE0 = 0, 


  McuSleepC$PINE7 = 7, 
  McuSleepC$PINE6 = 6, 
  McuSleepC$PINE5 = 5, 
  McuSleepC$PINE4 = 4, 
  McuSleepC$PINE3 = 3, 
  McuSleepC$PINE2 = 2, 
  McuSleepC$PINE1 = 1, 
  McuSleepC$PINE0 = 0, 


  McuSleepC$PF7 = 7, 
  McuSleepC$PF6 = 6, 
  McuSleepC$PF5 = 5, 
  McuSleepC$PF4 = 4, 
  McuSleepC$PF3 = 3, 
  McuSleepC$PF2 = 2, 
  McuSleepC$PF1 = 1, 
  McuSleepC$PF0 = 0, 


  McuSleepC$DDF7 = 7, 
  McuSleepC$DDF6 = 6, 
  McuSleepC$DDF5 = 5, 
  McuSleepC$DDF4 = 4, 
  McuSleepC$DDF3 = 3, 
  McuSleepC$DDF2 = 2, 
  McuSleepC$DDF1 = 1, 
  McuSleepC$DDF0 = 0, 


  McuSleepC$PINF7 = 7, 
  McuSleepC$PINF6 = 6, 
  McuSleepC$PINF5 = 5, 
  McuSleepC$PINF4 = 4, 
  McuSleepC$PINF3 = 3, 
  McuSleepC$PINF2 = 2, 
  McuSleepC$PINF1 = 1, 
  McuSleepC$PINF0 = 0, 


  McuSleepC$PG4 = 4, 
  McuSleepC$PG3 = 3, 
  McuSleepC$PG2 = 2, 
  McuSleepC$PG1 = 1, 
  McuSleepC$PG0 = 0, 


  McuSleepC$DDG4 = 4, 
  McuSleepC$DDG3 = 3, 
  McuSleepC$DDG2 = 2, 
  McuSleepC$DDG1 = 1, 
  McuSleepC$DDG0 = 0, 


  McuSleepC$PING4 = 4, 
  McuSleepC$PING3 = 3, 
  McuSleepC$PING2 = 2, 
  McuSleepC$PING1 = 1, 
  McuSleepC$PING0 = 0
};
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
uint8_t McuSleepC$atm128RegFile[1000][1000][0xa0];
#line 89
static __inline void McuSleepC$__nesc_disable_interrupt(void );




typedef uint8_t McuSleepC$__nesc_atomic_t;



#line 97
__inline McuSleepC$__nesc_atomic_t 
McuSleepC$__nesc_atomic_start(void )  ;








#line 106
__inline void 
McuSleepC$__nesc_atomic_end(McuSleepC$__nesc_atomic_t original_SREG)  ;
#line 120
typedef uint8_t McuSleepC$mcu_power_t  ;

static inline McuSleepC$mcu_power_t McuSleepC$mcombine(McuSleepC$mcu_power_t m1, McuSleepC$mcu_power_t m2);



enum McuSleepC$__nesc_unnamed4334 {
  McuSleepC$ATM128_POWER_IDLE = 0, 
  McuSleepC$ATM128_POWER_ADC_NR = 1, 
  McuSleepC$ATM128_POWER_EXT_STANDBY = 2, 
  McuSleepC$ATM128_POWER_SAVE = 3, 
  McuSleepC$ATM128_POWER_STANDBY = 4, 
  McuSleepC$ATM128_POWER_DOWN = 5
};
# 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/McuSleepC.nc"
bool McuSleepC$dirty[1000];
McuSleepC$mcu_power_t McuSleepC$powerState[1000];






const uint8_t McuSleepC$atm128PowerBits[1000][McuSleepC$ATM128_POWER_DOWN + 1];







static inline McuSleepC$mcu_power_t McuSleepC$getPowerState(void );
#line 106
static inline void McuSleepC$computePowerState(void );




static inline void McuSleepC$McuSleep$sleep(void );
#line 146
static inline McuSleepC$mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void );
# 21 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void );
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SimMainP$SoftwareInit$init(void );
# 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Boot.nc"
static void SimMainP$Boot$booted(void );
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SimMainP$PlatformInit$init(void );
# 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SimMainP$Scheduler$init(void );







static bool SimMainP$Scheduler$runNextTask(void );
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimMainP.nc"
int sim_main_start_mote(void )   ;
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP$TaskBasic$runTask(
# 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x101569ab0);
# 5 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
static void SimSchedulerBasicP$Energy$mcu_state_change(uint8_t powerstate);
# 76 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SimSchedulerBasicP$McuSleep$sleep(void );
# 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
enum SimSchedulerBasicP$__nesc_unnamed4335 {

  SimSchedulerBasicP$NUM_TASKS = 17U, 
  SimSchedulerBasicP$NO_TASK = 255
};

uint8_t SimSchedulerBasicP$m_head[1000];
uint8_t SimSchedulerBasicP$m_tail[1000];
uint8_t SimSchedulerBasicP$m_next[1000][SimSchedulerBasicP$NUM_TASKS];




bool SimSchedulerBasicP$sim_scheduler_event_pending[1000];
sim_event_t SimSchedulerBasicP$sim_scheduler_event[1000];

static inline int SimSchedulerBasicP$sim_config_task_latency(void );







static void SimSchedulerBasicP$sim_scheduler_submit_event(void );







static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e);
#line 99
static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e);
#line 116
static inline uint8_t SimSchedulerBasicP$popTask(void );
#line 135
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id);




static inline bool SimSchedulerBasicP$pushTask(uint8_t id);
#line 162
static inline void SimSchedulerBasicP$Scheduler$init(void );
#line 176
static bool SimSchedulerBasicP$Scheduler$runNextTask(void );
#line 207
static error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id);
#line 223
static inline void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
long long int SimMoteP$euid[1000];
long long int SimMoteP$startTime[1000];
bool SimMoteP$isOn[1000];
sim_event_t *SimMoteP$bootEvent[1000];

static inline long long int SimMoteP$SimMote$getEuid(void );


static inline void SimMoteP$SimMote$setEuid(long long int e);


static inline long long int SimMoteP$SimMote$getStartTime(void );


static inline bool SimMoteP$SimMote$isOn(void );



static inline int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size);



static void SimMoteP$SimMote$turnOn(void );
#line 85
static inline void SimMoteP$SimMote$turnOff(void );




long long int sim_mote_euid(int mote)   ;








void sim_mote_set_euid(int mote, long long int id)   ;






long long int sim_mote_start_time(int mote)   ;








int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)   ;









void sim_mote_set_start_time(int mote, long long int t)   ;








bool sim_mote_is_on(int mote)   ;








void sim_mote_turn_on(int mote)   ;






void sim_mote_turn_off(int mote)   ;






static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e);








void sim_mote_enqueue_boot_event(int mote)   ;
# 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static am_addr_t TossimActiveMessageC$amAddress(void );
# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void TossimActiveMessageC$AMSend$sendDone(
# 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x10194c788, 
# 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Snoop$receive(
# 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x101960480, 
# 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



TossimActiveMessageC$Receive$receive(
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x101962908, 
# 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimActiveMessageC$Model$send(int node, message_t *msg, uint8_t len);
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
message_t TossimActiveMessageC$buffer[1000];
message_t *TossimActiveMessageC$bufferPointer[1000];

static inline tossim_header_t *TossimActiveMessageC$getHeader(message_t *amsg);







static error_t TossimActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 91
static inline uint8_t TossimActiveMessageC$AMSend$maxPayloadLength(am_id_t id);
#line 103
static inline void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t result);





static void TossimActiveMessageC$Model$receive(message_t *msg);
#line 127
static inline bool TossimActiveMessageC$Model$shouldAck(message_t *msg);








static inline am_addr_t TossimActiveMessageC$AMPacket$address(void );



static am_addr_t TossimActiveMessageC$AMPacket$destination(message_t *amsg);




static void TossimActiveMessageC$AMPacket$setDestination(message_t *amsg, am_addr_t addr);




static am_addr_t TossimActiveMessageC$AMPacket$source(message_t *amsg);









static inline bool TossimActiveMessageC$AMPacket$isForMe(message_t *amsg);




static am_id_t TossimActiveMessageC$AMPacket$type(message_t *amsg);




static void TossimActiveMessageC$AMPacket$setType(message_t *amsg, am_id_t t);






static inline uint8_t TossimActiveMessageC$Packet$payloadLength(message_t *msg);



static inline void TossimActiveMessageC$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void );



static inline void *TossimActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len);
#line 212
static inline message_t *TossimActiveMessageC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *TossimActiveMessageC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 236
static inline void TossimActiveMessageC$active_message_deliver_handle(sim_event_t *evt);





static inline sim_event_t *TossimActiveMessageC$allocate_deliver_event(int node, message_t *msg, sim_time_t t);
#line 254
void active_message_deliver(int node, message_t *msg, sim_time_t t)   ;
# 85 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static void TossimPacketModelC$Packet$receive(message_t *msg);
#line 76
static void TossimPacketModelC$Packet$sendDone(message_t *msg, error_t error);










static bool TossimPacketModelC$Packet$shouldAck(message_t *msg);
# 8 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/PacketEnergyEstimator.nc"
static void TossimPacketModelC$Energy$poweron_start(void );
#line 5
static void TossimPacketModelC$Energy$send_busy(int arg_0x101a00888, uint8_t arg_0x101a00b38, int arg_0x101a00da0);
static void TossimPacketModelC$Energy$recv_done(int arg_0x1019fe638);
#line 4
static void TossimPacketModelC$Energy$send_done(int arg_0x101a01930, uint8_t arg_0x101a01be0, sim_time_t arg_0x101a00020);
#line 3
static void TossimPacketModelC$Energy$send_start(int arg_0x1019d9b48, uint8_t arg_0x1019d9df8, int arg_0x101a010c8);
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t TossimPacketModelC$startDoneTask$postTask(void );
# 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void TossimPacketModelC$Control$startDone(error_t error);
#line 138
static void TossimPacketModelC$Control$stopDone(error_t error);
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC$GainRadioModel$putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool TossimPacketModelC$GainRadioModel$clearChannel(void );
static void TossimPacketModelC$GainRadioModel$setPendingTransmission(void );
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t TossimPacketModelC$AMPacket$destination(
#line 74
message_t * amsg);
# 94 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
enum TossimPacketModelC$__nesc_unnamed4336 {
#line 94
  TossimPacketModelC$startDoneTask = 0U
};
#line 94
typedef int TossimPacketModelC$__nesc_sillytask_startDoneTask[TossimPacketModelC$startDoneTask];




enum TossimPacketModelC$__nesc_unnamed4337 {
#line 99
  TossimPacketModelC$stopDoneTask = 1U
};
#line 99
typedef int TossimPacketModelC$__nesc_sillytask_stopDoneTask[TossimPacketModelC$stopDoneTask];
#line 153
enum TossimPacketModelC$__nesc_unnamed4338 {
#line 153
  TossimPacketModelC$sendDoneTask = 2U
};
#line 153
typedef int TossimPacketModelC$__nesc_sillytask_sendDoneTask[TossimPacketModelC$sendDoneTask];
#line 68
bool TossimPacketModelC$initialized[1000];
bool TossimPacketModelC$running[1000];
uint8_t TossimPacketModelC$backoffCount[1000];
uint8_t TossimPacketModelC$neededFreeSamples[1000];
message_t *TossimPacketModelC$sending[1000];
bool TossimPacketModelC$transmitting[1000];
uint8_t TossimPacketModelC$sendingLength[1000];
int TossimPacketModelC$destNode[1000];
sim_event_t TossimPacketModelC$sendEvent[1000];



static inline tossim_metadata_t *TossimPacketModelC$getMetadata(message_t *msg);



static inline error_t TossimPacketModelC$Init$init(void );









static inline void TossimPacketModelC$startDoneTask$runTask(void );




static inline void TossimPacketModelC$stopDoneTask$runTask(void );




static inline error_t TossimPacketModelC$Control$start(void );
#line 136
static inline error_t TossimPacketModelC$PacketAcknowledgements$requestAck(message_t *msg);
#line 148
static inline error_t TossimPacketModelC$PacketAcknowledgements$wasAcked(message_t *ack);




static inline void TossimPacketModelC$sendDoneTask$runTask(void );
#line 172
static inline void TossimPacketModelC$start_csma(void );

static inline error_t TossimPacketModelC$Packet$send(int dest, message_t *msg, uint8_t len);
#line 204
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt);
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt);
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt);

static inline void TossimPacketModelC$start_csma(void );
#line 232
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt);
#line 279
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt);
#line 316
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt);










static inline void TossimPacketModelC$GainRadioModel$receive(message_t *msg);








uint8_t TossimPacketModelC$error[1000];

static inline void TossimPacketModelC$GainRadioModel$acked(message_t *msg);










static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg);
# 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC$Model$receive(message_t *msg);
#line 59
static void CpmModelC$Model$acked(message_t *msg);

static bool CpmModelC$Model$shouldAck(message_t *msg);
# 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
message_t *CpmModelC$outgoing[1000];
bool CpmModelC$requestAck[1000];
bool CpmModelC$receiving[1000];
bool CpmModelC$transmitting[1000];
sim_time_t CpmModelC$transmissionEndTime[1000];
struct CpmModelC$receive_message;
typedef struct CpmModelC$receive_message CpmModelC$receive_message_t;

struct CpmModelC$receive_message {
  int source;
  sim_time_t start;
  sim_time_t end;
  double power;
  double reversePower;
  int8_t strength;
  bool lost;
  bool ack;
  message_t *msg;
  CpmModelC$receive_message_t *next;
};

CpmModelC$receive_message_t *CpmModelC$outstandingReceptionHead[1000];

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void );
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t t, CpmModelC$receive_message_t *m);

static bool CpmModelC$shouldReceive(double SNR);
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);


static inline double CpmModelC$timeInMs(void );
#line 126
static double CpmModelC$noise_hash_generation(void );
#line 151
static inline double CpmModelC$arr_estimate_from_snr(double SNR);
#line 166
static inline int CpmModelC$shouldAckReceive(double snr);
#line 178
static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt);
#line 200
double CpmModelC$clearThreshold[1000];










static inline bool CpmModelC$Model$clearChannel(void );




static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r);
#line 230
static inline double CpmModelC$prr_estimate_from_snr(double SNR);
#line 248
static bool CpmModelC$shouldReceive(double SNR);
#line 260
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
#line 274
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);
#line 296
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt);
#line 369
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower);
#line 428
static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower);







static inline void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower);
#line 459
static inline void CpmModelC$Model$setPendingTransmission(void );







static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg);
#line 479
static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void );



static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/ActiveMessageAddressC.nc"
bool ActiveMessageAddressC$set[1000];
am_addr_t ActiveMessageAddressC$addr[1000];









static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
#line 88
static inline am_addr_t ActiveMessageAddressC$amAddress(void );
# 13 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/PacketEnergyEstimatorP.nc"
static inline void PacketEnergyEstimatorP$Energy$poweron_start(void );
#line 30
static inline void PacketEnergyEstimatorP$Energy$send_done(int dest, uint8_t len, sim_time_t state);




static inline void PacketEnergyEstimatorP$Energy$send_busy(int dest, uint8_t len, int state);




static inline void PacketEnergyEstimatorP$Energy$send_start(int dest, uint8_t len, int dbpower);










static inline void PacketEnergyEstimatorP$Energy$recv_done(int tome);
# 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/RootControl.nc"
static error_t MultihopOscilloscopeC$RootControl$setRoot(void );
# 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t MultihopOscilloscopeC$SerialControl$start(void );
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MultihopOscilloscopeC$uartSendTask$postTask(void );
# 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t MultihopOscilloscopeC$RadioControl$start(void );
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static error_t MultihopOscilloscopeC$Send$send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

MultihopOscilloscopeC$Send$getPayload(
#line 122
message_t * msg, 


uint8_t len);
#line 112
static uint8_t MultihopOscilloscopeC$Send$maxPayloadLength(void );
# 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
MultihopOscilloscopeC$UARTMessagePool$t * 


MultihopOscilloscopeC$UARTMessagePool$get(void );
#line 89
static error_t MultihopOscilloscopeC$UARTMessagePool$put(
#line 85
MultihopOscilloscopeC$UARTMessagePool$t * newVal);
# 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Read.nc"
static error_t MultihopOscilloscopeC$Read$read(void );
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t MultihopOscilloscopeC$SerialSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

MultihopOscilloscopeC$SerialSend$getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t MultihopOscilloscopeC$RoutingControl$start(void );
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Leds.nc"
static void MultihopOscilloscopeC$Leds$led0Toggle(void );




static void MultihopOscilloscopeC$Leds$led1On(void );










static void MultihopOscilloscopeC$Leds$led1Toggle(void );
#line 100
static void MultihopOscilloscopeC$Leds$led2Toggle(void );
#line 56
static void MultihopOscilloscopeC$Leds$led0On(void );
#line 89
static void MultihopOscilloscopeC$Leds$led2On(void );
# 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
static error_t MultihopOscilloscopeC$UARTQueue$enqueue(
#line 86
MultihopOscilloscopeC$UARTQueue$t  newVal);
#line 81
static 
#line 79
MultihopOscilloscopeC$UARTQueue$t  

MultihopOscilloscopeC$UARTQueue$dequeue(void );
#line 50
static bool MultihopOscilloscopeC$UARTQueue$empty(void );
# 92 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool MultihopOscilloscopeC$Timer$isRunning(void );
#line 64
static void MultihopOscilloscopeC$Timer$startPeriodic(uint32_t dt);
#line 78
static void MultihopOscilloscopeC$Timer$stop(void );
# 49 "MultihopOscilloscopeC.nc"
enum MultihopOscilloscopeC$__nesc_unnamed4339 {
#line 49
  MultihopOscilloscopeC$uartSendTask = 3U
};
#line 49
typedef int MultihopOscilloscopeC$__nesc_sillytask_uartSendTask[MultihopOscilloscopeC$uartSendTask];
static void MultihopOscilloscopeC$startTimer(void );
static void MultihopOscilloscopeC$fatal_problem(void );
inline static void MultihopOscilloscopeC$report_problem(void );
inline static void MultihopOscilloscopeC$report_sent(void );
inline static void MultihopOscilloscopeC$report_received(void );

uint8_t MultihopOscilloscopeC$uartlen[1000];
message_t MultihopOscilloscopeC$sendbuf[1000];
message_t MultihopOscilloscopeC$uartbuf[1000];
bool MultihopOscilloscopeC$sendbusy[1000];
#line 59
bool MultihopOscilloscopeC$uartbusy[1000];


oscilloscope_t MultihopOscilloscopeC$local[1000];

uint8_t MultihopOscilloscopeC$reading[1000];






bool MultihopOscilloscopeC$suppress_count_change[1000];





static inline void MultihopOscilloscopeC$Boot$booted(void );
#line 90
static inline void MultihopOscilloscopeC$RadioControl$startDone(error_t error);










static inline void MultihopOscilloscopeC$SerialControl$startDone(error_t error);










static void MultihopOscilloscopeC$startTimer(void );





static inline void MultihopOscilloscopeC$RadioControl$stopDone(error_t error);
static inline void MultihopOscilloscopeC$SerialControl$stopDone(error_t error);






static message_t *
MultihopOscilloscopeC$Receive$receive(message_t *msg, void *payload, uint8_t len);
#line 170
static inline void MultihopOscilloscopeC$uartSendTask$runTask(void );







static void MultihopOscilloscopeC$SerialSend$sendDone(message_t *msg, error_t error);
#line 200
static inline message_t *
MultihopOscilloscopeC$Snoop$receive(message_t *msg, void *payload, uint8_t len);
#line 227
static inline void MultihopOscilloscopeC$Timer$fired(void );
#line 254
static inline void MultihopOscilloscopeC$Send$sendDone(message_t *msg, error_t error);








static inline void MultihopOscilloscopeC$Read$readDone(error_t result, uint16_t data);










static void MultihopOscilloscopeC$fatal_problem(void );






inline static void MultihopOscilloscopeC$report_problem(void );
inline static void MultihopOscilloscopeC$report_sent(void );
inline static void MultihopOscilloscopeC$report_received(void );
# 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP$Led0$toggle(void );
static bool LedsP$Led0$get(void );


static void LedsP$Led0$makeOutput(void );
#line 40
static void LedsP$Led0$set(void );
static void LedsP$Led0$clr(void );
static void LedsP$Led1$toggle(void );
static bool LedsP$Led1$get(void );


static void LedsP$Led1$makeOutput(void );
#line 40
static void LedsP$Led1$set(void );
static void LedsP$Led1$clr(void );
static void LedsP$Led2$toggle(void );
static bool LedsP$Led2$get(void );


static void LedsP$Led2$makeOutput(void );
#line 40
static void LedsP$Led2$set(void );
static void LedsP$Led2$clr(void );
# 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void );
#line 74
static inline void LedsP$Leds$led0On(void );









static void LedsP$Leds$led0Toggle(void );




static inline void LedsP$Leds$led1On(void );









static inline void LedsP$Leds$led1Toggle(void );




static inline void LedsP$Leds$led2On(void );









static inline void LedsP$Leds$led2Toggle(void );
# 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void );
# 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void );
# 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void );
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void );
# 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void );
# 38 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[1000];
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[1000];



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$__nesc_unnamed4340 {
  Atm128AlarmAsyncP$0$MINDT = 2, 
  Atm128AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP$Timer0$overflow(void );
# 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP$Compare$fired(void );
# 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
bool HplAtm128Timer0AsyncP$inOverflow[1000];




static inline void HplAtm128Timer0AsyncP$cancel_overflow(void );
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void );
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *e);
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void );

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );




sim_time_t HplAtm128Timer0AsyncP$lastZero[1000];





uint8_t HplAtm128Timer0AsyncP$oldScale[1000];



static inline void HplAtm128Timer0AsyncP$cancel_compare(void );
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void );
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *e);
static void HplAtm128Timer0AsyncP$schedule_new_compare(void );

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );


void INTERRUPT_15(void )   ;





void INTERRUPT_16(void )   ;







static sim_time_t HplAtm128Timer0AsyncP$last_zero(void );







static inline void HplAtm128Timer0AsyncP$notify_changed(void );










static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void );
#line 148
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);





static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);





static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );
#line 185
sim_event_t *HplAtm128Timer0AsyncP$compare[1000];

static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt);
#line 223
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void );







static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt);
#line 267
static void HplAtm128Timer0AsyncP$schedule_new_compare(void );
#line 282
static uint8_t HplAtm128Timer0AsyncP$Timer0$get(void );
#line 297
static inline void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal);
#line 321
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void );
#line 364
static inline void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x);
#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void );
#line 447
static inline void HplAtm128Timer0AsyncP$Compare$start(void );









static uint8_t HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(uint8_t t);
#line 480
sim_event_t *HplAtm128Timer0AsyncP$overflow[1000];
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt);
#line 500
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void );







static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt);
#line 534
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void );










static inline void HplAtm128Timer0AsyncP$cancel_overflow(void );
#line 561
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );







static inline void HplAtm128Timer0AsyncP$cancel_compare(void );
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void );
# 109 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void );
# 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void );
# 74 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4341 {
#line 74
  AlarmToTimerC$0$fired = 4U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[1000];
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[1000];

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void );
# 136 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x101e41da0);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4342 {
#line 71
  VirtualizeTimerC$0$updateFromTimer = 5U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4343 {

  VirtualizeTimerC$0$NUM_TIMERS = 4U, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4344 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[1000][/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Read.nc"
static void /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$Read$readDone(error_t result, /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$Read$val_t val);
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$senseResult$postTask(void );
# 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ConstantSensorC.nc"
enum /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$__nesc_unnamed4345 {
#line 47
  ConstantSensorC$0$senseResult = 6U
};
#line 47
typedef int /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$__nesc_sillytask_senseResult[/*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$senseResult];
#line 47
static inline void /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$senseResult$runTask(void );



static inline error_t /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$Read$read(void );
# 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/RootControl.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$RootControl$isRoot(void );
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 123
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$maxPayloadLength(void );
# 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(uint8_t type);
#line 73
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node);
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txAck(am_addr_t neighbor);



static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txNoAck(am_addr_t neighbor);
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Cache.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$insert(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$t item);







static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$lookup(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$t item);
# 31 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Intercept.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$forward(
# 114 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x101f3f9b0, 
# 20 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Intercept.nc"
message_t * msg, 

void * payload, 








uint8_t len);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$receive(
# 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x101f41e08, 
# 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Random$rand16(void );
# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$sendDone(
# 111 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x101f42108, 
# 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 92 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$isRunning(void );
#line 73
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$startOneShot(uint32_t dt);
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask(void );
# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  

/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$head(void );
#line 90
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$enqueue(
#line 86
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  newVal);
#line 101
static 
#line 99
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  

/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$element(uint8_t idx);
#line 81
static 
#line 79
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  

/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue(void );
#line 50
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$empty(void );







static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size(void );
# 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$recomputeRoutes(void );
#line 71
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerRouteUpdate(void );
#line 64
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$getEtx(uint16_t *etx);
#line 78
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerImmediateRouteUpdate(void );
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$maxPayloadLength(void );
#line 94
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$receive(
# 112 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x101f41270, 
# 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$hasRoute(void );
#line 48
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$nextHop(void );
# 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$requestAck(
#line 53
message_t * msg);
#line 85
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$wasAcked(
#line 80
message_t * msg);
# 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$t * 


/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$get(void );
#line 61
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$empty(void );
#line 89
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(
#line 85
/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$t * newVal);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(
#line 74
message_t * amsg);
# 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$t * 


/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$get(void );
#line 61
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$empty(void );
#line 89
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(
#line 85
/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$t * newVal);
# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/CollectionId.nc"
static collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$fetch(
# 146 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x101f62318);
#line 234
enum /*CtpP.Forwarder*/CtpForwardingEngineP$0$__nesc_unnamed4346 {
#line 234
  CtpForwardingEngineP$0$sendTask = 7U
};
#line 234
typedef int /*CtpP.Forwarder*/CtpForwardingEngineP$0$__nesc_sillytask_sendTask[/*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask];
#line 169
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(uint16_t mask, uint16_t offset);
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(uint8_t state);
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(uint8_t state);
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(uint8_t state);


enum /*CtpP.Forwarder*/CtpForwardingEngineP$0$__nesc_unnamed4347 {
  CtpForwardingEngineP$0$QUEUE_CONGESTED = 0x1, 
  CtpForwardingEngineP$0$ROUTING_ON = 0x2, 
  CtpForwardingEngineP$0$RADIO_ON = 0x4, 
  CtpForwardingEngineP$0$ACK_PENDING = 0x8, 
  CtpForwardingEngineP$0$SENDING = 0x10
};


uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[1000];



uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno[1000];

enum /*CtpP.Forwarder*/CtpForwardingEngineP$0$__nesc_unnamed4348 {
  CtpForwardingEngineP$0$CLIENT_COUNT = 1U
};






fe_queue_entry_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientEntries[1000][/*CtpP.Forwarder*/CtpForwardingEngineP$0$CLIENT_COUNT];
fe_queue_entry_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[1000][/*CtpP.Forwarder*/CtpForwardingEngineP$0$CLIENT_COUNT];







message_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsg[1000];
message_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[1000];

static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Init$init(void );










static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$StdControl$start(void );
#line 239
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$startDone(error_t err);









static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(uint16_t window, uint16_t offset);
#line 262
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$routeFound(void );




static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$noRoute(void );





static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$stopDone(error_t err);





static inline ctp_data_header_t */*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(message_t *m);
#line 294
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$send(uint8_t client, message_t *msg, uint8_t len);
#line 345
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$maxPayloadLength(uint8_t client);



static inline void */*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$getPayload(uint8_t client, message_t *msg, uint8_t len);
#line 371
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$runTask(void );
#line 483
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$packetComplete(fe_queue_entry_t *qe, message_t *msg, bool success);
#line 527
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(message_t *msg, error_t error);
#line 578
static inline message_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$forward(message_t * m);
#line 668
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 733
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSnoop$receive(message_t *msg, void *payload, uint8_t len);
#line 746
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$fired(void );





static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpCongestion$isCongested(void );








static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor);







static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(message_t *msg);



static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength(void );



static void */*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(message_t *msg, uint8_t len);








static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(message_t *msg);

static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(message_t *msg);





static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(message_t *msg);
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(message_t *msg);
static inline uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getEtx(message_t *msg);
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(message_t *msg);
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(message_t *msg);
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setThl(message_t *msg, uint8_t thl);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setEtx(message_t *msg, uint16_t e);

static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$option(message_t *msg, ctp_options_t opt);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setOption(message_t *msg, ctp_options_t opt);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$clearOption(message_t *msg, ctp_options_t opt);






static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$matchInstance(message_t *m1, message_t *m2);
#line 835
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(uint8_t state);


static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(uint8_t state);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(uint8_t state);






static inline 
#line 847
void 
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$default$sendDone(uint8_t client, message_t *msg, error_t error);



static inline 
#line 851
bool 
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$default$forward(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$default$receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$default$receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static inline collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$default$fetch(uint8_t client);
# 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$free[1000];
uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$index[1000];
/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t * /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[1000][12];
/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool[1000][12];

static inline error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Init$init(void );









static inline bool /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$empty(void );
#line 88
static inline /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t */*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$get(void );
#line 103
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$put(/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t *newVal);
#line 60
uint8_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[1000];
uint8_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[1000];
/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t * /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[1000][12];
/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool[1000][12];

static inline error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Init$init(void );









static inline bool /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$empty(void );
#line 88
static inline /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t */*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$get(void );
#line 103
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$put(/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t *newVal);
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
/*CtpP.SendQueueP*/QueueC$0$queue_t  /*CtpP.SendQueueP*/QueueC$0$queue[1000][13];
uint8_t /*CtpP.SendQueueP*/QueueC$0$head[1000];
uint8_t /*CtpP.SendQueueP*/QueueC$0$tail[1000];
uint8_t /*CtpP.SendQueueP*/QueueC$0$size[1000];

static inline bool /*CtpP.SendQueueP*/QueueC$0$Queue$empty(void );



static inline uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$size(void );



static inline uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$maxSize(void );



static inline /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$head(void );



static void /*CtpP.SendQueueP*/QueueC$0$printQueue(void );
#line 85
static /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$dequeue(void );
#line 97
static error_t /*CtpP.SendQueueP*/QueueC$0$Queue$enqueue(/*CtpP.SendQueueP*/QueueC$0$queue_t newVal);
#line 112
static inline /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$element(uint8_t idx);
# 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpPacket.nc"
static am_addr_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getOrigin(message_t *msg);
#line 54
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getThl(message_t *msg);








static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getSequenceNumber(message_t *msg);


static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getType(message_t *msg);
# 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
#line 53
typedef struct /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$__nesc_unnamed4349 {
  am_addr_t origin;
  uint8_t seqno;
  collection_id_t type;
  uint8_t thl;
} /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$ctp_packet_sig_t;

/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$ctp_packet_sig_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[1000][4];
uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[1000];
uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[1000];

static inline error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Init$init(void );
#line 84
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$lookup(message_t *m);
#line 100
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$remove(uint8_t i);
#line 116
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$insert(message_t *m);
#line 135
static inline bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$lookup(message_t *m);
# 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static void LinkEstimatorP$LinkEstimator$evicted(am_addr_t neighbor);
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t LinkEstimatorP$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 110
static void LinkEstimatorP$Send$sendDone(
#line 103
message_t * msg, 






error_t error);
# 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t LinkEstimatorP$Random$rand16(void );
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t LinkEstimatorP$SubPacket$payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


LinkEstimatorP$SubPacket$getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t LinkEstimatorP$SubPacket$maxPayloadLength(void );
# 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t LinkEstimatorP$SubAMPacket$source(
#line 84
message_t * amsg);
#line 78
static am_addr_t LinkEstimatorP$SubAMPacket$destination(
#line 74
message_t * amsg);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



LinkEstimatorP$Receive$receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CompareBit.nc"
static bool LinkEstimatorP$CompareBit$shouldInsert(message_t * msg, void * payload, uint8_t len);
# 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/LinkPacketMetadata.nc"
static bool LinkEstimatorP$LinkPacketMetadata$highChannelQuality(
#line 44
message_t * msg);
# 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
enum LinkEstimatorP$__nesc_unnamed4350 {


  LinkEstimatorP$EVICT_ETX_THRESHOLD = 65, 


  LinkEstimatorP$MAX_PKT_GAP = 10, 
  LinkEstimatorP$BEST_ETX = 10, 
  LinkEstimatorP$INVALID_RVAL = 0xff, 
  LinkEstimatorP$INVALID_NEIGHBOR_ADDR = 0xff, 


  LinkEstimatorP$VERY_LARGE_ETX_VALUE = 0xffff, 


  LinkEstimatorP$ALPHA = 9, 


  LinkEstimatorP$DLQ_PKT_WINDOW = 5, 


  LinkEstimatorP$BLQ_PKT_WINDOW = 3, 



  LinkEstimatorP$LARGE_ETX_VALUE = 70
};


neighbor_table_entry_t LinkEstimatorP$NeighborTable[1000][10];

uint8_t LinkEstimatorP$linkEstSeq[1000];



uint8_t LinkEstimatorP$prevSentIdx[1000];


static inline linkest_header_t *LinkEstimatorP$getHeader(message_t *m);




static inline linkest_footer_t *LinkEstimatorP$getFooter(message_t *m, uint8_t len);







static inline uint8_t LinkEstimatorP$addLinkEstHeaderAndFooter(message_t *msg, uint8_t len);
#line 171
static void LinkEstimatorP$initNeighborIdx(uint8_t i, am_addr_t ll_addr);
#line 184
static uint8_t LinkEstimatorP$findIdx(am_addr_t ll_addr);
#line 197
static uint8_t LinkEstimatorP$findEmptyNeighborIdx(void );
#line 210
static uint8_t LinkEstimatorP$findWorstNeighborIdx(uint8_t thresholdETX);
#line 245
static inline uint8_t LinkEstimatorP$findRandomNeighborIdx(void );
#line 283
static void LinkEstimatorP$updateETX(neighbor_table_entry_t *ne, uint16_t newEst);





static void LinkEstimatorP$updateDETX(neighbor_table_entry_t *ne);
#line 308
static uint16_t LinkEstimatorP$computeETX(uint8_t q1);
#line 323
static inline void LinkEstimatorP$updateNeighborTableEst(am_addr_t n);
#line 364
static void LinkEstimatorP$updateNeighborEntryIdx(uint8_t idx, uint8_t seq);
#line 395
static inline void LinkEstimatorP$print_neighbor_table(void );
#line 409
static void LinkEstimatorP$print_packet(message_t *msg, uint8_t len);










static inline void LinkEstimatorP$initNeighborTable(void );







static inline error_t LinkEstimatorP$StdControl$start(void );









static inline error_t LinkEstimatorP$Init$init(void );






static uint16_t LinkEstimatorP$LinkEstimator$getLinkQuality(am_addr_t neighbor);
#line 461
static inline error_t LinkEstimatorP$LinkEstimator$insertNeighbor(am_addr_t neighbor);
#line 489
static error_t LinkEstimatorP$LinkEstimator$pinNeighbor(am_addr_t neighbor);









static inline error_t LinkEstimatorP$LinkEstimator$unpinNeighbor(am_addr_t neighbor);
#line 511
static inline error_t LinkEstimatorP$LinkEstimator$txAck(am_addr_t neighbor);
#line 528
static inline error_t LinkEstimatorP$LinkEstimator$txNoAck(am_addr_t neighbor);
#line 544
static inline error_t LinkEstimatorP$LinkEstimator$clearDLQ(am_addr_t neighbor);
#line 559
static inline error_t LinkEstimatorP$Send$send(am_addr_t addr, message_t *msg, uint8_t len);










static inline void LinkEstimatorP$AMSend$sendDone(message_t *msg, error_t error);








static inline uint8_t LinkEstimatorP$Send$maxPayloadLength(void );



static inline void *LinkEstimatorP$Send$getPayload(message_t *msg, uint8_t len);






static inline void LinkEstimatorP$processReceivedMessage(message_t * msg, void * payload, uint8_t len);
#line 668
static inline message_t *LinkEstimatorP$SubReceive$receive(message_t *msg, 
void *payload, 
uint8_t len);
#line 684
static uint8_t LinkEstimatorP$Packet$payloadLength(message_t *msg);
#line 703
static inline uint8_t LinkEstimatorP$Packet$maxPayloadLength(void );




static void *LinkEstimatorP$Packet$getPayload(message_t *msg, uint8_t len);
# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$maxPayloadLength(void );
# 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);



static inline uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength(void );
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x102299020, 
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 123
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$maxPayloadLength(
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x102299020);
# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x10229be18, 
# 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(
#line 74
message_t * msg);
#line 94
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void );
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(
#line 143
message_t * amsg);
# 126 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4351 {
#line 126
  AMQueueImplP$0$CancelTask = 8U
};
#line 126
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 169
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4352 {
#line 169
  AMQueueImplP$0$errorTask = 9U
};
#line 169
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 57
#line 55
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4353 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[1000];
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[1000][2];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[1000][2 / 8 + 1];

static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void );
#line 90
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
#line 163
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );




static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );
#line 189
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(uint8_t id);







static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask(void );
# 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric);
#line 67
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);
# 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$pinNeighbor(am_addr_t neighbor);
#line 52
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$insertNeighbor(am_addr_t neighbor);
#line 69
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$clearDLQ(am_addr_t neighbor);
#line 58
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$unpinNeighbor(am_addr_t neighbor);
#line 49
static uint16_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(uint16_t neighbor);
# 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand16(void );
#line 46
static uint32_t /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand32(void );
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$postTask(void );
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$getPayload(
#line 132
message_t * msg, 


uint8_t len);
#line 123
static uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$maxPayloadLength(void );
# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$startOneShot(uint32_t dt);
#line 64
static void /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$startPeriodic(uint32_t dt);
# 7 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpCongestion.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpCongestion$isCongested(void );
# 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$source(
#line 84
message_t * amsg);
#line 68
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$address(void );
#line 147
static am_id_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$type(
#line 143
message_t * amsg);
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$Routing$routeFound(void );
static void /*CtpP.Router*/CtpRoutingEngineP$0$Routing$noRoute(void );
# 266 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
enum /*CtpP.Router*/CtpRoutingEngineP$0$__nesc_unnamed4354 {
#line 266
  CtpRoutingEngineP$0$updateRouteTask = 10U
};
#line 266
typedef int /*CtpP.Router*/CtpRoutingEngineP$0$__nesc_sillytask_updateRouteTask[/*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask];
#line 384
enum /*CtpP.Router*/CtpRoutingEngineP$0$__nesc_unnamed4355 {
#line 384
  CtpRoutingEngineP$0$sendBeaconTask = 11U
};
#line 384
typedef int /*CtpP.Router*/CtpRoutingEngineP$0$__nesc_sillytask_sendBeaconTask[/*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask];
#line 136
bool /*CtpP.Router*/CtpRoutingEngineP$0$ECNOff[1000];



bool /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[1000];



bool /*CtpP.Router*/CtpRoutingEngineP$0$running[1000];


bool /*CtpP.Router*/CtpRoutingEngineP$0$sending[1000];


bool /*CtpP.Router*/CtpRoutingEngineP$0$justEvicted[1000];

route_info_t /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[1000];
bool /*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[1000];
am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr[1000];
message_t /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer[1000];
ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[1000];


routing_table_entry /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[1000][10];
uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[1000];


uint32_t /*CtpP.Router*/CtpRoutingEngineP$0$parentChanges[1000];



static inline void /*CtpP.Router*/CtpRoutingEngineP$0$routingTableInit(void );
static uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(am_addr_t arg_0x10234a678);
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableUpdateEntry(am_addr_t arg_0x102349020, am_addr_t arg_0x1023492e8, uint16_t arg_0x1023495a8);
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableEvict(am_addr_t neighbor);






uint32_t /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[1000];
uint32_t /*CtpP.Router*/CtpRoutingEngineP$0$t[1000];
bool /*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed[1000];

static void /*CtpP.Router*/CtpRoutingEngineP$0$chooseAdvertiseTime(void );







static inline void /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval(void );




static inline void /*CtpP.Router*/CtpRoutingEngineP$0$decayInterval(void );







static inline void /*CtpP.Router*/CtpRoutingEngineP$0$remainingInterval(void );






static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$Init$init(void );
#line 224
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$StdControl$start(void );
#line 242
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$startDone(error_t error);









static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$stopDone(error_t error);






static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$passLinkEtxThreshold(uint16_t etx);






static inline void /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$runTask(void );
#line 384
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$runTask(void );
#line 423
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$sendDone(message_t *msg, error_t error);







static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$fired(void );





static inline void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$fired(void );
#line 451
static inline ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP$0$getHeader(message_t * m);





static inline message_t */*CtpP.Router*/CtpRoutingEngineP$0$BeaconReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 505
static void /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor);
#line 517
static inline am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$Routing$nextHop(void );


static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$Routing$hasRoute(void );
#line 534
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getEtx(uint16_t *etx);
#line 547
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$recomputeRoutes(void );



static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerRouteUpdate(void );



static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerImmediateRouteUpdate(void );



static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$setNeighborCongested(am_addr_t n, bool congested);
#line 589
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$setRoot(void );
#line 612
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$isRoot(void );
#line 633
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$CompareBit$shouldInsert(message_t *msg, void *payload, uint8_t len);
#line 682
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$routingTableInit(void );





static uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(am_addr_t neighbor);
#line 700
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableUpdateEntry(am_addr_t from, am_addr_t parent, uint16_t etx);
#line 742
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableEvict(am_addr_t neighbor);
#line 775
static bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpRoutingPacket$getOption(message_t *msg, ctp_options_t opt);
# 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC$seed[1000];


static inline error_t RandomMlcgC$Init$init(void );
#line 69
static uint32_t RandomMlcgC$Random$rand32(void );
#line 89
static inline uint16_t RandomMlcgC$Random$rand16(void );
# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err);
# 8 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/DummyActiveMessageP.nc"
static inline bool DummyActiveMessageP$LinkPacketMetadata$highChannelQuality(message_t *msg);
# 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/CollectionIdP.nc"
static inline collection_id_t /*MultihopOscilloscopeAppC.CollectionSenderC.CollectionSenderP.CollectionIdP*/CollectionIdP$0$CollectionId$fetch(void );
# 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SerialActiveMessageC$SplitControl$startDone(error_t error);
#line 138
static void SerialActiveMessageC$SplitControl$stopDone(error_t error);
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialActiveMessageC$startDone$postTask(void );
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
enum SerialActiveMessageC$__nesc_unnamed4356 {
#line 67
  SerialActiveMessageC$startDone = 12U
};
#line 67
typedef int SerialActiveMessageC$__nesc_sillytask_startDone[SerialActiveMessageC$startDone];
enum SerialActiveMessageC$__nesc_unnamed4357 {
#line 68
  SerialActiveMessageC$stopDone = 13U
};
#line 68
typedef int SerialActiveMessageC$__nesc_sillytask_stopDone[SerialActiveMessageC$stopDone];
#line 63
static inline serial_header_t *SerialActiveMessageC$getHeader(message_t *amsg);



static inline void SerialActiveMessageC$startDone$runTask(void );
static inline void SerialActiveMessageC$stopDone$runTask(void );

static inline error_t SerialActiveMessageC$SplitControl$start(void );









static inline error_t SerialActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 96
static inline void *SerialActiveMessageC$AMSend$getPayload(am_id_t id, message_t *m, uint8_t len);







static am_addr_t SerialActiveMessageC$AMPacket$destination(message_t *amsg);




static inline void SerialActiveMessageC$AMPacket$setDestination(message_t *amsg, am_addr_t addr);
#line 129
static am_id_t SerialActiveMessageC$AMPacket$type(message_t *amsg);




static void SerialActiveMessageC$AMPacket$setType(message_t *amsg, am_id_t t);
#line 154
static inline uint8_t SerialActiveMessageC$Packet$payloadLength(message_t *msg);



static inline void SerialActiveMessageC$Packet$setPayloadLength(message_t *msg, uint8_t len);







static inline void *SerialActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len);
# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$getPayload(
#line 122
message_t * msg, 


uint8_t len);
# 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(message_t *m, error_t err);







static inline void */*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$getPayload(message_t *m, uint8_t len);
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x102299020, 
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$getPayload(
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x102299020, 
# 132 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(
# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x10229be18, 
# 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$payloadLength(
#line 74
message_t * msg);
#line 94
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$postTask(void );
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(
#line 143
message_t * amsg);
# 126 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_unnamed4358 {
#line 126
  AMQueueImplP$1$CancelTask = 14U
};
#line 126
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask];
#line 169
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_unnamed4359 {
#line 169
  AMQueueImplP$1$errorTask = 15U
};
#line 169
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask];
#line 57
#line 55
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_unnamed4360 {
  message_t * msg;
} /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue_entry_t;

uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[1000];
/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue_entry_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[1000][2];
uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[1000][2 / 8 + 1];

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend(void );

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$nextPacket(void );
#line 90
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask(void );
#line 163
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask(void );




static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend(void );
#line 211
static inline void */*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$getPayload(uint8_t id, message_t *m, uint8_t len);



static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free[1000];
uint8_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index[1000];
/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t * /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$queue[1000][10];
/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool[1000][10];

static inline error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Init$init(void );
#line 88
static inline /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t */*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$get(void );
#line 103
static error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$put(/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t *newVal);
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t  /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue[1000][10];
uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$head[1000];
uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$tail[1000];
uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size[1000];

static inline bool /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$empty(void );



static inline uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$size(void );



static inline uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$maxSize(void );



static inline /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$head(void );



static void /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$printQueue(void );
#line 85
static inline /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$dequeue(void );
#line 97
static inline error_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$enqueue(/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t newVal);
# 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free[1000];
uint8_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index[1000];
/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t * /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$queue[1000][20];
/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool[1000][20];

static inline error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Init$init(void );









static bool /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$empty(void );
#line 88
static /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t */*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$get(void );
#line 103
static error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$put(/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t *newVal);
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t  /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue[1000][20];
uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$head[1000];
uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$tail[1000];
uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size[1000];

static inline bool /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$empty(void );



static inline uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$size(void );



static inline uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$maxSize(void );



static inline /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$head(void );



static void /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$printQueue(void );
#line 85
static /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$dequeue(void );
#line 97
static error_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$enqueue(/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t newVal);
# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$getPayload(
#line 122
message_t * msg, 


uint8_t len);
# 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$sendDone(message_t *m, error_t err);







static inline void */*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$getPayload(message_t *m, uint8_t len);
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t UARTDebugSenderP$UARTSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

UARTDebugSenderP$UARTSend$getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
UARTDebugSenderP$SendQueue$t  

UARTDebugSenderP$SendQueue$head(void );
#line 90
static error_t UARTDebugSenderP$SendQueue$enqueue(
#line 86
UARTDebugSenderP$SendQueue$t  newVal);
#line 81
static 
#line 79
UARTDebugSenderP$SendQueue$t  

UARTDebugSenderP$SendQueue$dequeue(void );
#line 50
static bool UARTDebugSenderP$SendQueue$empty(void );
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t UARTDebugSenderP$sendTask$postTask(void );
# 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
UARTDebugSenderP$MessagePool$t * 


UARTDebugSenderP$MessagePool$get(void );
#line 61
static bool UARTDebugSenderP$MessagePool$empty(void );
#line 89
static error_t UARTDebugSenderP$MessagePool$put(
#line 85
UARTDebugSenderP$MessagePool$t * newVal);
# 36 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/UARTDebugSenderP.nc"
enum UARTDebugSenderP$__nesc_unnamed4361 {
#line 36
  UARTDebugSenderP$sendTask = 16U
};
#line 36
typedef int UARTDebugSenderP$__nesc_sillytask_sendTask[UARTDebugSenderP$sendTask];
#line 15
bool UARTDebugSenderP$sending[1000];
uint8_t UARTDebugSenderP$len[1000];
uint16_t UARTDebugSenderP$statLogReceived[1000];
uint16_t UARTDebugSenderP$statEnqueueFail[1000];
uint16_t UARTDebugSenderP$statSendFail[1000];
uint16_t UARTDebugSenderP$statSendDoneFail[1000];
uint16_t UARTDebugSenderP$statSendDoneOk[1000];
uint16_t UARTDebugSenderP$statSendDoneBug[1000];


static inline void UARTDebugSenderP$Boot$booted(void );










static inline void UARTDebugSenderP$sendTask$runTask(void );
#line 58
static void UARTDebugSenderP$UARTSend$sendDone(message_t *msg, error_t error);
#line 76
static error_t UARTDebugSenderP$CollectionDebug$logEvent(uint8_t type);
#line 103
static error_t  UARTDebugSenderP$CollectionDebug$logEventMsg(uint8_t type, uint16_t msg_id, am_addr_t origin, am_addr_t node);
#line 132
static error_t  UARTDebugSenderP$CollectionDebug$logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric);
#line 188
static inline  error_t UARTDebugSenderP$CollectionDebug$logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/heap.c"
static inline void init_heap(heap_t *heap)
#line 78
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

#line 130
static inline void expand_heap(heap_t *heap)
#line 130
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);



  memcpy(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long int key)
#line 144
{
  int findex = heap->size;

#line 146
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

#line 88
static inline int is_empty(heap_t *heap)
#line 88
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 92
{
  return is_empty(heap);
}

static inline long long int heap_get_min_key(heap_t *heap)
#line 96
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 317 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_log.c"
inline static int sim_log_eq(void *key1, void *key2)
#line 317
{
  return strcmp((char *)key1, (char *)key2) == 0;
}

#line 306
inline static unsigned int sim_log_hash(void *key)
#line 306
{
  char *str = (char *)key;
  unsigned int hashVal = 0;
  int hashChar;

  while ((hashChar = * str++)) 
    hashVal = hashChar + (hashVal << 6) + (hashVal << 16) - hashVal;

  return hashVal;
}

#line 159
static inline void sim_log_init()
#line 159
{
  int i;

  channelTable = create_hashtable(128, sim_log_hash, sim_log_eq);

  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      outputs[i].num = 1;
      outputs[i].files = (FILE **)malloc(sizeof(FILE *));
      outputs[i].files[0] = fdopen(1, "w");
    }
}

# 130 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_noise.c"
inline static unsigned int sim_noise_hash(void *key)
#line 130
{
  char *pt = (char *)key;
  unsigned int hashVal = 0;
  int i;

#line 134
  for (i = 0; i < NOISE_HISTORY; i++) {
      hashVal = pt[i] + (hashVal << 6) + (hashVal << 16) - hashVal;
    }
  return hashVal;
}

inline static int sim_noise_eq(void *key1, void *key2)
#line 140
{
  return memcmp((void *)key1, (void *)key2, NOISE_HISTORY) == 0;
}

# 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
static inline bool SimMoteP$SimMote$isOn(void )
#line 64
{
  return SimMoteP$isOn[sim_node()];
}

# 172 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_log.c"
static inline void sim_log_add_channel(char *name, FILE *file)
#line 172
{
  sim_log_channel_t *channel;

#line 174
  channel = (sim_log_channel_t *)hashtable_search(channelTable, name);



  if (channel == (void *)0) {
      char *newName = (char *)malloc(strlen(name) + 1);

#line 180
      strcpy(newName, name);
      newName[strlen(name)] = 0;

      channel = (sim_log_channel_t *)malloc(sizeof(sim_log_channel_t ));
      channel->name = newName;
      channel->numOutputs = 0;
      channel->size = DEFAULT_CHANNEL_SIZE;
      channel->outputs = (FILE **)malloc(sizeof(FILE *) * channel->size);
      memset(channel->outputs, 0, sizeof(FILE *) * channel->size);
      hashtable_insert(channelTable, newName, channel);
    }



  if (channel->numOutputs == channel->size) {
      FILE **newOutputs;
      int newSize = channel->size * 2;

      newOutputs = (FILE **)malloc(sizeof(FILE *) * newSize);
      memcpy(newOutputs, channel->outputs, channel->size * sizeof(FILE **));

      free(channel->outputs);

      channel->outputs = newOutputs;
      channel->size = newSize;
    }

  channel->outputs[channel->numOutputs] = file;
  channel->numOutputs++;
  sim_log_commit_change();
}

static inline bool sim_log_remove_channel(char *output, FILE *file)
#line 212
{
  sim_log_channel_t *channel;
  int i;

#line 215
  channel = (sim_log_channel_t *)hashtable_search(channelTable, output);

  if (channel == (void *)0) {
      return FALSE;
    }


  for (i = 0; i < channel->numOutputs; i++) {
      FILE *f = channel->outputs[i];

#line 224
      if (file == f) {
          memcpy(&channel->outputs[i], &channel->outputs[i + 1], channel->numOutputs - (i + 1));
          channel->outputs[channel->numOutputs - 1] = (void *)0;
          channel->numOutputs--;
        }
    }

  return TRUE;
}

# 161 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_gain.c"
static inline gain_entry_t *sim_gain_allocate_link(int mote)
#line 161
{
  gain_entry_t *newLink = (gain_entry_t *)malloc(sizeof(gain_entry_t ));

#line 163
  newLink->next = (void *)0;
  newLink->mote = mote;
  newLink->gain = -10000000.0;
  return newLink;
}

# 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/randomlib.c"
static inline void RandomInitialise(int ij, int kl)
{
  double s;
#line 57
  double t;
  int ii;
#line 58
  int i;
#line 58
  int j;
#line 58
  int k;
#line 58
  int l;
#line 58
  int jj;
#line 58
  int m;






  if (((ij < 0 || ij > 31328) || kl < 0) || kl > 30081) {
      ij = 1802;
      kl = 9373;
    }

  i = ij / 177 % 177 + 2;
  j = ij % 177 + 2;
  k = kl / 169 % 178 + 1;
  l = kl % 169;

  for (ii = 0; ii < 97; ii++) {
      s = 0.0;
      t = 0.5;
      for (jj = 0; jj < 24; jj++) {
          m = i * j % 179 * k % 179;
          i = j;
          j = k;
          k = m;
          l = (53 * l + 1) % 169;
          if (l * m % 64 >= 32) {
            s += t;
            }
#line 86
          t *= 0.5;
        }
      randU[ii] = s;
    }

  randC = 362436.0 / 16777216.0;
  randCD = 7654321.0 / 16777216.0;
  randCM = 16777213.0 / 16777216.0;
  i97 = 97;
  j97 = 33;
  test = TRUE;
}

# 284 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_noise.c"
static inline void sim_noise_alarm()
#line 284
{
  dummy = 5;
}

# 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_packet.c"
inline static tossim_header_t *getHeader(message_t *msg)
#line 50
{
  return (tossim_header_t *)(msg->data - sizeof(tossim_header_t ));
}

# 236 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$active_message_deliver_handle(sim_event_t *evt)
#line 236
{
  message_t *m = (message_t *)evt->data;

#line 238
  sim_log_debug(122U, "Packet", "Delivering packet to %i at %s\n", (int )sim_node(), sim_time_string());
  TossimActiveMessageC$Model$receive(m);
}

static inline sim_event_t *TossimActiveMessageC$allocate_deliver_event(int node, message_t *msg, sim_time_t t)
#line 242
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 244
  evt->mote = node;
  evt->time = t;
  evt->handle = TossimActiveMessageC$active_message_deliver_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 0;
  evt->data = msg;
  return evt;
}

# 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC$amAddress(void )
#line 88
{
  return ActiveMessageAddressC$ActiveMessageAddress$amAddress();
}

# 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
inline static am_addr_t TossimActiveMessageC$amAddress(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = ActiveMessageAddressC$amAddress();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
#line 136
static inline am_addr_t TossimActiveMessageC$AMPacket$address(void )
#line 136
{
  return TossimActiveMessageC$amAddress();
}

#line 160
static inline bool TossimActiveMessageC$AMPacket$isForMe(message_t *amsg)
#line 160
{
  return TossimActiveMessageC$AMPacket$destination(amsg) == TossimActiveMessageC$AMPacket$address() || 
  TossimActiveMessageC$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

# 310 "/opt/local/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(uint8_t type){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = UARTDebugSenderP$CollectionDebug$logEvent(type);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 89 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 169 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num].isrunning;
}

# 92 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(3U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$AMPacket$destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = UARTDebugSenderP$CollectionDebug$logEventMsg(type, msg, origin, node);
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 189 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval(void )
#line 189
{
  /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[sim_node()] = 128;
  /*CtpP.Router*/CtpRoutingEngineP$0$chooseAdvertiseTime();
}

#line 555
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerImmediateRouteUpdate(void )
#line 555
{
  /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval();
}

# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerImmediateRouteUpdate(void ){
#line 78
  /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerImmediateRouteUpdate();
#line 78
}
#line 78
# 189 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void *TossimActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len)
#line 189
{
  if (len <= 28) {
      return msg->data;
    }
  else {
      return (void *)0;
    }
}

# 126 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = TossimActiveMessageC$Packet$getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 279 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline ctp_data_header_t */*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(message_t *m)
#line 279
{
  return (ctp_data_header_t *)/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$getPayload(m, sizeof(ctp_data_header_t ));
}

#line 800
static inline uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getEtx(message_t *msg)
#line 800
{
#line 800
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->etx.nxdata);
}

# 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$getEtx(uint16_t *etx){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getEtx(etx);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$size(void )
#line 57
{
  return /*CtpP.SendQueueP*/QueueC$0$size[sim_node()];
}

# 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
#line 90
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$enqueue(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/PoolP.nc"
static inline /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t */*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$get(void )
#line 88
{
  if (/*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()]) {
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t *rval = /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[sim_node()][/*CtpP.MessagePoolP.PoolP*/PoolP$0$index[sim_node()]];

#line 91
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[sim_node()][/*CtpP.MessagePoolP.PoolP*/PoolP$0$index[sim_node()]] = (void *)0;
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()]--;
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$index[sim_node()]++;
      if (/*CtpP.MessagePoolP.PoolP*/PoolP$0$index[sim_node()] == 12) {
          /*CtpP.MessagePoolP.PoolP*/PoolP$0$index[sim_node()] = 0;
        }
      sim_log_debug(243U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/PoolP.nc"
static inline /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t */*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$get(void )
#line 88
{
  if (/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()]) {
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t *rval = /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[sim_node()][/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[sim_node()]];

#line 91
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[sim_node()][/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[sim_node()]] = (void *)0;
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()]--;
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[sim_node()]++;
      if (/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[sim_node()] == 12) {
          /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[sim_node()] = 0;
        }
      sim_log_debug(247U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$get(void ){
#line 97
  struct __nesc_unnamed4318 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/PoolP.nc"
static inline bool /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$empty(void )
#line 75
{
  sim_log_debug(245U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()]);
  return /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()] == 0;
}

# 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/PoolP.nc"
static inline bool /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$empty(void )
#line 75
{
  sim_log_debug(241U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()]);
  return /*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()] == 0;
}

# 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 578 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline message_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$forward(message_t * m)
#line 578
{
  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$empty()) {
      sim_log_debug(230U, "Route", "%s cannot forward, message pool empty.\n", __FUNCTION__);

      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_MSG_POOL_EMPTY);
    }
  else {
#line 584
    if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$empty()) {
        sim_log_debug(231U, "Route", "%s cannot forward, queue entry pool empty.\n", __FUNCTION__);


        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_QENTRY_POOL_EMPTY);
      }
    else {
        message_t *newMsg;
        fe_queue_entry_t *qe;
        uint16_t gradient;

        qe = /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$get();
        if (qe == (void *)0) {
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_GET_MSGPOOL_ERR);
            return m;
          }

        newMsg = /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$get();
        if (newMsg == (void *)0) {
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_GET_QEPOOL_ERR);
            return m;
          }

        memset(newMsg, 0, sizeof(message_t ));
        memset(m->metadata, 0, sizeof(message_metadata_t ));

        qe->msg = m;
        qe->client = 0xff;
        qe->retries = MAX_RETRIES;


        if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$enqueue(qe) == SUCCESS) {
            sim_log_debug(232U, "Forwarder,Route", "%s forwarding packet %p with queue size %hhu\n", __FUNCTION__, m, /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size());

            if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$getEtx(&gradient) == SUCCESS) {

                if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getEtx(m) <= gradient) {




                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerImmediateRouteUpdate();
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(LOOPY_WINDOW, LOOPY_OFFSET);
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_LOOP_DETECTED, 
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(m), 
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(m), 
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(m));
                  }
              }

            if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$isRunning()) {


                sim_log_debug(233U, "FHangBug", "%s: posted sendTask.\n", __FUNCTION__);
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
              }


            return newMsg;
          }
        else 
#line 643
          {

            if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(newMsg) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
              }
#line 647
            if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(qe) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_QEPOOL_ERR);
              }
          }
      }
    }



  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SEND_QUEUE_FULL);
  return m;
}

#line 769
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(message_t *msg)
#line 769
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$payloadLength(msg) - sizeof(ctp_data_header_t );
}

#line 852
static inline 
#line 851
bool 
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$default$forward(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 853
{
  return TRUE;
}

# 31 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Intercept.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$forward(collection_id_t arg_0x101f3f9b0, message_t * msg, void * payload, uint8_t len){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
    __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$default$forward(arg_0x101f3f9b0, msg, payload, len);
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 857 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$default$receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 859
{
  return msg;
}

# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$receive(collection_id_t arg_0x101f41270, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x101f41270) {
#line 78
    case AM_OSCILLOSCOPE:
#line 78
      __nesc_result = MultihopOscilloscopeC$Receive$receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$default$receive(arg_0x101f41270, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 612 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$isRoot(void )
#line 612
{
  return /*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[sim_node()];
}

# 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/RootControl.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$RootControl$isRoot(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$isRoot();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 281 "/opt/local/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 798 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(message_t *msg)
#line 798
{
#line 798
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->type.nxdata);
}

#line 821
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$matchInstance(message_t *m1, message_t *m2)
#line 821
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(m2);
}

# 112 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$element(uint8_t idx)
#line 112
{
  idx += /*CtpP.SendQueueP*/QueueC$0$head[sim_node()];
  if (idx >= 13) {
      idx -= 13;
    }
  return /*CtpP.SendQueueP*/QueueC$0$queue[sim_node()][idx];
}

# 101 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$element(uint8_t idx){
#line 101
  struct __nesc_unnamed4318 *__nesc_result;
#line 101

#line 101
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$element(idx);
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 135 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static inline bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$lookup(message_t *m)
#line 135
{
  return /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$lookup(m) < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()];
}

# 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Cache.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$lookup(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$t item){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$lookup(item);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 185 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void )
#line 185
{
  return 28;
}

#line 91
static inline uint8_t TossimActiveMessageC$AMSend$maxPayloadLength(am_id_t id)
#line 91
{
  return TossimActiveMessageC$Packet$maxPayloadLength();
}

# 123 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$maxPayloadLength(am_id_t arg_0x102299020){
#line 123
  unsigned char __nesc_result;
#line 123

#line 123
  __nesc_result = TossimActiveMessageC$AMSend$maxPayloadLength(arg_0x102299020);
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
# 207 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(uint8_t id)
#line 207
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$maxPayloadLength(0);
}

# 112 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(0U);
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 69 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength(void )
#line 69
{
  return /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$maxPayloadLength();
}

# 123 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$maxPayloadLength(void ){
#line 123
  unsigned char __nesc_result;
#line 123

#line 123
  __nesc_result = /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength();
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
# 286 "/opt/local/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 803 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setThl(message_t *msg, uint8_t thl)
#line 803
{
#line 803
  __nesc_hton_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->thl.nxdata, thl);
}

#line 668
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 669
{
  collection_id_t collectid;
  bool duplicate = FALSE;
  fe_queue_entry_t *qe;
  uint8_t i;
#line 673
  uint8_t thl;


  collectid = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(msg);



  thl = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(msg);
  thl++;
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setThl(msg, thl);

  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_RCV_MSG, 
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
  thl--);
  if (len > /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$maxPayloadLength()) {
      return msg;
    }



  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$lookup(msg)) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_DUPLICATE_CACHE);
      return msg;
    }

  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size() > 0) {
      for (i = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size(); i > 0; i--) {
          qe = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$element(i - 1);
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$matchInstance(qe->msg, msg)) {
              duplicate = TRUE;
              break;
            }
        }
    }

  if (duplicate) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_DUPLICATE_QUEUE);
      return msg;
    }
  else {

    if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$RootControl$isRoot()) {
        return /*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$receive(collectid, msg, 
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(msg, /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(msg)), 
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(msg));
      }
    else {

      if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$forward(collectid, msg, 
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(msg, /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(msg)), 
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(msg))) {
          return msg;
        }
      else {
          sim_log_debug(234U, "Route", "Forwarding packet from %hu.\n", __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->origin.nxdata));
          return /*CtpP.Forwarder*/CtpForwardingEngineP$0$forward(msg);
        }
      }
    }
}

# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 559 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$setNeighborCongested(am_addr_t n, bool congested)
#line 559
{
  uint8_t idx;

#line 561
  if (/*CtpP.Router*/CtpRoutingEngineP$0$ECNOff[sim_node()]) {
    return;
    }
#line 563
  idx = /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(n);
  if (idx < /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()]) {
      /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].info.congested = congested;
    }
  if (/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].congested && !congested) {
    /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
    }
  else {
#line 569
    if (/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent == n && congested) {
      /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
      }
    }
}

#line 259
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$passLinkEtxThreshold(uint16_t etx)
#line 259
{
  return etx < ETX_THRESHOLD;
}

# 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static uint16_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(uint16_t neighbor){
#line 49
  unsigned short __nesc_result;
#line 49

#line 49
  __nesc_result = LinkEstimatorP$LinkEstimator$getLinkQuality(neighbor);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 700 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableUpdateEntry(am_addr_t from, am_addr_t parent, uint16_t etx)
#line 700
{
  uint8_t idx;
  uint16_t linkEtx;

#line 703
  linkEtx = /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(from);

  idx = /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(from);
  if (idx == 10) {




      sim_log_debug(315U, "TreeRouting", "%llu \t ROUTING_TABLE_FULL\n", sim_time());
      return FAIL;
    }
  else {
#line 714
    if (idx == /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()]) {

        if (/*CtpP.Router*/CtpRoutingEngineP$0$passLinkEtxThreshold(linkEtx)) {
            /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].neighbor = from;
            /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].info.parent = parent;
            /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].info.etx = etx;
            /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].info.haveHeard = 1;
            /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].info.congested = FALSE;
            /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()]++;

            sim_log_debug(316U, "TreeRouting", "%llu \t ROUTING_TABLE_NEW_ENTRY\n", sim_time());
          }
        else 
#line 725
          {

            sim_log_debug(317U, "TreeRouting", "%llu \t ROUTING_TABLE_LOWQUALITY_ENTRY \t etx:%hu\n", sim_time(), linkEtx);
          }
      }
    else 
#line 729
      {

        /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].neighbor = from;
        /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].info.parent = parent;
        /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].info.etx = etx;
        /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].info.haveHeard = 1;

        sim_log_debug(318U, "TreeRouting", "%llu \t ROUTING_TABLE_UPDATED_ENTRY\n", sim_time());
      }
    }
#line 738
  return SUCCESS;
}

# 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$pinNeighbor(am_addr_t neighbor){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = LinkEstimatorP$LinkEstimator$pinNeighbor(neighbor);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 761 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor)
#line 761
{
}

# 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static void LinkEstimatorP$LinkEstimator$evicted(am_addr_t neighbor){
#line 72
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$evicted(neighbor);
#line 72
  /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$evicted(neighbor);
#line 72
}
#line 72
# 461 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$LinkEstimator$insertNeighbor(am_addr_t neighbor)
#line 461
{
  uint8_t nidx;

  nidx = LinkEstimatorP$findIdx(neighbor);
  if (nidx != LinkEstimatorP$INVALID_RVAL) {
      sim_log_debug(279U, "LI", "insert: Found the entry, no need to insert\n");
      return SUCCESS;
    }

  nidx = LinkEstimatorP$findEmptyNeighborIdx();
  if (nidx != LinkEstimatorP$INVALID_RVAL) {
      sim_log_debug(280U, "LI", "insert: inserted into the empty slot\n");
      LinkEstimatorP$initNeighborIdx(nidx, neighbor);
      return SUCCESS;
    }
  else 
#line 475
    {
      nidx = LinkEstimatorP$findWorstNeighborIdx(LinkEstimatorP$BEST_ETX);
      if (nidx != LinkEstimatorP$INVALID_RVAL) {
          sim_log_debug(281U, "LI", "insert: inserted by replacing an entry for neighbor: %d\n", LinkEstimatorP$NeighborTable[sim_node()][nidx].ll_addr);

          LinkEstimatorP$LinkEstimator$evicted(LinkEstimatorP$NeighborTable[sim_node()][nidx].ll_addr);
          LinkEstimatorP$initNeighborIdx(nidx, neighbor);
          return SUCCESS;
        }
    }
  return FAIL;
}

# 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$insertNeighbor(am_addr_t neighbor){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = LinkEstimatorP$LinkEstimator$insertNeighbor(neighbor);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = TossimActiveMessageC$AMPacket$source(amsg);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 457 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline message_t */*CtpP.Router*/CtpRoutingEngineP$0$BeaconReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 457
{
  am_addr_t from;
  ctp_routing_header_t *rcvBeacon;
  bool congested;


  if (len != sizeof(ctp_routing_header_t )) {
      sim_log_debug(310U, "LITest", "%s, received beacon of size %hhu, expected %i\n", __FUNCTION__, len, (int )sizeof(ctp_routing_header_t ));




      return msg;
    }


  from = /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$source(msg);
  rcvBeacon = (ctp_routing_header_t *)payload;

  congested = /*CtpP.Router*/CtpRoutingEngineP$0$CtpRoutingPacket$getOption(msg, CTP_OPT_ECN);

  sim_log_debug(311U, "TreeRouting", "%llu \t RECEIVED_BEACON \t from %d [parent:%d etx:%d]\n", sim_time(), from, __nesc_ntoh_uint16(rcvBeacon->parent.nxdata), __nesc_ntoh_uint16(rcvBeacon->etx.nxdata));


  if (__nesc_ntoh_uint16(rcvBeacon->parent.nxdata) != INVALID_ADDR) {



      if (__nesc_ntoh_uint16(rcvBeacon->etx.nxdata) == 0) {
          sim_log_debug(312U, "TreeRouting", " \t Beacon from a root, inserting if not in table\n");
          /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$insertNeighbor(from);
          /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$pinNeighbor(from);
        }


      /*CtpP.Router*/CtpRoutingEngineP$0$routingTableUpdateEntry(from, __nesc_ntoh_uint16(rcvBeacon->parent.nxdata), __nesc_ntoh_uint16(rcvBeacon->etx.nxdata));
      /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$setNeighborCongested(from, congested);
    }

  if (/*CtpP.Router*/CtpRoutingEngineP$0$CtpRoutingPacket$getOption(msg, CTP_OPT_PULL)) {
      /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval();
    }
  return msg;
}

# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * LinkEstimatorP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$BeaconReceive$receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 89 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC$Random$rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC$Random$rand32();
}

# 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t LinkEstimatorP$Random$rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC$Random$rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 245 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline uint8_t LinkEstimatorP$findRandomNeighborIdx(void )
#line 245
{
  uint8_t i;
  uint8_t cnt;
  uint8_t num_eligible_eviction;

  num_eligible_eviction = 0;
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP$NeighborTable[sim_node()][i].flags & VALID_ENTRY) {
          if (LinkEstimatorP$NeighborTable[sim_node()][i].flags & PINNED_ENTRY || 
          LinkEstimatorP$NeighborTable[sim_node()][i].flags & MATURE_ENTRY) {
            }
          else 
#line 255
            {
              num_eligible_eviction++;
            }
        }
    }

  if (num_eligible_eviction == 0) {
      return LinkEstimatorP$INVALID_RVAL;
    }

  cnt = LinkEstimatorP$Random$rand16() % num_eligible_eviction;

  for (i = 0; i < 10; i++) {
      if (! LinkEstimatorP$NeighborTable[sim_node()][i].flags & VALID_ENTRY) {
        continue;
        }
#line 270
      if (LinkEstimatorP$NeighborTable[sim_node()][i].flags & PINNED_ENTRY || 
      LinkEstimatorP$NeighborTable[sim_node()][i].flags & MATURE_ENTRY) {
        continue;
        }
#line 273
      if (cnt-- == 0) {
        return i;
        }
    }
#line 276
  return LinkEstimatorP$INVALID_RVAL;
}

# 147 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_id_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = TossimActiveMessageC$AMPacket$type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 633 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$CompareBit$shouldInsert(message_t *msg, void *payload, uint8_t len)
#line 633
{

  bool found = FALSE;
  uint16_t pathEtx;
  uint16_t neighEtx;
  int i;
  routing_table_entry *entry;
  ctp_routing_header_t *rcvBeacon;

  if (/*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$type(msg) != AM_CTP_ROUTING || 
  len != sizeof(ctp_routing_header_t )) {
    return FALSE;
    }

  rcvBeacon = (ctp_routing_header_t *)payload;

  if (__nesc_ntoh_uint16(rcvBeacon->parent.nxdata) == INVALID_ADDR) {
    return FALSE;
    }
  if (__nesc_ntoh_uint16(rcvBeacon->etx.nxdata) == 0) {
      return TRUE;
    }

  pathEtx = __nesc_ntoh_uint16(rcvBeacon->etx.nxdata);


  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()] && !found; i++) {
      entry = &/*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][i];

      if (entry->neighbor == /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent) {
        continue;
        }
#line 664
      neighEtx = entry->info.etx;
      found |= pathEtx < neighEtx;
    }
  return found;
}

# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CompareBit.nc"
inline static bool LinkEstimatorP$CompareBit$shouldInsert(message_t * msg, void * payload, uint8_t len){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$CompareBit$shouldInsert(msg, payload, len);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 8 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/DummyActiveMessageP.nc"
static inline bool DummyActiveMessageP$LinkPacketMetadata$highChannelQuality(message_t *msg)
#line 8
{
  return 0;
}

# 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/LinkPacketMetadata.nc"
inline static bool LinkEstimatorP$LinkPacketMetadata$highChannelQuality(message_t * msg){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = DummyActiveMessageP$LinkPacketMetadata$highChannelQuality(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 395 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP$print_neighbor_table(void )
#line 395
{
  uint8_t i;
  neighbor_table_entry_t *ne;

#line 398
  for (i = 0; i < 10; i++) {
      ne = &LinkEstimatorP$NeighborTable[sim_node()][i];
      if (ne->flags & VALID_ENTRY) {
          sim_log_debug(274U, "LI,LITest", "%d:%d inQ=%d, rcv=%d, fail=%d, Q=%d\n", i, ne->ll_addr, ne->inquality, ne->rcvcnt, ne->failcnt, LinkEstimatorP$computeETX(ne->inquality));
        }
    }
}

# 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t LinkEstimatorP$SubAMPacket$source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = TossimActiveMessageC$AMPacket$source(amsg);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 126 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * LinkEstimatorP$SubPacket$getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = TossimActiveMessageC$Packet$getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline linkest_header_t *LinkEstimatorP$getHeader(message_t *m)
#line 104
{
  return (linkest_header_t *)LinkEstimatorP$SubPacket$getPayload(m, sizeof(linkest_header_t ));
}

# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t LinkEstimatorP$SubAMPacket$destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$AMPacket$destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 590 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP$processReceivedMessage(message_t * msg, void * payload, uint8_t len)
#line 590
{
  uint8_t nidx;
  uint8_t num_entries;

  sim_log_debug(284U, "LI", "LI receiving packet, buf addr: %x\n", payload);
  LinkEstimatorP$print_packet(msg, len);

  if (LinkEstimatorP$SubAMPacket$destination(msg) == AM_BROADCAST_ADDR) {
      linkest_header_t *hdr = LinkEstimatorP$getHeader(msg);
      am_addr_t ll_addr;

      ll_addr = LinkEstimatorP$SubAMPacket$source(msg);

      sim_log_debug(285U, "LI", "Got seq: %d from link: %d\n", __nesc_ntoh_uint8(hdr->seq.nxdata), ll_addr);

      num_entries = __nesc_ntoh_uint8(hdr->flags.nxdata) & NUM_ENTRIES_FLAG;
      LinkEstimatorP$print_neighbor_table();
#line 622
      nidx = LinkEstimatorP$findIdx(ll_addr);
      if (nidx != LinkEstimatorP$INVALID_RVAL) {
          sim_log_debug(286U, "LI", "Found the entry so updating\n");
          LinkEstimatorP$updateNeighborEntryIdx(nidx, __nesc_ntoh_uint8(hdr->seq.nxdata));
        }
      else 
#line 626
        {
          nidx = LinkEstimatorP$findEmptyNeighborIdx();
          if (nidx != LinkEstimatorP$INVALID_RVAL) {
              sim_log_debug(287U, "LI", "Found an empty entry\n");
              LinkEstimatorP$initNeighborIdx(nidx, ll_addr);
              LinkEstimatorP$NeighborTable[sim_node()][nidx].lastseq = __nesc_ntoh_uint8(hdr->seq.nxdata);
              LinkEstimatorP$updateNeighborEntryIdx(nidx, __nesc_ntoh_uint8(hdr->seq.nxdata));
            }
          else 
#line 633
            {
              nidx = LinkEstimatorP$findWorstNeighborIdx(LinkEstimatorP$EVICT_ETX_THRESHOLD);
              if (nidx != LinkEstimatorP$INVALID_RVAL) {
                  sim_log_debug(288U, "LI", "Evicted neighbor %d at idx %d\n", LinkEstimatorP$NeighborTable[sim_node()][nidx].ll_addr, nidx);

                  LinkEstimatorP$LinkEstimator$evicted(LinkEstimatorP$NeighborTable[sim_node()][nidx].ll_addr);
                  LinkEstimatorP$initNeighborIdx(nidx, ll_addr);
                }
              else 
#line 640
                {
                  sim_log_debug(289U, "LI", "No room in the table\n");





                  if (LinkEstimatorP$LinkPacketMetadata$highChannelQuality(msg)) {
                      if (LinkEstimatorP$CompareBit$shouldInsert(msg, 
                      LinkEstimatorP$Packet$getPayload(msg, LinkEstimatorP$Packet$payloadLength(msg)), 
                      LinkEstimatorP$Packet$payloadLength(msg))) {
                          nidx = LinkEstimatorP$findRandomNeighborIdx();
                          if (nidx != LinkEstimatorP$INVALID_RVAL) {
                              LinkEstimatorP$LinkEstimator$evicted(LinkEstimatorP$NeighborTable[sim_node()][nidx].ll_addr);
                              LinkEstimatorP$initNeighborIdx(nidx, ll_addr);
                            }
                        }
                    }
                }
            }
        }
    }
}





static inline message_t *LinkEstimatorP$SubReceive$receive(message_t *msg, 
void *payload, 
uint8_t len)
#line 670
{
  sim_log_debug(290U, "LI", "Received upper packet. Will signal up\n");
  LinkEstimatorP$processReceivedMessage(msg, payload, len);
  return LinkEstimatorP$Receive$receive(msg, 
  LinkEstimatorP$Packet$getPayload(msg, LinkEstimatorP$Packet$payloadLength(msg)), 
  LinkEstimatorP$Packet$payloadLength(msg));
}

# 212 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 212
{
  return msg;
}

# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC$Receive$receive(am_id_t arg_0x101962908, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x101962908) {
#line 78
    case 112:
#line 78
      __nesc_result = LinkEstimatorP$SubReceive$receive(msg, payload, len);
#line 78
      break;
#line 78
    case 113:
#line 78
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubReceive$receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = TossimActiveMessageC$Receive$default$receive(arg_0x101962908, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 323 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP$updateNeighborTableEst(am_addr_t n)
#line 323
{
  uint8_t i;
#line 324
  uint8_t totalPkt;
  neighbor_table_entry_t *ne;
  uint8_t newEst;
  uint8_t minPkt;

  minPkt = LinkEstimatorP$BLQ_PKT_WINDOW;
  sim_log_debug(267U, "LI", "%s\n", __FUNCTION__);
  for (i = 0; i < 10; i++) {
      ne = &LinkEstimatorP$NeighborTable[sim_node()][i];
      if (ne->ll_addr == n) {
          if (ne->flags & VALID_ENTRY) {
              sim_log_debug(268U, "LI", "Making link: %d mature\n", i);
              totalPkt = ne->rcvcnt + ne->failcnt;

              if (!(ne->flags & MATURE_ENTRY)) {
                  newEst = 250UL * ne->rcvcnt / totalPkt;
                  ne->inquality = newEst;
                  ne->etx = 
                  LinkEstimatorP$computeETX(ne->inquality);
                }

              ne->flags |= MATURE_ENTRY;
              sim_log_debug(269U, "LI", "MinPkt: %d, totalPkt: %d\n", minPkt, totalPkt);
              newEst = 250UL * ne->rcvcnt / totalPkt;
              sim_log_debug(270U, "LI,LITest", "  %hu: %hhu -> %hhu", ne->ll_addr, ne->inquality, (LinkEstimatorP$ALPHA * ne->inquality + (10 - LinkEstimatorP$ALPHA) * newEst) / 10);
              ne->inquality = (LinkEstimatorP$ALPHA * ne->inquality + (10 - LinkEstimatorP$ALPHA) * newEst) / 10;
              ne->rcvcnt = 0;
              ne->failcnt = 0;
              LinkEstimatorP$updateETX(ne, LinkEstimatorP$computeETX(ne->inquality));
            }
          else 
#line 353
            {
              sim_log_debug(271U, "LI", " - entry %i is invalid.\n", (int )i);
            }
        }
    }
}

# 742 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableEvict(am_addr_t neighbor)
#line 742
{
  uint8_t idx;
#line 743
  uint8_t i;

#line 744
  idx = /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(neighbor);
  if (idx == /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()]) {
    return FAIL;
    }
#line 747
  /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()]--;
  for (i = idx; i < /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()]; i++) {
      /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][i] = /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][i + 1];
    }
  return SUCCESS;
}

# 135 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id)
{
  return SimSchedulerBasicP$m_next[sim_node()][id] != SimSchedulerBasicP$NO_TASK || SimSchedulerBasicP$m_tail[sim_node()] == id;
}

static inline bool SimSchedulerBasicP$pushTask(uint8_t id)
{
  if (!SimSchedulerBasicP$isWaiting(id)) 
    {
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_head[sim_node()] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      else 
        {
          SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_tail[sim_node()]] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

#line 65
static inline int SimSchedulerBasicP$sim_config_task_latency(void )
#line 65
{
#line 65
  return 100;
}

# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline tossim_header_t *TossimActiveMessageC$getHeader(message_t *amsg)
#line 65
{
  return (tossim_header_t *)(amsg->data - sizeof(tossim_header_t ));
}

#line 177
static inline uint8_t TossimActiveMessageC$Packet$payloadLength(message_t *msg)
#line 177
{
  return __nesc_ntoh_uint8(TossimActiveMessageC$getHeader(msg)->length.nxdata);
}

# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t LinkEstimatorP$SubPacket$payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$Packet$payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 106
inline static uint8_t LinkEstimatorP$SubPacket$maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = TossimActiveMessageC$Packet$maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 703 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline uint8_t LinkEstimatorP$Packet$maxPayloadLength(void )
#line 703
{
  return LinkEstimatorP$SubPacket$maxPayloadLength() - sizeof(linkest_header_t );
}

#line 579
static inline uint8_t LinkEstimatorP$Send$maxPayloadLength(void )
#line 579
{
  return LinkEstimatorP$Packet$maxPayloadLength();
}

# 123 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$maxPayloadLength(void ){
#line 123
  unsigned char __nesc_result;
#line 123

#line 123
  __nesc_result = LinkEstimatorP$Send$maxPayloadLength();
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
# 583 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void *LinkEstimatorP$Send$getPayload(message_t *msg, uint8_t len)
#line 583
{
  return LinkEstimatorP$Packet$getPayload(msg, len);
}

# 135 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = LinkEstimatorP$Send$getPayload(msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 451 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP$0$getHeader(message_t * m)
#line 451
{
  return (ctp_routing_header_t *)/*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$getPayload(m, /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$maxPayloadLength());
}

# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint32_t /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand32(void ){
#line 46
  unsigned int __nesc_result;
#line 46

#line 46
  __nesc_result = RandomMlcgC$Random$rand32();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP$SimMote$getStartTime(void )
#line 61
{
  return SimMoteP$startTime[sim_node()];
}

# 127 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void )
#line 127
{
  return ATM128_TIMER0_TICKSPPS;
}

#line 154
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t)
#line 154
{
  t *= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  t /= sim_ticks_per_sec();
  return t;
}

# 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4296 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$size(void )
#line 57
{
  return /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size[sim_node()];
}

static inline uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$maxSize(void )
#line 61
{
  return 20;
}

# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void */*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$getPayload(message_t *m, uint8_t len)
#line 73
{
  return /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$getPayload(m, len);
}

# 135 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * MultihopOscilloscopeC$SerialSend$getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$getPayload(msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t MultihopOscilloscopeC$uartSendTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(MultihopOscilloscopeC$uartSendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/PoolP.nc"
static inline /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t */*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$get(void )
#line 88
{
  if (/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free[sim_node()]) {
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t *rval = /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$queue[sim_node()][/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index[sim_node()]];

#line 91
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$queue[sim_node()][/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index[sim_node()]] = (void *)0;
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free[sim_node()]--;
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index[sim_node()]++;
      if (/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index[sim_node()] == 10) {
          /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index[sim_node()] = 0;
        }
      sim_log_debug(328U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static MultihopOscilloscopeC$UARTMessagePool$t * MultihopOscilloscopeC$UARTMessagePool$get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 12 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
inline static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$Energy$pin_state_flip(uint8_t port, uint8_t bit){
#line 12
  Atm128EnergyHandlerP$Energy$pin_state_flip(port, bit);
#line 12
}
#line 12
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void )
#line 62
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 63
    atm128RegFile[sim_node()][27U] ^= 1 << 2;
#line 63
    __nesc_atomic_end(__nesc_atomic); }

  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$Energy$pin_state_flip(27U, 2);
}

# 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle();
#line 42
}
#line 42
# 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$maxSize(void )
#line 61
{
  return 10;
}

#line 57
static inline uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$size(void )
#line 57
{
  return /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size[sim_node()];
}

#line 97
static inline error_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$enqueue(/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t newVal)
#line 97
{
  if (/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$size() < /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$maxSize()) {
      sim_log_debug(336U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size[sim_node()]);
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue[sim_node()][/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$tail[sim_node()]] = newVal;
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$tail[sim_node()]++;
      if (/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$tail[sim_node()] == 10) {
#line 102
        /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$tail[sim_node()] = 0;
        }
#line 103
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size[sim_node()]++;
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static error_t MultihopOscilloscopeC$UARTQueue$enqueue(MultihopOscilloscopeC$UARTQueue$t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 89 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static error_t MultihopOscilloscopeC$UARTMessagePool$put(MultihopOscilloscopeC$UARTMessagePool$t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get(void )
#line 48
{
#line 48
  return (atm128RegFile[sim_node()][27U] & (1 << 2)) != 0;
}

# 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool LedsP$Led0$get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 11 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
inline static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$Energy$pin_state_clear(uint8_t port, uint8_t bit){
#line 11
  Atm128EnergyHandlerP$Energy$pin_state_clear(port, bit);
#line 11
}
#line 11
# 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void )
#line 56
{
  atm128RegFile[sim_node()][27U] &= ~(1 << 2);

  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$Energy$pin_state_clear(27U, 2);
}

# 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr();
#line 41
}
#line 41
# 74 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led0On(void )
#line 74
{
  LedsP$Led0$clr();
  sim_log_debug(171U, "LedsC", "LEDS: Led""0"" %s.\n", LedsP$Led0$get() ? "off" : "on");
#line 76
  ;
}

# 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC$Leds$led0On(void ){
#line 56
  LedsP$Leds$led0On();
#line 56
}
#line 56
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$get(void )
#line 48
{
#line 48
  return (atm128RegFile[sim_node()][27U] & (1 << 1)) != 0;
}

# 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool LedsP$Led1$get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 11 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
inline static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$Energy$pin_state_clear(uint8_t port, uint8_t bit){
#line 11
  Atm128EnergyHandlerP$Energy$pin_state_clear(port, bit);
#line 11
}
#line 11
# 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void )
#line 56
{
  atm128RegFile[sim_node()][27U] &= ~(1 << 1);

  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$Energy$pin_state_clear(27U, 1);
}

# 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr();
#line 41
}
#line 41
# 89 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led1On(void )
#line 89
{
  LedsP$Led1$clr();
  sim_log_debug(174U, "LedsC", "LEDS: Led""1"" %s.\n", LedsP$Led1$get() ? "off" : "on");
#line 91
  ;
}

# 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC$Leds$led1On(void ){
#line 72
  LedsP$Leds$led1On();
#line 72
}
#line 72
# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$get(void )
#line 48
{
#line 48
  return (atm128RegFile[sim_node()][27U] & (1 << 0)) != 0;
}

# 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool LedsP$Led2$get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 11 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
inline static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$Energy$pin_state_clear(uint8_t port, uint8_t bit){
#line 11
  Atm128EnergyHandlerP$Energy$pin_state_clear(port, bit);
#line 11
}
#line 11
# 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void )
#line 56
{
  atm128RegFile[sim_node()][27U] &= ~(1 << 0);

  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$Energy$pin_state_clear(27U, 0);
}

# 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr();
#line 41
}
#line 41
# 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led2On(void )
#line 104
{
  LedsP$Led2$clr();
  sim_log_debug(177U, "LedsC", "LEDS: Led""2"" %s.\n", LedsP$Led2$get() ? "off" : "on");
#line 106
  ;
}

# 89 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC$Leds$led2On(void ){
#line 89
  LedsP$Leds$led2On();
#line 89
}
#line 89
# 164 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num].isrunning = FALSE;
}

# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void MultihopOscilloscopeC$Timer$stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(0U);
#line 78
}
#line 78
# 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$maxSize(void )
#line 61
{
  return 13;
}

# 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Random$rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC$Random$rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 315 "/opt/local/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 12 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
inline static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$Energy$pin_state_flip(uint8_t port, uint8_t bit){
#line 12
  Atm128EnergyHandlerP$Energy$pin_state_flip(port, bit);
#line 12
}
#line 12
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void )
#line 62
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 63
    atm128RegFile[sim_node()][27U] ^= 1 << 0;
#line 63
    __nesc_atomic_end(__nesc_atomic); }

  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$Energy$pin_state_flip(27U, 0);
}

# 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle();
#line 42
}
#line 42
# 114 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led2Toggle(void )
#line 114
{
  LedsP$Led2$toggle();
  sim_log_debug(179U, "LedsC", "LEDS: Led""2"" %s.\n", LedsP$Led2$get() ? "off" : "on");
#line 116
  ;
}

# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC$Leds$led2Toggle(void ){
#line 100
  LedsP$Leds$led2Toggle();
#line 100
}
#line 100
# 283 "MultihopOscilloscopeC.nc"
inline static void MultihopOscilloscopeC$report_received(void )
#line 283
{
#line 283
  MultihopOscilloscopeC$Leds$led2Toggle();
}

#line 200
static inline message_t *
MultihopOscilloscopeC$Snoop$receive(message_t *msg, void *payload, uint8_t len)
#line 201
{
  oscilloscope_t *omsg = payload;

  MultihopOscilloscopeC$report_received();


  if (__nesc_ntoh_uint16(omsg->version.nxdata) > __nesc_ntoh_uint16(MultihopOscilloscopeC$local[sim_node()].version.nxdata)) {
      __nesc_hton_uint16(MultihopOscilloscopeC$local[sim_node()].version.nxdata, __nesc_ntoh_uint16(omsg->version.nxdata));
      __nesc_hton_uint16(MultihopOscilloscopeC$local[sim_node()].interval.nxdata, __nesc_ntoh_uint16(omsg->interval.nxdata));
      MultihopOscilloscopeC$startTimer();
    }



  if (__nesc_ntoh_uint16(omsg->count.nxdata) > __nesc_ntoh_uint16(MultihopOscilloscopeC$local[sim_node()].count.nxdata)) {
      __nesc_hton_uint16(MultihopOscilloscopeC$local[sim_node()].count.nxdata, __nesc_ntoh_uint16(omsg->count.nxdata));
      MultihopOscilloscopeC$suppress_count_change[sim_node()] = TRUE;
    }

  return msg;
}

# 863 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$default$receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 865
{
  return msg;
}

# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$receive(collection_id_t arg_0x101f41e08, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x101f41e08) {
#line 78
    case AM_OSCILLOSCOPE:
#line 78
      __nesc_result = MultihopOscilloscopeC$Snoop$receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$default$receive(arg_0x101f41e08, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 551 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerRouteUpdate(void )
#line 551
{
  /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval();
}

# 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerRouteUpdate(void ){
#line 71
  /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerRouteUpdate();
#line 71
}
#line 71
# 808 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$option(message_t *msg, ctp_options_t opt)
#line 808
{
  return (__nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->options.nxdata) & opt) == opt ? TRUE : FALSE;
}

#line 733
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSnoop$receive(message_t *msg, void *payload, uint8_t len)
#line 734
{


  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$option(msg, CTP_OPT_PULL)) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerRouteUpdate();
    }

  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$receive(/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(msg), 
  msg, payload + sizeof(ctp_data_header_t ), 
  len - sizeof(ctp_data_header_t ));
}

# 216 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 216
{
  return msg;
}

# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC$Snoop$receive(am_id_t arg_0x101960480, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x101960480) {
#line 78
    case 113:
#line 78
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSnoop$receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = TossimActiveMessageC$Snoop$default$receive(arg_0x101960480, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 92 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static bool MultihopOscilloscopeC$Timer$isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(0U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
#line 64
inline static void MultihopOscilloscopeC$Timer$startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(0U, dt);
#line 64
}
#line 64
# 89 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_disable_interrupt()
#line 89
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] &= ~(1 << 7);
}






#line 97
__inline  __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F];

#line 101
  __nesc_disable_interrupt();
  return result;
}



#line 106
__inline  void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F] = original_SREG;
}

#line 89
static __inline void McuSleepC$__nesc_disable_interrupt(void )
#line 89
{
  McuSleepC$atm128RegFile[sim_node()][sim_node()][* (volatile uint8_t *)&McuSleepC$atm128RegFile[sim_node()][sim_node()][0x3F]] &= ~(1 << 7);
}






#line 97
__inline  McuSleepC$__nesc_atomic_t 
McuSleepC$__nesc_atomic_start(void )
{
  McuSleepC$__nesc_atomic_t result = * (volatile uint8_t *)&McuSleepC$atm128RegFile[sim_node()][sim_node()][0x3F];

#line 101
  McuSleepC$__nesc_disable_interrupt();
  return result;
}



#line 106
__inline  void 
McuSleepC$__nesc_atomic_end(McuSleepC$__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)&McuSleepC$atm128RegFile[sim_node()][sim_node()][0x3F] = original_SREG;
}

# 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e)
#line 81
{
  SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;








  if (SimSchedulerBasicP$Scheduler$runNextTask()) {
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
}




static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e)
#line 99
{
  e->mote = sim_node();
  e->force = 0;
  e->data = (void *)0;
  e->handle = SimSchedulerBasicP$sim_scheduler_event_handle;
  e->cleanup = sim_queue_cleanup_none;
}

#line 162
static inline void SimSchedulerBasicP$Scheduler$init(void )
{
  sim_log_debug(109U, "Scheduler", "Initializing scheduler.\n");
  /* atomic removed: atomic calls only */
  {
    memset(SimSchedulerBasicP$m_next[sim_node()], SimSchedulerBasicP$NO_TASK, sizeof SimSchedulerBasicP$m_next[sim_node()]);
    SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$NO_TASK;
    SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;

    SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;
    SimSchedulerBasicP$sim_scheduler_event_init(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
  }
}

# 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void SimMainP$Scheduler$init(void ){
#line 57
  SimSchedulerBasicP$Scheduler$init();
#line 57
}
#line 57
# 116 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline uint8_t SimSchedulerBasicP$popTask(void )
{
  if (SimSchedulerBasicP$m_head[sim_node()] != SimSchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SimSchedulerBasicP$m_head[sim_node()];

#line 121
      SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_head[sim_node()]];
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;
        }
      SimSchedulerBasicP$m_next[sim_node()][id] = SimSchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SimSchedulerBasicP$NO_TASK;
    }
}

# 5 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
inline static void McuSleepC$Atm128EnergyHandler$mcu_state_change(uint8_t powerstate){
#line 5
  Atm128EnergyHandlerP$Energy$mcu_state_change(powerstate);
#line 5
}
#line 5
# 146 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/McuSleepC.nc"
static inline McuSleepC$mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void )
#line 146
{

  return McuSleepC$ATM128_POWER_DOWN;
}

# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = McuSleepC$McuPowerOverride$default$lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/McuSleepC.nc"
static inline McuSleepC$mcu_power_t McuSleepC$getPowerState(void )
#line 73
{
  uint8_t diff;

  if (* (volatile uint8_t *)&McuSleepC$atm128RegFile[sim_node()][sim_node()][0x37] & ~((1 << McuSleepC$OCIE0) | (1 << McuSleepC$TOIE0))) {
      return McuSleepC$ATM128_POWER_IDLE;
    }
  else {
    if ((McuSleepC$atm128RegFile[sim_node()][sim_node()][* (volatile uint8_t *)&McuSleepC$atm128RegFile[sim_node()][sim_node()][0x0D]] & (1 << McuSleepC$SPIE)) != 0) {
        return McuSleepC$ATM128_POWER_IDLE;
      }
    else {
      if (* (volatile uint8_t *)&McuSleepC$atm128RegFile[sim_node()][sim_node()][0x0A] & ((1 << McuSleepC$TXCIE) | (1 << McuSleepC$RXCIE))) {
          return McuSleepC$ATM128_POWER_IDLE;
        }
      else {
#line 87
        if (* (volatile uint8_t *)&McuSleepC$atm128RegFile[sim_node()][sim_node()][0x9A] & ((1 << McuSleepC$TXCIE) | (1 << McuSleepC$RXCIE))) {
            return McuSleepC$ATM128_POWER_IDLE;
          }
        else {
          if ((McuSleepC$atm128RegFile[sim_node()][sim_node()][* (volatile uint8_t *)&McuSleepC$atm128RegFile[sim_node()][sim_node()][0x06]] & (1 << McuSleepC$ADEN)) != 0) {
              return McuSleepC$ATM128_POWER_ADC_NR;
            }
          else {
            if (* (volatile uint8_t *)&McuSleepC$atm128RegFile[sim_node()][sim_node()][0x37] & ((1 << McuSleepC$OCIE0) | (1 << McuSleepC$TOIE0))) {
                diff = * (volatile uint8_t *)&McuSleepC$atm128RegFile[sim_node()][sim_node()][0x31] - * (volatile uint8_t *)&McuSleepC$atm128RegFile[sim_node()][sim_node()][0x32];
                if (diff < 16) {
                  return McuSleepC$ATM128_POWER_IDLE;
                  }
#line 99
                return McuSleepC$ATM128_POWER_SAVE;
              }
            else {
                return McuSleepC$ATM128_POWER_DOWN;
              }
            }
          }
        }
      }
    }
}

# 122 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
static inline McuSleepC$mcu_power_t McuSleepC$mcombine(McuSleepC$mcu_power_t m1, McuSleepC$mcu_power_t m2)
#line 122
{
  return m1 < m2 ? m1 : m2;
}

# 106 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/McuSleepC.nc"
static inline void McuSleepC$computePowerState(void )
#line 106
{
  McuSleepC$powerState[sim_node()] = McuSleepC$mcombine(McuSleepC$getPowerState(), 
  McuSleepC$McuPowerOverride$lowestState());
}

static inline void McuSleepC$McuSleep$sleep(void )
#line 111
{
  if (McuSleepC$dirty[sim_node()]) {
      uint8_t temp;

#line 114
      McuSleepC$computePowerState();

      McuSleepC$Atm128EnergyHandler$mcu_state_change(McuSleepC$powerState[sim_node()]);


      temp = * (volatile uint8_t *)&McuSleepC$atm128RegFile[sim_node()][sim_node()][0x35];
      temp &= 0xe3;
      temp |= McuSleepC$atm128PowerBits[sim_node()][McuSleepC$powerState[sim_node()]] | (1 << McuSleepC$SE);
      * (volatile uint8_t *)&McuSleepC$atm128RegFile[sim_node()][sim_node()][0x35] = temp;
    }
}

# 76 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/McuSleep.nc"
inline static void SimSchedulerBasicP$McuSleep$sleep(void ){
#line 76
  McuSleepC$McuSleep$sleep();
#line 76
}
#line 76
# 5 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
inline static void SimSchedulerBasicP$Energy$mcu_state_change(uint8_t powerstate){
#line 5
  Atm128EnergyHandlerP$Energy$mcu_state_change(powerstate);
#line 5
}
#line 5
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialActiveMessageC$startDone$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(SerialActiveMessageC$startDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline error_t SerialActiveMessageC$SplitControl$start(void )
#line 70
{
  SerialActiveMessageC$startDone$postTask();
  return SUCCESS;
}

# 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t MultihopOscilloscopeC$SerialControl$start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialActiveMessageC$SplitControl$start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 106 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = TossimActiveMessageC$Packet$maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 777 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength(void )
#line 777
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$maxPayloadLength() - sizeof(ctp_data_header_t );
}

#line 345
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$maxPayloadLength(uint8_t client)
#line 345
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength();
}

# 112 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t MultihopOscilloscopeC$Send$maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$maxPayloadLength(0U);
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 90 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC$RadioControl$startDone(error_t error)
#line 90
{
  if (error != SUCCESS) {
    MultihopOscilloscopeC$fatal_problem();
    }
  if (sizeof MultihopOscilloscopeC$local[sim_node()] > MultihopOscilloscopeC$Send$maxPayloadLength()) {
    MultihopOscilloscopeC$fatal_problem();
    }
  if (MultihopOscilloscopeC$SerialControl$start() != SUCCESS) {
    MultihopOscilloscopeC$fatal_problem();
    }
}

# 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline bool /*CtpP.SendQueueP*/QueueC$0$Queue$empty(void )
#line 53
{
  return /*CtpP.SendQueueP*/QueueC$0$size[sim_node()] == 0;
}

# 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 841 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(uint8_t state)
#line 841
{
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[sim_node()] = /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[sim_node()] | state;
}

#line 239
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$startDone(error_t err)
#line 239
{
  if (err == SUCCESS) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$RADIO_ON);
      if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$empty()) {
          sim_log_debug(208U, "FHangBug", "%s posted sendTask.\n", __FUNCTION__);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
        }
    }
}

# 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC$Random$rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 242 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$startDone(error_t error)
#line 242
{
  /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()] = TRUE;
  sim_log_debug(299U, "TreeRoutingCtl", "%s running: %d radioOn: %d\n", __FUNCTION__, /*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()], /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()]);
  if (/*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()]) {
      uint16_t nextInt;

#line 247
      nextInt = /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand16() % BEACON_INTERVAL;
      nextInt += BEACON_INTERVAL >> 1;
    }
}

# 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC$Control$startDone(error_t error){
#line 113
  /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$startDone(error);
#line 113
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$startDone(error);
#line 113
  MultihopOscilloscopeC$RadioControl$startDone(error);
#line 113
}
#line 113
# 94 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$startDoneTask$runTask(void )
#line 94
{
  TossimPacketModelC$running[sim_node()] = TRUE;
  TossimPacketModelC$Control$startDone(SUCCESS);
}

# 118 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC$RadioControl$stopDone(error_t error)
#line 118
{
}

# 835 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(uint8_t state)
#line 835
{
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[sim_node()] = /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[sim_node()] & ~state;
}

#line 273
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$stopDone(error_t err)
#line 273
{
  if (err == SUCCESS) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$RADIO_ON);
    }
}

# 252 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$stopDone(error_t error)
#line 252
{
  /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()] = FALSE;
  sim_log_debug(300U, "TreeRoutingCtl", "%s running: %d radioOn: %d\n", __FUNCTION__, /*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()], /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()]);
}

# 138 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC$Control$stopDone(error_t error){
#line 138
  /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$stopDone(error);
#line 138
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$stopDone(error);
#line 138
  MultihopOscilloscopeC$RadioControl$stopDone(error);
#line 138
}
#line 138
# 99 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$stopDoneTask$runTask(void )
#line 99
{
  TossimPacketModelC$running[sim_node()] = FALSE;
  TossimPacketModelC$Control$stopDone(SUCCESS);
}

# 303 "/opt/local/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void TossimActiveMessageC$AMSend$sendDone(am_id_t arg_0x10194c788, message_t * msg, error_t error){
#line 110
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x10194c788, msg, error);
#line 110
}
#line 110
# 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t result)
#line 103
{
  TossimActiveMessageC$AMSend$sendDone(TossimActiveMessageC$AMPacket$type(msg), msg, result);
}

# 76 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC$Packet$sendDone(message_t *msg, error_t error){
#line 76
  TossimActiveMessageC$Model$sendDone(msg, error);
#line 76
}
#line 76
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline tossim_metadata_t *TossimPacketModelC$getMetadata(message_t *msg)
#line 80
{
  return (tossim_metadata_t *)& msg->metadata;
}

#line 153
static inline void TossimPacketModelC$sendDoneTask$runTask(void )
#line 153
{
  message_t *msg = TossimPacketModelC$sending[sim_node()];
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(msg);

#line 156
  __nesc_hton_uint8(meta->ack.nxdata, 0);
  __nesc_hton_int8(meta->strength.nxdata, 0);
  __nesc_hton_uint16(meta->time.nxdata, 0);
  TossimPacketModelC$sending[sim_node()] = FALSE;





  TossimPacketModelC$Packet$sendDone(msg, TossimPacketModelC$running[sim_node()] ? SUCCESS : EOFF);
}

# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC$Leds$led0Toggle(void ){
#line 67
  LedsP$Leds$led0Toggle();
#line 67
}
#line 67
# 281 "MultihopOscilloscopeC.nc"
inline static void MultihopOscilloscopeC$report_problem(void )
#line 281
{
#line 281
  MultihopOscilloscopeC$Leds$led0Toggle();
}

# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setType(message_t * amsg, am_id_t t){
#line 162
  SerialActiveMessageC$AMPacket$setType(amsg, t);
#line 162
}
#line 162
# 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline serial_header_t *SerialActiveMessageC$getHeader(message_t *amsg)
#line 63
{
  return (serial_header_t *)(amsg->data - sizeof(serial_header_t ));
}

#line 109
static inline void SerialActiveMessageC$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 109
{
  serial_header_t *header = SerialActiveMessageC$getHeader(amsg);

#line 111
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

# 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 103
  SerialActiveMessageC$AMPacket$setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setDestination(msg, dest);
  /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setType(msg, 147);
  return /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$send(msg, len);
}

# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t MultihopOscilloscopeC$SerialSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 170 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC$uartSendTask$runTask(void )
#line 170
{
  if (MultihopOscilloscopeC$SerialSend$send(0xffff, &MultihopOscilloscopeC$uartbuf[sim_node()], MultihopOscilloscopeC$uartlen[sim_node()]) != SUCCESS) {
      MultihopOscilloscopeC$report_problem();
    }
  else 
#line 173
    {
      MultihopOscilloscopeC$uartbusy[sim_node()] = TRUE;
    }
}

# 222 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();
}

# 109 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void ){
#line 109
  unsigned int __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 136 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 139 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 83
}
#line 83
# 226 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned int __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()];

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void ){
#line 116
  unsigned int __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
#line 103
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(t0, dt);
#line 103
}
#line 103
# 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()] = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}










static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()], FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 129 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(t0, dt);
#line 129
}
#line 129
# 204 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop();
#line 73
}
#line 73
# 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 78
}
#line 78
# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 263 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC$Read$readDone(error_t result, uint16_t data)
#line 263
{
  if (result != SUCCESS) {
      data = 0xffff;
      MultihopOscilloscopeC$report_problem();
    }
  if (MultihopOscilloscopeC$reading[sim_node()] < NREADINGS) {
    __nesc_hton_uint16(MultihopOscilloscopeC$local[sim_node()].readings[MultihopOscilloscopeC$reading[sim_node()]++].nxdata, data);
    }
}

# 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Read.nc"
inline static void /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$Read$readDone(error_t result, /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$Read$val_t val){
#line 63
  MultihopOscilloscopeC$Read$readDone(result, val);
#line 63
}
#line 63
# 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ConstantSensorC.nc"
static inline void /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$senseResult$runTask(void )
#line 47
{
  /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$Read$readDone(SUCCESS, 48879U);
}

# 181 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 181
{
  __nesc_hton_uint8(TossimActiveMessageC$getHeader(msg)->length.nxdata, len);
}

# 94 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$setPayloadLength(message_t * msg, uint8_t len){
#line 94
  TossimActiveMessageC$Packet$setPayloadLength(msg, len);
#line 94
}
#line 94
# 773 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 773
{
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$setPayloadLength(msg, len + sizeof(ctp_data_header_t ));
}

# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t * amsg, am_id_t t){
#line 162
  TossimActiveMessageC$AMPacket$setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 103
  TossimActiveMessageC$AMPacket$setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 113);
  return /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 811 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setOption(message_t *msg, ctp_options_t opt)
#line 811
{
  unsigned char *__nesc_temp44;

#line 812
  (__nesc_temp44 = /*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->options.nxdata, __nesc_hton_uint8(__nesc_temp44, __nesc_ntoh_uint8(__nesc_temp44) | opt));
}

#line 838
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(uint8_t state)
#line 838
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[sim_node()] & state;
}

# 136 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$PacketAcknowledgements$requestAck(message_t *msg)
#line 136
{
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(msg);

#line 138
  __nesc_hton_uint8(meta->ack.nxdata, TRUE);
  return SUCCESS;
}

# 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = TossimPacketModelC$PacketAcknowledgements$requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 814 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$clearOption(message_t *msg, ctp_options_t opt)
#line 814
{
  unsigned char *__nesc_temp45;

#line 815
  (__nesc_temp45 = /*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->options.nxdata, __nesc_hton_uint8(__nesc_temp45, __nesc_ntoh_uint8(__nesc_temp45) & ~opt));
}

#line 806
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setEtx(message_t *msg, uint16_t e)
#line 806
{
#line 806
  __nesc_hton_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->etx.nxdata, e);
}

# 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue(void ){
#line 81
  struct __nesc_unnamed4318 *__nesc_result;
#line 81

#line 81
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 517 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$Routing$nextHop(void )
#line 517
{
  return /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent;
}

# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$nextHop(void ){
#line 48
  unsigned short __nesc_result;
#line 48

#line 48
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$Routing$nextHop();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$head(void )
#line 65
{
  return /*CtpP.SendQueueP*/QueueC$0$queue[sim_node()][/*CtpP.SendQueueP*/QueueC$0$head[sim_node()]];
}

# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$head(void ){
#line 73
  struct __nesc_unnamed4318 *__nesc_result;
#line 73

#line 73
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 520 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$Routing$hasRoute(void )
#line 520
{
  return /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent != INVALID_ADDR;
}

# 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$hasRoute(void ){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$Routing$hasRoute();
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 371 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$runTask(void )
#line 371
{
  uint16_t gradient;

#line 373
  sim_log_debug(216U, "Forwarder", "%s: Trying to send a packet. Queue size is %hhu.\n", __FUNCTION__, /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size());
  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SENDING) || /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$empty()) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SENDQUEUE_EMPTY);
      return;
    }
  else {
    if ((
#line 378
    !/*CtpP.Forwarder*/CtpForwardingEngineP$0$RootControl$isRoot() && 
    !/*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$hasRoute()) || 
    /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$getEtx(&gradient) != SUCCESS) {








        sim_log_debug(217U, "Forwarder", "%s: no route, don't send, try again in %i.\n", __FUNCTION__, NO_ROUTE_RETRY);
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$startOneShot(NO_ROUTE_RETRY);
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_NO_ROUTE);
        return;
      }
    else {



        error_t subsendResult;
        fe_queue_entry_t *qe = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$head();
        uint8_t payloadLen = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$payloadLength(qe->msg);
        am_addr_t dest = /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$nextHop();

        if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$lookup(qe->msg)) {




            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_DUPLICATE_CACHE_AT_SEND);
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue();
            if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(qe->msg) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
              }
#line 412
            if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(qe) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_QEPOOL_ERR);
              }
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
            return;
          }


        sim_log_debug(218U, "Forwarder", "Sending queue entry %p\n", qe);

        if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$RootControl$isRoot()) {

            collection_id_t collectid = __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(qe->msg)->type.nxdata);
            uint8_t *payload;
            uint8_t payloadLength;

            memcpy(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()], qe->msg, sizeof(message_t ));

            payload = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()], /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()]));
            payloadLength = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()]);
            sim_log_debug(219U, "Forwarder", "%s: I'm a root, so loopback and signal receive.\n", __FUNCTION__);
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()] = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$receive(collectid, /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()], 
            payload, 
            payloadLength);
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(qe->msg, SUCCESS);
          }
        else {

            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setEtx(qe->msg, gradient);
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$clearOption(qe->msg, CTP_OPT_ECN | CTP_OPT_PULL);
            if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$requestAck(qe->msg) == SUCCESS) {
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$ACK_PENDING);
              }
            if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$QUEUE_CONGESTED)) {
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setOption(qe->msg, CTP_OPT_ECN);
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$QUEUE_CONGESTED);
              }

            subsendResult = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$send(dest, qe->msg, payloadLen);
            if (subsendResult == SUCCESS) {

                /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SENDING);
                sim_log_debug(220U, "Forwarder", "%s: subsend succeeded with %p.\n", __FUNCTION__, qe->msg);
                return;
              }
            else {
              if (subsendResult == ESIZE) {
                  sim_log_debug(221U, "Forwarder", "%s: subsend failed from ESIZE: truncate packet.\n", __FUNCTION__);
                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(qe->msg, /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength());
                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SUBSEND_SIZE);
                }
              else {
                  sim_log_debug(222U, "Forwarder", "%s: subsend failed from %i\n", __FUNCTION__, (int )subsendResult);
                }
              }
          }
      }
    }
}

# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t * msg, error_t error){
#line 110
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(msg, error);
#line 110
}
#line 110
# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 65
{
  /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 423 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$sendDone(message_t *msg, error_t error)
#line 423
{
  if (msg != &/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer[sim_node()] || !/*CtpP.Router*/CtpRoutingEngineP$0$sending[sim_node()]) {

      return;
    }
  /*CtpP.Router*/CtpRoutingEngineP$0$sending[sim_node()] = FALSE;
}

# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void LinkEstimatorP$Send$sendDone(message_t * msg, error_t error){
#line 110
  /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$sendDone(msg, error);
#line 110
}
#line 110
# 570 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP$AMSend$sendDone(message_t *msg, error_t error)
#line 570
{
  LinkEstimatorP$Send$sendDone(msg, error);
}

# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t * msg, error_t error){
#line 110
  LinkEstimatorP$AMSend$sendDone(msg, error);
#line 110
}
#line 110
# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err)
#line 65
{
  /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(m, err);
}

# 215 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x10229be18, message_t * msg, error_t error){
#line 100
  switch (arg_0x10229be18) {
#line 100
    case 0U:
#line 100
      /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(msg, error);
#line 100
      break;
#line 100
    case 1U:
#line 100
      /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x10229be18, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 163 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void )
#line 169
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()], /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg, FAIL);
}

#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 2 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(1U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t * amsg, am_id_t t){
#line 162
  TossimActiveMessageC$AMPacket$setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 103
  TossimActiveMessageC$AMPacket$setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(msg, dest);
  /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(msg, 112);
  return /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(msg, len);
}

# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t LinkEstimatorP$AMSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 109 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline linkest_footer_t *LinkEstimatorP$getFooter(message_t *m, uint8_t len)
#line 109
{

  return (linkest_footer_t *)(len + (uint8_t *)LinkEstimatorP$Packet$getPayload(m, len + sizeof(linkest_footer_t )));
}




static inline uint8_t LinkEstimatorP$addLinkEstHeaderAndFooter(message_t *msg, uint8_t len)
#line 117
{
  unsigned char *__nesc_temp46;
#line 118
  uint8_t newlen;
  linkest_header_t * hdr;
  linkest_footer_t * footer;
  uint8_t i;
#line 121
  uint8_t j;
#line 121
  uint8_t k;
  uint8_t maxEntries;
#line 122
  uint8_t newPrevSentIdx;

#line 123
  sim_log_debug(260U, "LI", "newlen1 = %d\n", len);
  hdr = LinkEstimatorP$getHeader(msg);
  footer = LinkEstimatorP$getFooter(msg, len);

  maxEntries = (LinkEstimatorP$SubPacket$maxPayloadLength() - len - sizeof(linkest_header_t ))
   / sizeof(linkest_footer_t );



  if (maxEntries > NUM_ENTRIES_FLAG) {
      maxEntries = NUM_ENTRIES_FLAG;
    }
  sim_log_debug(261U, "LI", "Max payload is: %d, maxEntries is: %d\n", LinkEstimatorP$SubPacket$maxPayloadLength(), maxEntries);

  j = 0;
  newPrevSentIdx = 0;
  for (i = 0; i < 10 && j < maxEntries; i++) {
      uint8_t neighborCount;
      neighbor_stat_entry_t * neighborLists;

#line 142
      if (maxEntries <= 10) {
        neighborCount = maxEntries;
        }
      else {
#line 145
        neighborCount = 10;
        }
      neighborLists = (neighbor_stat_entry_t * )footer->neighborList;
      k = (LinkEstimatorP$prevSentIdx[sim_node()] + i + 1) % 10;
      if (LinkEstimatorP$NeighborTable[sim_node()][k].flags & VALID_ENTRY && 
      LinkEstimatorP$NeighborTable[sim_node()][k].flags & MATURE_ENTRY) {
          __nesc_hton_uint16(neighborLists[j].ll_addr.nxdata, LinkEstimatorP$NeighborTable[sim_node()][k].ll_addr);
          __nesc_hton_uint8(neighborLists[j].inquality.nxdata, LinkEstimatorP$NeighborTable[sim_node()][k].inquality);
          newPrevSentIdx = k;
          sim_log_debug(262U, "LI", "Loaded on footer: %d %d %d\n", j, __nesc_ntoh_uint16(neighborLists[j].ll_addr.nxdata), __nesc_ntoh_uint8(neighborLists[j].inquality.nxdata));

          j++;
        }
    }
  LinkEstimatorP$prevSentIdx[sim_node()] = newPrevSentIdx;

  __nesc_hton_uint8(hdr->seq.nxdata, LinkEstimatorP$linkEstSeq[sim_node()]++);
  __nesc_hton_uint8(hdr->flags.nxdata, 0);
  (__nesc_temp46 = hdr->flags.nxdata, __nesc_hton_uint8(__nesc_temp46, __nesc_ntoh_uint8(__nesc_temp46) | (NUM_ENTRIES_FLAG & j)));
  newlen = sizeof(linkest_header_t ) + len + j * sizeof(linkest_footer_t );
  sim_log_debug(263U, "LI", "newlen2 = %d\n", newlen);
  return newlen;
}

#line 559
static inline error_t LinkEstimatorP$Send$send(am_addr_t addr, message_t *msg, uint8_t len)
#line 559
{
  uint8_t newlen;

#line 561
  newlen = LinkEstimatorP$addLinkEstHeaderAndFooter(msg, len);
  sim_log_debug(282U, "LITest", "%s packet of length %hhu became %hhu\n", __FUNCTION__, len, newlen);
  sim_log_debug(283U, "LI", "Sending seq: %d\n", LinkEstimatorP$linkEstSeq[sim_node()]);
  LinkEstimatorP$print_packet(msg, newlen);
  return LinkEstimatorP$AMSend$send(addr, msg, newlen);
}

# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = LinkEstimatorP$Send$send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = UARTDebugSenderP$CollectionDebug$logEventRoute(type, parent, hopcount, metric);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 752 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpCongestion$isCongested(void )
#line 752
{
  return FALSE;
}

# 7 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpCongestion.nc"
inline static bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpCongestion$isCongested(void ){
#line 7
  unsigned char __nesc_result;
#line 7

#line 7
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpCongestion$isCongested();
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 384 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$runTask(void )
#line 384
{
  unsigned char *__nesc_temp48;
  unsigned char *__nesc_temp47;
#line 385
  error_t eval;

#line 386
  if (/*CtpP.Router*/CtpRoutingEngineP$0$sending[sim_node()]) {
      return;
    }

  __nesc_hton_uint8(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->options.nxdata, 0);


  if (/*CtpP.Router*/CtpRoutingEngineP$0$CtpCongestion$isCongested()) {
      (__nesc_temp47 = /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->options.nxdata, __nesc_hton_uint8(__nesc_temp47, __nesc_ntoh_uint8(__nesc_temp47) | CTP_OPT_ECN));
    }

  __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->parent.nxdata, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent);
  if (/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[sim_node()]) {
      __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->etx.nxdata, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx);
    }
  else {
#line 401
    if (/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent == INVALID_ADDR) {
        __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->etx.nxdata, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx);
        (__nesc_temp48 = /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->options.nxdata, __nesc_hton_uint8(__nesc_temp48, __nesc_ntoh_uint8(__nesc_temp48) | CTP_OPT_PULL));
      }
    else 
#line 404
      {
        __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->etx.nxdata, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx + /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent));
      }
    }
  sim_log_debug(307U, "TreeRouting", "%llu \t SENT_BEACON \t [parent:%d etx:%d]\n", sim_time(), __nesc_ntoh_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->parent.nxdata), __nesc_ntoh_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->etx.nxdata));

  /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventRoute(NET_C_TREE_SENT_BEACON, __nesc_ntoh_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->parent.nxdata), 0, __nesc_ntoh_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->etx.nxdata));

  eval = /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$send(AM_BROADCAST_ADDR, 
  &/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer[sim_node()], 
  sizeof(ctp_routing_header_t ));
  if (eval == SUCCESS) {
      /*CtpP.Router*/CtpRoutingEngineP$0$sending[sim_node()] = TRUE;
    }
  else {
#line 417
    if (eval == EOFF) {
        /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()] = FALSE;
        sim_log_debug(308U, "TreeRoutingCtl", "%s running: %d radioOn: %d\n", __FUNCTION__, /*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()], /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()]);
      }
    }
}

# 262 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$routeFound(void )
#line 262
{
  sim_log_debug(210U, "FHangBug", "%s posted sendTask.\n", __FUNCTION__);
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
}

# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP$0$Routing$routeFound(void ){
#line 51
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$routeFound();
#line 51
}
#line 51
# 267 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$noRoute(void )
#line 267
{
}

# 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP$0$Routing$noRoute(void ){
#line 52
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$noRoute();
#line 52
}
#line 52
# 544 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$LinkEstimator$clearDLQ(am_addr_t neighbor)
#line 544
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP$findIdx(neighbor);

#line 547
  if (nidx == LinkEstimatorP$INVALID_RVAL) {
      return FAIL;
    }
  ne = &LinkEstimatorP$NeighborTable[sim_node()][nidx];
  ne->data_total = 0;
  ne->data_success = 0;
  return SUCCESS;
}

# 69 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$clearDLQ(am_addr_t neighbor){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = LinkEstimatorP$LinkEstimator$clearDLQ(neighbor);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 499 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$LinkEstimator$unpinNeighbor(am_addr_t neighbor)
#line 499
{
  uint8_t nidx = LinkEstimatorP$findIdx(neighbor);

#line 501
  if (nidx == LinkEstimatorP$INVALID_RVAL) {
      return FAIL;
    }
  LinkEstimatorP$NeighborTable[sim_node()][nidx].flags &= ~PINNED_ENTRY;
  return SUCCESS;
}

# 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$unpinNeighbor(am_addr_t neighbor){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = LinkEstimatorP$LinkEstimator$unpinNeighbor(neighbor);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 89 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static error_t UARTDebugSenderP$MessagePool$put(UARTDebugSenderP$MessagePool$t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t UARTDebugSenderP$sendTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(UARTDebugSenderP$sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static error_t UARTDebugSenderP$SendQueue$enqueue(UARTDebugSenderP$SendQueue$t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 166 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline void *SerialActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len)
#line 166
{
  if (len <= 28) {
      return msg->data;
    }
  else {
      return (void *)0;
    }
}

#line 96
static inline void *SerialActiveMessageC$AMSend$getPayload(am_id_t id, message_t *m, uint8_t len)
#line 96
{
  return SerialActiveMessageC$Packet$getPayload(m, len);
}

# 135 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$getPayload(am_id_t arg_0x102299020, message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = SerialActiveMessageC$AMSend$getPayload(arg_0x102299020, msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 211 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void */*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$getPayload(uint8_t id, message_t *m, uint8_t len)
#line 211
{
  return /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$getPayload(0, m, len);
}

# 125 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$getPayload(1U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void */*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$getPayload(message_t *m, uint8_t len)
#line 73
{
  return /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$getPayload(m, len);
}

# 135 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * UARTDebugSenderP$UARTSend$getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$getPayload(msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static UARTDebugSenderP$MessagePool$t * UARTDebugSenderP$MessagePool$get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 61
inline static bool UARTDebugSenderP$MessagePool$empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 188 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/UARTDebugSenderP.nc"
static inline  error_t UARTDebugSenderP$CollectionDebug$logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3)
#line 188
{
  UARTDebugSenderP$statLogReceived[sim_node()]++;
  if (UARTDebugSenderP$MessagePool$empty()) {
      return FAIL;
    }
  else 
#line 192
    {
      message_t *msg = UARTDebugSenderP$MessagePool$get();
      CollectionDebugMsg *dbg_msg = UARTDebugSenderP$UARTSend$getPayload(msg, sizeof(CollectionDebugMsg ));

#line 195
      if (dbg_msg == (void *)0) {
          return FAIL;
        }
      memset(dbg_msg, 0, UARTDebugSenderP$len[sim_node()]);

      __nesc_hton_uint8(dbg_msg->type.nxdata, type);
      __nesc_hton_uint16(dbg_msg->data.dbg.a.nxdata, arg1);
      __nesc_hton_uint16(dbg_msg->data.dbg.b.nxdata, arg2);
      __nesc_hton_uint16(dbg_msg->data.dbg.c.nxdata, arg3);
      __nesc_hton_uint16(dbg_msg->seqno.nxdata, UARTDebugSenderP$statLogReceived[sim_node()]);

      if (UARTDebugSenderP$SendQueue$enqueue(msg) == SUCCESS) {
          UARTDebugSenderP$sendTask$postTask();
          return SUCCESS;
        }
      else 
#line 209
        {
          UARTDebugSenderP$statEnqueueFail[sim_node()]++;
          UARTDebugSenderP$MessagePool$put(msg);
          return FAIL;
        }
    }
}

# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = UARTDebugSenderP$CollectionDebug$logEventDbg(type, arg1, arg2, arg3);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 266 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$runTask(void )
#line 266
{
  uint8_t i;
  routing_table_entry *entry;
  routing_table_entry *best;
  uint16_t minEtx;
  uint16_t currentEtx;
  uint16_t linkEtx;
#line 272
  uint16_t pathEtx;

  if (/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[sim_node()]) {
    return;
    }
  best = (void *)0;

  minEtx = MAX_METRIC;

  currentEtx = MAX_METRIC;




  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()]; i++) {
      entry = &/*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][i];


      if (entry->info.parent == INVALID_ADDR || entry->info.parent == /*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr[sim_node()]) {

          sim_log_debug(301U, "TreeRouting", "%llu \t ROUTING_TABLE[%d] \t neighbour=[id:%d parent:%d etx:NO_ROUTE]\n", sim_time(), i, entry->neighbor, entry->info.parent);

          continue;
        }

      linkEtx = /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(entry->neighbor);
      sim_log_debug(302U, "TreeRouting", "%llu \t ROUTING_TABLE[%d] \t neighbour=[id:%d parent:%d etx:%d retx:%d]\n", sim_time(), i, entry->neighbor, entry->info.parent, linkEtx, entry->info.etx);
      pathEtx = linkEtx + entry->info.etx;


      if (entry->neighbor == /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent) {
          sim_log_debug(303U, "TreeRouting", " \t This neighbour is my current parent.\n");
          currentEtx = pathEtx;

          /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx = entry->info.etx;
          /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].congested = entry->info.congested;
          continue;
        }


      if (entry->info.congested) {
        continue;
        }

      if (!/*CtpP.Router*/CtpRoutingEngineP$0$passLinkEtxThreshold(linkEtx)) {
          sim_log_debug(304U, "TreeRouting", " \t The link to this neighbour is too low quality.\n");
          continue;
        }

      if (pathEtx < minEtx) {
          sim_log_debug(305U, "TreeRouting", " \t Best neighbour is %d, with path etx %d\n", entry->neighbor, pathEtx);
          minEtx = pathEtx;
          best = entry;
        }
    }
#line 341
  if (minEtx != MAX_METRIC) {

      if ((
#line 342
      currentEtx == MAX_METRIC || (
      /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].congested && minEtx < /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx + 10)) || 
      minEtx + PARENT_SWITCH_THRESHOLD < currentEtx) {




          /*CtpP.Router*/CtpRoutingEngineP$0$parentChanges[sim_node()]++;

          sim_log_debug(306U, "TreeRouting", "%llu \t PARENT_CHANGE from %d to %d\n", sim_time(), /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent, best->neighbor);
          /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventDbg(NET_C_TREE_NEW_PARENT, best->neighbor, best->info.etx, minEtx);
          /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$unpinNeighbor(/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent);
          /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$pinNeighbor(best->neighbor);
          /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$clearDLQ(best->neighbor);

          /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent = best->neighbor;
          /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx = best->info.etx;
          /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].congested = best->info.congested;
          if (currentEtx - minEtx > 20) {
              /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerRouteUpdate();
            }
        }
    }




  if (/*CtpP.Router*/CtpRoutingEngineP$0$justEvicted[sim_node()] && /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent == INVALID_ADDR) {
    /*CtpP.Router*/CtpRoutingEngineP$0$Routing$noRoute();
    }
  else {



    if (
#line 375
    !/*CtpP.Router*/CtpRoutingEngineP$0$justEvicted[sim_node()] && 
    currentEtx == MAX_METRIC && 
    minEtx != MAX_METRIC) {
      /*CtpP.Router*/CtpRoutingEngineP$0$Routing$routeFound();
      }
    }
#line 379
  /*CtpP.Router*/CtpRoutingEngineP$0$justEvicted[sim_node()] = FALSE;
}

#line 589
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$setRoot(void )
#line 589
{
  bool route_found = FALSE;

#line 591
  route_found = /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent == INVALID_ADDR;
  /*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[sim_node()] = 1;
  /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent = /*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr[sim_node()];
  /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx = 0;

  if (route_found) {
    /*CtpP.Router*/CtpRoutingEngineP$0$Routing$routeFound();
    }
#line 598
  sim_log_debug(313U, "TreeRouting", "%llu \t I_AM_ROOT\n", sim_time());
  /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventRoute(NET_C_TREE_NEW_PARENT, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent, 0, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx);
  return SUCCESS;
}

# 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/RootControl.nc"
inline static error_t MultihopOscilloscopeC$RootControl$setRoot(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$setRoot();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 101 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC$SerialControl$startDone(error_t error)
#line 101
{
  if (error != SUCCESS) {
    MultihopOscilloscopeC$fatal_problem();
    }

  if (__nesc_ntoh_uint16(MultihopOscilloscopeC$local[sim_node()].id.nxdata) % 500 == 0) {
    MultihopOscilloscopeC$RootControl$setRoot();
    }
  MultihopOscilloscopeC$startTimer();
}

# 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialActiveMessageC$SplitControl$startDone(error_t error){
#line 113
  MultihopOscilloscopeC$SerialControl$startDone(error);
#line 113
}
#line 113
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline void SerialActiveMessageC$startDone$runTask(void )
#line 67
{
#line 67
  SerialActiveMessageC$SplitControl$startDone(SUCCESS);
}

# 119 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC$SerialControl$stopDone(error_t error)
#line 119
{
}

# 138 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialActiveMessageC$SplitControl$stopDone(error_t error){
#line 138
  MultihopOscilloscopeC$SerialControl$stopDone(error);
#line 138
}
#line 138
# 68 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline void SerialActiveMessageC$stopDone$runTask(void )
#line 68
{
#line 68
  SerialActiveMessageC$SplitControl$stopDone(SUCCESS);
}

# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$sendDone(message_t * msg, error_t error){
#line 110
  MultihopOscilloscopeC$SerialSend$sendDone(msg, error);
#line 110
}
#line 110
# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(message_t *m, error_t err)
#line 65
{
  /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$sendDone(m, err);
}

# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$sendDone(message_t * msg, error_t error){
#line 110
  UARTDebugSenderP$UARTSend$sendDone(msg, error);
#line 110
}
#line 110
# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$sendDone(message_t *m, error_t err)
#line 65
{
  /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$sendDone(m, err);
}

# 215 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(uint8_t arg_0x10229be18, message_t * msg, error_t error){
#line 100
  switch (arg_0x10229be18) {
#line 100
    case 0U:
#line 100
      /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(msg, error);
#line 100
      break;
#line 100
    case 1U:
#line 100
      /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(arg_0x10229be18, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline error_t SerialActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 82
{
  sim_log_debug(319U, "Serial", "Serial: sending a packet of size %d\n", len);
  return FAIL;
}

# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(am_id_t arg_0x102299020, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = SerialActiveMessageC$AMSend$send(arg_0x102299020, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 154 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline uint8_t SerialActiveMessageC$Packet$payloadLength(message_t *msg)
#line 154
{
  return __nesc_ntoh_uint8(SerialActiveMessageC$getHeader(msg)->length.nxdata);
}

# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = SerialActiveMessageC$Packet$payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = SerialActiveMessageC$AMPacket$destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = SerialActiveMessageC$AMPacket$type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[sim_node()] = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[sim_node()] + 1) % 2;
  for (i = 0; i < 2; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[sim_node()][/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[sim_node()]].msg == (void *)0 || 
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[sim_node()][/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[sim_node()] / 8] & (1 << /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[sim_node()] % 8)) 
        {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[sim_node()] = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[sim_node()] + 1) % 2;
        }
      else {
          break;
        }
    }
  if (i >= 2) {
#line 78
    /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[sim_node()] = 2;
    }
}

#line 174
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend(void )
#line 174
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$nextPacket();
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[sim_node()] < 2) {
      error_t nextErr;
      message_t *nextMsg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[sim_node()][/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[sim_node()]].msg;
      am_id_t nextId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(nextMsg);
      uint8_t len = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$payloadLength(nextMsg);

#line 182
      nextErr = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$postTask();
        }
    }
}

#line 163
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[sim_node()][last].msg = (void *)0;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend();
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(last, msg, err);
}

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask(void )
#line 169
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[sim_node()], /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[sim_node()][/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[sim_node()]].msg, FAIL);
}

#line 126
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 2 / 8 + 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[sim_node()][i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[sim_node()][i] & mask) {
                  last = i * 8 + j;
                  msg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[sim_node()][last].msg;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[sim_node()][last].msg = (void *)0;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[sim_node()][i] &= ~mask;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline bool /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$empty(void )
#line 53
{
  return /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size[sim_node()] == 0;
}

# 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static bool UARTDebugSenderP$SendQueue$empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
#line 81
inline static UARTDebugSenderP$SendQueue$t  UARTDebugSenderP$SendQueue$dequeue(void ){
#line 81
  nx_struct message_t *__nesc_result;
#line 81

#line 81
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(1U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setType(message_t * amsg, am_id_t t){
#line 162
  SerialActiveMessageC$AMPacket$setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 103
  SerialActiveMessageC$AMPacket$setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setDestination(msg, dest);
  /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setType(msg, 114);
  return /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$send(msg, len);
}

# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t UARTDebugSenderP$UARTSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$head(void )
#line 65
{
  return /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue[sim_node()][/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$head[sim_node()]];
}

# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static UARTDebugSenderP$SendQueue$t  UARTDebugSenderP$SendQueue$head(void ){
#line 73
  nx_struct message_t *__nesc_result;
#line 73

#line 73
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 36 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/UARTDebugSenderP.nc"
static inline void UARTDebugSenderP$sendTask$runTask(void )
#line 36
{
  if (UARTDebugSenderP$sending[sim_node()]) {
      return;
    }
  else {
#line 39
    if (UARTDebugSenderP$SendQueue$empty()) {
        return;
      }
    else 
#line 41
      {
        message_t *smsg = UARTDebugSenderP$SendQueue$head();
        error_t eval = UARTDebugSenderP$UARTSend$send(AM_BROADCAST_ADDR, smsg, UARTDebugSenderP$len[sim_node()]);

#line 44
        if (eval == SUCCESS) {
            UARTDebugSenderP$sending[sim_node()] = TRUE;
            return;
          }
        else 
#line 47
          {

            UARTDebugSenderP$statSendFail[sim_node()]++;
            UARTDebugSenderP$SendQueue$dequeue();
            UARTDebugSenderP$MessagePool$put(smsg);
            if (!UARTDebugSenderP$SendQueue$empty()) {
              UARTDebugSenderP$sendTask$postTask();
              }
          }
      }
    }
}

# 223 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static void SimSchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x101569ab0){
#line 75
  switch (arg_0x101569ab0) {
#line 75
    case TossimPacketModelC$startDoneTask:
#line 75
      TossimPacketModelC$startDoneTask$runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC$stopDoneTask:
#line 75
      TossimPacketModelC$stopDoneTask$runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC$sendDoneTask:
#line 75
      TossimPacketModelC$sendDoneTask$runTask();
#line 75
      break;
#line 75
    case MultihopOscilloscopeC$uartSendTask:
#line 75
      MultihopOscilloscopeC$uartSendTask$runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 75
      break;
#line 75
    case /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$senseResult:
#line 75
      /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$senseResult$runTask();
#line 75
      break;
#line 75
    case /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask:
#line 75
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask();
#line 75
      break;
#line 75
    case /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask:
#line 75
      /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$runTask();
#line 75
      break;
#line 75
    case /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask:
#line 75
      /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$runTask();
#line 75
      break;
#line 75
    case SerialActiveMessageC$startDone:
#line 75
      SerialActiveMessageC$startDone$runTask();
#line 75
      break;
#line 75
    case SerialActiveMessageC$stopDone:
#line 75
      SerialActiveMessageC$stopDone$runTask();
#line 75
      break;
#line 75
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask:
#line 75
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask();
#line 75
      break;
#line 75
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask:
#line 75
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask();
#line 75
      break;
#line 75
    case UARTDebugSenderP$sendTask:
#line 75
      UARTDebugSenderP$sendTask$runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SimSchedulerBasicP$TaskBasic$default$runTask(arg_0x101569ab0);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 158 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline void SerialActiveMessageC$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 158
{
  __nesc_hton_uint8(SerialActiveMessageC$getHeader(msg)->length.nxdata, len);
}

# 94 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 94
  SerialActiveMessageC$Packet$setPayloadLength(msg, len);
#line 94
}
#line 94
# 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline bool /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$empty(void )
#line 53
{
  return /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size[sim_node()] == 0;
}

# 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static bool MultihopOscilloscopeC$UARTQueue$empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$head(void )
#line 65
{
  return /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue[sim_node()][/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$head[sim_node()]];
}

#line 85
static inline /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$dequeue(void )
#line 85
{
  /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t t = /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$head();

#line 87
  sim_log_debug(335U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size[sim_node()]);
  if (!/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$empty()) {
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$head[sim_node()]++;
      if (/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$head[sim_node()] == 10) {
#line 90
        /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$head[sim_node()] = 0;
        }
#line 91
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size[sim_node()]--;
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$printQueue();
    }
  return t;
}

# 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static MultihopOscilloscopeC$UARTQueue$t  MultihopOscilloscopeC$UARTQueue$dequeue(void ){
#line 81
  nx_struct message_t *__nesc_result;
#line 81

#line 81
  __nesc_result = /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 94 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 94
  TossimActiveMessageC$Packet$setPayloadLength(msg, len);
#line 94
}
#line 94
# 147 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = TossimActiveMessageC$AMPacket$type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
#line 78
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$AMPacket$destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x102299020, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = TossimActiveMessageC$AMSend$send(arg_0x102299020, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 35 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/PacketEnergyEstimatorP.nc"
static inline void PacketEnergyEstimatorP$Energy$send_busy(int dest, uint8_t len, int state)
{
  sim_log_debug(167U, "ENERGY_HANDLER", "%lld \t RADIO_STATE \t SEND_MESSAGE \t ERROR \t BUSY \t DEST:%d \t SIZE:%d\n", sim_time(), dest, len);
}

# 5 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/PacketEnergyEstimator.nc"
inline static void TossimPacketModelC$Energy$send_busy(int arg_0x101a00888, uint8_t arg_0x101a00b38, int arg_0x101a00da0){
#line 5
  PacketEnergyEstimatorP$Energy$send_busy(arg_0x101a00888, arg_0x101a00b38, arg_0x101a00da0);
#line 5
}
#line 5
# 303 "/opt/local/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 303
{
#line 303
  return __nesc_ntoh_uint8(source);
}

# 30 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/PacketEnergyEstimatorP.nc"
static inline void PacketEnergyEstimatorP$Energy$send_done(int dest, uint8_t len, sim_time_t state)
{
  sim_log_debug(166U, "ENERGY_HANDLER", "%lld \t RADIO_STATE \t SEND_MESSAGE \t OFF \t DEST:%d \t SIZE:%d\n", state + sim_time(), dest, len);
}

# 4 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/PacketEnergyEstimator.nc"
inline static void TossimPacketModelC$Energy$send_done(int arg_0x101a01930, uint8_t arg_0x101a01be0, sim_time_t arg_0x101a00020){
#line 4
  PacketEnergyEstimatorP$Energy$send_done(arg_0x101a01930, arg_0x101a01be0, arg_0x101a00020);
#line 4
}
#line 4
# 483 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg)
#line 483
{
  free(msg);
}

# 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static bool CpmModelC$Model$shouldAck(message_t *msg){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = TossimPacketModelC$GainRadioModel$shouldAck(msg);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 85 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC$Packet$receive(message_t *msg){
#line 85
  TossimActiveMessageC$Model$receive(msg);
#line 85
}
#line 85
# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t TossimPacketModelC$AMPacket$destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$AMPacket$destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/PacketEnergyEstimatorP.nc"
static inline void PacketEnergyEstimatorP$Energy$recv_done(int tome)
{
  if (sim_node() == tome || tome == 65535) {
    sim_log_debug(169U, "ENERGY_HANDLER", "%lld \t RADIO_STATE \t RECV_MESSAGE \t DONE \t DEST:%d\n", sim_time(), tome);
    }
}

# 6 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/PacketEnergyEstimator.nc"
inline static void TossimPacketModelC$Energy$recv_done(int arg_0x1019fe638){
#line 6
  PacketEnergyEstimatorP$Energy$recv_done(arg_0x1019fe638);
#line 6
}
#line 6
# 327 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$GainRadioModel$receive(message_t *msg)
#line 327
{
  if (TossimPacketModelC$running[sim_node()] && !TossimPacketModelC$transmitting[sim_node()]) {

      TossimPacketModelC$Energy$recv_done(TossimPacketModelC$AMPacket$destination(msg));

      TossimPacketModelC$Packet$receive(msg);
    }
}

# 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC$Model$receive(message_t *msg){
#line 60
  TossimPacketModelC$GainRadioModel$receive(msg);
#line 60
}
#line 60
# 260 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg)
#line 260
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 263
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return CpmModelC$shouldReceive(msg->power - noise);
}

#line 296
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt)
#line 296
{
  CpmModelC$receive_message_t *mine = (CpmModelC$receive_message_t *)evt->data;
  CpmModelC$receive_message_t *predecessor = (void *)0;
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

  sim_log_debug(144U, "CpmModelC", "Handling reception event @ %s.\n", sim_time_string());
  while (list != (void *)0) {
      if (list->next == mine) {
          predecessor = list;
        }
      list = list->next;
    }
  if (predecessor) {
      predecessor->next = mine->next;
    }
  else {
#line 311
    if (mine == CpmModelC$outstandingReceptionHead[sim_node()]) {
        CpmModelC$outstandingReceptionHead[sim_node()] = mine->next;
      }
    else {
        sim_log_error(145U, "CpmModelC", "Incoming packet list structure is corrupted: entry is not the head and no entry points to it.\n");
      }
    }
#line 317
  sim_log_debug(146U, "CpmModelC,SNRLoss", "Packet from %i to %i\n", (int )mine->source, (int )sim_node());
  if (!CpmModelC$checkReceive(mine)) {
      sim_log_debug(147U, "CpmModelC,SNRLoss", " - lost packet from %i as SNR was too low.\n", (int )mine->source);
      mine->lost = 1;
    }
  if (! mine->lost) {



      tossim_metadata_t *meta = (tossim_metadata_t *)& mine->msg->metadata;

#line 327
      __nesc_hton_int8(meta->strength.nxdata, mine->strength);

      sim_log_debug_clear(148U, "CpmModelC,SNRLoss", "  -signaling reception\n");
      CpmModelC$Model$receive(mine->msg);
      if (mine->ack) {
          sim_log_debug_clear(149U, "CpmModelC", " acknowledgment requested, ");
        }
      else {
          sim_log_debug_clear(150U, "CpmModelC", " no acknowledgment requested.\n");
        }

      if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
          sim_log_debug_clear(151U, "CpmModelC", " scheduling ack.\n");
          CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
        }
      else {
          CpmModelC$free_receive_message(mine);
        }

      CpmModelC$receiving[sim_node()] = 0;
    }
  else {
      if (RandomUniform() < 0.001) {
          sim_log_debug(152U, "CpmModelC,SNRLoss", "Packet was technically lost, but TOSSIM introduces an ack false positive rate.\n");
          if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
              sim_log_debug_clear(153U, "CpmModelC", " scheduling ack.\n");
              CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
            }
          else {
              CpmModelC$free_receive_message(mine);
            }
        }
      else {
          CpmModelC$free_receive_message(mine);
        }
      CpmModelC$receiving[sim_node()] = 0;
      sim_log_debug_clear(154U, "CpmModelC,SNRLoss", "  -packet was lost.\n");
    }
}

#line 467
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg)
#line 467
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 469
  evt->mote = sim_node();
  evt->time = endTime;
  evt->handle = CpmModelC$sim_gain_receive_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 1;
  evt->data = msg;
  return evt;
}

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void )
#line 479
{
  return (CpmModelC$receive_message_t *)malloc(sizeof(CpmModelC$receive_message_t ));
}

#line 369
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower)
#line 369
{
  sim_event_t *evt;
  CpmModelC$receive_message_t *list;
  CpmModelC$receive_message_t *rcv = CpmModelC$allocate_receive_message();
  double noiseStr = CpmModelC$packetNoise(rcv);

#line 374
  rcv->source = source;
  rcv->start = sim_time();
  rcv->end = endTime;
  rcv->power = power;
  rcv->reversePower = reversePower;




  rcv->strength = (int8_t )floor(10.0 * log(pow(10.0, power / 10.0) + pow(10.0, noiseStr / 10.0)) / log(10.0));
  rcv->msg = msg;
  rcv->lost = 0;
  rcv->ack = receive;





  if (!sim_mote_is_on(sim_node())) {
      sim_log_debug(155U, "CpmModelC", "Lost packet from %i due to %i being off\n", source, sim_node());
      rcv->lost = 1;
    }
  else {
#line 396
    if (!CpmModelC$shouldReceive(power - noiseStr)) {
        sim_log_debug(156U, "CpmModelC,SNRLoss", "Lost packet from %i to %i due to SNR being too low (%i)\n", source, sim_node(), (int )(power - noiseStr));
        rcv->lost = 1;
      }
    else {
#line 400
      if (CpmModelC$receiving[sim_node()]) {
          sim_log_debug(157U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-reception\n", source, sim_node());
          rcv->lost = 1;
        }
      else {
#line 404
        if (CpmModelC$transmitting[sim_node()] && rcv->start < CpmModelC$transmissionEndTime[sim_node()] && CpmModelC$transmissionEndTime[sim_node()] <= rcv->end) {
            sim_log_debug(158U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-transmission, transmissionEndTime %llu\n", source, sim_node(), CpmModelC$transmissionEndTime[sim_node()]);
            rcv->lost = 1;
          }
        else {
            CpmModelC$receiving[sim_node()] = 1;
          }
        }
      }
    }
#line 412
  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      if (!CpmModelC$shouldReceive(list->power - rcv->power)) {
          sim_log_debug(159U, "Gain,SNRLoss", "%llu \t LOST_PACKET from %i with signal %lf as am receiving a packet from %i with signal %lf\n", sim_time(), list->source, list->power, source, rcv->power);
          list->lost = 1;
        }
      list = list->next;
    }

  rcv->next = CpmModelC$outstandingReceptionHead[sim_node()];
  CpmModelC$outstandingReceptionHead[sim_node()] = rcv;
  evt = CpmModelC$allocate_receive_event(endTime, rcv);
  sim_queue_insert(evt);
}


static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower)
#line 428
{
  int prevNode = sim_node();

#line 430
  sim_log_debug(160U, "CpmModelC", "Enqueing reception event for %i at %llu with power %lf.\n", dest, endTime, power);
  sim_set_node(dest);
  CpmModelC$enqueue_receive_event(prevNode, endTime, msg, receive, power, reversePower);
  sim_set_node(prevNode);
}

static inline void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower)
#line 436
{
  CpmModelC$receive_message_t *list;
  gain_entry_t *neighborEntry = sim_gain_first(sim_node());

#line 439
  CpmModelC$requestAck[sim_node()] = ack;
  CpmModelC$outgoing[sim_node()] = msg;
  CpmModelC$transmissionEndTime[sim_node()] = endTime;
  sim_log_debug(161U, "CpmModelC", "Node %i transmitting to %i, finishes at %llu.\n", sim_node(), dest, endTime);

  while (neighborEntry != (void *)0) {
      int other = neighborEntry->mote;

#line 446
      CpmModelC$sim_gain_put(other, msg, endTime, ack, power + sim_gain_value(sim_node(), other), reversePower + sim_gain_value(other, sim_node()));
      neighborEntry = sim_gain_next(neighborEntry);
    }

  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      list->lost = 1;
      sim_log_debug(162U, "CpmModelC,SNRLoss", "Lost packet from %i because %i has outstanding reception, startTime %llu endTime %llu\n", list->source, sim_node(), list->start, list->end);
      list = list->next;
    }
}

# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC$GainRadioModel$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double gain, double reverseGain){
#line 48
  CpmModelC$Model$putOnAirTo(dest, msg, ack, endTime, gain, reverseGain);
#line 48
}
#line 48
# 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/PacketEnergyEstimatorP.nc"
static inline void PacketEnergyEstimatorP$Energy$send_start(int dest, uint8_t len, int dbpower)
{
  sim_log_debug(168U, "ENERGY_HANDLER", "%lld \t RADIO_STATE \t SEND_MESSAGE \t ON \t DEST:%d \t SIZE:%d \t dBPOWER:%d\n", sim_time(), dest, len, dbpower);
}

# 3 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/PacketEnergyEstimator.nc"
inline static void TossimPacketModelC$Energy$send_start(int arg_0x1019d9b48, uint8_t arg_0x1019d9df8, int arg_0x101a010c8){
#line 3
  PacketEnergyEstimatorP$Energy$send_start(arg_0x1019d9b48, arg_0x1019d9df8, arg_0x101a010c8);
#line 3
}
#line 3
# 316 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt)
#line 316
{
  message_t *rval = TossimPacketModelC$sending[sim_node()];

#line 318
  TossimPacketModelC$sending[sim_node()] = (void *)0;
  TossimPacketModelC$transmitting[sim_node()] = FALSE;
  sim_log_debug(136U, "TossimPacketModelC", "PACKET: Signaling send done at %llu.\n", sim_time());



  TossimPacketModelC$Packet$sendDone(rval, TossimPacketModelC$running[sim_node()] ? SUCCESS : EOFF);
}

#line 279
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt)
#line 279
{
  sim_time_t duration;
  tossim_metadata_t *metadata = TossimPacketModelC$getMetadata(TossimPacketModelC$sending[sim_node()]);


  duration = 8 * TossimPacketModelC$sendingLength[sim_node()];
  duration /= sim_csma_bits_per_symbol();
  duration += sim_csma_preamble_length();

  if (__nesc_ntoh_uint8(metadata->ack.nxdata)) {
      duration += sim_csma_ack_time();
    }
  duration *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();

  evt->time += duration;
  evt->handle = TossimPacketModelC$send_transmit_done;

  sim_log_debug(134U, "TossimPacketModelC", "PACKET: Broadcasting packet to everyone.\n");


  TossimPacketModelC$Energy$send_start(TossimPacketModelC$destNode[sim_node()], TossimPacketModelC$sendingLength[sim_node()], __nesc_ntoh_int8(metadata->strength.nxdata));


  TossimPacketModelC$GainRadioModel$putOnAirTo(TossimPacketModelC$destNode[sim_node()], TossimPacketModelC$sending[sim_node()], __nesc_ntoh_uint8(metadata->ack.nxdata), evt->time, 0.0, 0.0);
  __nesc_hton_uint8(metadata->ack.nxdata, 0);

  evt->time += sim_csma_rxtx_delay() * (sim_ticks_per_sec() / sim_csma_symbols_per_sec());

  sim_log_debug(135U, "TossimPacketModelC", "PACKET: Send done at %llu.\n", evt->time);


  TossimPacketModelC$Energy$send_done(TossimPacketModelC$destNode[sim_node()], TossimPacketModelC$sendingLength[sim_node()], duration);


  sim_queue_insert(evt);
}

# 459 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC$Model$setPendingTransmission(void )
#line 459
{
  CpmModelC$transmitting[sim_node()] = TRUE;
  sim_log_debug(163U, "CpmModelC", "setPendingTransmission: transmitting %i @ %s\n", CpmModelC$transmitting[sim_node()], sim_time_string());
}

# 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC$GainRadioModel$setPendingTransmission(void ){
#line 57
  CpmModelC$Model$setPendingTransmission();
#line 57
}
#line 57
# 211 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$Model$clearChannel(void )
#line 211
{
  sim_log_debug(142U, "CpmModelC", "Checking clear channel @ %s: %f <= %f \n", sim_time_string(), (double )CpmModelC$packetNoise((void *)0), CpmModelC$clearThreshold[sim_node()]);
  return CpmModelC$packetNoise((void *)0) < CpmModelC$clearThreshold[sim_node()];
}

# 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static bool TossimPacketModelC$GainRadioModel$clearChannel(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = CpmModelC$Model$clearChannel();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 232 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt)
#line 232
{
  TossimPacketModelC$backoffCount[sim_node()]++;
  if (TossimPacketModelC$GainRadioModel$clearChannel()) {
      TossimPacketModelC$neededFreeSamples[sim_node()]--;
    }
  else {
      TossimPacketModelC$neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
    }
  if (TossimPacketModelC$neededFreeSamples[sim_node()] == 0) {
      sim_time_t delay;

#line 242
      delay = sim_csma_rxtx_delay();
      delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
      evt->time += delay;
      TossimPacketModelC$transmitting[sim_node()] = TRUE;
      TossimPacketModelC$GainRadioModel$setPendingTransmission();
      evt->handle = TossimPacketModelC$send_transmit;
      sim_queue_insert(evt);
    }
  else {
#line 250
    if (sim_csma_max_iterations() == 0 || 
    TossimPacketModelC$backoffCount[sim_node()] <= sim_csma_max_iterations()) {
        sim_time_t backoff = sim_random();
        sim_time_t modulo = sim_csma_high() - sim_csma_low();

#line 254
        modulo *= pow(sim_csma_exponent_base(), TossimPacketModelC$backoffCount[sim_node()]);
        backoff %= modulo;

        backoff += sim_csma_init_low();
        backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
        evt->time += backoff;
        sim_queue_insert(evt);
      }
    else {
        message_t *rval = TossimPacketModelC$sending[sim_node()];

#line 264
        TossimPacketModelC$sending[sim_node()] = (void *)0;
        sim_log_debug(133U, "TossimPacketModelC", "PACKET: Failed to send packet due to busy channel.\n");


        TossimPacketModelC$Energy$send_busy(TossimPacketModelC$destNode[sim_node()], TossimPacketModelC$sendingLength[sim_node()], EBUSY);


        TossimPacketModelC$Packet$sendDone(rval, EBUSY);
      }
    }
}

#line 208
static inline void TossimPacketModelC$start_csma(void )
#line 208
{
  sim_time_t first_sample;




  sim_time_t backoff = sim_random();

#line 215
  backoff %= sim_csma_init_high() - sim_csma_init_low();
  backoff += sim_csma_init_low();
  backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
  sim_log_debug(132U, "TossimPacketModelC", "Starting CMSA with %lli.\n", backoff);
  first_sample = sim_time() + backoff;

  TossimPacketModelC$sendEvent[sim_node()].mote = sim_node();
  TossimPacketModelC$sendEvent[sim_node()].time = first_sample;
  TossimPacketModelC$sendEvent[sim_node()].force = 0;
  TossimPacketModelC$sendEvent[sim_node()].cancelled = 0;

  TossimPacketModelC$sendEvent[sim_node()].handle = TossimPacketModelC$send_backoff;
  TossimPacketModelC$sendEvent[sim_node()].cleanup = sim_queue_cleanup_none;
  sim_queue_insert(&TossimPacketModelC$sendEvent[sim_node()]);
}

#line 174
static inline error_t TossimPacketModelC$Packet$send(int dest, message_t *msg, uint8_t len)
#line 174
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(128U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not initialized!\n");
      return EOFF;
    }
  if (!TossimPacketModelC$running[sim_node()]) {
      sim_log_error(129U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not running!\n");
      return EOFF;
    }

  if (TossimPacketModelC$sending[sim_node()] != (void *)0) {

      sim_log_debug(130U, "ENERGY_DEBUG", "Attempting to send a message while sending another one...\n");

      return EBUSY;
    }
  TossimPacketModelC$sendingLength[sim_node()] = len;
  TossimPacketModelC$sending[sim_node()] = msg;
  TossimPacketModelC$destNode[sim_node()] = dest;
  TossimPacketModelC$backoffCount[sim_node()] = 0;
  TossimPacketModelC$neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
  TossimPacketModelC$start_csma();


  sim_log_debug(131U, "ENERGY_DEBUG", "%lld \t CSMA_ENDED", sim_time());


  return SUCCESS;
}

# 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
inline static error_t TossimActiveMessageC$Model$send(int node, message_t *msg, uint8_t len){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = TossimPacketModelC$Packet$send(node, msg, len);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$timeInMs(void )
#line 90
{
  sim_time_t ftime = sim_time();
  int hours;
#line 92
  int minutes;
#line 92
  int seconds;
  sim_time_t secondBillionths;
  int temp_time;
  double ms_time;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }
  temp_time = (int )(secondBillionths / 10000);

  if (temp_time % 10 >= 5) {
      temp_time += 10 - temp_time % 10;
    }
  else {
      temp_time -= temp_time % 10;
    }
  ms_time = (float )(temp_time / 100.0);

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;

  ms_time += (hours * 3600 + minutes * 60 + seconds) * 1000;

  return ms_time;
}

# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] + 1) % 2;
  for (i = 0; i < 2; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] + 1) % 2;
        }
      else {
          break;
        }
    }
  if (i >= 2) {
#line 78
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = 2;
    }
}

# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$Packet$payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 148 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$PacketAcknowledgements$wasAcked(message_t *ack)
#line 148
{
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(ack);

#line 150
  return __nesc_ntoh_uint8(meta->ack.nxdata);
}

# 85 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = TossimPacketModelC$PacketAcknowledgements$wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 528 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$LinkEstimator$txNoAck(am_addr_t neighbor)
#line 528
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP$findIdx(neighbor);

#line 531
  if (nidx == LinkEstimatorP$INVALID_RVAL) {
      return FAIL;
    }

  ne = &LinkEstimatorP$NeighborTable[sim_node()][nidx];
  ne->data_total++;
  if (ne->data_total >= LinkEstimatorP$DLQ_PKT_WINDOW) {
      LinkEstimatorP$updateDETX(ne);
    }
  return SUCCESS;
}

# 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txNoAck(am_addr_t neighbor){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = LinkEstimatorP$LinkEstimator$txNoAck(neighbor);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 547 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$recomputeRoutes(void )
#line 547
{
  /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
}

# 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$recomputeRoutes(void ){
#line 83
  /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$recomputeRoutes();
#line 83
}
#line 83
# 12 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
inline static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$Energy$pin_state_flip(uint8_t port, uint8_t bit){
#line 12
  Atm128EnergyHandlerP$Energy$pin_state_flip(port, bit);
#line 12
}
#line 12
# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void )
#line 62
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 63
    atm128RegFile[sim_node()][27U] ^= 1 << 1;
#line 63
    __nesc_atomic_end(__nesc_atomic); }

  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$Energy$pin_state_flip(27U, 1);
}

# 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle();
#line 42
}
#line 42
# 99 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led1Toggle(void )
#line 99
{
  LedsP$Led1$toggle();
  sim_log_debug(176U, "LedsC", "LEDS: Led""1"" %s.\n", LedsP$Led1$get() ? "off" : "on");
#line 101
  ;
}

# 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC$Leds$led1Toggle(void ){
#line 83
  LedsP$Leds$led1Toggle();
#line 83
}
#line 83
# 282 "MultihopOscilloscopeC.nc"
inline static void MultihopOscilloscopeC$report_sent(void )
#line 282
{
#line 282
  MultihopOscilloscopeC$Leds$led1Toggle();
}

#line 254
static inline void MultihopOscilloscopeC$Send$sendDone(message_t *msg, error_t error)
#line 254
{
  if (error == SUCCESS) {
    MultihopOscilloscopeC$report_sent();
    }
  else {
#line 258
    MultihopOscilloscopeC$report_problem();
    }
  MultihopOscilloscopeC$sendbusy[sim_node()] = FALSE;
}

# 848 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline 
#line 847
void 
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$default$sendDone(uint8_t client, message_t *msg, error_t error)
#line 848
{
}

# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$sendDone(uint8_t arg_0x101f42108, message_t * msg, error_t error){
#line 100
  switch (arg_0x101f42108) {
#line 100
    case 0U:
#line 100
      MultihopOscilloscopeC$Send$sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$default$sendDone(arg_0x101f42108, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpPacket.nc"
inline static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getThl(message_t *msg){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(msg);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54









inline static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getSequenceNumber(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
#line 60
inline static am_addr_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getOrigin(message_t *msg){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(msg);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$remove(uint8_t i)
#line 100
{
  uint8_t j;

#line 102
  if (i >= /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]) {
    return;
    }
#line 104
  if (i == 0) {

      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()] = (/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()] + 1) % 4;
    }
  else 
#line 107
    {

      for (j = i; j < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]; j++) {
          memcpy(&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][(j + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()]) % 4], &/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][(j + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()] + 1) % 4], sizeof(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$ctp_packet_sig_t ));
        }
    }
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]--;
}

static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$insert(message_t *m)
#line 116
{
  uint8_t i;

#line 118
  if (/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()] == 4) {





      i = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$lookup(m);
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$remove(i % /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]);
    }

  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()] + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]) % 4].origin = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getOrigin(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()] + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]) % 4].seqno = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getSequenceNumber(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()] + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]) % 4].thl = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getThl(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()] + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]) % 4].type = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getType(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]++;
}

# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Cache.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$insert(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$t item){
#line 51
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$insert(item);
#line 51
}
#line 51
# 511 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$LinkEstimator$txAck(am_addr_t neighbor)
#line 511
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP$findIdx(neighbor);

#line 514
  if (nidx == LinkEstimatorP$INVALID_RVAL) {
      return FAIL;
    }
  ne = &LinkEstimatorP$NeighborTable[sim_node()][nidx];
  ne->data_success++;
  ne->data_total++;
  if (ne->data_total >= LinkEstimatorP$DLQ_PKT_WINDOW) {
      LinkEstimatorP$updateDETX(ne);
    }
  return SUCCESS;
}

# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txAck(am_addr_t neighbor){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LinkEstimatorP$LinkEstimator$txAck(neighbor);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 230 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$prr_estimate_from_snr(double SNR)
#line 230
{



  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 239
  sim_log_debug(143U, "CpmModelC,SNR", "SNR is %lf, PRR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 242
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 245
  return prr_hat;
}

# 127 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline bool TossimActiveMessageC$Model$shouldAck(message_t *msg)
#line 127
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(msg);

#line 129
  if (__nesc_ntoh_uint16(header->dest.nxdata) == TossimActiveMessageC$amAddress()) {
      sim_log_debug(121U, "Acks", "Received packet addressed to me so ack it\n");
      return TRUE;
    }
  return FALSE;
}

# 87 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
inline static bool TossimPacketModelC$Packet$shouldAck(message_t *msg){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = TossimActiveMessageC$Model$shouldAck(msg);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 338 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$GainRadioModel$acked(message_t *msg)
#line 338
{
  if (TossimPacketModelC$running[sim_node()]) {
      tossim_metadata_t *metadata = TossimPacketModelC$getMetadata(TossimPacketModelC$sending[sim_node()]);

#line 341
      __nesc_hton_uint8(metadata->ack.nxdata, 1);
      if (msg != TossimPacketModelC$sending[sim_node()]) {
          TossimPacketModelC$error[sim_node()] = 1;
          sim_log_debug(137U, "TossimPacketModelC", "Requested ack for 0x%x, but outgoing packet is 0x%x.\n", msg, TossimPacketModelC$sending[sim_node()]);
        }
    }
}

# 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC$Model$acked(message_t *msg){
#line 59
  TossimPacketModelC$GainRadioModel$acked(msg);
#line 59
}
#line 59
# 151 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$arr_estimate_from_snr(double SNR)
#line 151
{
  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 157
  sim_log_debug(140U, "CpmModelC,SNRLoss", "SNR is %lf, ARR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 160
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 163
  return prr_hat;
}

static inline int CpmModelC$shouldAckReceive(double snr)
#line 166
{
  double prr = CpmModelC$arr_estimate_from_snr(snr);
  double coin = RandomUniform();

#line 169
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 173
        prr = 0.0;
        }
    }
#line 175
  return (int )prr;
}

static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt)
#line 178
{






  if (
#line 184
  CpmModelC$requestAck[sim_node()] && 
  CpmModelC$outgoing[sim_node()] != (void *)0 && 
  sim_mote_is_on(sim_node())) {
      CpmModelC$receive_message_t *rcv = (CpmModelC$receive_message_t *)evt->data;
      double power = rcv->reversePower;
      double noise = CpmModelC$packetNoise(rcv);
      double snr = power - noise;

#line 191
      if (CpmModelC$shouldAckReceive(snr)) {
          CpmModelC$Model$acked(CpmModelC$outgoing[sim_node()]);
        }
    }
  CpmModelC$free_receive_message((CpmModelC$receive_message_t *)evt->data);
}

# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$senseResult$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$senseResult);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ConstantSensorC.nc"
static inline error_t /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$Read$read(void )
#line 51
{
  return /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$senseResult$postTask();
}

# 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Read.nc"
inline static error_t MultihopOscilloscopeC$Read$read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*MultihopOscilloscopeAppC.Sensor.ConstantSensorC*/ConstantSensorC$0$Read$read();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/CollectionIdP.nc"
static inline collection_id_t /*MultihopOscilloscopeAppC.CollectionSenderC.CollectionSenderP.CollectionIdP*/CollectionIdP$0$CollectionId$fetch(void )
#line 50
{
  return 147;
}

# 869 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$default$fetch(uint8_t client)
#line 869
{
  return 0;
}

# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/CollectionId.nc"
inline static collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$fetch(uint8_t arg_0x101f62318){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  switch (arg_0x101f62318) {
#line 46
    case 0U:
#line 46
      __nesc_result = /*MultihopOscilloscopeAppC.CollectionSenderC.CollectionSenderP.CollectionIdP*/CollectionIdP$0$CollectionId$fetch();
#line 46
      break;
#line 46
    default:
#line 46
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$default$fetch(arg_0x101f62318);
#line 46
      break;
#line 46
    }
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 294 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$send(uint8_t client, message_t *msg, uint8_t len)
#line 294
{
  ctp_data_header_t *hdr;
  fe_queue_entry_t *qe;

#line 297
  sim_log_debug(211U, "Forwarder", "%s: sending packet from client %hhu: %x, len %hhu\n", __FUNCTION__, client, msg, len);
  if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$ROUTING_ON)) {
#line 298
      return EOFF;
    }
#line 299
  if (len > /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$maxPayloadLength(client)) {
#line 299
      return ESIZE;
    }
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(msg, len);
  hdr = /*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg);
  __nesc_hton_uint16(hdr->origin.nxdata, TOS_NODE_ID);
  __nesc_hton_uint8(hdr->originSeqNo.nxdata, /*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno[sim_node()]++);
  __nesc_hton_uint8(hdr->type.nxdata, /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$fetch(client));
  __nesc_hton_uint8(hdr->thl.nxdata, 0);

  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[sim_node()][client] == (void *)0) {
      sim_log_debug(212U, "Forwarder", "%s: send failed as client is busy.\n", __FUNCTION__);
      return EBUSY;
    }

  qe = /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[sim_node()][client];
  qe->msg = msg;
  qe->client = client;
  qe->retries = MAX_RETRIES;
  sim_log_debug(213U, "Forwarder", "%s: queue entry for %hhu is %hhu deep\n", __FUNCTION__, client, /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size());
  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$enqueue(qe) == SUCCESS) {
      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$RADIO_ON) && !/*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SENDING)) {
          sim_log_debug(214U, "FHangBug", "%s posted sendTask.\n", __FUNCTION__);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
        }
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[sim_node()][client] = (void *)0;
      return SUCCESS;
    }
  else {
      sim_log_debug(215U, "Forwarder", "%s: send failed as packet could not be enqueued.\n", __FUNCTION__);




      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SEND_QUEUE_FULL);


      return FAIL;
    }
}

# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t MultihopOscilloscopeC$Send$send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 349 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void */*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$getPayload(uint8_t client, message_t *msg, uint8_t len)
#line 349
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(msg, len);
}

# 125 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * MultihopOscilloscopeC$Send$getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$getPayload(0U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 227 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC$Timer$fired(void )
#line 227
{
  unsigned short __nesc_temp43;
  unsigned char *__nesc_temp42;

#line 228
  if (MultihopOscilloscopeC$reading[sim_node()] == NREADINGS) {
      if (!MultihopOscilloscopeC$sendbusy[sim_node()]) {
          oscilloscope_t *o = (oscilloscope_t *)MultihopOscilloscopeC$Send$getPayload(&MultihopOscilloscopeC$sendbuf[sim_node()], sizeof(oscilloscope_t ));

#line 231
          if (o == (void *)0) {
              MultihopOscilloscopeC$fatal_problem();
              return;
            }
          memcpy(o, &MultihopOscilloscopeC$local[sim_node()], sizeof MultihopOscilloscopeC$local[sim_node()]);
          if (MultihopOscilloscopeC$Send$send(&MultihopOscilloscopeC$sendbuf[sim_node()], sizeof MultihopOscilloscopeC$local[sim_node()]) == SUCCESS) {
            MultihopOscilloscopeC$sendbusy[sim_node()] = TRUE;
            }
          else {
#line 239
            MultihopOscilloscopeC$report_problem();
            }
        }
      MultihopOscilloscopeC$reading[sim_node()] = 0;


      if (!MultihopOscilloscopeC$suppress_count_change[sim_node()]) {
        (__nesc_temp42 = MultihopOscilloscopeC$local[sim_node()].count.nxdata, __nesc_hton_uint16(__nesc_temp42, (__nesc_temp43 = __nesc_ntoh_uint16(__nesc_temp42)) + 1), __nesc_temp43);
        }
#line 247
      MultihopOscilloscopeC$suppress_count_change[sim_node()] = FALSE;
    }

  if (MultihopOscilloscopeC$Read$read() != SUCCESS) {
    MultihopOscilloscopeC$fatal_problem();
    }
}

# 194 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$decayInterval(void )
#line 194
{
  /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[sim_node()] *= 2;
  if (/*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[sim_node()] > 512000) {
      /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[sim_node()] = 512000;
    }
  /*CtpP.Router*/CtpRoutingEngineP$0$chooseAdvertiseTime();
}

# 159 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(1U, dt);
#line 73
}
#line 73
# 202 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$remainingInterval(void )
#line 202
{
  uint32_t remaining = /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[sim_node()];

#line 204
  remaining -= /*CtpP.Router*/CtpRoutingEngineP$0$t[sim_node()];
  /*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed[sim_node()] = TRUE;
  /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$startOneShot(remaining);
}

# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 437 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$fired(void )
#line 437
{
  if (/*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()] && /*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()]) {
      if (!/*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed[sim_node()]) {
          /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
          /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$postTask();
          sim_log_debug(309U, "RoutingTimer", "Beacon timer fired at %s\n", sim_time_string());
          /*CtpP.Router*/CtpRoutingEngineP$0$remainingInterval();
        }
      else {
          /*CtpP.Router*/CtpRoutingEngineP$0$decayInterval();
        }
    }
}

#line 431
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$fired(void )
#line 431
{
  if (/*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()] && /*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()]) {
      /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
    }
}

# 746 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$fired(void )
#line 746
{
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SENDING);
  sim_log_debug(235U, "FHangBug", "%s posted sendTask.\n", __FUNCTION__);
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
}

# 204 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x101e41da0){
#line 83
  switch (arg_0x101e41da0) {
#line 83
    case 0U:
#line 83
      MultihopOscilloscopeC$Timer$fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x101e41da0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t){
#line 54
  HplAtm128Timer0AsyncP$Compare$set(t);
#line 54
}
#line 54
# 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer0AsyncP$Timer0$get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 569 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void )
#line 569
{
  return (* (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] & (1 << OCR0UB)) != 0;
}

# 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$TimerAsync$compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()]) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(n);
}

# 577 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$cancel_compare(void )
#line 577
{
  sim_log_debug(206U, "HplAtm128CompareC", "Cancelling compare at 0x%p\n", HplAtm128Timer0AsyncP$compare[sim_node()]);
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$compare[sim_node()]->cancelled = 1;
      HplAtm128Timer0AsyncP$compare[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 116
static inline void HplAtm128Timer0AsyncP$notify_changed(void )
#line 116
{
  uint8_t newScale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 118
  if (newScale != AVR_CLOCK_OFF && 
  HplAtm128Timer0AsyncP$oldScale[sim_node()] == AVR_CLOCK_OFF) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_time();
    }
  HplAtm128Timer0AsyncP$oldScale[sim_node()] = newScale;

  HplAtm128Timer0AsyncP$schedule_new_compare();
}

#line 545
static inline void HplAtm128Timer0AsyncP$cancel_overflow(void )
#line 545
{
  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cancelled = 1;
      sim_log_debug(205U, "HplAtm128Timer0AsyncP", "Cancelling overflow %p.\n", HplAtm128Timer0AsyncP$overflow[sim_node()]);
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 481
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt)
#line 481
{
  if (evt->cancelled) {
      return;
    }
  else {
      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << TOIE0)) != 0) {
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << TOV0);
          sim_log_debug(202U, "HplAtm128Timer0AsyncP", "Overflow interrupt at %s\n", sim_time_string());
          INTERRUPT_16();
        }
      else {
          sim_log_debug(203U, "HplAtm128Timer0AsyncP", "Setting overflow bit at %s\n", sim_time_string());
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << TOV0;
        }
      HplAtm128Timer0AsyncP$configure_overflow(evt);
      sim_queue_insert(evt);
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void )
#line 500
{
  sim_event_t *newEvent = sim_queue_allocate_event();

  newEvent->handle = HplAtm128Timer0AsyncP$timer0_overflow_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

#line 534
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void )
#line 534
{
  sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_overflow();

#line 536
  HplAtm128Timer0AsyncP$configure_overflow(newEvent);

  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_overflow();
    }
  HplAtm128Timer0AsyncP$overflow[sim_node()] = newEvent;
  sim_queue_insert(newEvent);
}

#line 148
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t)
#line 148
{
  t *= sim_ticks_per_sec();
  t /= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  return t;
}

#line 297
static inline void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal)
#line 297
{
  uint8_t curVal = HplAtm128Timer0AsyncP$Timer0$get();

#line 299
  sim_log_debug(195U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting timer: %hhu\n", newVal);
  if (newVal == curVal) {
      return;
    }
  else {
      sim_time_t adjustment = curVal - newVal;

#line 305
      adjustment = adjustment << HplAtm128Timer0AsyncP$shiftFromScale();
      adjustment = HplAtm128Timer0AsyncP$clock_to_sim(adjustment);

      if (newVal < curVal) {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] += adjustment;
        }
      else {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] -= adjustment;
        }

      HplAtm128Timer0AsyncP$schedule_new_overflow();
      HplAtm128Timer0AsyncP$notify_changed();
    }
}

#line 187
static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt)
#line 187
{
  sim_log_debug(185U, "HplAtm128Timer0AsyncP", "Beginning compare 0x%p at %s\n", evt, sim_time_string());
  if (evt->cancelled) {
      return;
    }
  else {
      char timeStr[128];

#line 194
      sim_print_now(timeStr, 128);
      sim_log_debug(186U, "HplAtm128Timer0AsyncP", "Handling compare at 0x%p @ %s\n", evt, sim_time_string());

      if ((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0 && !((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0)) {
          sim_log_debug(187U, "HplAtm128Timer0AsyncP", "%s: CTC is set, clear timer.\n", __FUNCTION__);
          HplAtm128Timer0AsyncP$Timer0$set(0);
        }
      else {
          sim_log_debug(188U, "HplAtm128Timer0AsyncP", "%s: TCCR is 0x%hhx, %i, %i\n", __FUNCTION__, * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33], (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0), (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0));
        }

      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << OCIE0)) != 0) {
          sim_log_debug(189U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << OCF0);
          sim_log_debug(190U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          sim_log_debug(191U, "HplAtm128Timer0AsyncP", "Compare interrupt @ %s\n", timeStr);
          INTERRUPT_15();
        }
      else {
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << OCF0;
        }

      if (! evt->cancelled) {
          HplAtm128Timer0AsyncP$configure_compare(evt);
          sim_queue_insert(evt);
        }
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void )
#line 223
{
  sim_event_t *newEvent = sim_queue_allocate_event();

#line 225
  sim_log_debug(192U, "HplAtm128Timer0AsyncP", "Allocated compare at 0x%p\n", newEvent);
  newEvent->handle = HplAtm128Timer0AsyncP$timer0_compare_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

# 230 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void )
#line 230
{
}

# 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP$Timer0$overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow();
#line 70
}
#line 70
# 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void )
{
}

# 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 82
}
#line 82
# 85 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_enable_interrupt()
#line 85
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] |= 1 << 7;
}

# 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm128Timer0AsyncP$Compare$get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 149 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow();
    }
}

# 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP$Compare$fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired();
#line 58
}
#line 58
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 78
}
#line 78
# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    * (volatile uint8_t *)&atm128RegFile[sim_node()][0x35] = 1 << SE;
  }
}

# 69 "/Users/doinabucur/local/src/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 38 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$SubInit$default$init(void )
#line 38
{
  return SUCCESS;
}

# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t MotePlatformP$SubInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformP$SubInit$default$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 11 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
inline static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$Energy$pin_state_clear(uint8_t port, uint8_t bit){
#line 11
  Atm128EnergyHandlerP$Energy$pin_state_clear(port, bit);
#line 11
}
#line 11
# 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void )
#line 56
{
  atm128RegFile[sim_node()][27U] &= ~(1 << 4);

  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$Energy$pin_state_clear(27U, 4);
}

# 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 41
}
#line 41
# 69 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void )
#line 69
{
#line 69
  atm128RegFile[sim_node()][26U] &= ~(1 << 4);
}

# 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 44
}
#line 44
# 26 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void )
#line 26
{

  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x15] = 0;
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x14] = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandlerP.nc"
static inline void Atm128EnergyHandlerP$Energy$pin_state_set(uint8_t port, uint8_t bit)
{
  sim_log_debug(61U, "ENERGY_HANDLER", "%lld \t LED_STATE \t LED%d \t ON\n", sim_time(), bit);
  Atm128EnergyHandlerP$bitstate[sim_node()][bit] = 1;
}

# 10 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
inline static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$Energy$pin_state_set(uint8_t port, uint8_t bit){
#line 10
  Atm128EnergyHandlerP$Energy$pin_state_set(port, bit);
#line 10
}
#line 10
# 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void )
#line 49
{
  sim_log_debug(46U, "Pins", "Setting bit %i of port %i.\n", (int )0, (int )27U);

  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$Energy$pin_state_set(27U, 0);

  atm128RegFile[sim_node()][27U] |= 1 << 0;
}

# 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set();
#line 40
}
#line 40
# 10 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
inline static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$Energy$pin_state_set(uint8_t port, uint8_t bit){
#line 10
  Atm128EnergyHandlerP$Energy$pin_state_set(port, bit);
#line 10
}
#line 10
# 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void )
#line 49
{
  sim_log_debug(47U, "Pins", "Setting bit %i of port %i.\n", (int )1, (int )27U);

  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$Energy$pin_state_set(27U, 1);

  atm128RegFile[sim_node()][27U] |= 1 << 1;
}

# 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set();
#line 40
}
#line 40
# 10 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandler.nc"
inline static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$Energy$pin_state_set(uint8_t port, uint8_t bit){
#line 10
  Atm128EnergyHandlerP$Energy$pin_state_set(port, bit);
#line 10
}
#line 10
# 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void )
#line 49
{
  sim_log_debug(48U, "Pins", "Setting bit %i of port %i.\n", (int )2, (int )27U);

  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$Energy$pin_state_set(27U, 2);

  atm128RegFile[sim_node()][27U] |= 1 << 2;
}

# 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set();
#line 40
}
#line 40
# 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void )
#line 70
{
#line 70
  atm128RegFile[sim_node()][26U] |= 1 << 0;
}

# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput();
#line 46
}
#line 46
# 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void )
#line 70
{
#line 70
  atm128RegFile[sim_node()][26U] |= 1 << 1;
}

# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput();
#line 46
}
#line 46
# 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void )
#line 70
{
#line 70
  atm128RegFile[sim_node()][26U] |= 1 << 2;
}

# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput();
#line 46
}
#line 46
# 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    sim_log_debug(170U, "Init", "LEDS: initialized.\n");
    LedsP$Led0$makeOutput();
    LedsP$Led1$makeOutput();
    LedsP$Led2$makeOutput();
    LedsP$Led0$set();
    LedsP$Led1$set();
    LedsP$Led2$set();
  }
  return SUCCESS;
}

# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP$MoteInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP$Init$init();
#line 62
  __nesc_result = ecombine(__nesc_result, MotePlatformP$PlatformInit$init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 21 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void )
#line 21
{
  return SUCCESS;
}

# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP$MeasureClock$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void )
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP$power_init();

  return SUCCESS;
}

# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t SimMainP$PlatformInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static bool SimMainP$Scheduler$runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SimSchedulerBasicP$Scheduler$runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 84 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$Init$init(void )
#line 84
{
  sim_log_debug(123U, "TossimPacketModelC", "TossimPacketModelC: Init.init() called\n");
  TossimPacketModelC$initialized[sim_node()] = TRUE;



  TossimPacketModelC$sendEvent[sim_node()].cancelled = 1;
  return SUCCESS;
}

# 447 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$start(void )
#line 447
{
#line 447
  atm128RegFile[sim_node()][ATM128_TIMSK] |= 1 << OCIE0;
}

# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void ){
#line 65
  HplAtm128Timer0AsyncP$Compare$start();
#line 65
}
#line 65
# 364 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x)
#line 364
{
  sim_log_debug(197U, "HplAtm128Timer0AsyncP", "Setting control to be 0x%hhx\n", x.flat);
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] = x.flat;
}

# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(control);
#line 46
}
#line 46
# 561 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void )
#line 561
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] |= 1 << AS0;
}

# 32 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  return SUCCESS;
}

# 420 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP$initNeighborTable(void )
#line 420
{
  uint8_t i;

  for (i = 0; i < 10; i++) {
      LinkEstimatorP$NeighborTable[sim_node()][i].flags = 0;
    }
}











static inline error_t LinkEstimatorP$Init$init(void )
#line 438
{
  sim_log_debug(278U, "LI", "Link estimator init\n");
  LinkEstimatorP$initNeighborTable();
  return SUCCESS;
}

# 211 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Init$init(void )
#line 211
{
  int i;

#line 213
  for (i = 0; i < /*CtpP.Forwarder*/CtpForwardingEngineP$0$CLIENT_COUNT; i++) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[sim_node()][i] = /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientEntries[sim_node()] + i;
      sim_log_debug(207U, "Forwarder", "clientPtrs[%hhu] = %p\n", i, /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[sim_node()][i]);
    }
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()] = &/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsg[sim_node()];
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno[sim_node()] = 0;
  return SUCCESS;
}

# 682 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$routingTableInit(void )
#line 682
{
  /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()] = 0;
}

# 26 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/TreeRouting.h"
static __inline void routeInfoInit(route_info_t *ri)
#line 26
{
  ri->parent = INVALID_ADDR;
  ri->etx = 0;
  ri->haveHeard = 0;
  ri->congested = FALSE;
}

# 209 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$Init$init(void )
#line 209
{
  uint8_t maxLength;

#line 211
  /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()] = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()] = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP$0$parentChanges[sim_node()] = 0;
  /*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[sim_node()] = 0;
  routeInfoInit(&/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()]);
  /*CtpP.Router*/CtpRoutingEngineP$0$routingTableInit();
  /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()] = /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$getPayload(&/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer[sim_node()], /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$maxPayloadLength());
  maxLength = /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$maxPayloadLength();
  sim_log_debug(296U, "TreeRoutingCtl", "TreeRouting initialized. (used payload:%d max payload:%d!\n", sizeof /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()], maxLength);

  return SUCCESS;
}

# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/PoolP.nc"
static inline error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Init$init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[sim_node()][i] = &/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool[sim_node()][i];
    }
  /*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()] = 12;
  /*CtpP.MessagePoolP.PoolP*/PoolP$0$index[sim_node()] = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Init$init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[sim_node()][i] = &/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool[sim_node()][i];
    }
  /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()] = 12;
  /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[sim_node()] = 0;
  return SUCCESS;
}

# 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static inline error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Init$init(void )
#line 64
{
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()] = 0;
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()] = 0;
  return SUCCESS;
}

# 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC$Init$init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC$seed[sim_node()] = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/PoolP.nc"
static inline error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Init$init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 10; i++) {
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$queue[sim_node()][i] = &/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool[sim_node()][i];
    }
  /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free[sim_node()] = 10;
  /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index[sim_node()] = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Init$init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 20; i++) {
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$queue[sim_node()][i] = &/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool[sim_node()][i];
    }
  /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free[sim_node()] = 20;
  /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index[sim_node()] = 0;
  return SUCCESS;
}

# 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t SimMainP$SoftwareInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Init$init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CtpP.MessagePoolP.PoolP*/PoolP$0$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CtpP.Router*/CtpRoutingEngineP$0$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CtpP.Forwarder*/CtpForwardingEngineP$0$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, LinkEstimatorP$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, TossimPacketModelC$Init$init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 25 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/UARTDebugSenderP.nc"
static inline void UARTDebugSenderP$Boot$booted(void )
#line 25
{
  UARTDebugSenderP$sending[sim_node()] = FALSE;
  UARTDebugSenderP$len[sim_node()] = sizeof(CollectionDebugMsg );
  UARTDebugSenderP$statSendFail[sim_node()] = 0;
  UARTDebugSenderP$statLogReceived[sim_node()] = 0;
  UARTDebugSenderP$statEnqueueFail[sim_node()] = 0;
  UARTDebugSenderP$statSendDoneOk[sim_node()] = 0;
  UARTDebugSenderP$statSendDoneFail[sim_node()] = 0;
  UARTDebugSenderP$statSendDoneBug[sim_node()] = 0;
}

# 428 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$StdControl$start(void )
#line 428
{
  sim_log_debug(277U, "LI", "Link estimator start\n");
  return SUCCESS;
}

# 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(2U, dt);
#line 64
}
#line 64
# 68 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$address(void ){
#line 68
  unsigned short __nesc_result;
#line 68

#line 68
  __nesc_result = TossimActiveMessageC$AMPacket$address();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 224 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$StdControl$start(void )
#line 224
{
  /*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr[sim_node()] = /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$address();

  if (!/*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()]) {
      /*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()] = TRUE;
      /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval();
      /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$startPeriodic(BEACON_INTERVAL);
      sim_log_debug(297U, "TreeRoutingCtl", "%s running: %d radioOn: %d\n", __FUNCTION__, /*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()], /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()]);
    }
  return SUCCESS;
}

# 222 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$StdControl$start(void )
#line 222
{
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$ROUTING_ON);
  return SUCCESS;
}

# 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t MultihopOscilloscopeC$RoutingControl$start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$StdControl$start();
#line 95
  __nesc_result = ecombine(__nesc_result, /*CtpP.Router*/CtpRoutingEngineP$0$StdControl$start());
#line 95
  __nesc_result = ecombine(__nesc_result, LinkEstimatorP$StdControl$start());
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 13 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/PacketEnergyEstimatorP.nc"
static inline void PacketEnergyEstimatorP$Energy$poweron_start(void )
{
  sim_log_debug(164U, "ENERGY_HANDLER", "%lld \t RADIO_STATE \t ON\n", sim_time());
}

# 8 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/PacketEnergyEstimator.nc"
inline static void TossimPacketModelC$Energy$poweron_start(void ){
#line 8
  PacketEnergyEstimatorP$Energy$poweron_start();
#line 8
}
#line 8
# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t TossimPacketModelC$startDoneTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(TossimPacketModelC$startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$Control$start(void )
#line 104
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(124U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called before initialization!\n");
      return FAIL;
    }
  sim_log_debug(125U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called.\n");
  TossimPacketModelC$startDoneTask$postTask();


  TossimPacketModelC$Energy$poweron_start();


  return SUCCESS;
}

# 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t MultihopOscilloscopeC$RadioControl$start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = TossimPacketModelC$Control$start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 77 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC$Boot$booted(void )
#line 77
{
  __nesc_hton_uint16(MultihopOscilloscopeC$local[sim_node()].interval.nxdata, DEFAULT_INTERVAL);
  __nesc_hton_uint16(MultihopOscilloscopeC$local[sim_node()].id.nxdata, TOS_NODE_ID);
  __nesc_hton_uint16(MultihopOscilloscopeC$local[sim_node()].version.nxdata, 0);


  if (MultihopOscilloscopeC$RadioControl$start() != SUCCESS) {
    MultihopOscilloscopeC$fatal_problem();
    }
  if (MultihopOscilloscopeC$RoutingControl$start() != SUCCESS) {
    MultihopOscilloscopeC$fatal_problem();
    }
}

# 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void SimMainP$Boot$booted(void ){
#line 60
  MultihopOscilloscopeC$Boot$booted();
#line 60
  UARTDebugSenderP$Boot$booted();
#line 60
}
#line 60
# 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP$SimMote$getEuid(void )
#line 55
{
  return SimMoteP$euid[sim_node()];
}

#line 58
static inline void SimMoteP$SimMote$setEuid(long long int e)
#line 58
{
  SimMoteP$euid[sim_node()] = e;
}







static inline int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size)
#line 68
{
  return __nesc_nido_resolve(sim_node(), name, (uintptr_t *)addr, (size_t *)size);
}

#line 85
static inline void SimMoteP$SimMote$turnOff(void )
#line 85
{
  SimMoteP$isOn[sim_node()] = FALSE;
}

#line 157
static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e)
#line 157
{
  char buf[128];

#line 159
  sim_print_now(buf, 128);

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)(void *)0;
  sim_log_debug(117U, "SimMoteP", "Turning on mote %i at time %s.\n", (int )sim_node(), buf);
  SimMoteP$SimMote$turnOn();
}

# 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
  void sim_queue_init()
#line 46
{
  init_heap(&eventHeap);
}

  void sim_queue_insert(sim_event_t *event)
#line 50
{
  sim_log_debug(0U, "Queue", "Inserting 0x%p\n", event);
  heap_insert(&eventHeap, event, event->time);
}

# 246 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_debug(uint16_t id, char *string, const char *format, ...)
#line 246
{
  va_list args;
  int i;

#line 249
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 254
      __builtin_va_start(args, format);
      fprintf(file, "DEBUG (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

#line 84
static void fillInOutput(int id, char *name)
#line 84
{
  char *termination = name;
  char *namePos = name;
  int count = 0;
  char *newName = (char *)malloc(strlen(name) + 1);

#line 89
  memset(newName, 0, strlen(name) + 1);

  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          count += channel->numOutputs;
        }

      namePos = termination + 1;
    }

  termination = name;
  namePos = name;


  outputs[id].files = (FILE **)malloc(sizeof(FILE *) * count);
  outputs[id].num = 0;


  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          int i;
#line 137
          int j;

#line 138
          for (i = 0; i < channel->numOutputs; i++) {
              int duplicate = 0;
              int outputCount = outputs[id].num;


              for (j = 0; j < outputCount; j++) {
                  if (fileno(outputs[id].files[j]) == fileno(channel->outputs[i])) {
                      duplicate = 1;
                      j = outputCount;
                    }
                }
              if (!duplicate) {
                  outputs[id].files[outputCount] = channel->outputs[i];
                  outputs[id].num++;
                }
            }
        }
      namePos = termination + 1;
    }
}

# 121 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  unsigned long sim_node()
#line 121
{
  return current_node;
}

# 197 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/heap.c"
static void up_heap(heap_t *heap, int findex)
#line 197
{
  int parent_index;

#line 199
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 158
static void swap(node_t *first, node_t *second)
#line 158
{
  long long int key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
  sim_event_t *sim_queue_pop()
#line 55
{
  long long int key;

#line 57
  return (sim_event_t *)heap_pop_min_data(&eventHeap, &key);
}

# 114 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/heap.c"
static void *heap_pop_min_data(heap_t *heap, long long int *key)
#line 114
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 117
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 171
static void down_heap(heap_t *heap, int findex)
#line 171
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long int left_key = ((node_t *)heap->data)[left_index].key;
      long long int right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 185
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long int left_key = ((node_t *)heap->data)[left_index].key;

#line 190
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
  bool sim_queue_is_empty()
#line 60
{
  return heap_is_empty(&eventHeap);
}

  long long int sim_queue_peek_time()
#line 64
{
  if (heap_is_empty(&eventHeap)) {
      return -1;
    }
  else {
      return heap_get_min_key(&eventHeap);
    }
}


  void sim_queue_cleanup_none(sim_event_t *event)
#line 74
{
  sim_log_debug(1U, "Queue", "cleanup_none: 0x%p\n", event);
}


  void sim_queue_cleanup_event(sim_event_t *event)
#line 79
{
  sim_log_debug(2U, "Queue", "cleanup_event: 0x%p\n", event);
  free(event);
}

  void sim_queue_cleanup_data(sim_event_t *event)
#line 84
{
  sim_log_debug(3U, "Queue", "cleanup_data: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
}

  void sim_queue_cleanup_total(sim_event_t *event)
#line 90
{
  sim_log_debug(4U, "Queue", "cleanup_total: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
  free(event);
}

# 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  void sim_init()
#line 57
{
  sim_queue_init();
  sim_log_init();
  sim_log_commit_change();
  sim_noise_init();

  {
    struct timeval tv;

#line 65
    gettimeofday(&tv, (void *)0);





    if (tv.tv_usec != 0) {
        sim_random_seed(tv.tv_usec);
      }
    else {
        sim_random_seed(tv.tv_sec);
      }
  }
}

# 234 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_commit_change()
#line 234
{
  int i;

#line 236
  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      if (outputs[i].files != (void *)0) {
          outputs[i].num = 0;
          free(outputs[i].files);
          outputs[i].files = (void *)0;
        }
    }
}

# 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_noise.c"
  void sim_noise_init()
{
  int j;



  for (j = 0; j < 1000; j++) {
      noiseData[j].noiseTable = create_hashtable(NOISE_HASHTABLE_SIZE, sim_noise_hash, sim_noise_eq);
      noiseData[j].noiseGenTime = 0;
      noiseData[j].noiseTrace = (char *)malloc(sizeof(char ) * NOISE_MIN_TRACE);
      noiseData[j].noiseTraceLen = NOISE_MIN_TRACE;
      noiseData[j].noiseTraceIndex = 0;
    }
}

# 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  void sim_random_seed(int seed)
#line 102
{

  if (seed == 0) {
      seed = 1;
    }
  sim_seed = seed;
}

#line 80
  void sim_end()
#line 80
{
  sim_queue_init();
}



  int sim_random()
#line 86
{
  uint32_t mlcg;
#line 87
  uint32_t p;
#line 87
  uint32_t q;
  uint64_t tmpseed;

#line 89
  tmpseed = (uint64_t )33614U * (uint64_t )sim_seed;
  q = tmpseed;
  q = q >> 1;
  p = tmpseed >> 32;
  mlcg = p + q;
  if (mlcg & 0x80000000) {
      mlcg = mlcg & 0x7FFFFFFF;
      mlcg++;
    }
  sim_seed = mlcg;
  return mlcg;
}









  sim_time_t sim_time()
#line 110
{
  return sim_ticks;
}

#line 113
  void sim_set_time(sim_time_t t)
#line 113
{
  sim_ticks = t;
}

  sim_time_t sim_ticks_per_sec()
#line 117
{
  return 10000000000ULL;
}




  void sim_set_node(unsigned long node)
#line 124
{
  current_node = node;
  TOS_NODE_ID = node;
}

  bool sim_run_next_event()
#line 129
{
  bool result = FALSE;

#line 131
  if (!sim_queue_is_empty()) {
      sim_event_t *event = sim_queue_pop();

#line 133
      sim_set_time(event->time);
      sim_set_node(event->mote);



      sim_log_debug(5U, "Tossim", "CORE: popping event 0x%p for %i at %llu with handler %p... ", event, sim_node(), sim_time(), event->handle);
      if ((sim_mote_is_on(event->mote) || event->force) && 
      event->handle != (void *)0) {
          result = TRUE;
          sim_log_debug_clear(6U, "Tossim", " mote is on (or forced event), run it.\n");
          event->handle(event);
        }
      else {
          sim_log_debug_clear(7U, "Tossim", "\n");
        }
      if (event->cleanup != (void *)0) {
          event->cleanup(event);
        }
    }

  return result;
}

# 134 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  bool sim_mote_is_on(int mote)
#line 134
{
  bool result;
  int tmp = sim_node();

#line 137
  sim_set_node(mote);
  result = SimMoteP$SimMote$isOn();
  sim_set_node(tmp);
  return result;
}

# 276 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...)
#line 276
{
  va_list args;
  int i;

#line 279
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 284
      __builtin_va_start(args, format);
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 156 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  int sim_print_time(char *buf, int len, sim_time_t ftime)
#line 156
{
  int hours;
  int minutes;
  int seconds;
  sim_time_t secondBillionths;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;
  buf[len - 1] = 0;
  return snprintf(buf, len - 1, "%i:%i:%i.%09llu", hours, minutes, seconds, secondBillionths);
}

  int sim_print_now(char *buf, int len)
#line 179
{
  return sim_print_time(buf, len, sim_time());
}


  char *sim_time_string()
#line 184
{
  sim_print_now(simTimeBuf, 128);
  return simTimeBuf;
}

  void sim_add_channel(char *channel, FILE *file)
#line 189
{
  sim_log_add_channel(channel, file);
}

  bool sim_remove_channel(char *channel, FILE *file)
#line 193
{
  return sim_log_remove_channel(channel, file);
}

# 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_csma.c"
  int sim_csma_init_high()
#line 57
{
  return csmaInitHigh;
}

#line 60
  int sim_csma_init_low()
#line 60
{
  return csmaInitLow;
}

#line 63
  int sim_csma_high()
#line 63
{
  return csmaHigh;
}

#line 66
  int sim_csma_low()
#line 66
{
  return csmaLow;
}

#line 69
  int sim_csma_symbols_per_sec()
#line 69
{
  return csmaSymbolsPerSec;
}

#line 72
  int sim_csma_bits_per_symbol()
#line 72
{
  return csmaBitsPerSymbol;
}

#line 75
  int sim_csma_preamble_length()
#line 75
{
  return csmaPreambleLength;
}

#line 78
  int sim_csma_exponent_base()
#line 78
{
  return csmaExponentBase;
#line 79
  ;
}

#line 81
  int sim_csma_max_iterations()
#line 81
{
  return csmaMaxIterations;
}

#line 84
  int sim_csma_min_free_samples()
#line 84
{
  return csmaMinFreeSamples;
}

#line 87
  int sim_csma_rxtx_delay()
#line 87
{
  return csmaRxTxDelay;
}

#line 90
  int sim_csma_ack_time()
#line 90
{
  return csmaAckTime;
}



  void sim_csma_set_init_high(int val)
#line 96
{
  csmaInitHigh = val;
}

#line 99
  void sim_csma_set_init_low(int val)
#line 99
{
  csmaInitLow = val;
}

#line 102
  void sim_csma_set_high(int val)
#line 102
{
  csmaHigh = val;
}

#line 105
  void sim_csma_set_low(int val)
#line 105
{
  csmaLow = val;
}

#line 108
  void sim_csma_set_symbols_per_sec(int val)
#line 108
{
  csmaSymbolsPerSec = val;
}

#line 111
  void sim_csma_set_bits_per_symbol(int val)
#line 111
{
  csmaBitsPerSymbol = val;
}

#line 114
  void sim_csma_set_preamble_length(int val)
#line 114
{
  csmaPreambleLength = val;
}

#line 117
  void sim_csma_set_exponent_base(int val)
#line 117
{
  csmaExponentBase = val;
}

#line 120
  void sim_csma_set_max_iterations(int val)
#line 120
{
  csmaMaxIterations = val;
}

#line 123
  void sim_csma_set_min_free_samples(int val)
#line 123
{
  csmaMinFreeSamples = val;
}

#line 126
  void sim_csma_set_rxtx_delay(int val)
#line 126
{
  csmaRxTxDelay = val;
}

#line 129
  void sim_csma_set_ack_time(int val)
#line 129
{
  csmaAckTime = val;
}

# 16 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_gain.c"
  gain_entry_t *sim_gain_first(int src)
#line 16
{
  if (src > 1000) {
      return connectivity[1000];
    }
  return connectivity[src];
}

  gain_entry_t *sim_gain_next(gain_entry_t *currentLink)
#line 23
{
  return currentLink->next;
}

  void sim_gain_add(int src, int dest, double gain)
#line 27
{
  gain_entry_t *current;
  int temp = sim_node();

#line 30
  if (src > 1000) {
      src = 1000;
    }
  sim_set_node(src);

  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          break;
        }
      current = current->next;
    }

  if (current == (void *)0) {
      current = sim_gain_allocate_link(dest);
      current->next = connectivity[src];
      connectivity[src] = current;
    }
  current->mote = dest;
  current->gain = gain;
  sim_log_debug(8U, "Gain", "%llu \t ADDING_LINK from:%i to:%i gain:%f\n", sim_time(), src, dest, gain);
  sim_set_node(temp);
}

  double sim_gain_value(int src, int dest)
#line 55
{
  gain_entry_t *current;
  int temp = sim_node();

#line 58
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          sim_log_debug(9U, "Gain", "%llu \t GETTING_LINK from:%i to:%i gain:%f\n", sim_time(), src, dest, current->gain);
          return current->gain;
        }
      current = current->next;
    }
  sim_set_node(temp);
  sim_log_debug(10U, "Gain", "%llu \t GETTING_DEFAULT_LINK from:%i to:%i gain:%f\n", sim_time(), src, dest, 1.0);
  return 1.0;
}

  bool sim_gain_connected(int src, int dest)
#line 73
{
  gain_entry_t *current;
  int temp = sim_node();

#line 76
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          return TRUE;
        }
      current = current->next;
    }
  sim_set_node(temp);
  return FALSE;
}

  void sim_gain_remove(int src, int dest)
#line 89
{
  gain_entry_t *current;
  gain_entry_t *prevLink;
  int temp = sim_node();

  if (src > 1000) {
      src = 1000;
    }

  sim_set_node(src);

  current = sim_gain_first(src);
  prevLink = (void *)0;

  while (current != (void *)0) {
      gain_entry_t *tmp;

#line 105
      if (current->mote == dest) {
          if (prevLink == (void *)0) {
              connectivity[src] = current->next;
            }
          else {
              prevLink->next = current->next;
            }
          tmp = current->next;
          sim_gain_deallocate_link(current);
          current = tmp;
        }
      else {
          prevLink = current;
          current = current->next;
        }
    }
  sim_set_node(temp);
}

#line 169
  void sim_gain_deallocate_link(gain_entry_t *linkToDelete)
#line 169
{
  free(linkToDelete);
}

#line 124
  void sim_gain_set_noise_floor(int node, double mean, double range)
#line 124
{
  if (node > 1000) {
      node = 1000;
    }
  localNoise[node].mean = mean;
  localNoise[node].range = range;
}

#line 148
  double sim_gain_sample_noise(int node)
#line 148
{
  double val;
#line 149
  double adjust;

#line 150
  if (node > 1000) {
      node = 1000;
    }
  val = localNoise[node].mean;
  adjust = sim_random() % 2000000;
  adjust /= 1000000.0;
  adjust -= 1.0;
  adjust *= localNoise[node].range;
  return val + adjust;
}

#line 173
  void sim_gain_set_sensitivity(double s)
#line 173
{
  sensitivity = s;
}

  double sim_gain_sensitivity()
#line 177
{
  return sensitivity;
}

# 84 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_noise.c"
  void sim_noise_create_model(uint16_t node_id)
#line 84
{
  makeNoiseModel(node_id);
  makePmfDistr(node_id);
}

#line 419
  void makeNoiseModel(uint16_t node_id)
#line 419
{
  int i;

#line 421
  for (i = 0; i < NOISE_HISTORY; i++) {
      noiseData[node_id].key[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
      sim_log_debug(44U, "Insert", "Setting history %i to be %i\n", (int )i, (int )noiseData[node_id].key[i]);
    }




  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      sim_noise_add(node_id, noiseData[node_id].noiseTrace[i]);
      arrangeKey(node_id);
      noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }
  noiseData[node_id].generated = 1;
}

#line 113
  uint8_t search_bin_num(char noise)
{
  uint8_t bin;

#line 116
  if (noise > NOISE_MAX || noise < NOISE_MIN) {
      noise = NOISE_MIN;
    }
  bin = (noise - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1;
  return bin;
}

#line 144
  void sim_noise_add(uint16_t node_id, char noise)
{
  int i;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  sim_noise_hash_t *noise_hash;

#line 150
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);
  sim_log_debug(13U, "Insert", "Adding noise value %hhi\n", noise);
  if (noise_hash == (void *)0) {
      noise_hash = (sim_noise_hash_t *)malloc(sizeof(sim_noise_hash_t ));
      memcpy((void *)noise_hash->key, (void *)key, NOISE_HISTORY);

      noise_hash->numElements = 0;
      noise_hash->size = NOISE_DEFAULT_ELEMENT_SIZE;
      noise_hash->elements = (char *)malloc(sizeof(char ) * noise_hash->size);
      memset((void *)noise_hash->elements, 0, sizeof(char ) * noise_hash->size);

      noise_hash->flag = 0;
      for (i = 0; i < NOISE_NUM_VALUES; i++) {
          noise_hash->dist[i] = 0;
        }
      hashtable_insert(pnoiseTable, key, noise_hash);
      sim_log_debug(14U, "Insert", "Inserting %p into table %p with key ", noise_hash, pnoiseTable);
      {
        int ctr;

#line 169
        for (ctr = 0; ctr < NOISE_HISTORY; ctr++) 
          sim_log_debug_clear(15U, "Insert", "%0.3hhi ", key[ctr]);
      }
      sim_log_debug_clear(16U, "Insert", "\n");
    }

  if (noise_hash->numElements == noise_hash->size) 
    {
      char *newElements;
      int newSize = noise_hash->size * 2;

      newElements = (char *)malloc(sizeof(char ) * newSize);
      memcpy(newElements, noise_hash->elements, noise_hash->size);
      free(noise_hash->elements);
      noise_hash->elements = newElements;
      noise_hash->size = newSize;
    }

  noise_hash->elements[noise_hash->numElements] = noise;

  noise_hash->numElements++;
}

#line 245
  void arrangeKey(uint16_t node_id)
{
  char *pKey = noiseData[node_id].key;

#line 248
  memcpy(pKey, pKey + 1, NOISE_HISTORY - 1);
}





  void makePmfDistr(uint16_t node_id)
{
  int i;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;

  FreqKeyNum = 0;
  for (i = 0; i < NOISE_HISTORY; i++) {
      pKey[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      if (i == NOISE_HISTORY) {
        }

      sim_noise_dist(node_id);
      arrangeKey(node_id);
      pKey[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  sim_log_debug_clear(21U, "HASH", "FreqKey = ");
  for (i = 0; i < NOISE_HISTORY; i++) 
    {
      sim_log_debug_clear(22U, "HASH", "%d,", fKey[i]);
    }
  sim_log_debug_clear(23U, "HASH", "\n");
}

#line 192
  void sim_noise_dist(uint16_t node_id)
{
  int i;
  uint8_t bin;
  float cmf = 0;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  char *freqKey = noiseData[node_id].freqKey;
  sim_noise_hash_t *noise_hash;

#line 201
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);



  if (noise_hash->flag == 1) {
    return;
    }
  for (i = 0; i < NOISE_NUM_VALUES; i++) {
      noise_hash->dist[i] = 0.0;
    }

  for (i = 0; i < noise_hash->numElements; i++) 
    {
      float val;

#line 215
      sim_log_debug(17U, "Noise_output", "Noise is found to be %i\n", noise_hash->elements[i]);
      bin = noise_hash->elements[i] - NOISE_MIN_QUANTIZE;

      val = noise_hash->dist[bin];
      val += (float )1.0;
      noise_hash->dist[bin] = val;
    }

  for (i = 0; i < NOISE_NUM_VALUES; i++) 
    {
      noise_hash->dist[i] = noise_hash->dist[i] / noise_hash->numElements;
      cmf += noise_hash->dist[i];
      noise_hash->dist[i] = cmf;
    }
  noise_hash->flag = 1;


  if (noise_hash->numElements > FreqKeyNum) 
    {
      int j;

#line 235
      FreqKeyNum = noise_hash->numElements;
      memcpy((void *)freqKey, (void *)key, NOISE_HISTORY);
      sim_log_debug(18U, "HashZeroDebug", "Setting most frequent key (%i): ", (int )FreqKeyNum);
      for (j = 0; j < NOISE_HISTORY; j++) {
          sim_log_debug_clear(19U, "HashZeroDebug", "[%hhu] ", key[j]);
        }
      sim_log_debug_clear(20U, "HashZeroDebug", "\n");
    }
}

#line 97
  void sim_noise_trace_add(uint16_t node_id, char noiseVal)
#line 97
{

  if (noiseData[node_id].noiseTraceIndex == 
  noiseData[node_id].noiseTraceLen) {
      char *data = (char *)malloc(sizeof(char ) * noiseData[node_id].noiseTraceLen * 2);

#line 102
      memcpy(data, noiseData[node_id].noiseTrace, noiseData[node_id].noiseTraceLen);
      free(noiseData[node_id].noiseTrace);
      noiseData[node_id].noiseTraceLen *= 2;
      noiseData[node_id].noiseTrace = data;
    }
  noiseData[node_id].noiseTrace[noiseData[node_id].noiseTraceIndex] = noiseVal;
  noiseData[node_id].noiseTraceIndex++;
  sim_log_debug(12U, "Insert", "Adding noise value %i for %i of %i\n", (int )noiseData[node_id].noiseTraceIndex, (int )node_id, (int )noiseVal);
}

#line 123
  char search_noise_from_bin_num(int i)
{
  char noise;

#line 126
  noise = NOISE_MIN + (i - 1) * NOISE_QUANTIZE_INTERVAL;
  return noise;
}

#line 288
  char sim_noise_gen(uint16_t node_id)
{
  int i;
  int noiseIndex = 0;
  char noise;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;
  double ranNum = RandomUniform();
  sim_noise_hash_t *noise_hash;

#line 298
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);

  if (noise_hash == (void *)0) {

      sim_log_debug(24U, "Noise_c", "Did not pattern match");

      sim_noise_alarm();
      noise = 0;
      sim_log_debug_clear(25U, "HASH", "(N)Noise\n");
      sim_log_debug(26U, "HashZeroDebug", "Defaulting to common hash.\n");
      memcpy((void *)pKey, (void *)fKey, NOISE_HISTORY);
      noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);
    }

  sim_log_debug_clear(27U, "HASH", "Key = ");
  for (i = 0; i < NOISE_HISTORY; i++) {
      sim_log_debug_clear(28U, "HASH", "%d,", pKey[i]);
    }
  sim_log_debug_clear(29U, "HASH", "\n");

  sim_log_debug(30U, "HASH", "Printing Key\n");
  sim_log_debug(31U, "HASH", "noise_hash->numElements=%d\n", noise_hash->numElements);


  numTotal++;


  if (noise_hash->numElements == 1) {
      noise = noise_hash->elements[0];
      sim_log_debug_clear(32U, "HASH", "(E)Noise = %d\n", noise);

      numCase1++;
      sim_log_debug(33U, "Noise_c", "In case 1: %i of %i\n", numCase1, numTotal);

      sim_log_debug(34U, "NoiseAudit", "Noise: %i\n", noise);
      return noise;
    }


  numCase2++;
  sim_log_debug(35U, "Noise_c", "In case 2: %i of %i\n", numCase2, numTotal);


  for (i = 0; i < NOISE_NUM_VALUES - 1; i++) {
      sim_log_debug(36U, "HASH", "IN:for i=%d\n", i);
      if (i == 0) {
          if (ranNum <= noise_hash->dist[i]) {
              noiseIndex = i;
              sim_log_debug_clear(37U, "HASH", "Selected Bin = %d -> ", i + 1);
              break;
            }
        }
      else {
#line 350
        if (noise_hash->dist[i - 1] < ranNum && 
        ranNum <= noise_hash->dist[i]) {
            noiseIndex = i;
            sim_log_debug_clear(38U, "HASH", "Selected Bin = %d -> ", i + 1);
            break;
          }
        }
    }
#line 357
  sim_log_debug(39U, "HASH", "OUT:for i=%d\n", i);

  noise = NOISE_MIN_QUANTIZE + i;
  sim_log_debug(40U, "NoiseAudit", "Noise: %i\n", noise);
  return noise;
}

# 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/randomlib.c"
static double RandomUniform(void )
{
  double uni;
  int seed1;
#line 106
  int seed2;


  if (!test) 
    {



      seed1 = sim_random() % 31329;
      seed2 = sim_random() % 30082;
      RandomInitialise(seed1, seed2);
    }

  uni = randU[i97 - 1] - randU[j97 - 1];
  if (uni <= 0.0) {
    uni++;
    }
#line 122
  randU[i97 - 1] = uni;
  i97--;
  if (i97 == 0) {
    i97 = 97;
    }
#line 126
  j97--;
  if (j97 == 0) {
    j97 = 97;
    }
#line 129
  randC -= randCD;
  if (randC < 0.0) {
    randC += randCM;
    }
#line 132
  uni -= randC;
  if (uni < 0.0) {
    uni++;
    }
  return uni;
}

# 364 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_noise.c"
  char sim_noise_generate(uint16_t node_id, uint32_t cur_t)
#line 364
{
  uint32_t i;
  uint32_t prev_t;
  uint32_t delta_t;
  char *noiseG;
  char noise;

  prev_t = noiseData[node_id].noiseGenTime;

  if (noiseData[node_id].generated == 0) {
      sim_log_error(41U, "TOSSIM", "Tried to generate noise from an uninitialized radio model of node %hu.\n", node_id);
      return 127;
    }

  if (0 <= cur_t && cur_t < NOISE_HISTORY) {
      noiseData[node_id].noiseGenTime = cur_t;
      noiseData[node_id].key[cur_t] = search_bin_num(noiseData[node_id].noiseTrace[cur_t]);
      noiseData[node_id].lastNoiseVal = noiseData[node_id].noiseTrace[cur_t];
      return noiseData[node_id].noiseTrace[cur_t];
    }

  if (prev_t == 0) {
    delta_t = cur_t - (NOISE_HISTORY - 1);
    }
  else {
#line 388
    delta_t = cur_t - prev_t;
    }
  sim_log_debug_clear(42U, "HASH", "delta_t = %d\n", delta_t);

  if (delta_t == 0) {
    noise = noiseData[node_id].lastNoiseVal;
    }
  else 
#line 394
    {
      noiseG = (char *)malloc(sizeof(char ) * delta_t);

      for (i = 0; i < delta_t; i++) {
          noiseG[i] = sim_noise_gen(node_id);
          arrangeKey(node_id);
          noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseG[i]);
        }
      noise = noiseG[delta_t - 1];
      noiseData[node_id].lastNoiseVal = noise;

      free(noiseG);
    }
  noiseData[node_id].noiseGenTime = cur_t;
  if (noise == 0) {
      sim_log_debug(43U, "HashZeroDebug", "Generated noise of zero.\n");
    }

  return noise;
}

# 261 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_error(uint16_t id, char *string, const char *format, ...)
#line 261
{
  va_list args;
  int i;

#line 264
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 269
      __builtin_va_start(args, format);
      fprintf(file, "ERROR (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_packet.c"
  void sim_packet_set_source(sim_packet_t *msg, uint16_t src)
#line 54
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 56
  __nesc_hton_uint16(hdr->src.nxdata, src);
}

  uint16_t sim_packet_source(sim_packet_t *msg)
#line 59
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 61
  return __nesc_ntoh_uint16(hdr->src.nxdata);
}

  void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)
#line 64
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 66
  __nesc_hton_uint16(hdr->dest.nxdata, dest);
}

  uint16_t sim_packet_destination(sim_packet_t *msg)
#line 69
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 71
  return __nesc_ntoh_uint16(hdr->dest.nxdata);
}

  void sim_packet_set_length(sim_packet_t *msg, uint8_t length)
#line 74
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 76
  __nesc_hton_uint8(hdr->length.nxdata, length);
}

#line 78
  uint16_t sim_packet_length(sim_packet_t *msg)
#line 78
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 80
  return __nesc_ntoh_uint8(hdr->length.nxdata);
}

  void sim_packet_set_type(sim_packet_t *msg, uint8_t type)
#line 83
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 85
  __nesc_hton_uint8(hdr->type.nxdata, type);
}

  uint8_t sim_packet_type(sim_packet_t *msg)
#line 88
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 90
  return __nesc_ntoh_uint8(hdr->type.nxdata);
}

  uint8_t *sim_packet_data(sim_packet_t *p)
#line 93
{
  message_t *msg = (message_t *)p;

#line 95
  return (uint8_t *)& msg->data;
}

#line 97
  void sim_packet_set_strength(sim_packet_t *p, uint16_t str)
#line 97
{
  message_t *msg = (message_t *)p;
  tossim_metadata_t *md = (tossim_metadata_t *)& msg->metadata;

#line 100
  __nesc_hton_int8(md->strength.nxdata, str);
}

#line 102
  void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)
#line 102
{
  if (t < sim_time()) {
      t = sim_time();
    }
  sim_log_debug(45U, "Packet", "sim_packet.c: Delivering packet %p to %i at %llu\n", msg, node, t);
  active_message_deliver(node, (message_t *)msg, t);
}

# 254 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
  void active_message_deliver(int node, message_t *msg, sim_time_t t)
#line 254
{
  sim_event_t *evt = TossimActiveMessageC$allocate_deliver_event(node, msg, t);

#line 256
  sim_queue_insert(evt);
}

#line 109
static void TossimActiveMessageC$Model$receive(message_t *msg)
#line 109
{
  uint8_t len;
  void *payload;

  memcpy(TossimActiveMessageC$bufferPointer[sim_node()], msg, sizeof(message_t ));
  len = TossimActiveMessageC$Packet$payloadLength(TossimActiveMessageC$bufferPointer[sim_node()]);
  payload = TossimActiveMessageC$Packet$getPayload(TossimActiveMessageC$bufferPointer[sim_node()], TossimActiveMessageC$Packet$maxPayloadLength());

  if (TossimActiveMessageC$AMPacket$isForMe(msg)) {
      sim_log_debug(119U, "AM", "Received active message (%p) of type %hhu and length %hhu for me @ %s.\n", TossimActiveMessageC$bufferPointer[sim_node()], TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), len, sim_time_string());
      TossimActiveMessageC$bufferPointer[sim_node()] = TossimActiveMessageC$Receive$receive(TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), TossimActiveMessageC$bufferPointer[sim_node()], payload, len);
    }
  else {
      sim_log_debug(120U, "AM", "Snooped on active message of type %hhu and length %hhu for %hu @ %s.\n", TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), len, TossimActiveMessageC$AMPacket$destination(TossimActiveMessageC$bufferPointer[sim_node()]), sim_time_string());
      TossimActiveMessageC$bufferPointer[sim_node()] = TossimActiveMessageC$Snoop$receive(TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), TossimActiveMessageC$bufferPointer[sim_node()], payload, len);
    }
}

#line 140
static am_addr_t TossimActiveMessageC$AMPacket$destination(message_t *amsg)
#line 140
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 142
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

# 76 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void )
#line 76
{
  if (!ActiveMessageAddressC$set[sim_node()]) {
      ActiveMessageAddressC$addr[sim_node()] = TOS_NODE_ID;
      ActiveMessageAddressC$set[sim_node()] = TRUE;
    }
  return ActiveMessageAddressC$addr[sim_node()];
}

# 165 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static am_id_t TossimActiveMessageC$AMPacket$type(message_t *amsg)
#line 165
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 167
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 409 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static void LinkEstimatorP$print_packet(message_t *msg, uint8_t len)
#line 409
{
  uint8_t i;
  uint8_t *b;

  b = (uint8_t *)msg->data;
  for (i = 0; i < len; i++) 
    sim_log_debug_clear(275U, "LI", "%x ", b[i]);
  sim_log_debug_clear(276U, "LI", "\n");
}

# 150 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static am_addr_t TossimActiveMessageC$AMPacket$source(message_t *amsg)
#line 150
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 152
  return __nesc_ntoh_uint16(header->src.nxdata);
}

# 308 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static uint16_t LinkEstimatorP$computeETX(uint8_t q1)
#line 308
{
  uint16_t q;

#line 310
  if (q1 > 0) {
      q = 2500 / q1;
      if (q > 250) {
          q = LinkEstimatorP$VERY_LARGE_ETX_VALUE;
        }
      return q;
    }
  else 
#line 316
    {
      return LinkEstimatorP$VERY_LARGE_ETX_VALUE;
    }
}

#line 184
static uint8_t LinkEstimatorP$findIdx(am_addr_t ll_addr)
#line 184
{
  uint8_t i;

#line 186
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP$NeighborTable[sim_node()][i].flags & VALID_ENTRY) {
          if (LinkEstimatorP$NeighborTable[sim_node()][i].ll_addr == ll_addr) {
              return i;
            }
        }
    }
  return LinkEstimatorP$INVALID_RVAL;
}

#line 364
static void LinkEstimatorP$updateNeighborEntryIdx(uint8_t idx, uint8_t seq)
#line 364
{
  uint8_t packetGap;

  if (LinkEstimatorP$NeighborTable[sim_node()][idx].flags & INIT_ENTRY) {
      sim_log_debug(272U, "LI", "Init entry update\n");
      LinkEstimatorP$NeighborTable[sim_node()][idx].flags &= ~INIT_ENTRY;
    }

  packetGap = seq - LinkEstimatorP$NeighborTable[sim_node()][idx].lastseq;
  sim_log_debug(273U, "LI", "updateNeighborEntryIdx: prevseq %d, curseq %d, gap %d\n", LinkEstimatorP$NeighborTable[sim_node()][idx].lastseq, seq, packetGap);

  LinkEstimatorP$NeighborTable[sim_node()][idx].lastseq = seq;
  LinkEstimatorP$NeighborTable[sim_node()][idx].rcvcnt++;
  if (packetGap > 0) {
      LinkEstimatorP$NeighborTable[sim_node()][idx].failcnt += packetGap - 1;
    }

  if (packetGap > LinkEstimatorP$MAX_PKT_GAP) {
      LinkEstimatorP$initNeighborIdx(idx, LinkEstimatorP$NeighborTable[sim_node()][idx].ll_addr);
      LinkEstimatorP$NeighborTable[sim_node()][idx].lastseq = seq;
      LinkEstimatorP$NeighborTable[sim_node()][idx].rcvcnt = 1;
    }
  else {
#line 386
    if (
#line 385
    LinkEstimatorP$NeighborTable[sim_node()][idx].rcvcnt + LinkEstimatorP$NeighborTable[sim_node()][idx].failcnt >= LinkEstimatorP$BLQ_PKT_WINDOW
     || packetGap >= LinkEstimatorP$BLQ_PKT_WINDOW) {
        LinkEstimatorP$updateNeighborTableEst(LinkEstimatorP$NeighborTable[sim_node()][idx].ll_addr);
      }
    }
}

#line 171
static void LinkEstimatorP$initNeighborIdx(uint8_t i, am_addr_t ll_addr)
#line 171
{
  neighbor_table_entry_t *ne;

#line 173
  ne = &LinkEstimatorP$NeighborTable[sim_node()][i];
  ne->ll_addr = ll_addr;
  ne->lastseq = 0;
  ne->rcvcnt = 0;
  ne->failcnt = 0;
  ne->flags = INIT_ENTRY | VALID_ENTRY;
  ne->inquality = 0;
  ne->etx = 0;
}

#line 283
static void LinkEstimatorP$updateETX(neighbor_table_entry_t *ne, uint16_t newEst)
#line 283
{
  ne->etx = (LinkEstimatorP$ALPHA * ne->etx + (10 - LinkEstimatorP$ALPHA) * newEst) / 10;
}

#line 197
static uint8_t LinkEstimatorP$findEmptyNeighborIdx(void )
#line 197
{
  uint8_t i;

#line 199
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP$NeighborTable[sim_node()][i].flags & VALID_ENTRY) {
        }
      else 
#line 201
        {
          return i;
        }
    }
  return LinkEstimatorP$INVALID_RVAL;
}



static uint8_t LinkEstimatorP$findWorstNeighborIdx(uint8_t thresholdETX)
#line 210
{
  uint8_t i;
#line 211
  uint8_t worstNeighborIdx;
  uint16_t worstETX;
#line 212
  uint16_t thisETX;

  worstNeighborIdx = LinkEstimatorP$INVALID_RVAL;
  worstETX = 0;
  for (i = 0; i < 10; i++) {
      if (!(LinkEstimatorP$NeighborTable[sim_node()][i].flags & VALID_ENTRY)) {
          sim_log_debug(264U, "LI", "Invalid so continuing\n");
          continue;
        }
      if (!(LinkEstimatorP$NeighborTable[sim_node()][i].flags & MATURE_ENTRY)) {
          sim_log_debug(265U, "LI", "Not mature, so continuing\n");
          continue;
        }
      if (LinkEstimatorP$NeighborTable[sim_node()][i].flags & PINNED_ENTRY) {
          sim_log_debug(266U, "LI", "Pinned entry, so continuing\n");
          continue;
        }
      thisETX = LinkEstimatorP$NeighborTable[sim_node()][i].etx;
      if (thisETX >= worstETX) {
          worstNeighborIdx = i;
          worstETX = thisETX;
        }
    }
  if (worstETX >= thresholdETX) {
      return worstNeighborIdx;
    }
  else 
#line 237
    {
      return LinkEstimatorP$INVALID_RVAL;
    }
}

# 505 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor)
#line 505
{
  /*CtpP.Router*/CtpRoutingEngineP$0$routingTableEvict(neighbor);

  if (/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent == neighbor) {
      routeInfoInit(&/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()]);
      /*CtpP.Router*/CtpRoutingEngineP$0$justEvicted[sim_node()] = TRUE;
      /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
    }
}

#line 688
static uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(am_addr_t neighbor)
#line 688
{
  uint8_t i;

#line 690
  if (neighbor == INVALID_ADDR) {
    return /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()];
    }
#line 692
  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()]; i++) {
      if (/*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][i].neighbor == neighbor) {
        break;
        }
    }
#line 696
  return i;
}

# 207 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  error_t result;

#line 210
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 210
    {
      result = SimSchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;
    }
#line 212
    __nesc_atomic_end(__nesc_atomic); }
  if (result == SUCCESS) {
      sim_log_debug(112U, "Scheduler", "Posting task %hhu.\n", id);
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
  else {
      sim_log_debug(113U, "Scheduler", "Posting task %hhu, but already posted.\n", id);
    }
  return result;
}

#line 73
static void SimSchedulerBasicP$sim_scheduler_submit_event(void )
#line 73
{
  if (SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] == FALSE) {
      SimSchedulerBasicP$sim_scheduler_event[sim_node()].time = sim_time() + SimSchedulerBasicP$sim_config_task_latency();
      sim_queue_insert(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
      SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = TRUE;
    }
}

# 708 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static void *LinkEstimatorP$Packet$getPayload(message_t *msg, uint8_t len)
#line 708
{
  void *payload = LinkEstimatorP$SubPacket$getPayload(msg, len + sizeof(linkest_header_t ));

#line 710
  if (payload != (void *)0) {
      payload += sizeof(linkest_header_t );
    }
  return payload;
}

#line 684
static uint8_t LinkEstimatorP$Packet$payloadLength(message_t *msg)
#line 684
{
  linkest_header_t *hdr;

#line 686
  hdr = LinkEstimatorP$getHeader(msg);
  return LinkEstimatorP$SubPacket$payloadLength(msg)
   - sizeof(linkest_header_t )
   - sizeof(linkest_footer_t ) * (NUM_ENTRIES_FLAG & __nesc_ntoh_uint8(hdr->flags.nxdata));
}

# 69 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC$Random$rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC$seed[sim_node()];
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC$seed[sim_node()] = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 775 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpRoutingPacket$getOption(message_t *msg, ctp_options_t opt)
#line 775
{
  return (__nesc_ntoh_uint8(/*CtpP.Router*/CtpRoutingEngineP$0$getHeader(msg)->options.nxdata) & opt) == opt ? TRUE : FALSE;
}

# 489 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static error_t LinkEstimatorP$LinkEstimator$pinNeighbor(am_addr_t neighbor)
#line 489
{
  uint8_t nidx = LinkEstimatorP$findIdx(neighbor);

#line 491
  if (nidx == LinkEstimatorP$INVALID_RVAL) {
      return FAIL;
    }
  LinkEstimatorP$NeighborTable[sim_node()][nidx].flags |= PINNED_ENTRY;
  return SUCCESS;
}

#line 445
static uint16_t LinkEstimatorP$LinkEstimator$getLinkQuality(am_addr_t neighbor)
#line 445
{
  uint8_t idx;

#line 447
  idx = LinkEstimatorP$findIdx(neighbor);
  if (idx == LinkEstimatorP$INVALID_RVAL) {
      return LinkEstimatorP$VERY_LARGE_ETX_VALUE;
    }
  else 
#line 450
    {
      if (LinkEstimatorP$NeighborTable[sim_node()][idx].flags & MATURE_ENTRY) {
          return LinkEstimatorP$NeighborTable[sim_node()][idx].etx;
        }
      else 
#line 453
        {
          return LinkEstimatorP$VERY_LARGE_ETX_VALUE;
        }
    }
}

# 181 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$chooseAdvertiseTime(void )
#line 181
{
  /*CtpP.Router*/CtpRoutingEngineP$0$t[sim_node()] = /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[sim_node()];
  /*CtpP.Router*/CtpRoutingEngineP$0$t[sim_node()] /= 2;
  /*CtpP.Router*/CtpRoutingEngineP$0$t[sim_node()] += /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand32() % /*CtpP.Router*/CtpRoutingEngineP$0$t[sim_node()];
  /*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed[sim_node()] = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$startOneShot(/*CtpP.Router*/CtpRoutingEngineP$0$t[sim_node()]);
}

# 144 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 161 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 282 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint8_t HplAtm128Timer0AsyncP$Timer0$get(void )
#line 282
{
  uint8_t rval;
  sim_time_t elapsed = sim_time() - HplAtm128Timer0AsyncP$last_zero();

#line 285
  elapsed = HplAtm128Timer0AsyncP$sim_to_clock(elapsed);
  elapsed = elapsed >> HplAtm128Timer0AsyncP$shiftFromScale();
  rval = (uint8_t )(elapsed & 0xff);
  sim_log_debug(194U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting timer: %hhu\n", rval);
  return rval;
}

#line 108
static sim_time_t HplAtm128Timer0AsyncP$last_zero(void )
#line 108
{
  if (HplAtm128Timer0AsyncP$lastZero[sim_node()] == 0) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_mote_start_time(sim_node());
    }
  return HplAtm128Timer0AsyncP$lastZero[sim_node()];
}

# 106 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_start_time(int mote)
#line 106
{
  long long int result;
  int tmp = sim_node();

#line 109
  sim_set_node(mote);
  result = SimMoteP$SimMote$getStartTime();
  sim_set_node(tmp);
  return result;
}

# 160 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void )
#line 160
{
  uint8_t scale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 162
  switch (scale) {
      case 0: 
        return 0;
      case 1: 
        return 0;
      case 2: 
        return 3;
      case 3: 
        return 5;
      case 4: 
        return 6;
      case 5: 
        return 7;
      case 6: 
        return 8;
      case 7: 
        return 10;
      default: 
        return 255;
    }
}

#line 321
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void )
#line 321
{
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] & 0x7;
}

#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void )
#line 383
{
  Atm128_TIFR_t at;

#line 385
  at.flat = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36];
  return at;
}

#line 457
static uint8_t HplAtm128Timer0AsyncP$Compare$get(void )
#line 457
{
  sim_log_debug(200U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting compare: %hhu\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]);
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31];
}

# 802 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(message_t *msg)
#line 802
{
#line 802
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->thl.nxdata);
}

# 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/UARTDebugSenderP.nc"
static error_t  UARTDebugSenderP$CollectionDebug$logEventMsg(uint8_t type, uint16_t msg_id, am_addr_t origin, am_addr_t node)
#line 103
{
  UARTDebugSenderP$statLogReceived[sim_node()]++;
  if (UARTDebugSenderP$MessagePool$empty()) {
      return FAIL;
    }
  else 
#line 107
    {
      message_t *msg = UARTDebugSenderP$MessagePool$get();
      CollectionDebugMsg *dbg_msg = UARTDebugSenderP$UARTSend$getPayload(msg, sizeof(CollectionDebugMsg ));

#line 110
      if (dbg_msg == (void *)0) {
          return FAIL;
        }
      memset(dbg_msg, 0, UARTDebugSenderP$len[sim_node()]);

      __nesc_hton_uint8(dbg_msg->type.nxdata, type);
      __nesc_hton_uint16(dbg_msg->data.msg.msg_uid.nxdata, msg_id);
      __nesc_hton_uint16(dbg_msg->data.msg.origin.nxdata, origin);
      __nesc_hton_uint16(dbg_msg->data.msg.other_node.nxdata, node);
      __nesc_hton_uint16(dbg_msg->seqno.nxdata, UARTDebugSenderP$statLogReceived[sim_node()]);

      if (UARTDebugSenderP$SendQueue$enqueue(msg) == SUCCESS) {
          UARTDebugSenderP$sendTask$postTask();
          return SUCCESS;
        }
      else 
#line 124
        {
          UARTDebugSenderP$statEnqueueFail[sim_node()]++;
          UARTDebugSenderP$MessagePool$put(msg);
          return FAIL;
        }
    }
}

# 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/PoolP.nc"
static bool /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$empty(void )
#line 75
{
  sim_log_debug(337U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free[sim_node()]);
  return /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free[sim_node()] == 0;
}









static /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t */*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$get(void )
#line 88
{
  if (/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free[sim_node()]) {
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t *rval = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$queue[sim_node()][/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index[sim_node()]];

#line 91
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$queue[sim_node()][/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index[sim_node()]] = (void *)0;
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free[sim_node()]--;
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index[sim_node()]++;
      if (/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index[sim_node()] == 20) {
          /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index[sim_node()] = 0;
        }
      sim_log_debug(339U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
static error_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$enqueue(/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t newVal)
#line 97
{
  if (/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$size() < /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$maxSize()) {
      sim_log_debug(347U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size[sim_node()]);
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue[sim_node()][/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$tail[sim_node()]] = newVal;
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$tail[sim_node()]++;
      if (/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$tail[sim_node()] == 20) {
#line 102
        /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$tail[sim_node()] = 0;
        }
#line 103
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size[sim_node()]++;
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

#line 69
static void /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$printQueue(void )
#line 69
{

  int i;
#line 71
  int j;

#line 72
  sim_log_debug(341U, "QueueC", "head <-");
  for (i = /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$head[sim_node()]; i < /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$head[sim_node()] + /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size[sim_node()]; i++) {
      sim_log_debug_clear(342U, "QueueC", "[");
      for (j = 0; j < sizeof(/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue[sim_node()][i % 20])[j];

#line 77
          sim_log_debug_clear(343U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(344U, "QueueC", "] ");
    }
  sim_log_debug_clear(345U, "QueueC", "<- tail\n");
}

# 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/PoolP.nc"
static error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$put(/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t *newVal)
#line 103
{
  if (/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free[sim_node()] >= 20) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index[sim_node()] + /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free[sim_node()];

#line 109
      if (emptyIndex >= 20) {
          emptyIndex -= 20;
        }
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$queue[sim_node()][emptyIndex] = newVal;
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free[sim_node()]++;
      sim_log_debug(340U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free[sim_node()]);
      return SUCCESS;
    }
}

# 792 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(message_t *msg)
#line 792
{
#line 792
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->originSeqNo.nxdata);
}

#line 790
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(message_t *msg)
#line 790
{
#line 790
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->origin.nxdata);
}

# 84 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$lookup(message_t *m)
#line 84
{
  uint8_t i;
  uint8_t idx;

#line 87
  for (i = 0; i < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]; i++) {
      idx = (i + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()]) % 4;


      if (
#line 89
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getOrigin(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][idx].origin && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getSequenceNumber(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][idx].seqno && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getThl(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][idx].thl && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getType(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][idx].type) {
          break;
        }
    }
  return i;
}

# 799 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(message_t *msg)
#line 799
{
#line 799
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->origin.nxdata);
}

#line 801
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(message_t *msg)
#line 801
{
#line 801
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->originSeqNo.nxdata);
}

# 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpPacket.nc"
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getType(message_t *msg){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(msg);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 76 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/UARTDebugSenderP.nc"
static error_t UARTDebugSenderP$CollectionDebug$logEvent(uint8_t type)
#line 76
{
  UARTDebugSenderP$statLogReceived[sim_node()]++;
  if (UARTDebugSenderP$MessagePool$empty()) {
      return FAIL;
    }
  else 
#line 80
    {
      message_t *msg = UARTDebugSenderP$MessagePool$get();
      CollectionDebugMsg *dbg_msg = UARTDebugSenderP$UARTSend$getPayload(msg, sizeof(CollectionDebugMsg ));

#line 83
      if (dbg_msg == (void *)0) {
          return FAIL;
        }

      memset(dbg_msg, 0, UARTDebugSenderP$len[sim_node()]);

      __nesc_hton_uint8(dbg_msg->type.nxdata, type);
      __nesc_hton_uint16(dbg_msg->seqno.nxdata, UARTDebugSenderP$statLogReceived[sim_node()]);

      if (UARTDebugSenderP$SendQueue$enqueue(msg) == SUCCESS) {
          UARTDebugSenderP$sendTask$postTask();
          return SUCCESS;
        }
      else 
#line 95
        {
          UARTDebugSenderP$statEnqueueFail[sim_node()]++;
          UARTDebugSenderP$MessagePool$put(msg);
          return FAIL;
        }
    }
}

# 126 "MultihopOscilloscopeC.nc"
static message_t *
MultihopOscilloscopeC$Receive$receive(message_t *msg, void *payload, uint8_t len)
#line 127
{
  oscilloscope_t *in = (oscilloscope_t *)payload;
  oscilloscope_t *out;

#line 130
  if (MultihopOscilloscopeC$uartbusy[sim_node()] == FALSE) {
      out = (oscilloscope_t *)MultihopOscilloscopeC$SerialSend$getPayload(&MultihopOscilloscopeC$uartbuf[sim_node()], sizeof(oscilloscope_t ));
      if (len != sizeof(oscilloscope_t ) || out == (void *)0) {
          return msg;
        }
      else {
          memcpy(out, in, sizeof(oscilloscope_t ));
        }
      MultihopOscilloscopeC$uartlen[sim_node()] = sizeof(oscilloscope_t );
      MultihopOscilloscopeC$uartSendTask$postTask();
    }
  else 
#line 140
    {


      message_t *newmsg = MultihopOscilloscopeC$UARTMessagePool$get();

#line 144
      if (newmsg == (void *)0) {

          MultihopOscilloscopeC$report_problem();
          return msg;
        }


      out = (oscilloscope_t *)MultihopOscilloscopeC$SerialSend$getPayload(newmsg, sizeof(oscilloscope_t ));
      if (out == (void *)0) {
          return msg;
        }
      memcpy(out, in, sizeof(oscilloscope_t ));

      if (MultihopOscilloscopeC$UARTQueue$enqueue(newmsg) != SUCCESS) {



          MultihopOscilloscopeC$UARTMessagePool$put(newmsg);
          MultihopOscilloscopeC$fatal_problem();
          return msg;
        }
    }

  return msg;
}

# 125 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void * /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$getPayload(0U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 84 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/LedsP.nc"
static void LedsP$Leds$led0Toggle(void )
#line 84
{
  LedsP$Led0$toggle();
  sim_log_debug(173U, "LedsC", "LEDS: Led""0"" %s.\n", LedsP$Led0$get() ? "off" : "on");
#line 86
  ;
}

# 69 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandlerP.nc"
static void Atm128EnergyHandlerP$Energy$pin_state_flip(uint8_t port, uint8_t bit)
{
  if (Atm128EnergyHandlerP$bitstate[sim_node()][bit] == 0) {
      Atm128EnergyHandlerP$bitstate[sim_node()][bit] = 1;
      sim_log_debug(66U, "ENERGY_HANDLER", "%lld \t LED_STATE \t LED%d \t ON\n", sim_time(), bit);
    }
  else 
#line 74
    {
      Atm128EnergyHandlerP$bitstate[sim_node()][bit] = 0;
      sim_log_debug(67U, "ENERGY_HANDLER", "%lld \t LED_STATE \t LED%d \t OFF\n", sim_time(), bit);
    }
}

# 69 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
static void /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$printQueue(void )
#line 69
{

  int i;
#line 71
  int j;

#line 72
  sim_log_debug(330U, "QueueC", "head <-");
  for (i = /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$head[sim_node()]; i < /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$head[sim_node()] + /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size[sim_node()]; i++) {
      sim_log_debug_clear(331U, "QueueC", "[");
      for (j = 0; j < sizeof(/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue[sim_node()][i % 10])[j];

#line 77
          sim_log_debug_clear(332U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(333U, "QueueC", "] ");
    }
  sim_log_debug_clear(334U, "QueueC", "<- tail\n");
}

# 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/PoolP.nc"
static error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$put(/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t *newVal)
#line 103
{
  if (/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free[sim_node()] >= 10) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index[sim_node()] + /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free[sim_node()];

#line 109
      if (emptyIndex >= 10) {
          emptyIndex -= 10;
        }
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$queue[sim_node()][emptyIndex] = newVal;
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free[sim_node()]++;
      sim_log_debug(329U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free[sim_node()]);
      return SUCCESS;
    }
}

# 274 "MultihopOscilloscopeC.nc"
static void MultihopOscilloscopeC$fatal_problem(void )
#line 274
{
  MultihopOscilloscopeC$Leds$led0On();
  MultihopOscilloscopeC$Leds$led1On();
  MultihopOscilloscopeC$Leds$led2On();
  MultihopOscilloscopeC$Timer$stop();
}

# 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandlerP.nc"
static void Atm128EnergyHandlerP$Energy$pin_state_clear(uint8_t port, uint8_t bit)
{
  if (bit == 4) {
      sim_log_debug(62U, "ENERGY_HANDLER", "%lld \t LED_STATE \t LED0 \t OFF\n", sim_time());
      sim_log_debug(63U, "ENERGY_HANDLER", "%lld \t LED_STATE \t LED1 \t OFF\n", sim_time());
      sim_log_debug(64U, "ENERGY_HANDLER", "%lld \t LED_STATE \t LED2 \t OFF\n", sim_time());
      Atm128EnergyHandlerP$bitstate[sim_node()][0] = Atm128EnergyHandlerP$bitstate[sim_node()][1] = Atm128EnergyHandlerP$bitstate[sim_node()][2] = 0;
    }
  else {
      sim_log_debug(65U, "ENERGY_HANDLER", "%lld \t LED_STATE \t LED%d \t OFF\n", sim_time(), bit);
      Atm128EnergyHandlerP$bitstate[sim_node()][bit] = 0;
    }
}

# 781 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static void */*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(message_t *msg, uint8_t len)
#line 781
{
  uint8_t *payload = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$getPayload(msg, len + sizeof(ctp_data_header_t ));

#line 783
  if (payload != (void *)0) {
      payload += sizeof(ctp_data_header_t );
    }
  return payload;
}

# 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$Packet$payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
static error_t /*CtpP.SendQueueP*/QueueC$0$Queue$enqueue(/*CtpP.SendQueueP*/QueueC$0$queue_t newVal)
#line 97
{
  if (/*CtpP.SendQueueP*/QueueC$0$Queue$size() < /*CtpP.SendQueueP*/QueueC$0$Queue$maxSize()) {
      sim_log_debug(255U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*CtpP.SendQueueP*/QueueC$0$size[sim_node()]);
      /*CtpP.SendQueueP*/QueueC$0$queue[sim_node()][/*CtpP.SendQueueP*/QueueC$0$tail[sim_node()]] = newVal;
      /*CtpP.SendQueueP*/QueueC$0$tail[sim_node()]++;
      if (/*CtpP.SendQueueP*/QueueC$0$tail[sim_node()] == 13) {
#line 102
        /*CtpP.SendQueueP*/QueueC$0$tail[sim_node()] = 0;
        }
#line 103
      /*CtpP.SendQueueP*/QueueC$0$size[sim_node()]++;
      /*CtpP.SendQueueP*/QueueC$0$printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

#line 69
static void /*CtpP.SendQueueP*/QueueC$0$printQueue(void )
#line 69
{

  int i;
#line 71
  int j;

#line 72
  sim_log_debug(249U, "QueueC", "head <-");
  for (i = /*CtpP.SendQueueP*/QueueC$0$head[sim_node()]; i < /*CtpP.SendQueueP*/QueueC$0$head[sim_node()] + /*CtpP.SendQueueP*/QueueC$0$size[sim_node()]; i++) {
      sim_log_debug_clear(250U, "QueueC", "[");
      for (j = 0; j < sizeof(/*CtpP.SendQueueP*/QueueC$0$queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*CtpP.SendQueueP*/QueueC$0$queue[sim_node()][i % 13])[j];

#line 77
          sim_log_debug_clear(251U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(252U, "QueueC", "] ");
    }
  sim_log_debug_clear(253U, "QueueC", "<- tail\n");
}

# 534 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getEtx(uint16_t *etx)
#line 534
{
  if (etx == (void *)0) {
    return FAIL;
    }
#line 537
  if (/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent == INVALID_ADDR) {
    return FAIL;
    }
#line 539
  if (/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[sim_node()] == 1) {
      *etx = 0;
    }
  else 
#line 541
    {
      *etx = /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx + /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent);
    }
  return SUCCESS;
}

# 249 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(uint16_t window, uint16_t offset)
#line 249
{
  uint16_t r = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Random$rand16();

#line 251
  r %= window;
  r += offset;
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$startOneShot(r);
  sim_log_debug(209U, "Forwarder", "Rexmit timer will fire in %hu ms\n", r);
}

# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(3U, dt);
#line 73
}
#line 73
# 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/PoolP.nc"
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$put(/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t *newVal)
#line 103
{
  if (/*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()] >= 12) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*CtpP.MessagePoolP.PoolP*/PoolP$0$index[sim_node()] + /*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()];

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[sim_node()][emptyIndex] = newVal;
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()]++;
      sim_log_debug(244U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()]);
      return SUCCESS;
    }
}

#line 103
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$put(/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t *newVal)
#line 103
{
  if (/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()] >= 12) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[sim_node()] + /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()];

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[sim_node()][emptyIndex] = newVal;
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()]++;
      sim_log_debug(248U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()]);
      return SUCCESS;
    }
}

# 112 "MultihopOscilloscopeC.nc"
static void MultihopOscilloscopeC$startTimer(void )
#line 112
{
  if (MultihopOscilloscopeC$Timer$isRunning()) {
#line 113
    MultihopOscilloscopeC$Timer$stop();
    }
#line 114
  MultihopOscilloscopeC$Timer$startPeriodic(__nesc_ntoh_uint16(MultihopOscilloscopeC$local[sim_node()].interval.nxdata));
  MultihopOscilloscopeC$reading[sim_node()] = 0;
}

# 154 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_packet.c"
  uint8_t sim_packet_max_length(sim_packet_t *msg)
#line 110
{
  return 28;
}

  sim_packet_t *sim_packet_allocate()
#line 114
{
  return (sim_packet_t *)malloc(sizeof(message_t ));
}

  void sim_packet_free(sim_packet_t *p)
#line 118
{
  printf("sim_packet.c: Freeing packet %p\n", p);
  free(p);
}

# 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimMainP.nc"
  int sim_main_start_mote(void )
#line 51
{
  char timeBuf[128];

#line 53
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 53
    {






      SimMainP$Scheduler$init();





      SimMainP$PlatformInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;





      SimMainP$SoftwareInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;
    }
#line 75
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  sim_print_now(timeBuf, 128);
  sim_log_debug(108U, "SimMainP", "Mote %li signaling boot at time %s.\n", sim_node(), timeBuf);
  SimMainP$Boot$booted();





  return 0;
}

# 176 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static bool SimSchedulerBasicP$Scheduler$runNextTask(void )
{
  uint8_t nextTask;

#line 179
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      nextTask = SimSchedulerBasicP$popTask();
      if (nextTask == SimSchedulerBasicP$NO_TASK) 
        {
          sim_log_debug(110U, "Scheduler", "Told to run next task, but no task to run.\n");

          SimSchedulerBasicP$McuSleep$sleep();

          {
            unsigned char __nesc_temp = 
#line 188
            FALSE;

            {
#line 188
              __nesc_atomic_end(__nesc_atomic); 
#line 188
              return __nesc_temp;
            }
          }
        }
    }
#line 192
    __nesc_atomic_end(__nesc_atomic); }
#line 191
  sim_log_debug(111U, "Scheduler", "Running task %hhu.\n", nextTask);

  SimSchedulerBasicP$Energy$mcu_state_change(6);

  SimSchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

# 15 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/Atm128EnergyHandlerP.nc"
static void Atm128EnergyHandlerP$Energy$mcu_state_change(uint8_t powerstate)
{
  if (Atm128EnergyHandlerP$active[sim_node()] == 0 && powerstate == 6) 
    {
      sim_log_debug(54U, "ENERGY_HANDLER", "%lld \t CPU_STATE \t CPU_ACTIVE\n", sim_time());
      Atm128EnergyHandlerP$active[sim_node()] = 1;
      return;
    }

  switch (powerstate) {
      case 0: 
        sim_log_debug(55U, "ENERGY_HANDLER", "%lld \t CPU_STATE \t CPU_IDLE\n", sim_time());
      break;
      case 1: 
        sim_log_debug(56U, "ENERGY_HANDLER", "%lld \t CPU_STATE \t CPU_ADC_NOISE_REDUCTION", sim_time());
      break;
      case 2: 
        sim_log_debug(57U, "ENERGY_HANDLER", "%lld \t CPU_STATE \t CPU_EXTENDED_STANDBY\n", sim_time());
      break;
      case 3: 
        sim_log_debug(58U, "ENERGY_HANDLER", "%lld \t CPU_STATE \t CPU_POWER_SAVE\n", sim_time());
      break;
      case 4: 
        sim_log_debug(59U, "ENERGY_HANDLER", "%lld \t CPU_STATE \t CPU_STANDBY\n", sim_time());
      break;
      case 5: 
        sim_log_debug(60U, "ENERGY_HANDLER", "%lld \t CPU_STATE \t CPU_POWER_DOWN\n", sim_time());
      break;
    }

  Atm128EnergyHandlerP$active[sim_node()] = 0;
}

# 134 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static void SerialActiveMessageC$AMPacket$setType(message_t *amsg, am_id_t t)
#line 134
{
  serial_header_t *header = SerialActiveMessageC$getHeader(amsg);

#line 136
  __nesc_hton_uint8(header->type.nxdata, t);
}

# 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 2) {
      return FAIL;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[sim_node()][clientId].msg != (void *)0) {
      return EBUSY;
    }
  sim_log_debug(321U, "AMQueue", "AMQueue: request to send from %hhu (%p): passed checks\n", clientId, msg);

  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[sim_node()][clientId].msg = msg;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$setPayloadLength(msg, len);

  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[sim_node()] >= 2) {
      error_t err;
      am_id_t amId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(msg);
      am_addr_t dest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(msg);

      sim_log_debug(322U, "AMQueue", "%s: request to send from %hhu (%p): queue empty\n", __FUNCTION__, clientId, msg);
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[sim_node()] = clientId;

      err = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          sim_log_debug(323U, "AMQueue", "%s: underlying send failed.\n", __FUNCTION__);
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[sim_node()] = 2;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[sim_node()][clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      sim_log_debug(324U, "AMQueue", "AMQueue: request to send from %hhu (%p): queue not empty\n", clientId, msg);
    }
  return SUCCESS;
}

# 129 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static am_id_t SerialActiveMessageC$AMPacket$type(message_t *amsg)
#line 129
{
  serial_header_t *header = SerialActiveMessageC$getHeader(amsg);

#line 131
  return __nesc_ntoh_uint8(header->type.nxdata);
}

#line 104
static am_addr_t SerialActiveMessageC$AMPacket$destination(message_t *amsg)
#line 104
{
  serial_header_t *header = SerialActiveMessageC$getHeader(amsg);

#line 106
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

# 85 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
static /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$dequeue(void )
#line 85
{
  /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t t = /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$head();

#line 87
  sim_log_debug(346U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size[sim_node()]);
  if (!/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$empty()) {
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$head[sim_node()]++;
      if (/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$head[sim_node()] == 20) {
#line 90
        /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$head[sim_node()] = 0;
        }
#line 91
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size[sim_node()]--;
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$printQueue();
    }
  return t;
}

# 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/UARTDebugSenderP.nc"
static void UARTDebugSenderP$UARTSend$sendDone(message_t *msg, error_t error)
#line 58
{
  message_t *qh = UARTDebugSenderP$SendQueue$head();

#line 60
  if (qh == (void *)0 || qh != msg) {

      UARTDebugSenderP$statSendDoneBug[sim_node()]++;
    }
  else 
#line 63
    {
      UARTDebugSenderP$SendQueue$dequeue();
      UARTDebugSenderP$MessagePool$put(msg);
      if (error == SUCCESS) {
        UARTDebugSenderP$statSendDoneOk[sim_node()]++;
        }
      else {
#line 69
        UARTDebugSenderP$statSendDoneFail[sim_node()]++;
        }
    }
#line 71
  UARTDebugSenderP$sending[sim_node()] = FALSE;
  if (!UARTDebugSenderP$SendQueue$empty()) {
    UARTDebugSenderP$sendTask$postTask();
    }
}

# 178 "MultihopOscilloscopeC.nc"
static void MultihopOscilloscopeC$SerialSend$sendDone(message_t *msg, error_t error)
#line 178
{
  MultihopOscilloscopeC$uartbusy[sim_node()] = FALSE;
  if (MultihopOscilloscopeC$UARTQueue$empty() == FALSE) {


      message_t *queuemsg = MultihopOscilloscopeC$UARTQueue$dequeue();

#line 184
      if (queuemsg == (void *)0) {
          MultihopOscilloscopeC$fatal_problem();
          return;
        }
      memcpy(&MultihopOscilloscopeC$uartbuf[sim_node()], queuemsg, sizeof(message_t ));
      if (MultihopOscilloscopeC$UARTMessagePool$put(queuemsg) != SUCCESS) {
          MultihopOscilloscopeC$fatal_problem();
          return;
        }
      MultihopOscilloscopeC$uartSendTask$postTask();
    }
}

# 132 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/UARTDebugSenderP.nc"
static error_t  UARTDebugSenderP$CollectionDebug$logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric)
#line 132
{
  UARTDebugSenderP$statLogReceived[sim_node()]++;
  if (UARTDebugSenderP$MessagePool$empty()) {
      return FAIL;
    }
  else 
#line 136
    {
      message_t *msg = UARTDebugSenderP$MessagePool$get();
      CollectionDebugMsg *dbg_msg = UARTDebugSenderP$UARTSend$getPayload(msg, sizeof(CollectionDebugMsg ));

#line 139
      if (dbg_msg == (void *)0) {
          return FAIL;
        }
      memset(dbg_msg, 0, UARTDebugSenderP$len[sim_node()]);

      __nesc_hton_uint8(dbg_msg->type.nxdata, type);
      __nesc_hton_uint16(dbg_msg->data.route_info.parent.nxdata, parent);
      __nesc_hton_uint8(dbg_msg->data.route_info.hopcount.nxdata, hopcount);
      __nesc_hton_uint16(dbg_msg->data.route_info.metric.nxdata, metric);
      __nesc_hton_uint16(dbg_msg->seqno.nxdata, UARTDebugSenderP$statLogReceived[sim_node()]);

      if (UARTDebugSenderP$SendQueue$enqueue(msg) == SUCCESS) {
          UARTDebugSenderP$sendTask$postTask();
          return SUCCESS;
        }
      else 
#line 153
        {
          UARTDebugSenderP$statEnqueueFail[sim_node()]++;
          UARTDebugSenderP$MessagePool$put(msg);
          return FAIL;
        }
    }
}

# 145 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static void TossimActiveMessageC$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 145
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 147
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

#line 170
static void TossimActiveMessageC$AMPacket$setType(message_t *amsg, am_id_t t)
#line 170
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 172
  __nesc_hton_uint8(header->type.nxdata, t);
}

# 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 2) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg != (void *)0) {
      return EBUSY;
    }
  sim_log_debug(291U, "AMQueue", "AMQueue: request to send from %hhu (%p): passed checks\n", clientId, msg);

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] >= 2) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      sim_log_debug(292U, "AMQueue", "%s: request to send from %hhu (%p): queue empty\n", __FUNCTION__, clientId, msg);
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          sim_log_debug(293U, "AMQueue", "%s: underlying send failed.\n", __FUNCTION__);
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = 2;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      sim_log_debug(294U, "AMQueue", "AMQueue: request to send from %hhu (%p): queue not empty\n", clientId, msg);
    }
  return SUCCESS;
}

# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static error_t TossimActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 75
{
  error_t err;
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 78
  sim_log_debug(118U, "AM", "AM: Sending packet (id=%hhu, len=%hhu) to %hu\n", id, len, addr);
  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint16(header->dest.nxdata, addr);
  __nesc_hton_uint16(header->src.nxdata, TossimActiveMessageC$AMPacket$address());
  __nesc_hton_uint8(header->length.nxdata, len);
  err = TossimActiveMessageC$Model$send((int )addr, amsg, len + sizeof(tossim_header_t ) + sizeof(tossim_footer_t ));
  return err;
}

# 274 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg)
#line 274
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 277
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return noise;
}

#line 126
static double CpmModelC$noise_hash_generation(void )
#line 126
{
  double CT = CpmModelC$timeInMs();
  uint32_t quotient = (sim_time_t )(CT * 10) / 10;
  uint8_t remain = (uint8_t )((sim_time_t )(CT * 10) % 10);
  double noise_val;
  uint16_t node_id = sim_node();

  sim_log_debug(138U, "CpmModelC", "IN: noise_hash_generation()\n");
  if (5 <= remain && remain < 10) {
      noise_val = (double )sim_noise_generate(node_id, quotient + 1);
    }
  else {
      noise_val = (double )sim_noise_generate(node_id, quotient);
    }
  sim_log_debug(139U, "CpmModelC,Tal", "%s: OUT: noise_hash_generation(): %lf\n", sim_time_string(), noise_val);

  return noise_val;
}

# 189 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] >= 2) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()], msg, err);
    }
  else {
      sim_log_debug(295U, "PointerBug", "%s received send done for %p, signaling for %p.\n", __FUNCTION__, msg, /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg);
    }
}

#line 174
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void )
#line 174
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] < 2) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(nextMsg);

#line 182
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask();
        }
    }
}

# 527 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(message_t *msg, error_t error)
#line 527
{
  fe_queue_entry_t *qe = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$head();

#line 529
  sim_log_debug(227U, "Forwarder", "%s to %hu and %hhu\n", __FUNCTION__, /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg), error);

  if (error != SUCCESS) {

      sim_log_debug(228U, "Forwarder", "%s: send failed\n", __FUNCTION__);
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_SENDDONE_FAIL, 
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(SENDDONE_FAIL_WINDOW, SENDDONE_FAIL_OFFSET);
    }
  else {
#line 540
    if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$ACK_PENDING) && !/*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$wasAcked(msg)) {

        /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txNoAck(/*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$recomputeRoutes();
        if (-- qe->retries) {
            sim_log_debug(229U, "Forwarder", "%s: not acked, retransmit\n", __FUNCTION__);
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_SENDDONE_WAITACK, 
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(SENDDONE_NOACK_WINDOW, SENDDONE_NOACK_OFFSET);
          }
        else 
#line 551
          {

            /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue();
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SENDING);
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(SENDDONE_OK_WINDOW, SENDDONE_OK_OFFSET);

            /*CtpP.Forwarder*/CtpForwardingEngineP$0$packetComplete(qe, msg, FALSE);
          }
      }
    else {



        /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue();
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SENDING);
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(SENDDONE_OK_WINDOW, SENDDONE_OK_OFFSET);
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txAck(/*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$packetComplete(qe, msg, TRUE);
      }
    }
}

# 289 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static void LinkEstimatorP$updateDETX(neighbor_table_entry_t *ne)
#line 289
{
  uint16_t estETX;

  if (ne->data_success == 0) {



      estETX = ne->data_total * 10;
    }
  else 
#line 297
    {
      estETX = 10 * ne->data_total / ne->data_success;
      ne->data_success = 0;
      ne->data_total = 0;
    }
  LinkEstimatorP$updateETX(ne, estETX);
}

# 85 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc"
static /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$dequeue(void )
#line 85
{
  /*CtpP.SendQueueP*/QueueC$0$queue_t t = /*CtpP.SendQueueP*/QueueC$0$Queue$head();

#line 87
  sim_log_debug(254U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*CtpP.SendQueueP*/QueueC$0$size[sim_node()]);
  if (!/*CtpP.SendQueueP*/QueueC$0$Queue$empty()) {
      /*CtpP.SendQueueP*/QueueC$0$head[sim_node()]++;
      if (/*CtpP.SendQueueP*/QueueC$0$head[sim_node()] == 13) {
#line 90
        /*CtpP.SendQueueP*/QueueC$0$head[sim_node()] = 0;
        }
#line 91
      /*CtpP.SendQueueP*/QueueC$0$size[sim_node()]--;
      /*CtpP.SendQueueP*/QueueC$0$printQueue();
    }
  return t;
}

# 483 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$packetComplete(fe_queue_entry_t *qe, message_t *msg, bool success)
#line 483
{



  if (qe->client < /*CtpP.Forwarder*/CtpForwardingEngineP$0$CLIENT_COUNT) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[sim_node()][qe->client] = qe;
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$sendDone(qe->client, msg, SUCCESS);
      if (success) {
          sim_log_debug(223U, "CtpForwarder", "%s: packet %hu.%hhu for client %hhu acknowledged.\n", __FUNCTION__, /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), qe->client);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_SENT_MSG, 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
        }
      else 
#line 496
        {
          sim_log_debug(224U, "CtpForwarder", "%s: packet %hu.%hhu for client %hhu dropped.\n", __FUNCTION__, /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), qe->client);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_SENDDONE_FAIL_ACK_SEND, 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
        }
    }
  else {
      if (success) {
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$insert(qe->msg);
          sim_log_debug(225U, "CtpForwarder", "%s: forwarded packet %hu.%hhu acknowledged: insert in transmit queue.\n", __FUNCTION__, /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg));
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_FWD_MSG, 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
        }
      else {
          sim_log_debug(226U, "CtpForwarder", "%s: forwarded packet %hu.%hhu dropped.\n", __FUNCTION__, /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg));
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_SENDDONE_FAIL_ACK_FWD, 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
        }
      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(qe->msg) != SUCCESS) {
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
        }
#line 522
      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(qe) != SUCCESS) {
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_QEPOOL_ERR);
        }
    }
}

# 248 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static bool CpmModelC$shouldReceive(double SNR)
#line 248
{
  double prr = CpmModelC$prr_estimate_from_snr(SNR);
  double coin = RandomUniform();

#line 251
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 255
        prr = 0.0;
        }
    }
#line 257
  return prr;
}

# 349 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg)
#line 349
{
  if (TossimPacketModelC$running[sim_node()] && !TossimPacketModelC$transmitting[sim_node()]) {
      return TossimPacketModelC$Packet$shouldAck(msg);
    }
  else {
      return FALSE;
    }
}

# 216 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r)
#line 216
{
  sim_event_t *ackEvent = (sim_event_t *)malloc(sizeof(sim_event_t ));

  ackEvent->mote = source;
  ackEvent->force = 1;
  ackEvent->cancelled = 0;
  ackEvent->time = t;
  ackEvent->handle = CpmModelC$sim_gain_ack_handle;
  ackEvent->cleanup = sim_queue_cleanup_event;
  ackEvent->data = r;

  sim_queue_insert(ackEvent);
}

# 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 212 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().flat;

#line 101
      sim_log_debug(180U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: TIFR is %hhx\n", tifr);
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) || tifr & (1 << OCF0)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
              sim_log_debug(181U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: under min: %hhu.\n", interrupt_in);
            }
          else {
              sim_log_debug(182U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: OCF set.\n");
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()]) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
          sim_log_debug(183U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: no alarm set, set at max.\n");
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();

#line 120
          sim_log_debug(184U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: now-t0 = %llu, dt = %llu\n", now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()], /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]);

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()]) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired();
    }
}

# 463 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static void HplAtm128Timer0AsyncP$Compare$set(uint8_t t)
#line 463
{
  sim_log_debug(201U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting compare: %hhu\n", t);
  /* atomic removed: atomic calls only */
#line 465
  {




    if (t == 0 || t >= 0xfe) {
      t = 1;
      }
    if (t != * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]) {
        * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31] = t;
        HplAtm128Timer0AsyncP$schedule_new_compare();
      }
  }
}

#line 267
static void HplAtm128Timer0AsyncP$schedule_new_compare(void )
#line 267
{
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_compare();
    }
  if (HplAtm128Timer0AsyncP$Timer0$getScale() != AVR_CLOCK_OFF) {
      sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_compare();

#line 273
      HplAtm128Timer0AsyncP$configure_compare(newEvent);

      HplAtm128Timer0AsyncP$compare[sim_node()] = newEvent;
      sim_queue_insert(newEvent);
    }
}

# 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
static sim_event_t *sim_queue_allocate_event()
#line 97
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 99
  memset(evt, 0, sizeof(sim_event_t ));
  evt->mote = sim_node();
  return evt;
}

# 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
  void INTERRUPT_16(void )
#line 100
{
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = TRUE;
  HplAtm128Timer0AsyncP$Timer0$overflow();
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = FALSE;
}

#line 508
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt)
#line 508
{
  sim_time_t overflowTime = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t overflowVal = 0;




  overflowTime = (overflowVal - timerVal) & 0xff;
  if (overflowTime == 0) {
      overflowTime = 256;
    }




  overflowTime = overflowTime << HplAtm128Timer0AsyncP$shiftFromScale();
  overflowTime = HplAtm128Timer0AsyncP$clock_to_sim(overflowTime);
  overflowTime += sim_time();
  overflowTime -= (sim_time() - HplAtm128Timer0AsyncP$last_zero()) % (1 << HplAtm128Timer0AsyncP$shiftFromScale());

  sim_log_debug(204U, "HplAtm128Timer0AsyncP", "Scheduling new overflow for %i at time %llu\n", sim_node(), overflowTime);

  evt->time = overflowTime;
}

#line 94
  void INTERRUPT_15(void )
#line 94
{

  HplAtm128Timer0AsyncP$Compare$fired();
}

#line 231
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt)
#line 231
{
  sim_time_t compareTime = 0;
  sim_time_t phaseOffset = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t compareVal = HplAtm128Timer0AsyncP$Compare$get();




  compareTime = (compareVal - timerVal) & 0xff;
  if (compareTime == 0) {
      compareTime = 256;
    }






  compareTime = (compareTime + 1) << HplAtm128Timer0AsyncP$shiftFromScale();
  compareTime = HplAtm128Timer0AsyncP$clock_to_sim(compareTime);
  compareTime += sim_time();




  phaseOffset = sim_time();
  phaseOffset -= HplAtm128Timer0AsyncP$last_zero();
  phaseOffset %= HplAtm128Timer0AsyncP$clock_to_sim(1 << HplAtm128Timer0AsyncP$shiftFromScale());
  compareTime -= phaseOffset;

  sim_log_debug(193U, "HplAtm128Timer0AsyncP", "Configuring new compare of %i for %i at time %llu  (@ %llu)\n", (int )compareVal, sim_node(), compareTime, sim_time());

  evt->time = compareTime;
}

# 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_euid(int mote)
#line 90
{
  long long int result;
  int tmp = sim_node();

#line 93
  sim_set_node(mote);
  result = SimMoteP$SimMote$getEuid();
  sim_set_node(tmp);
  return result;
}

  void sim_mote_set_euid(int mote, long long int id)
#line 99
{
  int tmp = sim_node();

#line 101
  sim_set_node(mote);
  SimMoteP$SimMote$setEuid(id);
  sim_set_node(tmp);
}










  int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)
#line 115
{
  int result;
  int tmpID = sim_node();

#line 118
  sim_set_node(mote);
  result = SimMoteP$SimMote$getVariableInfo(name, ptr, len);
  sim_log_debug(115U, "SimMoteP", "Fetched %s of %i to be %p with len %i (result %i)\n", name, mote, *ptr, *len, result);
  sim_set_node(tmpID);
  return result;
}

  void sim_mote_set_start_time(int mote, long long int t)
#line 125
{
  int tmpID = sim_node();

#line 127
  sim_set_node(mote);
  SimMoteP$startTime[sim_node()] = t;
  sim_log_debug(116U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
  sim_set_node(tmpID);
  return;
}










  void sim_mote_turn_on(int mote)
#line 143
{
  int tmp = sim_node();

#line 145
  sim_set_node(mote);
  SimMoteP$SimMote$turnOn();
  sim_set_node(tmp);
}

#line 72
static void SimMoteP$SimMote$turnOn(void )
#line 72
{
  if (!SimMoteP$isOn[sim_node()]) {
      if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
      __nesc_nido_initialise(sim_node());
      SimMoteP$startTime[sim_node()] = sim_time();
      sim_log_debug(114U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
      SimMoteP$isOn[sim_node()] = TRUE;
      sim_main_start_mote();
    }
}

#line 150
  void sim_mote_turn_off(int mote)
#line 150
{
  int tmp = sim_node();

#line 152
  sim_set_node(mote);
  SimMoteP$SimMote$turnOff();
  sim_set_node(tmp);
}










  void sim_mote_enqueue_boot_event(int mote)
#line 166
{
  int tmp = sim_node();

#line 168
  sim_set_node(mote);

  if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
      if (SimMoteP$bootEvent[sim_node()]->time == SimMoteP$startTime[sim_node()]) {

          SimMoteP$bootEvent[sim_node()]->cancelled = FALSE;
          return;
        }
      else {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
    }

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)malloc(sizeof(sim_event_t ));
  SimMoteP$bootEvent[sim_node()]->time = SimMoteP$startTime[sim_node()];
  SimMoteP$bootEvent[sim_node()]->mote = mote;
  SimMoteP$bootEvent[sim_node()]->force = TRUE;
  SimMoteP$bootEvent[sim_node()]->data = (void *)0;
  SimMoteP$bootEvent[sim_node()]->handle = SimMoteP$sim_mote_boot_handle;
  SimMoteP$bootEvent[sim_node()]->cleanup = sim_queue_cleanup_event;
  sim_queue_insert(SimMoteP$bootEvent[sim_node()]);

  sim_set_node(tmp);
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module Atm128EnergyHandlerP */
  if (!strcmp(varname, "Atm128EnergyHandlerP$bitstate"))
  {
    *addr = (uintptr_t)&Atm128EnergyHandlerP$bitstate[__nesc_mote];
    *size = sizeof(Atm128EnergyHandlerP$bitstate[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Atm128EnergyHandlerP$active"))
  {
    *addr = (uintptr_t)&Atm128EnergyHandlerP$active[__nesc_mote];
    *size = sizeof(Atm128EnergyHandlerP$active[__nesc_mote]);
    return 0;
  }

  /* Module McuSleepC */
  if (!strcmp(varname, "McuSleepC$atm128RegFile"))
  {
    *addr = (uintptr_t)&McuSleepC$atm128RegFile[__nesc_mote];
    *size = sizeof(McuSleepC$atm128RegFile[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "McuSleepC$dirty"))
  {
    *addr = (uintptr_t)&McuSleepC$dirty[__nesc_mote];
    *size = sizeof(McuSleepC$dirty[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "McuSleepC$powerState"))
  {
    *addr = (uintptr_t)&McuSleepC$powerState[__nesc_mote];
    *size = sizeof(McuSleepC$powerState[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "McuSleepC$atm128PowerBits"))
  {
    *addr = (uintptr_t)&*(unsigned char (*)
# 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/atm128/sim/McuSleepC.nc"
    [McuSleepC$ATM128_POWER_DOWN + 1])&McuSleepC$atm128PowerBits[__nesc_mote];
    *size = sizeof(*(unsigned char (*)
#line 65
    [McuSleepC$ATM128_POWER_DOWN + 1])&McuSleepC$atm128PowerBits[__nesc_mote]);
    return 0;
  }

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  if (!strcmp(varname, "SimSchedulerBasicP$m_head"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_head[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_tail"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_tail[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_next"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_next[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event_pending"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);
    return 0;
  }

  /* Module SimMoteP */
  if (!strcmp(varname, "SimMoteP$euid"))
  {
    *addr = (uintptr_t)&SimMoteP$euid[__nesc_mote];
    *size = sizeof(SimMoteP$euid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$startTime"))
  {
    *addr = (uintptr_t)&SimMoteP$startTime[__nesc_mote];
    *size = sizeof(SimMoteP$startTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$isOn"))
  {
    *addr = (uintptr_t)&SimMoteP$isOn[__nesc_mote];
    *size = sizeof(SimMoteP$isOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$bootEvent"))
  {
    *addr = (uintptr_t)&SimMoteP$bootEvent[__nesc_mote];
    *size = sizeof(SimMoteP$bootEvent[__nesc_mote]);
    return 0;
  }

  /* Module TossimActiveMessageC */
  if (!strcmp(varname, "TossimActiveMessageC$buffer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC$buffer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC$buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimActiveMessageC$bufferPointer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC$bufferPointer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC$bufferPointer[__nesc_mote]);
    return 0;
  }

  /* Module TossimPacketModelC */
  if (!strcmp(varname, "TossimPacketModelC$initialized"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$initialized[__nesc_mote];
    *size = sizeof(TossimPacketModelC$initialized[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$running"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$running[__nesc_mote];
    *size = sizeof(TossimPacketModelC$running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$backoffCount"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$backoffCount[__nesc_mote];
    *size = sizeof(TossimPacketModelC$backoffCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$neededFreeSamples"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$neededFreeSamples[__nesc_mote];
    *size = sizeof(TossimPacketModelC$neededFreeSamples[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sending"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sending[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$transmitting"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$transmitting[__nesc_mote];
    *size = sizeof(TossimPacketModelC$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sendingLength"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sendingLength[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sendingLength[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$destNode"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$destNode[__nesc_mote];
    *size = sizeof(TossimPacketModelC$destNode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sendEvent"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sendEvent[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sendEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$error"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$error[__nesc_mote];
    *size = sizeof(TossimPacketModelC$error[__nesc_mote]);
    return 0;
  }

  /* Module CpmModelC */
  if (!strcmp(varname, "CpmModelC$outgoing"))
  {
    *addr = (uintptr_t)&CpmModelC$outgoing[__nesc_mote];
    *size = sizeof(CpmModelC$outgoing[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$requestAck"))
  {
    *addr = (uintptr_t)&CpmModelC$requestAck[__nesc_mote];
    *size = sizeof(CpmModelC$requestAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$receiving"))
  {
    *addr = (uintptr_t)&CpmModelC$receiving[__nesc_mote];
    *size = sizeof(CpmModelC$receiving[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$transmitting"))
  {
    *addr = (uintptr_t)&CpmModelC$transmitting[__nesc_mote];
    *size = sizeof(CpmModelC$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$transmissionEndTime"))
  {
    *addr = (uintptr_t)&CpmModelC$transmissionEndTime[__nesc_mote];
    *size = sizeof(CpmModelC$transmissionEndTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$outstandingReceptionHead"))
  {
    *addr = (uintptr_t)&CpmModelC$outstandingReceptionHead[__nesc_mote];
    *size = sizeof(CpmModelC$outstandingReceptionHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$clearThreshold"))
  {
    *addr = (uintptr_t)&CpmModelC$clearThreshold[__nesc_mote];
    *size = sizeof(CpmModelC$clearThreshold[__nesc_mote]);
    return 0;
  }

  /* Module ActiveMessageAddressC */
  if (!strcmp(varname, "ActiveMessageAddressC$set"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$set[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ActiveMessageAddressC$addr"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$addr[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$addr[__nesc_mote]);
    return 0;
  }

  /* Module PacketEnergyEstimatorP */

  /* Module MultihopOscilloscopeC */
  if (!strcmp(varname, "MultihopOscilloscopeC$uartlen"))
  {
    *addr = (uintptr_t)&MultihopOscilloscopeC$uartlen[__nesc_mote];
    *size = sizeof(MultihopOscilloscopeC$uartlen[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultihopOscilloscopeC$sendbuf"))
  {
    *addr = (uintptr_t)&MultihopOscilloscopeC$sendbuf[__nesc_mote];
    *size = sizeof(MultihopOscilloscopeC$sendbuf[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultihopOscilloscopeC$uartbuf"))
  {
    *addr = (uintptr_t)&MultihopOscilloscopeC$uartbuf[__nesc_mote];
    *size = sizeof(MultihopOscilloscopeC$uartbuf[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultihopOscilloscopeC$sendbusy"))
  {
    *addr = (uintptr_t)&MultihopOscilloscopeC$sendbusy[__nesc_mote];
    *size = sizeof(MultihopOscilloscopeC$sendbusy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultihopOscilloscopeC$uartbusy"))
  {
    *addr = (uintptr_t)&MultihopOscilloscopeC$uartbusy[__nesc_mote];
    *size = sizeof(MultihopOscilloscopeC$uartbusy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultihopOscilloscopeC$local"))
  {
    *addr = (uintptr_t)&MultihopOscilloscopeC$local[__nesc_mote];
    *size = sizeof(MultihopOscilloscopeC$local[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultihopOscilloscopeC$reading"))
  {
    *addr = (uintptr_t)&MultihopOscilloscopeC$reading[__nesc_mote];
    *size = sizeof(MultihopOscilloscopeC$reading[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MultihopOscilloscopeC$suppress_count_change"))
  {
    *addr = (uintptr_t)&MultihopOscilloscopeC$suppress_count_change[__nesc_mote];
    *size = sizeof(MultihopOscilloscopeC$suppress_count_change[__nesc_mote]);
    return 0;
  }

  /* Module LedsP */

  /* Module Atm128AlarmAsyncP$0 */
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);
    return 0;
  }

  /* Module HplAtm128Timer0AsyncP */
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$inOverflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$inOverflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$inOverflow[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$lastZero"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$lastZero[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$lastZero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$oldScale"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$oldScale[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$oldScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$compare"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$compare[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$compare[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$overflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$overflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$overflow[__nesc_mote]);
    return 0;
  }

  /* Module AlarmToTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);
    return 0;
  }

  /* Module VirtualizeTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);
    return 0;
  }

  /* Module CounterToLocalTimeC$0 */

  /* Module ConstantSensorC$0 */

  /* Module CtpForwardingEngineP$0 */
  if (!strcmp(varname, "/*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState"))
  {
    *addr = (uintptr_t)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[__nesc_mote];
    *size = sizeof(/*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno"))
  {
    *addr = (uintptr_t)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno[__nesc_mote];
    *size = sizeof(/*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientEntries"))
  {
    *addr = (uintptr_t)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientEntries[__nesc_mote];
    *size = sizeof(/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientEntries[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs"))
  {
    *addr = (uintptr_t)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[__nesc_mote];
    *size = sizeof(/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsg"))
  {
    *addr = (uintptr_t)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsg[__nesc_mote];
    *size = sizeof(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr"))
  {
    *addr = (uintptr_t)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[__nesc_mote];
    *size = sizeof(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[__nesc_mote]);
    return 0;
  }

  /* Module PoolP$0 */
  if (!strcmp(varname, "/*CtpP.MessagePoolP.PoolP*/PoolP$0$free"))
  {
    *addr = (uintptr_t)&/*CtpP.MessagePoolP.PoolP*/PoolP$0$free[__nesc_mote];
    *size = sizeof(/*CtpP.MessagePoolP.PoolP*/PoolP$0$free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.MessagePoolP.PoolP*/PoolP$0$index"))
  {
    *addr = (uintptr_t)&/*CtpP.MessagePoolP.PoolP*/PoolP$0$index[__nesc_mote];
    *size = sizeof(/*CtpP.MessagePoolP.PoolP*/PoolP$0$index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.MessagePoolP.PoolP*/PoolP$0$queue"))
  {
    *addr = (uintptr_t)&/*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[__nesc_mote];
    *size = sizeof(/*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool"))
  {
    *addr = (uintptr_t)&/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool[__nesc_mote];
    *size = sizeof(/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool[__nesc_mote]);
    return 0;
  }

  /* Module PoolP$1 */
  if (!strcmp(varname, "/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free"))
  {
    *addr = (uintptr_t)&/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[__nesc_mote];
    *size = sizeof(/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index"))
  {
    *addr = (uintptr_t)&/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[__nesc_mote];
    *size = sizeof(/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue"))
  {
    *addr = (uintptr_t)&/*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[__nesc_mote];
    *size = sizeof(/*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool"))
  {
    *addr = (uintptr_t)&/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool[__nesc_mote];
    *size = sizeof(/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool[__nesc_mote]);
    return 0;
  }

  /* Module QueueC$0 */
  if (!strcmp(varname, "/*CtpP.SendQueueP*/QueueC$0$queue"))
  {
    *addr = (uintptr_t)&/*CtpP.SendQueueP*/QueueC$0$queue[__nesc_mote];
    *size = sizeof(/*CtpP.SendQueueP*/QueueC$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.SendQueueP*/QueueC$0$head"))
  {
    *addr = (uintptr_t)&/*CtpP.SendQueueP*/QueueC$0$head[__nesc_mote];
    *size = sizeof(/*CtpP.SendQueueP*/QueueC$0$head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.SendQueueP*/QueueC$0$tail"))
  {
    *addr = (uintptr_t)&/*CtpP.SendQueueP*/QueueC$0$tail[__nesc_mote];
    *size = sizeof(/*CtpP.SendQueueP*/QueueC$0$tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.SendQueueP*/QueueC$0$size"))
  {
    *addr = (uintptr_t)&/*CtpP.SendQueueP*/QueueC$0$size[__nesc_mote];
    *size = sizeof(/*CtpP.SendQueueP*/QueueC$0$size[__nesc_mote]);
    return 0;
  }

  /* Module LruCtpMsgCacheP$0 */
  if (!strcmp(varname, "/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache"))
  {
    *addr = (uintptr_t)&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[__nesc_mote];
    *size = sizeof(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first"))
  {
    *addr = (uintptr_t)&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[__nesc_mote];
    *size = sizeof(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count"))
  {
    *addr = (uintptr_t)&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[__nesc_mote];
    *size = sizeof(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[__nesc_mote]);
    return 0;
  }

  /* Module LinkEstimatorP */
  if (!strcmp(varname, "LinkEstimatorP$NeighborTable"))
  {
    *addr = (uintptr_t)&LinkEstimatorP$NeighborTable[__nesc_mote];
    *size = sizeof(LinkEstimatorP$NeighborTable[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorP$linkEstSeq"))
  {
    *addr = (uintptr_t)&LinkEstimatorP$linkEstSeq[__nesc_mote];
    *size = sizeof(LinkEstimatorP$linkEstSeq[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorP$prevSentIdx"))
  {
    *addr = (uintptr_t)&LinkEstimatorP$prevSentIdx[__nesc_mote];
    *size = sizeof(LinkEstimatorP$prevSentIdx[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP$0 */

  /* Module AMQueueImplP$0 */
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote]);
    return 0;
  }

  /* Module CtpRoutingEngineP$0 */
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$ECNOff"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$ECNOff[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$ECNOff[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$radioOn"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$radioOn[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$radioOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$running"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$running[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$sending"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$sending[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$justEvicted"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$justEvicted[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$justEvicted[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$routingTable"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$routingTable[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$routingTable[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$parentChanges"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$parentChanges[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$parentChanges[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$currentInterval"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$t"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$t[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$t[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed[__nesc_mote]);
    return 0;
  }

  /* Module RandomMlcgC */
  if (!strcmp(varname, "RandomMlcgC$seed"))
  {
    *addr = (uintptr_t)&RandomMlcgC$seed[__nesc_mote];
    *size = sizeof(RandomMlcgC$seed[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP$1 */

  /* Module DummyActiveMessageP */

  /* Module CollectionIdP$0 */

  /* Module SerialActiveMessageC */

  /* Module AMQueueEntryP$2 */

  /* Module AMQueueImplP$1 */
  if (!strcmp(varname, "/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current"))
  {
    *addr = (uintptr_t)&/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[__nesc_mote];
    *size = sizeof(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue"))
  {
    *addr = (uintptr_t)&/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[__nesc_mote];
    *size = sizeof(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask"))
  {
    *addr = (uintptr_t)&/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[__nesc_mote];
    *size = sizeof(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[__nesc_mote]);
    return 0;
  }

  /* Module PoolP$2 */
  if (!strcmp(varname, "/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free"))
  {
    *addr = (uintptr_t)&/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free[__nesc_mote];
    *size = sizeof(/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index"))
  {
    *addr = (uintptr_t)&/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index[__nesc_mote];
    *size = sizeof(/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$queue"))
  {
    *addr = (uintptr_t)&/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$queue[__nesc_mote];
    *size = sizeof(/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool"))
  {
    *addr = (uintptr_t)&/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool[__nesc_mote];
    *size = sizeof(/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool[__nesc_mote]);
    return 0;
  }

  /* Module QueueC$1 */
  if (!strcmp(varname, "/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue"))
  {
    *addr = (uintptr_t)&/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue[__nesc_mote];
    *size = sizeof(/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$head"))
  {
    *addr = (uintptr_t)&/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$head[__nesc_mote];
    *size = sizeof(/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$tail"))
  {
    *addr = (uintptr_t)&/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$tail[__nesc_mote];
    *size = sizeof(/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size"))
  {
    *addr = (uintptr_t)&/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size[__nesc_mote];
    *size = sizeof(/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size[__nesc_mote]);
    return 0;
  }

  /* Module PoolP$3 */
  if (!strcmp(varname, "/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free"))
  {
    *addr = (uintptr_t)&/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free[__nesc_mote];
    *size = sizeof(/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index"))
  {
    *addr = (uintptr_t)&/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index[__nesc_mote];
    *size = sizeof(/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$queue"))
  {
    *addr = (uintptr_t)&/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$queue[__nesc_mote];
    *size = sizeof(/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool"))
  {
    *addr = (uintptr_t)&/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool[__nesc_mote];
    *size = sizeof(/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool[__nesc_mote]);
    return 0;
  }

  /* Module QueueC$2 */
  if (!strcmp(varname, "/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue"))
  {
    *addr = (uintptr_t)&/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue[__nesc_mote];
    *size = sizeof(/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$head"))
  {
    *addr = (uintptr_t)&/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$head[__nesc_mote];
    *size = sizeof(/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$tail"))
  {
    *addr = (uintptr_t)&/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$tail[__nesc_mote];
    *size = sizeof(/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size"))
  {
    *addr = (uintptr_t)&/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size[__nesc_mote];
    *size = sizeof(/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP$3 */

  /* Module UARTDebugSenderP */
  if (!strcmp(varname, "UARTDebugSenderP$sending"))
  {
    *addr = (uintptr_t)&UARTDebugSenderP$sending[__nesc_mote];
    *size = sizeof(UARTDebugSenderP$sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTDebugSenderP$len"))
  {
    *addr = (uintptr_t)&UARTDebugSenderP$len[__nesc_mote];
    *size = sizeof(UARTDebugSenderP$len[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTDebugSenderP$statLogReceived"))
  {
    *addr = (uintptr_t)&UARTDebugSenderP$statLogReceived[__nesc_mote];
    *size = sizeof(UARTDebugSenderP$statLogReceived[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTDebugSenderP$statEnqueueFail"))
  {
    *addr = (uintptr_t)&UARTDebugSenderP$statEnqueueFail[__nesc_mote];
    *size = sizeof(UARTDebugSenderP$statEnqueueFail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTDebugSenderP$statSendFail"))
  {
    *addr = (uintptr_t)&UARTDebugSenderP$statSendFail[__nesc_mote];
    *size = sizeof(UARTDebugSenderP$statSendFail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTDebugSenderP$statSendDoneFail"))
  {
    *addr = (uintptr_t)&UARTDebugSenderP$statSendDoneFail[__nesc_mote];
    *size = sizeof(UARTDebugSenderP$statSendDoneFail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTDebugSenderP$statSendDoneOk"))
  {
    *addr = (uintptr_t)&UARTDebugSenderP$statSendDoneOk[__nesc_mote];
    *size = sizeof(UARTDebugSenderP$statSendDoneOk[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTDebugSenderP$statSendDoneBug"))
  {
    *addr = (uintptr_t)&UARTDebugSenderP$statSendDoneBug[__nesc_mote];
    *size = sizeof(UARTDebugSenderP$statSendDoneBug[__nesc_mote]);
    return 0;
  }

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module Atm128EnergyHandlerP */
  memcpy((void *)&Atm128EnergyHandlerP$bitstate[__nesc_mote], (void *)&(unsigned char [3]){ 0, 0, 0 }, sizeof Atm128EnergyHandlerP$bitstate[__nesc_mote]);
  Atm128EnergyHandlerP$active[__nesc_mote] = 0;

  /* Module McuSleepC */
  memset((void *)&McuSleepC$atm128RegFile[__nesc_mote], 0, sizeof McuSleepC$atm128RegFile[__nesc_mote]);
  McuSleepC$dirty[__nesc_mote] = TRUE;
  McuSleepC$powerState[__nesc_mote] = McuSleepC$ATM128_POWER_IDLE;
  memcpy((void *)&*(unsigned char (*)[McuSleepC$ATM128_POWER_DOWN + 1])&McuSleepC$atm128PowerBits[__nesc_mote], (void *)&(unsigned char const [McuSleepC$ATM128_POWER_DOWN + 1]){ 0, 1 << McuSleepC$SM0, ((1 << McuSleepC$SM2) | (1 << McuSleepC$SM1)) | (1 << McuSleepC$SM0), (1 << McuSleepC$SM1) | (1 << McuSleepC$SM0), (1 << McuSleepC$SM2) | (1 << McuSleepC$SM1), 1 << McuSleepC$SM1 }, sizeof *(unsigned char (*)[McuSleepC$ATM128_POWER_DOWN + 1])&McuSleepC$atm128PowerBits[__nesc_mote]);

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  memset((void *)&SimSchedulerBasicP$m_head[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_head[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP$m_tail[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_tail[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP$m_next[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_next[__nesc_mote]);
  SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote] = FALSE;
  memset((void *)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote], 0, sizeof SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);

  /* Module SimMoteP */
  memset((void *)&SimMoteP$euid[__nesc_mote], 0, sizeof SimMoteP$euid[__nesc_mote]);
  memset((void *)&SimMoteP$startTime[__nesc_mote], 0, sizeof SimMoteP$startTime[__nesc_mote]);
  memset((void *)&SimMoteP$isOn[__nesc_mote], 0, sizeof SimMoteP$isOn[__nesc_mote]);
  memset((void *)&SimMoteP$bootEvent[__nesc_mote], 0, sizeof SimMoteP$bootEvent[__nesc_mote]);

  /* Module TossimActiveMessageC */
  memset((void *)&TossimActiveMessageC$buffer[__nesc_mote], 0, sizeof TossimActiveMessageC$buffer[__nesc_mote]);
  TossimActiveMessageC$bufferPointer[__nesc_mote] = &TossimActiveMessageC$buffer[__nesc_mote];

  /* Module TossimPacketModelC */
  TossimPacketModelC$initialized[__nesc_mote] = FALSE;
  TossimPacketModelC$running[__nesc_mote] = FALSE;
  memset((void *)&TossimPacketModelC$backoffCount[__nesc_mote], 0, sizeof TossimPacketModelC$backoffCount[__nesc_mote]);
  memset((void *)&TossimPacketModelC$neededFreeSamples[__nesc_mote], 0, sizeof TossimPacketModelC$neededFreeSamples[__nesc_mote]);
  TossimPacketModelC$sending[__nesc_mote] = (void *)0;
  TossimPacketModelC$transmitting[__nesc_mote] = FALSE;
  TossimPacketModelC$sendingLength[__nesc_mote] = 0;
  memset((void *)&TossimPacketModelC$destNode[__nesc_mote], 0, sizeof TossimPacketModelC$destNode[__nesc_mote]);
  memset((void *)&TossimPacketModelC$sendEvent[__nesc_mote], 0, sizeof TossimPacketModelC$sendEvent[__nesc_mote]);
  TossimPacketModelC$error[__nesc_mote] = 0;

  /* Module CpmModelC */
  memset((void *)&CpmModelC$outgoing[__nesc_mote], 0, sizeof CpmModelC$outgoing[__nesc_mote]);
  memset((void *)&CpmModelC$requestAck[__nesc_mote], 0, sizeof CpmModelC$requestAck[__nesc_mote]);
  CpmModelC$receiving[__nesc_mote] = 0;
  CpmModelC$transmitting[__nesc_mote] = 0;
  memset((void *)&CpmModelC$transmissionEndTime[__nesc_mote], 0, sizeof CpmModelC$transmissionEndTime[__nesc_mote]);
  CpmModelC$outstandingReceptionHead[__nesc_mote] = (void *)0;
  CpmModelC$clearThreshold[__nesc_mote] = -72.0;

  /* Module ActiveMessageAddressC */
  ActiveMessageAddressC$set[__nesc_mote] = FALSE;
  memset((void *)&ActiveMessageAddressC$addr[__nesc_mote], 0, sizeof ActiveMessageAddressC$addr[__nesc_mote]);

  /* Module PacketEnergyEstimatorP */

  /* Module MultihopOscilloscopeC */
  memset((void *)&MultihopOscilloscopeC$uartlen[__nesc_mote], 0, sizeof MultihopOscilloscopeC$uartlen[__nesc_mote]);
  memset((void *)&MultihopOscilloscopeC$sendbuf[__nesc_mote], 0, sizeof MultihopOscilloscopeC$sendbuf[__nesc_mote]);
  memset((void *)&MultihopOscilloscopeC$uartbuf[__nesc_mote], 0, sizeof MultihopOscilloscopeC$uartbuf[__nesc_mote]);
  MultihopOscilloscopeC$sendbusy[__nesc_mote] = FALSE;
  MultihopOscilloscopeC$uartbusy[__nesc_mote] = FALSE;
  memset((void *)&MultihopOscilloscopeC$local[__nesc_mote], 0, sizeof MultihopOscilloscopeC$local[__nesc_mote]);
  memset((void *)&MultihopOscilloscopeC$reading[__nesc_mote], 0, sizeof MultihopOscilloscopeC$reading[__nesc_mote]);
  memset((void *)&MultihopOscilloscopeC$suppress_count_change[__nesc_mote], 0, sizeof MultihopOscilloscopeC$suppress_count_change[__nesc_mote]);

  /* Module LedsP */

  /* Module Atm128AlarmAsyncP$0 */
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);

  /* Module HplAtm128Timer0AsyncP */
  HplAtm128Timer0AsyncP$inOverflow[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$lastZero[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$oldScale[__nesc_mote] = AVR_CLOCK_OFF;
  memset((void *)&HplAtm128Timer0AsyncP$compare[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$compare[__nesc_mote]);
  memset((void *)&HplAtm128Timer0AsyncP$overflow[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$overflow[__nesc_mote]);

  /* Module AlarmToTimerC$0 */
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);

  /* Module VirtualizeTimerC$0 */
  memset((void *)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote], 0, sizeof /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);

  /* Module CounterToLocalTimeC$0 */

  /* Module ConstantSensorC$0 */

  /* Module CtpForwardingEngineP$0 */
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[__nesc_mote] = 0;
  memset((void *)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno[__nesc_mote], 0, sizeof /*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno[__nesc_mote]);
  memset((void *)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientEntries[__nesc_mote], 0, sizeof /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientEntries[__nesc_mote]);
  memset((void *)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[__nesc_mote], 0, sizeof /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[__nesc_mote]);
  memset((void *)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsg[__nesc_mote], 0, sizeof /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsg[__nesc_mote]);
  memset((void *)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[__nesc_mote], 0, sizeof /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[__nesc_mote]);

  /* Module PoolP$0 */
  memset((void *)&/*CtpP.MessagePoolP.PoolP*/PoolP$0$free[__nesc_mote], 0, sizeof /*CtpP.MessagePoolP.PoolP*/PoolP$0$free[__nesc_mote]);
  memset((void *)&/*CtpP.MessagePoolP.PoolP*/PoolP$0$index[__nesc_mote], 0, sizeof /*CtpP.MessagePoolP.PoolP*/PoolP$0$index[__nesc_mote]);
  memset((void *)&/*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[__nesc_mote], 0, sizeof /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[__nesc_mote]);
  memset((void *)&/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool[__nesc_mote], 0, sizeof /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool[__nesc_mote]);

  /* Module PoolP$1 */
  memset((void *)&/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[__nesc_mote], 0, sizeof /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[__nesc_mote]);
  memset((void *)&/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[__nesc_mote], 0, sizeof /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[__nesc_mote]);
  memset((void *)&/*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[__nesc_mote], 0, sizeof /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[__nesc_mote]);
  memset((void *)&/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool[__nesc_mote], 0, sizeof /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool[__nesc_mote]);

  /* Module QueueC$0 */
  memset((void *)&/*CtpP.SendQueueP*/QueueC$0$queue[__nesc_mote], 0, sizeof /*CtpP.SendQueueP*/QueueC$0$queue[__nesc_mote]);
  /*CtpP.SendQueueP*/QueueC$0$head[__nesc_mote] = 0;
  /*CtpP.SendQueueP*/QueueC$0$tail[__nesc_mote] = 0;
  /*CtpP.SendQueueP*/QueueC$0$size[__nesc_mote] = 0;

  /* Module LruCtpMsgCacheP$0 */
  memset((void *)&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[__nesc_mote], 0, sizeof /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[__nesc_mote]);
  memset((void *)&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[__nesc_mote], 0, sizeof /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[__nesc_mote]);
  memset((void *)&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[__nesc_mote], 0, sizeof /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[__nesc_mote]);

  /* Module LinkEstimatorP */
  memset((void *)&LinkEstimatorP$NeighborTable[__nesc_mote], 0, sizeof LinkEstimatorP$NeighborTable[__nesc_mote]);
  LinkEstimatorP$linkEstSeq[__nesc_mote] = 0;
  LinkEstimatorP$prevSentIdx[__nesc_mote] = 0;

  /* Module AMQueueEntryP$0 */

  /* Module AMQueueImplP$0 */
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote] = 2;
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote]);
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote]);

  /* Module CtpRoutingEngineP$0 */
  /*CtpP.Router*/CtpRoutingEngineP$0$ECNOff[__nesc_mote] = TRUE;
  /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[__nesc_mote] = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP$0$running[__nesc_mote] = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP$0$sending[__nesc_mote] = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP$0$justEvicted[__nesc_mote] = FALSE;
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[__nesc_mote]);
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[__nesc_mote]);
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr[__nesc_mote]);
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer[__nesc_mote]);
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[__nesc_mote]);
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$routingTable[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[__nesc_mote]);
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[__nesc_mote]);
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$parentChanges[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$parentChanges[__nesc_mote]);
  /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[__nesc_mote] = 128;
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$t[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$t[__nesc_mote]);
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed[__nesc_mote]);

  /* Module RandomMlcgC */
  memset((void *)&RandomMlcgC$seed[__nesc_mote], 0, sizeof RandomMlcgC$seed[__nesc_mote]);

  /* Module AMQueueEntryP$1 */

  /* Module DummyActiveMessageP */

  /* Module CollectionIdP$0 */

  /* Module SerialActiveMessageC */

  /* Module AMQueueEntryP$2 */

  /* Module AMQueueImplP$1 */
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current[__nesc_mote] = 2;
  memset((void *)&/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[__nesc_mote], 0, sizeof /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[__nesc_mote]);
  memset((void *)&/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[__nesc_mote], 0, sizeof /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[__nesc_mote]);

  /* Module PoolP$2 */
  memset((void *)&/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free[__nesc_mote], 0, sizeof /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free[__nesc_mote]);
  memset((void *)&/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index[__nesc_mote], 0, sizeof /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index[__nesc_mote]);
  memset((void *)&/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$queue[__nesc_mote], 0, sizeof /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$queue[__nesc_mote]);
  memset((void *)&/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool[__nesc_mote], 0, sizeof /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool[__nesc_mote]);

  /* Module QueueC$1 */
  memset((void *)&/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue[__nesc_mote], 0, sizeof /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue[__nesc_mote]);
  /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$head[__nesc_mote] = 0;
  /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$tail[__nesc_mote] = 0;
  /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size[__nesc_mote] = 0;

  /* Module PoolP$3 */
  memset((void *)&/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free[__nesc_mote], 0, sizeof /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free[__nesc_mote]);
  memset((void *)&/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index[__nesc_mote], 0, sizeof /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index[__nesc_mote]);
  memset((void *)&/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$queue[__nesc_mote], 0, sizeof /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$queue[__nesc_mote]);
  memset((void *)&/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool[__nesc_mote], 0, sizeof /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool[__nesc_mote]);

  /* Module QueueC$2 */
  memset((void *)&/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue[__nesc_mote], 0, sizeof /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue[__nesc_mote]);
  /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$head[__nesc_mote] = 0;
  /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$tail[__nesc_mote] = 0;
  /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size[__nesc_mote] = 0;

  /* Module AMQueueEntryP$3 */

  /* Module UARTDebugSenderP */
  memset((void *)&UARTDebugSenderP$sending[__nesc_mote], 0, sizeof UARTDebugSenderP$sending[__nesc_mote]);
  memset((void *)&UARTDebugSenderP$len[__nesc_mote], 0, sizeof UARTDebugSenderP$len[__nesc_mote]);
  UARTDebugSenderP$statLogReceived[__nesc_mote] = 0;
  UARTDebugSenderP$statEnqueueFail[__nesc_mote] = 0;
  UARTDebugSenderP$statSendFail[__nesc_mote] = 0;
  UARTDebugSenderP$statSendDoneFail[__nesc_mote] = 0;
  UARTDebugSenderP$statSendDoneOk[__nesc_mote] = 0;
  UARTDebugSenderP$statSendDoneBug[__nesc_mote] = 0;

}
