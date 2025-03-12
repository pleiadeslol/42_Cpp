/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 02:51:15 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/12 03:12:18 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

// int main()
// {
// 	Span sp = Span(5);
// 	sp.flag = 0;
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }


int main() {
	// Test with a small Span
	try {
		Span smallSpan(5);
		smallSpan.flag = 0;
		smallSpan.addNumber(10);
		smallSpan.addNumber(20);
		smallSpan.addNumber(30);
		smallSpan.addNumber(40);
		smallSpan.addNumber(50);

		std::cout << "Shortest span (smallSpan): " << smallSpan.shortestSpan() << std::endl;
		std::cout << "Longest span (smallSpan): " << smallSpan.longestSpan() << std::endl;

		// Attempt to add another number (should throw an exception)
		smallSpan.addNumber(60);
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	// Test with a large Span (10,000 numbers)
	try {
		Span largeSpan(10000);
		largeSpan.flag = 0;
		for (int i = 0; i < 10000; ++i) {
			largeSpan.addNumber(i);
		}

		std::cout << "\nShortest span (largeSpan): " << largeSpan.shortestSpan() << std::endl;
		std::cout << "Longest span (largeSpan): " << largeSpan.longestSpan() << std::endl;

		// Attempt to add another number (should throw an exception)
		largeSpan.addNumber(10001);
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	// Test with a Span filled using a range of numbers
	try {
		Span rangeSpan(10);
		rangeSpan.flag = 0;

		// Initialize the vector in C++98-compatible way
		std::vector<int> numbers;
		numbers.push_back(1);
		numbers.push_back(2);
		numbers.push_back(3);
		numbers.push_back(4);
		numbers.push_back(5);
		numbers.push_back(6);
		numbers.push_back(7);
		numbers.push_back(8);
		numbers.push_back(9);
		numbers.push_back(10);

		// Add the range of numbers to the Span
		rangeSpan.addRange(numbers.begin(), numbers.end());

		std::cout << "\nShortest span (rangeSpan): " << rangeSpan.shortestSpan() << std::endl;
		std::cout << "Longest span (rangeSpan): " << rangeSpan.longestSpan() << std::endl;

		// Attempt to add another number (should throw an exception)
		rangeSpan.addNumber(11);
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	// Test with an empty Span
	try {
		Span emptySpan(10);
		emptySpan.flag = 0;
		std::cout << "\nShortest span (emptySpan): " << emptySpan.shortestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	// Test with a Span containing only one number
	try {
		Span singleSpan(10);
		singleSpan.flag = 0;
		singleSpan.addNumber(42);
		std::cout << "\nLongest span (singleSpan): " << singleSpan.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}