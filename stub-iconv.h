#ifndef __STUB_ICONV_H__
#define __STUB_ICONV_H__

#include <features.h>
#define __need_size_t
#include <stddef.h>

typedef void *iconv_t;

static inline iconv_t iconv_open (const char *__tocode, const char *__fromcode)
{
    return NULL;
}

static inline size_t iconv (iconv_t __cd, char **__restrict __inbuf,
                             size_t *__restrict __inbytesleft,
                             char **__restrict __outbuf,
                             size_t *__restrict __outbytesleft)
{
    return 0;
}

static inline int iconv_close (iconv_t __cd)
{
    return 0;
}

#endif  /* __STUB_ICONV_H__ */
