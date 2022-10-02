NAME	=	phonebook

SRC		=	main.cpp \
			PhoneBook.cpp \
			Contact.cpp

HDR		=	PhoneBook.h \
			Contact.h
# ---------------------------------
OBJ 	=	$(SRC:.cpp=.o)

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf



all:		$(NAME)

$(NAME):	$(OBJ) $(HDR)
			$(CC) $(FLAGS) $(OBJ) -I. -o $(NAME)


clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

leaks:  	all
			leaks -atExit -- ./$(NAME)

.PHONY:		all clean fclean re test