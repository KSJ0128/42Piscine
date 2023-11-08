/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:03:30 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/08 20:38:07 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p_node;
	t_list	*n_node;

	if (*lst == NULL)
	{
		lst = NULL;
		return ;
	}
	p_node = *lst;
	n_node = p_node->next;
	while (n_node != NULL)
	{
		ft_lstdelone(p_node, del);
		p_node = n_node;
		n_node = n_node->next;
	}
	ft_lstdelone(p_node, del);
	*lst = NULL;
}
