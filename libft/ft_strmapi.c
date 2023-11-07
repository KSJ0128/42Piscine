/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:06:18 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/07 13:35:17 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	s_len;
	unsigned int	i;

	s_len = ft_strlen(s);
	new_str = (char *)malloc(s_len + 1);
	if (new_str == NULL)
		return (0);
	i = 0;
	while (i < s_len)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[s_len] = '\0';
	return (new_str);
}
