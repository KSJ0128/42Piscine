/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:35:20 by seojkim           #+#    #+#             */
/*   Updated: 2023/07/24 17:35:50 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*digit2 reset*/
void	dg2_set(char *digit1, char *digit2)
{
	if (digit1[1] < '9')
	{
		digit2[0] = digit1[0];
		digit2[1] = digit1[1] + 1;
	}
	else
	{
		digit2[0] = digit1[0] + 1;
		digit2[1] = '0';
	}
}

/*digit2 repeat and print numbers*/
void	dg2_change(char *digit1, char *digit2)
{
	dg2_set(digit1, digit2);
	while (!(digit2[0] == '9' && digit2[1] == '9'))
	{
		write(1, &digit1[0], 3);
		write(1, &digit2[0], 2);
		write(1, &(", "), 2);
		if (digit2[1] < '9')
		{
			digit2[1] += 1;
		}
		else
		{
			digit2[0] += 1;
			digit2[1] = '0';
		}
	}
	digit2[1] = '9';
	write(1, &digit1[0], 3);
	write(1, &digit2[0], 2);
	write(1, &(", "), 2);
}

void	ft_print_comb2(void)
{
	char	digit1[4];
	char	digit2[3];

	digit1[0] = '0';
	digit1[1] = '0';
	digit1[2] = ' ';
	digit2[0] = '0';
	digit2[1] = '1';
	while (!(digit1[0] == '9' && digit1[1] == '8'))
	{
		dg2_change(digit1, digit2);
		if (digit1[1] < '9')
			digit1[1] += 1;
		else
		{
			digit1[0] += 1;
			digit1[1] = '0';
		}
	}
	write(1, &("98 99"), 5);
}
