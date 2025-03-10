/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 05:40:01 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/10 05:41:09 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
    srand(time(0)); // Seed for random number generation

    try {
        Bureaucrat b1("Alice", 1);
        Bureaucrat b2("Bob", 150);

        ShrubberyCreationForm f1("home");
        RobotomyRequestForm f2("R2D2");
        PresidentialPardonForm f3("Marvin");

        b2.signForm(f1); // Bob cannot sign
        b1.signForm(f1); // Alice signs
        b1.executeForm(f1); // Alice executes

        b1.signForm(f2); // Alice signs
        b1.executeForm(f2); // Alice executes

        b1.signForm(f3); // Alice signs
        b1.executeForm(f3); // Alice executes

    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}