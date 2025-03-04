/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:58:02 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/04 22:58:21 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		// Test valid bureaucrat
		Bureaucrat b1("John", 2);
		std::cout << b1 << std::endl;

		// Increment grade
		b1.incrementGrade();
		std::cout << "After increment: " << b1 << std::endl;

		// Decrement grade
		b1.decrementGrade();
		std::cout << "After decrement: " << b1 << std::endl;

		// Test invalid grade (too high)
		Bureaucrat b2("Alice", 0); // This will throw GradeTooHighException
	} catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try {
		// Test invalid grade (too low)
		Bureaucrat b3("Bob", 151); // This will throw GradeTooLowException
	} catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}