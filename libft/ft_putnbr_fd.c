/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:47:50 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/06 16:27:20 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	c[11];

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n == 0)
		ft_putstr_fd("0", fd);
	else
	{
		if (n < 0)
		{
			n *= -1;
			ft_putchar_fd('-', fd);
		}
		i = 9;
		while (n > 0)
		{
			c[i--] = '0' + (n % 10);
			n /= 10;
		}
		if (i < 0)
			write(fd, &c[0], 10);
		else
			write(fd, &c[i + 1], 9 - i);
	}
}
