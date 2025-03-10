/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:39:03 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/10 05:07:28 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("default"), sign(false), sign_grade(0), exec_grade(0) {
}

AForm::AForm(std::string _name, int _sign_grade, int _exec_grade) :
name(_name), sign(false), sign_grade(_sign_grade), exec_grade(_exec_grade) {
	try {
		if (getSignGrade() < 1 || getExecGrade() < 1)
			throw GradeTooHighException();
		else if (getSignGrade() > 150 || getExecGrade() > 150)
			throw GradeTooLowException();
	}
	catch (const GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "AForm Default constructor called" << std::endl;
}

AForm::AForm(const AForm& value) :
name(value.name), sign(value.sign), sign_grade(value.sign_grade), exec_grade(value.exec_grade) {
	std::cout << "AForm Copy constructor called" << std::endl;
	*this = value;
}

AForm& AForm::operator=(const AForm& other) {
	std::cout << "AForm assignment operator called" << std::endl;
	if (this != &other)
		sign = other.sign;
	return (*this);
}

std::string AForm::getName() const {
	return (name);
}

bool	AForm::getSign() const {
	return (sign);
}

void	AForm::setSign(bool _sign) {
	sign = _sign;
}

int AForm::getSignGrade() const {
	return (sign_grade);
}

int AForm::getExecGrade() const {
	return (exec_grade);
}

void	AForm::beSigned(Bureaucrat& bureaucrat) {
	try {
		if (sign)
			throw AForm::AlreadySignedException();
		if (getSignGrade() < bureaucrat.getGrade())
			throw Bureaucrat::GradeTooLowException();
	}
	catch (const GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
		return ;
	}
	sign = true;
	std::cout << getName() << " is signed by " << bureaucrat.getName() << std::endl;
}

std::ostream& operator<<(std::ostream& os, const AForm& form) {
	if (form.getSign())
		os << "AForm " << form.getName() << " is signed." << std::endl;
	else
		os << "AForm " << form.getName() << " is not signed." << std::endl;
	return os;
}

AForm::~AForm() {
	std::cout << "AForm destructor called" << std::endl;
}
