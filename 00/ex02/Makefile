# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/29 18:38:26 by rzarhoun          #+#    #+#              #
#    Updated: 2025/01/29 19:35:24 by rzarhoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
NAME= account
SRC= Account.cpp tests.cpp
HEADER= Account.hpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -I$(HEADER) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.SECONDARY: $(OBJ)
.PHONY: all clean fclean re
