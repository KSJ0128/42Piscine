/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:07:23 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/03 12:19:48 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	atoi_base_check(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = base_len(base);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (len);
}

int	atoi_break(char c, char *base, int *num)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			*num = (*num * base_len(base)) + i;
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	int	minus;
	int	i;

	i = 0;
	num = 0;
	minus = 1;
	if (atoi_base_check(base) < 2)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (atoi_break(str[i], base, &num))
		i++;
	return (num * minus);
}
