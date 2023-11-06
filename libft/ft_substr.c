/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:15:46 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/06 14:15:49 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, unsigned int len)
{
	char			*sub;
	unsigned int	i;

	if (len == 0)
		return (0);
	sub = (char *)malloc(len + 1);
	i = 0;
	while (i + 1 < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
