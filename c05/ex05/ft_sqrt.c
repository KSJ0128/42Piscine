/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:49:40 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/04 15:24:25 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	num;
	long long	i;

	if (nb < 0)
		return (0);
	i = 1;
	num = (long long)nb;
	while (i * i <= num)
	{
		if (i * i == num)
			return ((int)i);
		i++;
	}
	return (0);
}
