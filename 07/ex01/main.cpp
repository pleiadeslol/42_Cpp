/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:36:16 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/11 17:42:35 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	printElement(const T& element)
{
	std::cout << element << " ";
}

template <typename T>
void	incrementElement(T& element)
{
	element += 1;
}

int main() {
	// Test with an array of integers
	int intArray[] = {1, 2, 3, 4, 5};
	size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

	std::cout << "Original int array: ";
	iter(intArray, intArrayLength, printElement<int>);
	std::cout << std::endl;

	iter(intArray, intArrayLength, incrementElement<int>);
	std::cout << "After increment: ";
	iter(intArray, intArrayLength, printElement<int>);
	std::cout << std::endl;

	// Test with an array of doubles
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	size_t doubleArrayLength = sizeof(doubleArray) / sizeof(doubleArray[0]);

	std::cout << "\nOriginal double array: ";
	iter(doubleArray, doubleArrayLength, printElement<double>);
	std::cout << std::endl;

	iter(doubleArray, doubleArrayLength, incrementElement<double>);
	std::cout << "After increment: ";
	iter(doubleArray, doubleArrayLength, printElement<double>);
	std::cout << std::endl;

	// Test with an array of strings
	std::string stringArray[] = {"hello", "world", "template", "function"};
	size_t stringArrayLength = sizeof(stringArray) / sizeof(stringArray[0]);

	std::cout << "\nOriginal string array: ";
	iter(stringArray, stringArrayLength, printElement<std::string>);
	std::cout << std::endl;

	return 0;
}
