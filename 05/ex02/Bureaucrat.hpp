/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:32:27 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/05 22:40:59 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_H_
#define _BUREAUCRAT_H_

#include <iostream>
#include "AForm.hpp"

class AForm;

class	Bureaucrat {
	private :
		const std::string name;
		int grade;
	public :
		Bureaucrat();
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat(const Bureaucrat& value);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();
		const std::string&	getName() const;
		int getGrade() const;
		void	setGrade(int _grade);
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(Form form);

		class	GradeTooHighException : public std::exception {
			public :
				const char * what () const throw () {
					return ("Grade is too high!!");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				const char *what () const throw () {
					return ("Grade is too low!!");
				}
		};
};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & i);

#endif
