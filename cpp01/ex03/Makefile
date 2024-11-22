CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(SRCS:.cpp=.o)

NAME = violence

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