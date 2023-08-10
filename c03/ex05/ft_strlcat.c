/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:07:04 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/05 11:35:20 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	strlcat_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	d_len = strlcat_len(dest);
	s_len = strlcat_len(src);
	i = 0;
	while (src[i] && d_len + i + 1 < size)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	if (d_len > size)
		return (s_len + size);
	else
		return (s_len + d_len);
}
