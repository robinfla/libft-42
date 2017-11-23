#include "libft.h"

int         ft_toupper(int c)
{
    if (islower(c))
        c = c - 32;
    return (c);
}
