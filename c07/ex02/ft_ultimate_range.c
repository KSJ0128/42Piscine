/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:51:24 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/10 13:20:59 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*copy;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	copy = (int *)malloc(sizeof(int) * (max - min));
	if (copy == NULL)
		return (-1);
	i = 0;
	j = min;
	while (i < max - min)
	{
		copy[i] = j;
		i++;
		j++;
	}
	*range = copy;
	return (max - min);
}
