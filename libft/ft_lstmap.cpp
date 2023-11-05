#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
    t_list* node;

    node = (t_list *)malloc(sizeof(t_list));
    node->content = content;
    node->next = 0;
    return(node);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *node;

    node = *lst;
    while(node->next)
        node = node->next;
    node->next = new;
}

int ft_lstsize(t_list *lst)
{
    t_list *node;
    int len;

    len = 1;
    node = *lst;
    while(node->next)
    {
        node = node->next;
        len++;
    }
    return (len);
}

void ft_lstclear(t_list **lst, void(*del)(void *))
{
    t_list *node;
    
    node = *lst;
    while(node->next != 0)
    {
        ft_lstdelone(node);
        node = node->next;
    }
    // Finally, the pointer to the list must be set to NULL.
}

// The new list.
// NULL if the allocation fails.
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list **new_lst;
    t_list *adress;

    adress = lst;
    while(lst->next != 0)
    {
        if (ft_lstsize(*new_lst) == 1)
            new_lst->content = f(lst->content);
        else
            ft_lstadd_back(new_lst, ft_lstnew(f(lst->content)));
        lst = lst->next;
    }
    ft_lstclear(adress);
}