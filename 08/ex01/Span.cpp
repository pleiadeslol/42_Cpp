/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 02:28:22 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/12 03:03:12 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int _N) : N(_N), arr(std::vector<int>()) {
}

Span::Span(const Span& value) {
	*this = value;
}

Span& Span::operator=(const Span& other) {
	N = other.N;
	arr = other.arr;
	return (*this);
}

unsigned int Span::getN() const {
	return (N);
}

void	Span::addNumber(unsigned int a) {
	arr.push_back(a);
	flag += 1;
}

unsigned int Span::shortestSpan() {
	if (arr.empty())
	{
		std::cout << "Error: empty vector!" << std::endl;
		exit(1);
	}
	else if (flag == 1)
	{
		std::cout << "Error: you need to add more elements!" << std::endl;
		exit(1);
	}
	std::sort(arr.begin(), arr.end());
	std::vector<int> arr1;
	for (int i = 0; i < flag; i++)
		arr1.push_back(abs(arr[i + 1] - arr[i]));
	std::vector<int>::iterator out = std::min_element(arr1.begin(), arr1.end());
	return (*out);
}

unsigned int Span::longestSpan() {
	if (arr.empty())
	{
		std::cout << "Error: empty vector!" << std::endl;
		exit(1);
	}
	else if (flag == 1)
	{
		std::cout << "Error: you need to add more elements!" << std::endl;
		exit(1);
	}
	std::vector<int>::iterator max = std::max_element(arr.begin(), arr.end());
	std::vector<int>::iterator min = std::min_element(arr.begin(), arr.end());
	unsigned int out = *max - *min;
	return (out);
}

Span::~Span() {
}
