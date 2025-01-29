# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/05 23:33:30 by rzarhoun          #+#    #+#              #
#    Updated: 2025/01/05 23:38:40 by rzarhoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC = megaphone.cpp
OBJ = $(SRC.c:.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

NAME : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.SECONDARY: $(OBJ)
.PHONY: all clean fclean re
