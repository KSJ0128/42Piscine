/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:10:14 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/08 17:11:03 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	trans_size(int n)
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (sign + i + 1);
}

char	*trans_to_char(int n, int t_size)
{
	char	*num;

	num = (char *)malloc(t_size);
	if (num == NULL)
		return (0);
	num[--t_size] = '\0';
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		num[--t_size] = '0' + n % 10;
		n /= 10;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*trans;

	if (n == 0)
	{
		trans = (char *)malloc(2);
		if (trans == NULL)
			return (0);
		ft_strlcpy(trans, "0", 2);
	}
	else if (n == -2147483648)
	{
		trans = (char *)malloc(12);
		if (trans == NULL)
			return (0);
		ft_strlcpy(trans, "-2147483648", 12);
	}
	else
	{
		trans = trans_to_char(n, trans_size(n));
		if (trans == NULL)
			return (0);
	}
	return (trans);
}
