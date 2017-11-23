#include "libft.h"

void            ft_strclr(char *s)
{
    size_t size;

    size = ft_strlen(s);
    ft_bzero(s, size);
}
