/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:18:42 by seojkim           #+#    #+#             */
/*   Updated: 2023/07/28 21:17:10 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	non_alpha(char c)
{
	if (c > 'z' || c < 'A' || (c > 'Z' && c < 'a'))
		return (1);
	return (0);
}

void	ft_lowcase(char *str)
{
	int		i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = -1;
	ft_lowcase(str);
	while (str[++i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i++] -= 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] > '9' || str[i - 1] < '0'))
			{
				if (non_alpha(str[i - 1]))
					str[i] -= 32;
			}
		}
	}
	return (str);
}
