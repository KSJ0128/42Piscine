/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 12:24:42 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/07 16:47:31 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	stock_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src, int size)
{
	char	*copy;
	int		i;

	copy = (char *)malloc(sizeof(char) * size + 1);
	if (copy == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	t_stock_str			*stock;

	stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (stock == NULL)
		return (0);
	i = 0;
	while (i < ac)
	{
		stock[i].size = stock_len(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i], stock[i].size);
		i++;
	}
	stock[i].str = NULL;
	return (stock);
}
