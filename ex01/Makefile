# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chorst <chorst@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/03 11:22:22 by chorst            #+#    #+#              #
#    Updated: 2024/10/09 14:37:57 by chorst           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	main.cpp \
		src/Contact.cpp \
		src/Helper.cpp \
		src/PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = #-Wall -Wextra -Werror -pedantic

NAME = PhoneBook

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
