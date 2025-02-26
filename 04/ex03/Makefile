# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/23 17:09:46 by rzarhoun          #+#    #+#              #
#    Updated: 2025/02/26 16:14:38 by rzarhoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
NAME= interface
SRC= AMateria.cpp Ice.cpp Character.cpp main.cpp Cure.cpp MateriaSource.cpp
HEADER= -I AMateria.hpp -I Ice.hpp -I Character.hpp -I Cure.hpp -I MateriaSource.hpp -I ICharacter.hpp -I IMateriaSource.hpp 
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) $(HEADER) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.SECONDARY: $(OBJ)
.PHONY: all clean fclean re