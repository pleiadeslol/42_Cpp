/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 04:36:14 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/11 04:44:57 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void) {
	srand(time(0));
	int	a = rand() % 3;
	if (a == 0)
		return (new A);
	else if (a == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type!" << std::endl;
}

void identify(Base& p) {
	try{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch(std::exception &e){
	}
	try{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch(std::exception &e){
	}
	try{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch(std::exception &e){
	}
}

int main() {
	// Generate a random instance of A, B, or C
	Base* instance = generate();

	// Identify the type using the pointer version
	std::cout << "Identifying type using pointer: ";
	identify(instance);

	// Identify the type using the reference version
	std::cout << "Identifying type using reference: ";
	identify(*instance);

	// Clean up
	delete instance;

	return 0;
}
