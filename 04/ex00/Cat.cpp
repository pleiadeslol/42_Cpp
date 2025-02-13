/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:47:16 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/13 22:36:28 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat Default constructor called" << std::endl;
	Animal::setType("Cat");
}

Cat::Cat(const Cat& value) : Animal(value) {
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meow!!" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
}
