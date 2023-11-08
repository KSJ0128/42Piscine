# target file
NAME = libft.a

# compile option
CC = cc
CFLAG = -Wall -Wextra -Werror
ARC = ar -rc
RM = rm -f

# source file
FT_C = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_toupper.c ft_split.c

FT_O = $(FT_C:.c=.o)

BONUS_C = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c \
ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

BONUS_O = $(BONUS_C:.c=.o)

FT_H = libft.h

ifdef BONUS
	OBJS = $(FT_O) $(BONUS_O)
else
	OBJS = $(FT_O)
endif

# make library
all : $(NAME)
	sleep 1

bonus :
	make BONUS=1

# @: 목표 파일명, ^: 전제 조건 파일의 전체 목록, <: 첫 번째 전제 조건의 파일명
$(NAME) : $(OBJS)
	$(ARC) $@ $^

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@ -I $(FT_H)

clean :
	$(RM) $(FT_O) $(BONUS_O)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all bonus clean fclean re
