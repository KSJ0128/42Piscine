/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:03:51 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/07 13:29:33 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void(*f)(void *))
{
	t_list	*node;

	node = lst;
	while(node->next)
	{
		node->content = f(node->content);
		node = node->next;
	}
}
