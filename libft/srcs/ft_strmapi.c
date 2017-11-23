#include "libft.h"

char            *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t size;
    char *str;
    size_t i;

    size = ft_strlen(s);
    i = 0;
    if (!size)
        return NULL;
    str = ft_strnew(size);
    while (i < size)
    {
        str[i] = f((unsigned int)i, (char)s[i]);
        i ++;
    }
    return (str);
}
