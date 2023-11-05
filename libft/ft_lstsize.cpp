#include "libft.h"

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