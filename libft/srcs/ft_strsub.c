#include "libft.h"

char            *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;

    str = ft_strnew(len);
    i = 0;
    if (!str)
        return NULL;
    while (s[start] && i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    return (str);

}
