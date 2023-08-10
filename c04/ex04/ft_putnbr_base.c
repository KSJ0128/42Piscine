/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:58:14 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/05 12:17:54 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putnbr_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (ft_putnbr_len(base));
}

void	change(long long num, char *base, int len)
{
	if (num < len)
		write(1, &base[num], 1);
	else
	{
		change(num / len, base, len);
		write(1, &base[num % len], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	long long	num;

	len = ft_putnbr_len(base);
	num = (long long)nbr;
	if (base_check(base) >= 2)
	{
		if (num < 0)
		{
			num *= -1;
			write(1, "-", 1);
			change(num, base, len);
		}
		else
			change(num, base, len);
	}
}
