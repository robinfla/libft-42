#include "libft.h"

void        *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *ptr1;
    const char *ptr2;

    i = 0;
    ptr1 = (char *)dst;
    ptr2 = (const char *)src;
    while (i < n)
    {
        ptr1[i] = ptr2[i];
        i++;
    }
    return (dst);
}
