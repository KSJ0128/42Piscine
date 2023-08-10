/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:07:54 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/10 17:59:08 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	doop_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	c[11];

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		i = 9;
		while (nb > 0)
		{
			c[i--] = '0' + (nb % 10);
			nb /= 10;
		}
		if (i < 0)
			write(1, &c[0], 10);
		else
			write(1, &c[i + 1], 9 - i);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	minus;

	i = 0;
	num = 0;
	minus = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + str[i] - '0';
		i++;
	}
	return (num * minus);
}

void	calculate(char *v1, char op, char *v2)
{
	int	result;
	int	value1;
	int	value2;

	value1 = ft_atoi(v1);
	value2 = ft_atoi(v2);
	if (op == '+')
		result = value1 + value2;
	else if (op == '-')
		result = value1 - value2;
	else if (op == '*')
		result = value1 * value2;
	else if (op == '/')
		result = value1 / value2;
	else
		result = value1 % value2;
	ft_putnbr(result);
}

int	main(int argc, char **argv)
{
	char	*v1;
	char	*v2;
	char	op;

	if (argc != 4)
		return (0);
	v1 = argv[1];
	v2 = argv[3];
	op = *argv[2];
	if (!(op == '+' || op == '-' || op == '*' || op == '/' || op == '%'))
		write(1, "0", 1);
	else if (doop_len(argv[2]) != 1)
		write(1, "0", 1);
	else if ((op == '/' || op == '%') && *v2 == '0')
	{
		if (op == '/')
			write(1, "Stop: division by zero", 22);
		else
			write(1, "Stop: modulo by zero", 20);
	}
	else
		calculate(v1, op, v2);
	write(1, "\n", 1);
	return (0);
}
