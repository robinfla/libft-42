#include "libft.h"

t_list          *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list *new_list;
    t_list *tmp;
    t_list *tmp2;

    if (!lst)
        return NULL;
    tmp2 = lst;
    tmp = f(lst);
    new_list = tmp;
    while (tmp2->next)
    {
        tmp2 = tmp2->next;
        if(!(tmp->next = f(tmp2)))
        {
            free(tmp->next);
            return NULL;
        }
        tmp = tmp->next;
    }
    return (new_list);
}
