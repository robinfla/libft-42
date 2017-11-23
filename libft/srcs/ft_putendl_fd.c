#include "libft.h"

void            ft_putendl_fd(char const *s, int fd)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
    ft_putchar_fd('\n', fd);
}
