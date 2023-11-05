#include "libft.h"

void ft_lstiter(t_list *lst, void(*f)(void *))
{
    t_list *node;

    node = *lst;
    while(node->next)
    {
        node->content = f(node->content);
        node = node->next;
    }
}