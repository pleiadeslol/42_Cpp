/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 23:26:12 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/10 04:53:40 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENTIALPARDONFORM_H_
#define _PRESIDENTIALPARDONFORM_H_

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private :
		std::string target;
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string _target);
		PresidentialPardonForm(const PresidentialPardonForm& value);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
		void	Inform() const;
		void	execute(Bureaucrat const& executor) const;
		virtual ~PresidentialPardonForm();
};

#endif
