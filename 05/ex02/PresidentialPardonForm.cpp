/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 04:54:01 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/10 05:05:58 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm() {	
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm("PresidentialPardonForm", 25, 5), target(_target) {
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& value) : AForm(value) {
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
	*this = value;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	std::cout << "PresidentialPardonForm assignment operator called" << std::endl;
	if (this != &other)
	{
		AForm::operator=(other);
		target = other.target;
	}
	return (*this);
}

void	PresidentialPardonForm::Inform() const {
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	if (getSign() && getExecGrade() > executor.getGrade())
		Inform();
	else
		throw AForm::GradeTooLowException();
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm Destructor is called" << std::endl;
}