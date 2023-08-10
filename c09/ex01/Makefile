# target file 
NAME = libft.a

# compile option
CC = cc
CPLAG = -Wall -Wextra -Werror
ARC = ar -rc
RM = rm -f

# source file
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
INCS = includes

# make library
all : $(NAME)

$(NAME) : $(OBJS)
	$(ARC) $@ $^

%.o : %.c $(INCS)
	$(CC) $(CPLAG) -c $< -o $@ -I $(INCS)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
