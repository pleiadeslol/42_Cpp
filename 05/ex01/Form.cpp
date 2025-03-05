/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 23:08:06 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/05 15:32:14 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), sign(false), sign_grade(0), exec_grade(0) {
}

Form::Form(std::string _name, int _sign_grade, int _exec_grade) :
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
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(const Form& value) :
name(value.name), sign(value.sign), sign_grade(value.sign_grade), exec_grade(value.exec_grade) {
	std::cout << "Form Copy constructor called" << std::endl;
	*this = value;
}

Form& Form::operator=(const Form& other) {
	std::cout << "Form assignment operator called" << std::endl;
	if (this != &other)
		sign = other.sign;
	return (*this);
}

std::string Form::getName() const {
	return (name);
}

bool	Form::getSign() const {
	return (sign);
}

void	Form::setSign(bool _sign) {
	sign = _sign;
}

int Form::getSignGrade() const {
	return (sign_grade);
}

int Form::getExecGrade() const {
	return (exec_grade);
}

void	Form::beSigned(Bureaucrat& bureaucrat) {
	try {
		if (getSignGrade() < bureaucrat.getGrade())
			throw GradeTooLowException();
	}
	catch (const GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
		return ;
	}
	if (getSignGrade() >= bureaucrat.getGrade())
	{
		sign = true;
		std::cout << getName() << " is signed by " << bureaucrat.getName() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
	if (form.getSign())
		os << "Form " << form.getName() << " is signed." << std::endl;
	else
		os << "Form " << form.getName() << " is not signed." << std::endl;
	return os;
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}
