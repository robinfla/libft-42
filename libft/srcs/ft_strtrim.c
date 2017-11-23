#include "libft.h"

char            *ft_strtrim(char const *s)
{
    char *str;
    size_t size;
    size_t i;

    size = ft_strlen(s);
    str = ft_strnew(size);
    if (!str)
        return NULL;
    i = 0;
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
        i++;
    ft_strcpy(str, s + i);
    size = ft_strlen(str);
    i = 2;
    while (str[size-i] == ' ' || str[size - i] == '\n' || str[size - i] == '\t')
        i++;
    if (i > 2)
        str[size - i + 1] = '\0';
    return (str);
}
