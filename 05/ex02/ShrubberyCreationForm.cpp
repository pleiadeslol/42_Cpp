/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 05:32:56 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/10 05:39:34 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) :
AForm("ShrubberyCreationForm", 145, 137), target(_target) {
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& value) : AForm(value) {
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
	*this = value;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	std::cout << "ShrubberyCreationForm assignment operator called" << std::endl;
	if (this != &other)
	{
		AForm::operator=(other);
		target = other.target;
	}
	return (*this);
}

void	ShrubberyCreationForm::Inform() const {
	std::string filename = target + "_shrubbery";
    std::ofstream newFile(filename.c_str());
    if(newFile.is_open())
    {
        newFile << "           *" << std::endl;
        newFile << "          * *" << std::endl;
        newFile << "         *   *" << std::endl;
        newFile << "        *     *" << std::endl;
        newFile << "       *       *" << std::endl;
        newFile << "      *         *" << std::endl;
        newFile << "     *           *" << std::endl;
        newFile << "    *             *" << std::endl;
        newFile << "   *               *" << std::endl;
        newFile << "  *                 *" << std::endl;
        newFile << " *                   *" << std::endl;
        newFile << "* * * * * * * * * * * *" << std::endl;
        newFile << "          | |" << std::endl;
        newFile << "          | |" << std::endl;
        newFile << "          | |" << std::endl;
    }
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	if (getSign() && getExecGrade() > executor.getGrade())
		Inform();
	else
		throw AForm::GradeTooLowException();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}
