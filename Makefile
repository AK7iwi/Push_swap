CC				= gcc 
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
NAME			= push_swap
SRCS			=  push_swap.c parsing.c instructions.c instructions2.c utils.c utils2.c algo.c sorta.c sortb.c chunk.c\

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