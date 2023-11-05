#include <stdlib.h>
#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list* node;

    node = (t_list *)malloc(sizeof(t_list));
    node->content = content;
    node->next = 0;
    return(node);
}