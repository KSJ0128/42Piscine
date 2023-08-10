/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:43:52 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/10 10:33:28 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long	base_len(char *base);
int			atoi_base_check(char *base);
int			atoi_break(char c, char *base, long long *num);

char	*plus_allo(long long num, char *base_to, long long base_len, int cnt)
{
	char	*convert;
	int		i;

	i = cnt - 1;
	convert = (char *)malloc(sizeof(char) * (cnt + 1));
	while (i >= 0)
	{
		convert[i] = base_to[num % base_len];
		num /= base_len;
		i--;
	}
	convert[cnt] = '\0';
	return (convert);
}

char	*minus_allo(long long num, char *base_to, long long base_len, int cnt)
{
	char	*convert;
	int		i;

	i = cnt;
	convert = (char *)malloc(sizeof(char) * (cnt + 2));
	convert[0] = '-';
	while (i >= 1)
	{
		convert[i] = base_to[num % base_len];
		num /= base_len;
		i--;
	}
	convert[cnt + 1] = '\0';
	return (convert);
}

char	*ft_putnbr_base(long long atoi_num, char *base_to)
{
	int			cnt;
	long long	cnt_num;
	int			base_to_len;

	cnt = 0;
	cnt_num = atoi_num;
	if (cnt_num < 0)
		cnt_num *= -1;
	base_to_len = base_len(base_to);
	while (cnt_num > 0)
	{
		cnt_num /= base_to_len;
		cnt++;
	}
	if (atoi_num == 0)
		cnt = 1;
	if (atoi_num < 0)
		return (minus_allo(-atoi_num, base_to, base_to_len, cnt));
	else
		return (plus_allo(atoi_num, base_to, base_to_len, cnt));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	num;
	int			minus;
	int			i;

	i = 0;
	num = 0;
	minus = 1;
	if (atoi_base_check(base_from) < 2 || atoi_base_check(base_to) < 2)
		return (0);
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == 32)
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			minus *= -1;
		i++;
	}
	while (atoi_break(nbr[i], base_from, &num))
		i++;
	return (ft_putnbr_base(num * minus, base_to));
}
