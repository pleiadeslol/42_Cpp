/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 23:23:55 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/05 23:26:03 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOTOMYREQUESTFORM_H_
#define _ROBOTOMYREQUESTFORM_H_


#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private :
		std::string target;
	public :
		RobotomyRequestForm(std::string _target);
		RobotomyRequestForm(const RobotomyRequestForm& value);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		~RobotomyRequestForm();
};

#endif