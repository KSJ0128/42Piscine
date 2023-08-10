/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:46:51 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/09 15:45:11 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*copy;
	int	i;
	int	j;

	if (min >= max)
		return (0);
	copy = (int *)malloc(sizeof(int) * (max - min));
	if (copy == NULL)
		return (0);
	i = 0;
	j = min;
	while (i < max - min)
	{
		copy[i] = j;
		i++;
		j++;
	}
	return (copy);
}
