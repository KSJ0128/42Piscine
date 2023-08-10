# target file 
NAME = ./do-op

# compile option
CC = cc
CPLAG = -Wall -Wextra -Werror
RM = rm -f

# source file
SRCS = do-op.c operator.c
OBJS = $(SRCS:.c=.o)

# make library
all : $(NAME)

$(NAME) : $(OBJS)
	@ $(CC) $(CPLAG) -o $@ $(OBJS)

%.o : %.c
	@ $(CC) $(CPLAG) -c $(SRCS)

clean : 
	@ $(RM) $(OBJS)

fclean : clean
	@ $(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
