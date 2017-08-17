#ifndef __STUB_FFI_H__
#define __STUB_FFI_H__

#include <stddef.h>
#include <limits.h>

typedef struct _ffi_type
{
    size_t              size;
    unsigned short      alignment;
    unsigned short      type;
    struct _ffi_type**  elements;
} ffi_type;

ffi_type    ffi_type_void;
ffi_type    ffi_type_uint8;
ffi_type    ffi_type_sint8;
ffi_type    ffi_type_uint16;
ffi_type    ffi_type_sint16;
ffi_type    ffi_type_uint32;
ffi_type    ffi_type_sint32;
ffi_type    ffi_type_uint64;
ffi_type    ffi_type_sint64;
ffi_type    ffi_type_float;
ffi_type    ffi_type_double;
ffi_type    ffi_type_longdouble;
ffi_type    ffi_type_pointer;

#if SCHAR_MAX == 127
#   define ffi_type_uchar   ffi_type_uint8
#   define ffi_type_schar   ffi_type_sint8
#endif

#if SHRT_MAX == 32767
#   define ffi_type_ushort  ffi_type_uint16
#   define ffi_type_sshort  ffi_type_sint16
#elif SHRT_MAX == 2147483647
#   define ffi_type_ushort  ffi_type_uint32
#   define ffi_type_sshort  ffi_type_sint32
#endif

#if INT_MAX == 32767
#   define ffi_type_uint    ffi_type_uint16
#   define ffi_type_sint    ffi_type_sint16
#elif INT_MAX == 2147483647
#   define ffi_type_uint    ffi_type_uint32
#   define ffi_type_sint    ffi_type_sint32
#elif INT_MAX == 9223372036854775807
#   define ffi_type_uint    ffi_type_uint64
#   define ffi_type_sint    ffi_type_sint64
#endif

#define ffi_type_ulong  ffi_type_uint64
#define ffi_type_slong  ffi_type_sint64

#ifdef __ILP32__
#define FFI_SIZEOF_ARG 8
#define FFI_SIZEOF_JAVA_RAW  4
typedef unsigned long long ffi_arg;
typedef signed long long ffi_sarg;
#else
typedef unsigned long ffi_arg;
typedef signed long ffi_sarg;
#endif

typedef enum ffi_abi
{
    FFI_FIRST_ABI = 0,
    FFI_SYSV,
    FFI_LAST_ABI,
    FFI_DEFAULT_ABI = FFI_SYSV
} ffi_abi;

typedef enum
{
    FFI_OK = 0,
    FFI_BAD_TYPEDEF,
    FFI_BAD_ABI
} ffi_status;

typedef struct
{
    ffi_abi abi;
    unsigned nargs;
    ffi_type **arg_types;
    ffi_type *rtype;
    unsigned bytes;
    unsigned flags;
} ffi_cif;


////////////////////////////////////////////////////////////////////////////////////////////////////

static inline ffi_status ffi_prep_cif(ffi_cif *cif,
                        ffi_abi abi,
                        unsigned int nargs,
                        ffi_type *rtype,
                        ffi_type **atypes)
{
    return FFI_OK;
}

static inline ffi_status ffi_prep_cif_var(ffi_cif *cif,
                            ffi_abi abi,
                            unsigned int nfixedargs,
                            unsigned int ntotalargs,
                            ffi_type *rtype,
                            ffi_type **atypes)
{
    return FFI_OK;
}

static inline void ffi_call(ffi_cif *cif,
                void (*fn)(void),
                void *rvalue,
                void **avalue)
{
}

#endif  /* __STUB_FFI_H__ */
