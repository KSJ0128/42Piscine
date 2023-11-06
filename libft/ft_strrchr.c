/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:09:12 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/06 16:36:39 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	return_i;

	i = 0;
	return_i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return_i = i;
		i++;
	}
	if (return_i != 0 || s[return_i] == c)
		return ((char *)s + return_i);
	else
		return (0);
}
