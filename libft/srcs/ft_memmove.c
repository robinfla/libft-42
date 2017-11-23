#include "libft.h"

void            *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    char *ptr;
    const char *ptr2;
    char *tmp;

    i = -1;
    ptr = (char *)dst;
    ptr2 = (const char *)src;
    if ((tmp = malloc(sizeof(char) * len)) == NULL)
        return NULL;
    while (++i < len)
        tmp[i] = ptr2[i];
    i = -1;
    while (++i < len)
        ptr[i] = tmp[i];
    free(tmp);
    return (dst);
}
