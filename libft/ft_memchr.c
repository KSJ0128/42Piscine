/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:07:41 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/06 16:35:51 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == c)
			return (str);
		else
		{
			str++;
			n--;
		}
	}
	return (0);
}
