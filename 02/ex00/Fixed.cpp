/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:40:53 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/04 16:03:00 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : num(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& value) : num(value.num) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	if (this != &other)
		this->num = other.num;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Fixed::~Fixed(){ std::cout << "Destructor called" << std::endl;}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->num);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->num = raw;
}
