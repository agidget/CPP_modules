NAME	= diamondTrap
CC		= clang++ -std=c++98
HEADER	= *.hpp
SRCS	= *.cpp
RM		= rm -rf
CFLAGS	= -Wall -Werror -Wextra -Wshadow -Wno-shadow
OBJS	= *.o

all:	${NAME}

$(NAME): $(SRCS) $(HEADER)
					$(CC) $(CFLAGS) -c $(SRCS)
					$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean:
					${RM} ${OBJS}
fclean:				clean
					${RM} ${NAME}
re:					fclean all
.PHONY:				all clean fclean re