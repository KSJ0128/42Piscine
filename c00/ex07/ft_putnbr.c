/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:58:59 by seojkim           #+#    #+#             */
/*   Updated: 2023/07/24 17:10:05 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int			i;
	long long	num;
	char		c[11];

	if (nb < 0)
	{	
		num = nb;
		num *= -1;
		write(1, &("-"), 1);
	}
	else
		num = nb;
	i = 9;
	while (num >= 1)
	{
		c[i] = '0' + (num % 10);
		num = num / 10;
		i--;
	}
	if (i < 0)
		write(1, &c[0], 10);
	else
		write(1, &c[i + 1], 10 - i);
}
