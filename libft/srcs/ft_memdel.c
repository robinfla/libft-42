#include "libft.h"

void            ft_memdel(void **ap)
{
    if (!ap || !*ap)
        return ;
    free (*ap);
    *ap = NULL;
}
