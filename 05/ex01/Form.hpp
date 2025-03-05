/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 23:08:11 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/05 15:28:10 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_H_
#define _FORM_H_

#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form {
	private :
		const std::string name;
		bool	sign;
		const int	sign_grade;
		const int	exec_grade;
	public :
		Form();
		Form(std::string _name, int _sign_grade, int _exec_grade);
		Form(const Form& value);
		Form& operator=(const Form& other);
		std::string getName() const;
		bool	getSign() const;
		void	setSign(bool _sign);
		int getSignGrade() const;
		int getExecGrade() const;
		void	beSigned(Bureaucrat& bureaucrat);
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("<Form> Grade too high !!");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("<Form> Grade too low !!");
				}
		};
		~Form();
};

std::ostream & operator<<(std::ostream& os, Form const& form);

#endif
