/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:44:45 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/22 16:50:22 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	// Testing Animal, Dog, and Cat
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "Dog type: " << dog->getType() << std::endl;
	std::cout << "Cat type: " << cat->getType() << std::endl;

	std::cout << "Dog sound: ";
	dog->makeSound(); // Should print "Woof!"

	std::cout << "Cat sound: ";
	cat->makeSound(); // Should print "Meow!"

	std::cout << "Animal sound: ";
	meta->makeSound(); // Should print "Animal sound"

	// Testing WrongAnimal and WrongCat
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "WrongCat type: " << wrongCat->getType() << std::endl;

	std::cout << "WrongCat sound: ";
	wrongCat->makeSound(); // Should print "WrongAnimal sound" (no dynamic binding)

	std::cout << "WrongAnimal sound: ";
	wrongMeta->makeSound(); // Should print "WrongAnimal sound"

	delete wrongMeta;
	delete wrongCat;

	return 0;
}