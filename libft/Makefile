# target file
NAME = libft.a

# compile option
CC = cc
CPLAG = -Wall -Wextra -Werror
ARC = ar -rc
RM = rm -f

# source file
FT_C = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_toupper.c ft_split.c

FT_O = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o \
ft_isprint.o ft_itoa.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_putchar_fd.o \
ft_putstr_fd.o ft_split.o ft_strchr.o ft_strdup.o ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o \
ft_strlen.o ft_strmapi.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strtrim.o ft_substr.o ft_tolower.o \
ft_putendl_fd.o ft_putnbr_fd.o ft_toupper.o ft_split.o

FT_H = libft.h

# make library
all : $(NAME)

# @: 목표 파일명, ^: 전제 조건 파일의 전체 목록, <: 첫 번째 전제 조건의 파일명
$(NAME) : $(FT_O)
	$(ARC) $@ $^

%.o : %.c
	$(CC) $(CPLAG) -c $< -o $@ -I $(FT_H)

clean :
	$(RM) $(FT_O)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
