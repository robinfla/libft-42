#include "../includes/libft.h"

int         ft_isalpha(int c)
{
    if (islower(c) || isupper(c))
        return (1);
    else
        return (0);
}
