#include "libft.h"

char            *ft_strnew(size_t size)
{
    char *str;

    if ((str = malloc(size * sizeof(char) + 1)) == NULL)
        return NULL;
    ft_bzero(str, size + 1);
    return (str);
}
