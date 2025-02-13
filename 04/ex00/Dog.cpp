/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:47:26 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/13 22:36:24 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog Default constructor called" << std::endl;
	Animal::setType("Dog");
}

Dog::Dog(const Dog& value) : Animal(value) {
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Woof!!" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
}
