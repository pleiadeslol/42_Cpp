/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:35:14 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/10 18:10:43 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_H_
#define _FIXED_H_

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	num;
		static const int N = 8;
	public:
		Fixed();
		Fixed(const Fixed& value);
		Fixed& operator=(const Fixed& other);
		bool operator>(const Fixed& other) const ;
		bool operator<(const Fixed& other) const ;
		bool operator>=(const Fixed& other) const ;
		bool operator<=(const Fixed& other) const ;
		bool operator==(const Fixed& other) const ;
		bool operator!=(const Fixed& other) const ;
		Fixed operator+(const Fixed& other);
		Fixed operator-(const Fixed& other);
		Fixed operator*(const Fixed& other);
		Fixed operator/(const Fixed& other);
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		friend std::ostream& operator<<(std::ostream& os, const Fixed& fp);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};


#endif
