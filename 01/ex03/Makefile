# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/02 22:59:22 by rzarhoun          #+#    #+#              #
#    Updated: 2025/02/02 23:00:53 by rzarhoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
NAME= brain
SRC= HumanA.cpp  HumanB.cpp  main.cpp  Weapon.cpp
HEADER= HumanA.hpp  HumanB.hpp  Weapon.hpp
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
