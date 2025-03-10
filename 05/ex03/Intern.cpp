/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 05:51:53 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/10 05:59:07 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern created" << std::endl;
}

Intern::Intern(const Intern& value) {
	*this = value;
}

Intern& Intern::operator=(const Intern& other) {
	(void)other;
	return (*this);
}

AForm *Intern::makeForm(const std::string& _name, const std::string& _target) {
	std::string str[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	AForm    *ptr[3];
	ptr[0] = new PresidentialPardonForm(_target);
	ptr[1] = new RobotomyRequestForm(_target);
	ptr[2] = new ShrubberyCreationForm(_target);

	for (int i = 0; i < 3; i++)
	{
		if(str[i] == _name)
		{
			std::cout << "Intern creates " << str[i] << std::endl;
			for(int k = 0; k < 3; k++)
			{
				if(k != i)
					delete ptr[k];
			}
			return ( ptr[i]);
		}
	}
	std::cout << _name << " form doesnt exist!" << std::endl;
	for(int k = 0; k < 3; k++)
		delete ptr[k];
	return(NULL);
}

Intern::~Intern() {
}
