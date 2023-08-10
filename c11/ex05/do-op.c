/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:07:54 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/10 21:38:10 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	plus(int va1ue1, int value2);
int	minus(int va1ue1, int value2);
int	multi(int va1ue1, int value2);
int	divide(int va1ue1, int value2);
int	modulo(int va1ue1, int value2);

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

int	calculate(int a, int b, int operation)
{
	int	(*operations[5])(int, int);

	operations[0] = plus;
	operations[1] = minus;
	operations[2] = multi;
	operations[3] = divide;
	operations[4] = modulo;
	return ((*operations[operation])(a, b));
}

int	get_operation(char *operator)
{
	if (operator[1] != '\0')
	{
		write(1, "0\n", 2);
		return (-1);
	}
	if (operator[0] == '+')
		return (0);
	if (operator[0] == '-')
		return (1);
	if (operator[0] == '*')
		return (2);
	if (operator[0] == '/')
		return (3);
	if (operator[0] == '%')
		return (4);
	write(1, "0\n", 2);
	return (-1);
}

int	main(int argc, char **argv)
{
	int	op;
	int	result;

	result = 0;
	if (argc != 4)
		return (0);
	op = get_operation(argv[2]);
	if (op == -1)
		return (0);
	else if (op == 3 && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (op == 4 && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	else
		result = calculate(ft_atoi(argv[1]), ft_atoi(argv[3]), op);
	ft_putnbr(result);
	write(1, "\n", 1);
	return (0);
}
