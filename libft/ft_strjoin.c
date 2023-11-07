/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:28:29 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/07 13:30:23 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*join;
	unsigned int	s1_index;

	if (s1 == 0 && s2 == 0)
		return (0);
	join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (join == NULL)
		return (0);
	s1_index = ft_strlcpy(join, s1, ft_strlen(s1) + 1);
	ft_strlcpy(join + s1_index, s2, ft_strlen(s2) + 1);
	return (join);
}
