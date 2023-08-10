/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:59:37 by seojkim           #+#    #+#             */
/*   Updated: 2023/07/24 20:22:18 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		change;

	i = 0;
	while (i < size)
	{
		j = 1;
		while (j < size)
		{
			if (tab[j] < tab[j - 1])
			{
				change = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = change;
			}
			j++;
		}
		i++;
	}
}
