/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:52:08 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/06 17:24:42 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned char		*dest;
	const unsigned char	*source;
	unsigned int		i;

	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (source >= dest)
	{
		i = 0;
		while (i < len)
		{
			*(dest + i) = *(source + i);
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			*(dest + i) = *(source + i);
			i--;
		}
	}
	return (dst);
}
