#include "libft.h"

int         ft_strnequ(char const *s1, char const *s2, size_t n)
{
    if (strncmp(s1, s2, n) == 0)
        return (1);
    else
        return (0);
}
