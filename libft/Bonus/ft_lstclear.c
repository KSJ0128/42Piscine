/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:03:30 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/06 15:33:04 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstdelone(t_list *lst, void(*del)(void *))
{
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void(*del)(void *))
{
	t_list	*node;

	node = *lst;
	while(node->next != 0)
	{
		ft_lstdelone(node);
		node = node->next;
	}
}
