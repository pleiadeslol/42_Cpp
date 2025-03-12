/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:57:08 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/12 01:58:12 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <iostream>

template <typename T>
class	Array {
	private :
		T *arr;
		unsigned int len;
	public :
		Array() : arr(new T()), len(0) {};
		Array(unsigned int n) : arr(new T[n]()), len(n) {};
		Array(Array& value) {
			arr = NULL;
			*this = value;
		}
		Array& operator=(Array& other) {
			if (arr)
				delete (arr);
			arr = new T[other.len]();
			len = other.len;
			for (unsigned int i = 0; i < len; i++)
				arr[i] = other.arr[i];
			return (*this);
		}
		T& operator[](unsigned int n) const {
			if (n >= len)
				throw Array::OutofBounds();
			return (arr[n]);
		};
		unsigned int	size() const {
			return (len);
		}
		class OutofBounds : public std::exception {
			const char* what() const throw() {
				return ("Your index is out of bounds!");
			}
		};
		~Array() {
			delete [] arr;
		}
};

#endif