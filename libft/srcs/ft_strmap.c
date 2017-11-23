#include "libft.h"

char            *ft_strmap(char const *s, char (*f)(char))
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
        str[i] = f((char)s[i]);
        i ++;
    }
    return (str);
}
