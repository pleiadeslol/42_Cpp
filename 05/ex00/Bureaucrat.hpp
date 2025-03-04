/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 23:46:29 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/04 23:03:01 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_H_
#define _BUREAUCRAT_H_

#include <iostream>

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
