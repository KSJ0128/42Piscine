/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:10:14 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/06 21:16:22 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	trans_size(int n)
{
	int	i;
	int sign;

	i = 0;
	sign = 0;
	if (n < 0)
	{
		n *= -1;
		sign++;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (sign + i + 1);
}

char	*ft_itoa(int n)
{
	int		index;
	char	*trans;


	if (n == 0)
	{
		trans = (char *)malloc(2);
		trans = "0\0";
	}
	else if(n == -2147483648)
	{
		trans = (char *)malloc(12);
		trans = "-2147483648\0";
	}
	else
	{
		index = trans_size(n);
		trans = (char *)malloc(index);
		trans[--index] = '\0';
		if (n < 0)
		{
			trans[0] = '-';
			n *= -1;
		}
		while (n != 0)
		{
			trans[--index] = '0' + n % 10;
			n /= 10;
		}
	}
	return (trans);
}
