/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:47:16 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/22 18:15:57 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string idea) : Animal() {
	std::cout << "Cat Default constructor called" << std::endl;
	brain = new Brain(idea);
	Animal::setType("Cat");
}

Cat::Cat(const Cat& value) : Animal(value) {
	std::cout << "Cat Copy constructor called" << std::endl;
	if (this != &value)
	{
		delete brain;
		brain = new Brain(*value.brain);
	}
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other)
	{
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meow!!" << std::endl;
}

Brain&	Cat::getBrain(void) {
	return (*brain);
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
	delete brain;
}
