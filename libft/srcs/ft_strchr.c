#include "libft.h"

char            *ft_strchr(const char *s, int c)
{
    size_t i;
    const char *ptr;
    size_t j;

    j = ft_strlen(s);
    ptr = s;
    i = 0;
    while (i < j + 1)
    {
        if (ptr[i] == (char)c)
            return ((char *)ptr + i);
        i++;
    }
    return NULL;
}
