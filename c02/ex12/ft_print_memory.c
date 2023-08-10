/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <ksj01128@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:42:34 by seojkim           #+#    #+#             */
/*   Updated: 2023/08/05 10:30:31 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_str_hex(void *addr, unsigned int i, char *hex, unsigned int size)
{
	int				j;
	unsigned char	*str;

	str = (unsigned char *)addr;
	j = 0;
	while (j < 16 && i < size)
	{
		if (j % 2 == 0 && j != 0)
			write(1, " ", 1);
		write(1, &hex[(str[i]) / 16], 1);
		write(1, &hex[(str[i]) % 16], 1);
		i++;
		j++;
	}
	while (j < 16)
	{
		write(1, "  ", 2);
		if (j % 2 == 0 && j != 0)
			write(1, " ", 1);
		j++;
	}
	write(1, " ", 1);
}

void	print_str(void *addr, unsigned int i, unsigned int size)
{
	int				j;
	unsigned char	*str;

	str = (unsigned char *)addr;
	j = 0;
	while (j < 16 && i < size)
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
		j++;
	}
	write(1, "\n", 1);
}

void	print_addr(void *addr, char *hex)
{
	char				addr_array[16];
	int					i;
	unsigned long long	h_addr;

	i = 0;
	h_addr = (unsigned long long)addr;
	while (i < 16)
	{
		addr_array[i++] = hex[h_addr % 16];
		h_addr /= 16;
	}
	i = 15;
	while (i >= 0)
		write(1, &addr_array[i--], 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (i < size)
	{
		print_addr(addr + i, hex);
		write(1, ": ", 2);
		print_str_hex(addr, i, hex, size);
		print_str(addr, i, size);
		i += 16;
	}
	return (addr);
}
