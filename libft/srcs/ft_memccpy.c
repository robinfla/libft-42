#include "libft.h"

void        *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    char *ptr;
    size_t i;

    i = -1;
    ptr = (char *)dst;
    while (++i < n)
    {
    	ptr[i] = *((unsigned char *)src + i);
    	if (*((unsigned char *)src + i) == (unsigned char)c)
    		return (dst + i + 1);
    }
    return (NULL);
}
