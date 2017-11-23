#include "libft.h"

char            *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t size;

    size = ft_strlen(s1) + ft_strlen(s2);
    if ((str = malloc(sizeof(char) * size + 1)) == NULL)
        return NULL;
    ft_strcpy(str, s1);
    ft_strlcat(str, s2, size + 1);
    return (str);
}
