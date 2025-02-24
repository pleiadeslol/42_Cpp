/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:20:26 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/24 18:19:55 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICE_H_
#define _ICE_H_

#include "AMateria.hpp"

class	Ice : public AMateria {
	protected :
		const std::string	_type;
	public :
		Ice();
		Ice(const Ice& value);
		Ice& operator=(const Ice& other);
		Ice* clone() const;
		void use(ICharacter& target);
		~Ice();
};

#endif