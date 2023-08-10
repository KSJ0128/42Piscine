/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:32:57 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/09 18:21:14 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	base_len(char *base)
{
	long long	i;

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

int	atoi_break(char c, char *base, long long *num)
{
	long long	i;

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
