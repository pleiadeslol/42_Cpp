/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 05:40:01 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/10 06:00:18 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main() {
	Intern intern;

	// Test creating valid forms
	AForm* form1 = intern.makeForm("shrubbery creation", "home");
	AForm* form2 = intern.makeForm("robotomy request", "R2D2");
	AForm* form3 = intern.makeForm("presidential pardon", "Marvin");

	// Test creating an invalid form
	AForm* form4 = intern.makeForm("invalid form", "target");

	// Clean up dynamically allocated forms
	delete form1;
	delete form2;
	delete form3;
	delete form4; // Should be nullptr, so safe to delete

	return 0;
}