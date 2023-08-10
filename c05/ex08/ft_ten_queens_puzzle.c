/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:48:57 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/06 10:59:40 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(int *p_queen, int i)
{
	int	k;

	k = 0;
	while (k < i)
	{
		if (p_queen[i] == p_queen[k])
			return (0);
		else if (i - k == p_queen[i] - p_queen[k])
			return (0);
		else if (i - k == -1 * (p_queen[i] - p_queen[k]))
			return (0);
		k++;
	}
	return (1);
}

void	recursive_queen(int *p_queen, int i, int *cnt)
{
	int		j;
	char	c;

	j = 0;
	if (i == 10)
	{
		while (j < 10)
		{
			c = '0' + p_queen[j];
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		(*cnt)++;
		return ;
	}
	while (j < 10)
	{
		p_queen[i] = j;
		if (check(p_queen, i))
			recursive_queen(p_queen, i + 1, cnt);
		j++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	p_queen[10];
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	recursive_queen(p_queen, i, &cnt);
	return (cnt);
}
