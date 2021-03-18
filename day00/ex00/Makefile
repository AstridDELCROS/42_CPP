NAME=		megaphone
SRC=		megaphone.cpp
CC=			clang++
CCFLAGS=	-Wall -Wextra -Werror -std=c++98
all:		$(NAME)
$(NAME):	$(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)
re:	fclean all