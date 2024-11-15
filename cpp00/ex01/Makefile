CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic # -std=c++98 to specify the standard we want to use | -pedantic to make the warning related to the standard become errors

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $? -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re