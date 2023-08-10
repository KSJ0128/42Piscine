/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:11:04 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/10 13:54:07 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (tab[i] && i < length)
	{
		if (f(tab[i]) != 0)
			cnt++;
		i++;
	}
	return (cnt);
}
