/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 02:19:41 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/12 03:13:08 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_H_
#define _SPAN_H_

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class Span
{
	private:
		unsigned int N;
		std::vector<int> arr;
	public:
		int flag;
		Span();
		Span(unsigned int _N);
		Span(const Span& value);
		Span& operator=(const Span& other);
		unsigned int getN() const;
		void	addNumber(unsigned int a);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		~Span();
		template <typename Iterator>
		void addRange(Iterator begin, Iterator end) {
			size_t rangeSize = std::distance(begin, end);
			if (flag + rangeSize > N) {
				throw std::overflow_error("Cannot add range: Span would exceed maximum size");
			}
			arr.insert(arr.end(), begin, end);
			flag += rangeSize;
		}
};

#endif