# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/05 22:41:14 by rzarhoun          #+#    #+#              #
#    Updated: 2025/03/10 05:44:24 by rzarhoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
NAME= form28B
SRC= main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp
HEADER= -I Bureaucrat.hpp -I AForm.hpp -I PresidentialPardonForm.hpp -I ShrubberyCreationForm.hpp -I RobotomyRequestForm.hpp
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