/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:47:26 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/22 18:17:37 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string idea) : Animal() {
	std::cout << "Dog Default constructor called" << std::endl;
	brain = new Brain(idea);
	Animal::setType("Dog");
}

Dog::Dog(const Dog& value) : Animal(value) {
	std::cout << "Dog Copy constructor called" << std::endl;
	if (this != &value)
	{
		delete brain;
		brain = new Brain(*value.brain);
	}
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other)
	{
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Woof!!" << std::endl;
}

Brain&	Dog::getBrain(void) {
	return (*brain);
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
	delete brain;
}
