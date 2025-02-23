/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:13:43 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/23 17:18:42 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_H_
#define _AMATERIA_H_

#include "Character.hpp"

class	AMateria {
	protected :
		const std::string _type;
	public :
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& value);
		AMateria& operator=(const AMateria& other);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		~AMateria();
};

#endif
