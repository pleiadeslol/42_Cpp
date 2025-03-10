/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:48:28 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/10 05:38:32 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERYCREATIONFORM_H_
#define _SHRUBBERYCREATIONFORM_H_

#include <fstream>
#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm {
	private :
		std::string	target;
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string _target);
		ShrubberyCreationForm(const ShrubberyCreationForm& value);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		void	Inform() const;
		void	execute(Bureaucrat const& executor) const;
		virtual ~ShrubberyCreationForm();
};

#endif
