CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g3 # -std=c++98 to specify the standard we want to use | -pedantic to make the warning related to the standard become errors

SRCS = Contact.class.cpp PhoneBook.class.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

NAME = phonebook

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