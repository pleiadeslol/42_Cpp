/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:40:53 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/10 17:29:54 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : num(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& value) {
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		num = other.getRawBits();
	return *this;
}

std::ostream& operator << (std::ostream& os, const Fixed& fp) {
	os << fp.toFloat();
	return (os);
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	num = value << N;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	num = roundf(value * (1 << N));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (num);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	num = raw;
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(num) / (1 << N));
}

int	Fixed::toInt(void) const {
	return (num >> N);
}
