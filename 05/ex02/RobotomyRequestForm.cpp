/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 05:16:24 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/10 05:31:17 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm("RobotomyRequestForm", 75, 45), target(_target) {
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& value) : AForm(value) {
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
	*this = value;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	std::cout << "RobotomyRequestForm assignment operator called" << std::endl;
	if (this != &other)
	{
		AForm::operator=(other);
		target = other.target;
	}
	return (*this);
}

void	RobotomyRequestForm::Inform() const {
	srand(time(0));
	int	a = rand() % 2;
	if (a)
		std::cout << target << " has been robotomized successfully 50 \% of the time" << std::endl;
	else
		std::cout << target << " has been failed" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	if (getSign() && getExecGrade() > executor.getGrade())
		Inform();
	else
		throw AForm::GradeTooLowException();
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}
