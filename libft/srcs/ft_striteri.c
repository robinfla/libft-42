#include "libft.h"

void            ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t i;
    size_t size;

    size = ft_strlen(s);
    i = 0;
    while (i < size)
    {
        f((unsigned int)i, &s[i]);
        i++;
    }
}
