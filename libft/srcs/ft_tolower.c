#include "libft.h"

int         ft_tolower(int c)
{
    if (isupper(c))
        c = c + 32;
    return (c);
}
