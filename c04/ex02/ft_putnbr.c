/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:44:56 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/03 12:12:52 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int			i;
	char		c[11];

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
