/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:07:52 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/10 12:34:53 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int		*r_tab;
	int		i;

	i = 0;
	r_tab = (int *)malloc(sizeof(int) * length);
	while (length--)
	{
		r_tab[i] = f(*tab);
		i++;
		tab++;
	}
	return (r_tab);
}
