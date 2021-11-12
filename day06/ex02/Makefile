NAME	= identify
CC		= clang++ -std=c++98
SRCS	= *.cpp
RM		= rm -rf
CFLAGS	= -Wall -Werror -Wextra
OBJS	= *.o

all:	${NAME}

$(NAME): $(SRCS)
					$(CC) $(CFLAGS) -c $(SRCS)
					$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean:
					${RM} ${OBJS}
fclean:				clean
					${RM} ${NAME}
re:					fclean all
.PHONY:				all clean fclean re