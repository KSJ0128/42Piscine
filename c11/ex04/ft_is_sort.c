/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:12:18 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/10 16:26:59 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	ascend;
	int	descend;
	int	i;

	ascend = 0;
	descend = 0;
	i = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			ascend++;
		if (f(tab[i], tab[i + 1]) >= 0)
			descend++;
		i++;
	}
	if (ascend + 1 == length || descend + 1 == length)
		return (1);
	return (0);
}
