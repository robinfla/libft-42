#include "libft.h"

int         ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ptr;
    unsigned char *ptr2;
    size_t  i;

    ptr = (unsigned char *)s1;
    ptr2 = (unsigned char *)s2;

    i = -1;
    while (++i < n && ptr[i] == ptr2[i])
        ;
    if (i == n)
        return (0);
    else
        return (ptr[i] - ptr2[i]);
}
