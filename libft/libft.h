/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojkim <seojkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:20:53 by seojkim           #+#    #+#             */
/*   Updated: 2023/11/06 20:13:20 by seojkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int			ft_atoi(const char *str);
void		ft_bzero(void *s, unsigned int n);
void		*ft_calloc(unsigned int count, unsigned int size);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
char		*ft_itoa(int n);
void		*ft_memchr(const void *s, int c, unsigned int n);
int			ft_memcmp(const void *s1, const void *s2, unsigned int n);
void		*ft_memcpy(void *dst, const void *src, unsigned int n);
void		*ft_memmove(void *dst, const void *src, unsigned int len);
void		*ft_memset(void *b, int c, unsigned int len);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
char		**ft_split(char *str, char c);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s1);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strjoin(const char *s1, const char *s2);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
unsigned int	ft_strlen(const char *s);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(const char *s1, const char *s2, unsigned int n);
char		*ft_strnstr(const char *haystack, const char *needle, unsigned int len);
char		*ft_strrchr(const char *s, int c);
char		*ft_strtrim(const char *s1, const char *set);
char		*ft_substr(const char *s, unsigned int start, unsigned int len);
int			ft_tolower(int c);
int			ft_toupper(int c);

#endif
