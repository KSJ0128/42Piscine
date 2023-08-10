/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 12:52:57 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/07 16:54:35 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

int	show_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	c[11];

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		i = 9;
		while (nb > 0)
		{
			c[i--] = '0' + (nb % 10);
			nb /= 10;
		}
		if (i < 0)
			write(1, &c[0], 10);
		else
			write(1, &c[i + 1], 9 - i);
	}
}

void	ft_show_tab(t_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != NULL)
	{
		write(1, par[i].str, show_len(par[i].str));
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, show_len(par[i].copy));
		write(1, "\n", 1);
		i++;
	}
}
