/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:23:31 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/08 20:29:52 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src, int size)
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

int	word_count(char *str, char *charset)
{
	int	i;
	int	j;
	int	cnt;
	int	sep;

	i = 0;
	cnt = 0;
	sep = -1;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != charset[j] && charset[j] != '\0')
			j++;
		if (str[i] == charset[j])
			sep = 1;
		else if (str[i] != charset[j] || j == 0)
		{
			if (sep == -1 || sep == 1)
				cnt++;
			sep = 0;
		}
		i++;
	}
	return (cnt);
}

void	insert_word(char *str, char *charset, char **split, int str_len)
{
	int	word_len;
	int	i;
	int	k;

	word_len = 0;
	k = 0;
	while (str_len-- >= 0)
	{
		i = 0;
		while (str[word_len] != charset[i] && charset[i] != '\0')
			i++;
		if (str[word_len] == charset[i])
		{
			if (word_len != 0)
				split[k++] = ft_strdup(str, word_len);
			str += word_len + 1;
			word_len = 0;
		}
		else
			word_len++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		word;
	int		str_len;

	str_len = 0;
	while (str[str_len])
		str_len++;
	word = word_count(str, charset);
	split = (char **)malloc(sizeof(char *) * (word + 1));
	if (split == NULL)
		return (0);
	insert_word(str, charset, split, str_len);
	split[word] = 0;
	return (split);
}
