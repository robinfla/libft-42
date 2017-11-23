#include "libft.h"

void            ft_striter(char *s, void (*f)(char *))
{
    size_t size;
    size_t i;

    i = 0;
    size = ft_strlen(s);
    while (i < size)
    {
        f(&s[i]);
        i++;
    }
}
