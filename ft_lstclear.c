#include <stdlib.h>
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *temp;

    temp = *lst;
    if (!lst || !(*lst) || !del)
        return ;
    while (*lst)
    {
        temp = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        *lst = temp;
    }
}