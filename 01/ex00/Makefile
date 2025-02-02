# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/02 21:49:28 by rzarhoun          #+#    #+#              #
#    Updated: 2025/02/02 22:26:27 by rzarhoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
NAME= zombie
SRC= main.cpp newZombie.cpp Zombie.cpp randomChump.cpp
HEADER= Zombie.hpp
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