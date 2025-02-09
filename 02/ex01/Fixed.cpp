/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:40:53 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/09 20:28:51 by rzarhoun         ###   ########.fr       */
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

Fixed::Fixed(const int value) {
	num = value << N;
}

Fixed::Fixed(const float value) {
	num = roundf(value * (1 << N));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->num);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->num = raw;
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(1 / (num << N)));
}

int	Fixed::toInt(void) const {
	return (num << N);
}
