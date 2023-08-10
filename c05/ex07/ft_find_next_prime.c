/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:14:10 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/04 21:44:42 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime_sqrt(int nb)
{
	long long	num;
	long long	i;

	i = 1;
	num = (long long)nb;
	if (nb < 0)
		return (0);
	while (1)
	{
		if (i * i >= num)
			return ((int)i);
		i++;
	}
}

int	is_prime(int nb)
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
		sqrt = prime_sqrt(nb);
		while (i <= sqrt)
		{
			if (nb % i == 0)
				return (0);
			i += 2;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb <= 2)
		return (2);
	else if (nb == 3)
		return (3);
	else if (is_prime(nb))
		return (nb);
	else
	{
		while (1)
		{
			nb++;
			if (is_prime(nb) == 1)
				return (nb);
		}
	}
}
