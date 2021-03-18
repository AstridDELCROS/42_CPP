NAME			= phonebook
CC				= clang++
CFLAGS			= -Wall -Wextra -Werror -std=c++98
SRCS			= main.cpp addContact.cpp contactInfo.cpp searchContact.cpp
INC				= contact.hpp
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