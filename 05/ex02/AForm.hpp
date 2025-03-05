/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:38:10 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/05 22:40:21 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AFORM_H_
#define _AFORM_H_

#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm {
	private :
		const std::string name;
		bool	sign;
		const int	sign_grade;
		const int	exec_grade;
	public :
		AForm();
		AForm(std::string _name, int _sign_grade, int _exec_grade);
		AForm(const AForm& value);
		AForm& operator=(const AForm& other);
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
					return ("<AForm> Grade too high !!");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("<AForm> Grade too low !!");
				}
		};
		~AForm();
};

std::ostream & operator<<(std::ostream& os, AForm const& form);

#endif
