/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 01:55:16 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/12 01:57:13 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	// Test default constructor
	Array<int> emptyArray;
	std::cout << "Size of emptyArray: " << emptyArray.size() << std::endl;

	// Test constructor with size
	Array<int> intArray(5);
	std::cout << "Size of intArray: " << intArray.size() << std::endl;

	// Fill and display intArray
	for (size_t i = 0; i < intArray.size(); ++i) {
		intArray[i] = i * 10;
	}
	std::cout << "intArray elements: ";
	for (size_t i = 0; i < intArray.size(); ++i) {
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;

	// Test copy constructor
	Array<int> copiedArray(intArray);
	std::cout << "Size of copiedArray: " << copiedArray.size() << std::endl;
	std::cout << "copiedArray elements: ";
	for (size_t i = 0; i < copiedArray.size(); ++i) {
		std::cout << copiedArray[i] << " ";
	}
	std::cout << std::endl;

	// Modify copiedArray and ensure intArray is unaffected
	copiedArray[0] = 100;
	std::cout << "After modifying copiedArray: " << copiedArray[0] << " (intArray: " << intArray[0] << ")" << std::endl;

	// Test assignment operator
	Array<int> assignedArray;
	assignedArray = intArray;
	std::cout << "Size of assignedArray: " << assignedArray.size() << std::endl;
	std::cout << "assignedArray elements: ";
	for (size_t i = 0; i < assignedArray.size(); ++i) {
		std::cout << assignedArray[i] << " ";
	}
	std::cout << std::endl;

	// Modify assignedArray and ensure intArray is unaffected
	assignedArray[1] = 200;
	std::cout << "After modifying assignedArray: " << assignedArray[1] << " (intArray: " << intArray[1] << ")" << std::endl;

	// Test out-of-bounds access
	try {
		std::cout << "Attempting to access out-of-bounds element: ";
		std::cout << intArray[10] << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	// Test with a different type (std::string)
	Array<std::string> stringArray(3);
	stringArray[0] = "Hello";
	stringArray[1] = "World";
	stringArray[2] = "!";
	std::cout << "stringArray elements: ";
	for (size_t i = 0; i < stringArray.size(); ++i) {
		std::cout << stringArray[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
