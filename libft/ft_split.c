/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:17:03 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/08 15:00:25 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup2(char *src, int size)
{
	char	*dup;
	int		i;

	dup = (char *)malloc(sizeof(char) * (size + 1));
	if (dup == NULL)
		return (0);
	i = 0;
	while (size > 0)
	{
		dup[i] = src[i];
		i++;
		size--;
	}
	dup[i] = '\0';
	return (dup);
}

int	word_count(char *str, char c)
{
	int	i;
	int	cnt;
	int	sep;

	i = 0;
	cnt = 0;
	sep = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			sep = 0;
		else if (str[i] != c)
		{
			if (sep == 0)
				cnt++;
			sep = 1;
		}
		i++;
	}
	return (cnt);
}

void	insert_word(char *str, char c, char **split, int str_len)
{
	int	word_len;
	int	k;

	word_len = 0;
	k = 0;
	while (str_len-- >= 0)
	{
		if (str[word_len] == c)
		{
			if (word_len != 0)
				split[k++] = ft_strdup2(str, word_len);
			str += word_len + 1;
			word_len = 0;
		}
		else
			word_len++;
	}
}

char	**ft_split(char *str, char c)
{
	char	**split;
	int		word;
	int		str_len;

	word = word_count(str, c);
	split = (char **)malloc(sizeof(char *) * (word + 1));
	if (split == NULL)
		return (0);
	str_len = ft_strlen(str);
	insert_word(str, c, split, str_len);
	split[word] = "\0";
	return (split);
}
