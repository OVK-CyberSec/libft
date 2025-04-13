#include "libft.h"


t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list = NULL;
    t_list *new_elem;

    while (lst)
    {
        void *new_content = f(lst->content);
        new_elem = ft_lstnew(new_content);
        if (!new_elem)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_elem);
        lst = lst->next;
    }
    return (new_list);
}