#include "libft.h"

void            ft_bzero(void *s, size_t n)
{
    size_t i;
    char *ptr;

    if (n == 0)
        return ;
    ptr = (char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}
