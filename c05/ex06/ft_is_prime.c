/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:23:55 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/04 17:59:08 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	p_sqrt(int nb)
{
	long long	num;
	long long	i;

	if (nb < 0)
		return (0);
	i = 1;
	num = (long long)nb;
	while (1)
	{
		if (i * i >= num)
			return ((int)i);
		i++;
	}
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	if (nb < 0 || nb == 0 || nb == 1)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	else
	{
		if (nb % 2 == 0)
			return (0);
		i = 3;
		sqrt = p_sqrt(nb);
		while (i <= sqrt)
		{
			if (nb % i == 0)
				return (0);
			i += 2;
		}
		return (1);
	}
}
