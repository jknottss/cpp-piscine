NAME = megaphone
SRCDIR = .
CC = c++
SRC = megaphone.cpp
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRCDIR)/$(SRC)
		$(CC) $(FLAGS) -o $@ $^
clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test