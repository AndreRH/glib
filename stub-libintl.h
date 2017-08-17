#ifndef __STUB_LIBINTL_H__
#define __STUB_LIBINTL_H__

#include <features.h>

#undef gettext
#undef dgettext
#undef __dgettext
#undef dcgettext
#undef __dcgettext
#undef ngettext
#undef dngettext
#undef dcngettext
#undef textdomain
#undef bindtextdomain
#undef bind_textdomain_codeset

#define gettext(X) X
/*static inline char *gettext (const char *__msgid)
{
    return "stub";
}*/

static inline char *dgettext (const char *__domainname, const char *__msgid)
{
    return "stub";
}

static inline char *__dgettext (const char *__domainname, const char *__msgid)
{
    return "stub";
}

static inline char *dcgettext (const char *__domainname,
                                const char *__msgid, int __category)
{
    return "stub";
}

static inline char *__dcgettext (const char *__domainname,
                                    const char *__msgid, int __category)
{
    return "stub";
}

static inline char *ngettext (const char *__msgid1, const char *__msgid2,
                                unsigned long int __n)
{
    return "stub";
}

static inline char *dngettext (const char *__domainname, const char *__msgid1,
                                const char *__msgid2, unsigned long int __n)
{
    return "stub";
}

static inline char *dcngettext (const char *__domainname, const char *__msgid1,
                                 const char *__msgid2, unsigned long int __n,
                                 int __category)
{
    return "stub";
}

static inline char *textdomain (const char *__domainname)
{
    return "stub";
}

static inline char *bindtextdomain (const char *__domainname,
                                    const char *__dirname)
{
    return "stub";
}

static inline char *bind_textdomain_codeset (const char *__domainname,
                                                const char *__codeset)
{
    return "stub";
}

# define __need_NULL
# include <stddef.h>
# include <locale.h>

#endif  /* __STUB_LIBINTL_H__ */
