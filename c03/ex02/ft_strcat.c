/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:54:54 by seojkim           #+#    #+#             */
/*   Updated: 2023/07/31 11:15:09 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strcat_len(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (str[++i] != '\0')
		count++;
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	d_len;

	d_len = strcat_len(dest);
	while (*src)
		dest[d_len++] = *(src++);
	dest[d_len] = '\0';
	return (dest);
}
