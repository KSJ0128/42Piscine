/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:02:19 by seojkim           #+#    #+#             */
/*   Updated: 2023/07/26 17:31:24 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	str_i;
	int	find_i;

	str_i = 0;
	find_i = 0;
	while (str[str_i + find_i] != '\0' && to_find[find_i] != '\0')
	{
		if (str[str_i + find_i] == to_find[find_i])
			find_i++;
		else
		{
			str_i++;
			find_i = 0;
		}
	}
	if (to_find[find_i] == '\0')
		return (&str[str_i]);
	else
		return (0);
}
