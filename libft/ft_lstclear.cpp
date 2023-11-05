#include "libft.h"
#include <stdlib.h>

static void ft_lstdelone(t_list *lst, void(*del)(void *))
{
    del(lst->content);
    free(lst);
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