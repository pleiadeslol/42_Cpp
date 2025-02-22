/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:44:37 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/22 18:22:05 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("") {
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal& value) : type(value.type) {
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void	Animal::setType(std::string _type) {
	type = _type;
}

std::string	Animal::getType(void) const {
	return (type);
}

Animal::~Animal() {
	std::cout << "Destructor called" << std::endl;
}
