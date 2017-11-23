#include "libft.h"

char            *ft_strrchr(const char *s, int c)
{
    size_t i;
    const char *ptr;

    i = ft_strlen(s);
    ptr = s;
    while (i)
    {
        if (ptr[i] == (char)c)
            return ((char *)ptr + i);
        i--;
    }
    if (ptr[i] == (char)c)
    {
        return ((char *)ptr);
    }
    else
        return NULL;
}
