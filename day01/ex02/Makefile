NAME			= zombie
CC				= clang++
CFLAGS			= -Wall -Wextra -Werror -std=c++98
SRCS			= main.cpp Zombie.cpp ZombieEvent.cpp
INC				= Zombie.hpp ZombieEvent.hpp
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