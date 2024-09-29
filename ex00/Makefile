CC = c++
STD = -std=c++98
CFLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp

NAME = megaphone

all: ${NAME}

${NAME} : ${SRC}
	$(CC) $(CFLAGS) $(STD) $(SRC) -o $@

clean:
	rm -rf $(NAME)

re: clean all