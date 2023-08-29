CC		= gcc 
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -I./includes
NAME	= push_swap
SRCS	= ./srcs/push_swap.c ./srcs/algo.c ./srcs/sorta.c ./srcs/sortb.c ./srcs/chunk.c \
			./instructions/instructions.c ./instructions/instructions2.c ./utils/utils.c ./utils/utils2.c \
			./parsing/parsing.c \

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