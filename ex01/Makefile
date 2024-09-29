CC = c++
STD = -std=c++98
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp Contact.class.cpp #PhoneBook.class.cpp

NAME = contact

all: ${NAME}

${NAME} : ${SRC}
	$(CC) $(CFLAGS) $(STD) $(SRC) -o $@

clean:
	rm -rf $(NAME)

re: clean all