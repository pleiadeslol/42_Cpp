/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 00:17:21 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/22 17:05:31 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("") {
	std::cout << "WronAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& value) : type(value.type) {
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other)
		type = other.type;
	return (*this);
}

void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound!!" << std::endl;
}

void	WrongAnimal::setType(std::string _type) {
	type = _type;
}

std::string	WrongAnimal::getType(void) const {
	return (type);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}
