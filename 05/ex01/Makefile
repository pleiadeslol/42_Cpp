# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/28 23:46:07 by rzarhoun          #+#    #+#              #
#    Updated: 2025/03/05 15:31:56 by rzarhoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
NAME= form
SRC= main.cpp Bureaucrat.cpp Form.cpp
HEADER= -I Bureaucrat.hpp -I Form.hpp
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