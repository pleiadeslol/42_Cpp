/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:32:09 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/10 05:14:30 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade) {
	try {
		if (_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (const Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& value) : name(value.name), grade(value.grade) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = value;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	std::cout << "Bureaucrat assignment operator called" << std::endl;
	if (this != &other)
		grade = other.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" << std::endl;
}

const std::string&	Bureaucrat::getName() const {
	return (name);
}

int Bureaucrat::getGrade() const {
	return (grade);
}

void	Bureaucrat::setGrade(int _grade) {
	grade = _grade;
}

void	Bureaucrat::incrementGrade() {
	try {
		if (getGrade() - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
		return ;
	}
	setGrade(getGrade() - 1);
}

void	Bureaucrat::decrementGrade() {
	try {
		if (getGrade() + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
		return ;
	}
	setGrade(getGrade() + 1);
}

void	Bureaucrat::signForm(AForm &form) {
	if (form.getSignGrade() >= grade)
	{
		form.setSign(true);
		std::cout << name << " signs " << form.getName() << std::endl;
	}
	else
		std::cout << name << " can't sign " << form.getName() << " because the bureaucrat's grade is lower." << std::endl;
}

void	Bureaucrat::executeForm(AForm const& form) {
	try {
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error! " << form.getName() << " not executed because " ;
		std::cout << e.what() << " ." << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &i) {
	os << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;
	return os;
}
