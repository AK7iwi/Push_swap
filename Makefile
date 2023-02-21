CC				= gcc 
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I -g.
NAME			= push_swap
OBJS			= $(SRCS:.c=.o) 
LDLIBS 			= ./libft/libft.a
SRCS			=  push_swap.c parsing.c push_swap_utils.c push_swap_utils2.c\

$(NAME):		$(OBJS)
				make -C ./libft 
				cp libft/libft.a $(NAME)
				$(CC) -o $(NAME) $(SRCS) $(LDLIBS) $(CFLAGS)  

all:			$(NAME) 

clean:			
				$(RM) $(OBJS)
				 
fclean:	 		clean
				make  fclean -C ./libft
				$(RM) $(NAME)	
	
re:				fclean $(NAME)

.PHONY:			all clean fclean remake 