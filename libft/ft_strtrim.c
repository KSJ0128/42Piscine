/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:25:19 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/06 16:27:48 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trim;
	int		len;

	trim = (char *)s1;
	while (ft_strchr(set, *trim) != 0)
		trim++;
	len = ft_strlen(trim) - 1;
	while (ft_strchr(set, *(trim + len)) != 0 && len >= 0)
		len--;
	trim[len + 1] = '\0';
	return (trim);
}
