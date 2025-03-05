/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:58:02 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/05 15:26:01 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		// Create bureaucrats
		Bureaucrat b1("Alice", 5);
		Bureaucrat b2("Bob", 50);

		// Create forms
		Form f1("Tax Form", 10, 20);
		Form f2("License Form", 40, 50);

		// Test signing forms
		b1.signForm(f1); // Alice can sign the Tax Form
		b1.signForm(f2); // Alice cannot sign the License Form (grade too low)
		b2.signForm(f2); // Bob can sign the License Form

		// Print form details
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;

	} catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}