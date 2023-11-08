/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:04:18 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/08 17:02:18 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*node;
	int		len;

	if (lst == NULL)
		return (0);
	len = 1;
	node = lst;
	while (node->next != NULL)
	{
		node = node->next;
		len++;
	}
	return (len);
}
