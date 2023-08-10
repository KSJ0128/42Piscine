/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:58:17 by seojkim           #+#    #+#             */
/*   Updated: 2023/07/28 21:38:16 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strncat_len(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (str[++i] != '\0')
		count++;
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	d_len;

	d_len = strncat_len(dest);
	while (*src && nb--)
		dest[d_len++] = *(src++);
	dest[d_len] = '\0';
	return (dest);
}
