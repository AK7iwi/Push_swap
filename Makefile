CC		= gcc 
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -I./includes
NAME	= push_swap
SRCS	= ./srcs/sort/push_swap.c ./srcs/sort/algo.c ./srcs/sort/sorta.c ./srcs/sort/sortb.c ./srcs/sort/chunk.c \
			./srcs/instructions/instructions.c ./srcs/instructions/instructions2.c ./srcs/utils/push_swap_utils.c \
			./srcs/utils/push_swap_utils2.c ./srcs/parsing/parsing.c \

OBJS			= $(SRCS:.c=.o) 

all:			$(NAME) 

$(NAME):		$(OBJS)
				$(CC) -o $(NAME) $(SRCS) $(CFLAGS)

clean:
				$(RM) $(OBJS)
				 
fclean:	 		clean
				$(RM) $(NAME)	
	
re:				fclean $(NAME)

.PHONY:			all clean fclean remake 