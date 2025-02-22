/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:44:45 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/22 18:15:23 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main() {
	const int numAnimals = 4;
	Animal* animals[numAnimals];

	// Create an array of Animal objects (half Dog, half Cat)
	for (int i = 0; i < numAnimals / 2; ++i) {
		animals[i] = new Dog("Doooooog");
	}
	for (int i = numAnimals / 2; i < numAnimals; ++i) {
		animals[i] = new Cat("Caaaaat");
	}

	// Test makeSound() for each animal
	for (int i = 0; i < numAnimals; ++i) {
		std::cout << "Animal " << i << " type: " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}

	// Delete all animals
	for (int i = 0; i < numAnimals; ++i) {
		delete animals[i];
	}

	return 0;
}