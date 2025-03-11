/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 04:17:33 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/11 04:18:35 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
	// Create a Data object
	Data data = {42, "Cpp"};

	// Print the original address of the Data object
	std::cout << "Original address: " << &data << std::endl;

	// Serialize the address of the Data object
	uintptr_t serialized = Serializer::serialize(&data);
	std::cout << "Serialized value: " << serialized << std::endl;

	// Deserialize the value back into a pointer
	Data* deserialized = Serializer::deserialize(serialized);
	std::cout << "Deserialized address: " << deserialized << std::endl;

	// Verify that the deserialized pointer matches the original pointer
	if (deserialized == &data) {
		std::cout << "Deserialization successful! The pointers match." << std::endl;
	} else {
		std::cout << "Deserialization failed! The pointers do not match." << std::endl;
	}

	// Verify the data in the deserialized object
	std::cout << "Deserialized data: value = " << deserialized->value << ", name = " << deserialized->name << std::endl;

	return 0;
}
