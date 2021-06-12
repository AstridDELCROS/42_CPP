NAME			= fight
CC				= clang++
CFLAGS			= -Wall -Wextra -Werror -std=c++98
SRCS			= main.cpp AssaultTerminator.cpp Squad.cpp TacticalMarine.cpp
INC				= AssaultTerminator.hpp ISpaceMarine.hpp Squad.hpp TacticalMarine.hpp ISquad.hpp
OBJS			= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all