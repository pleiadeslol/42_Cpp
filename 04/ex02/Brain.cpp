/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:07:16 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/22 17:23:49 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(std::string idea) {
	std::cout << "Brain Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = idea;
}

Brain::Brain(const Brain& value) {
	std::cout << "Brain Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = value.ideas[i];
}

Brain& Brain::operator=(const Brain& other) {
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return (*this);
}

std::string	Brain::getIdea(int i) const {
	return (ideas[i]);
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}
