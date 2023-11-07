/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:15:46 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/07 16:11:44 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, unsigned int len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	sub = (char *)malloc(len + 1);
	if (sub == NULL)
		return (0);
	if (start >= ft_strlen(s))
		sub[0] = '\0';
	else
	{
		while (i < len && i < ft_strlen(s) - start)
		{
			sub[i] = s[start + i];
			i++;
		}
		sub[i] = '\0';
	}
	return (sub);
}
