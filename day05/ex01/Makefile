NAME			= form
CC				= clang++
CFLAGS			= -Wall -Wextra -Werror -std=c++98
SRCS			= Bureaucrat.cpp Form.cpp main.cpp
INC				= Bureaucrat.hpp Form.hpp
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