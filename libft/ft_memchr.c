/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:07:41 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/08 00:31:54 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	char	*str;

	str = (char *)s;
	while (n > 0 && *str != '\0')
	{
		if (*str == c)
			return (str);
		str++;
		n--;
	}
	if (c == '\0' && *str == '\0')
		return (str);
	return (0);
}
