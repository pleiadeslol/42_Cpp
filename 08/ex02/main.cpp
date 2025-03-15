/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 23:52:51 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/15 00:03:19 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include <iostream>
#include "MutantStack.hpp"

int main() {
	MutantStack<int> mstack;

	// Push elements onto the stack
	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(42);

	// Test regular iterators
	std::cout << "Regular iterators (forward):" << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
		std::cout << *it << std::endl;
	}

	// Test reverse iterators
	std::cout << "Reverse iterators (backward):" << std::endl;
	for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit) {
		std::cout << *rit << std::endl;
	}

	return 0;
}