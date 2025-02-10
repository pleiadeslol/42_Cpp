/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:18:13 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/10 19:26:24 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {
}

Point::Point(const Fixed& a, const Fixed& b) : x(a), y(b) {
}

Point::Point(const Point& other) : x(other.x), y(other.y) {
}

Point& Point::operator=(const Point& other) {
	if (this != &other)
	{
		x = other.x;
		y = other.y;
	}
	return (*this);
}

Point::~Point() {
}

Fixed	Point::GetX() const {
	return (x);
}

Fixed	Point::GetY() const {
	return (y);
}
