CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic 

SRCS = main.cpp ClapTrap.cpp
OBJS = $(SRCS:.cpp=.o)

NAME = ClapTrap

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $? -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re