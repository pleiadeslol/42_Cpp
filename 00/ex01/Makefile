# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/05 23:33:30 by rzarhoun          #+#    #+#              #
#    Updated: 2025/01/29 19:40:18 by rzarhoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC = phonebook.cpp
OBJ = $(SRC.cpp:.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

NAME : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -I ./ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.SECONDARY: $(OBJ)
.PHONY: all clean fclean re
