/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:40:53 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/10 19:29:03 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : num(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& value) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = value;
}

Fixed& Fixed::operator=(const Fixed& other) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		num = other.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed& other) const {
	return (num > other.num);
}

bool Fixed::operator<(const Fixed& other) const {
	return (num < other.num);
}

bool Fixed::operator>=(const Fixed& other) const {
	return (num >= other.num);
}

bool Fixed::operator<=(const Fixed& other) const {
	return (num <= other.num);
}

bool Fixed::operator==(const Fixed& other) const {
	return (num == other.num);
}

bool Fixed::operator!=(const Fixed& other) const {
	return (num != other.num);
}

Fixed Fixed::operator+(const Fixed& other) {
	return (Fixed(toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) {
	return (Fixed(toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) {
	return (Fixed(toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) {
	return (Fixed(toFloat() / other.toFloat()));
}

Fixed& Fixed::operator++() {
	num++;
	return (*this);
}

Fixed& Fixed::operator--() {
	num--;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

std::ostream& operator << (std::ostream& os, const Fixed& fp) {
	os << fp.toFloat();
	return (os);
}

Fixed::Fixed(const int value) {
	// std::cout << "Int constructor called" << std::endl;
	num = value << N;
}

Fixed::Fixed(const float value) {
	// std::cout << "Float constructor called" << std::endl;
	num = roundf(value * (1 << N));
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (num);
}

void	Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	num = raw;
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(num) / (1 << N));
}

int	Fixed::toInt(void) const {
	return (num >> N);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return (a > b ? a : b);
}

const Fixed &Fixed::min(const Fixed& a, const Fixed& b) {
	return (a < b ? a : b);
}

const Fixed &Fixed::max(const Fixed& a, const Fixed& b) {
	return (a > b ? a : b);
}

Fixed	Fixed::abs() const {
	return Fixed(std::abs(toFloat()));
}
