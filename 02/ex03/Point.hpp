/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:18:19 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/10 19:26:34 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_H_
#define _POINT_H_

#include "Fixed.hpp"

class	Point {
	private :
		Fixed x;
		Fixed y;
	public :
		Point();
		Point(const Fixed& a, const Fixed& b);
		Point(const Point& other);
		Point& operator=(const Point& other);
		~Point();
		Fixed	GetX() const ;
		Fixed	GetY() const ;
};

#endif