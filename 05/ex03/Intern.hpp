/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 05:48:30 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/10 05:51:42 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INTERN_H_
#define _INTERN_H_

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class	Intern {
	public :
		Intern();
		Intern(const Intern& value);
		Intern& operator=(const Intern& other);
		~Intern();

		AForm *makeForm(const std::string& _name, const std::string& _target);
};

#endif
