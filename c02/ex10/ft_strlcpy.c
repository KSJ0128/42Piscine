/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:12:34 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/05 14:44:10 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	strlcpy_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (size > 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		size--;
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (strlcpy_len(src));
}
