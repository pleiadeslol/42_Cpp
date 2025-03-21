/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:28:00 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/24 18:28:22 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_H_
#define _CURE_H_

#include "AMateria.hpp"

class	Cure : public AMateria {
	protected :
		const std::string	_type;
	public :
		Cure();
		Cure(const Cure& value);
		Cure& operator=(const Cure& other);
		Cure* clone() const;
		void use(ICharacter& target);
		~Cure();
};

#endif