/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:09:33 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/09 15:27:49 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	join_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*join(int size, char **strs, char *sep, char *r_str)
{
	int	i;
	int	j;
	int	r_index;
	int	sep_i;
	int	str_len;

	i = 0;
	r_index = 0;
	while (i < size)
	{
		j = 0;
		sep_i = 0;
		str_len = join_len(strs[i]);
		while (str_len--)
			r_str[r_index++] = strs[i][j++];
		if (i != size -1)
		{
			while (sep[sep_i])
				r_str[r_index++] = sep[sep_i++];
		}
		i++;
	}
	r_str[r_index] = '\0';
	return (r_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*r_str;
	int		i;
	int		str_len;

	i = 0;
	str_len = 0;
	if (size == 0)
	{
		r_str = (char *)malloc(sizeof(char) * 1);
		r_str[0] = '\0';
		return (r_str);
	}
	while (i < size)
	{	
		str_len += join_len(strs[i]);
		if (i != size - 1)
			str_len += join_len(sep);
		i++;
	}
	r_str = (char *)malloc(sizeof(char) * (str_len + 1));
	r_str = join(size, strs, sep, r_str);
	return (r_str);
}
