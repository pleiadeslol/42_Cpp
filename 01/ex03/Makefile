# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/02 22:59:22 by rzarhoun          #+#    #+#              #
#    Updated: 2025/02/03 20:29:53 by rzarhoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
NAME= attack
SRC= HumanA.cpp  HumanB.cpp  main.cpp  Weapon.cpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -I ./ -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.SECONDARY: $(OBJ)
.PHONY: all clean fclean re
