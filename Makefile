CC				= gcc 
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
NAME			= pushswap
OBJS			= $(SRCS:.c=.o)
LDLIBS 			= ./libft/libft.a
SRCS			=  
					

$(NAME):		$(OBJS)
				make -C ./libft 
				cp libft/libft.a $(NAME)
#				$(CC) $(SRCS) $(LDLIBS) $(CFLAGS) (Pour main et avoir l'executable) 
				ar rcs  $(NAME) $(OBJS) 

all:			$(NAME) 



clean:			
				$(RM) $(OBJS)
				 
fclean:	 		clean
				make  fclean -C ./libft
				$(RM) $(NAME)	
	
re:				fclean $(NAME)

.PHONY:			all clean fclean re