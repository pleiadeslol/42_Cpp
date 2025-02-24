/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:20:26 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/24 17:25:34 by rzarhoun         ###   ########.fr       */
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
		Ice(std::string const type);
		Ice(const Ice& value);
		Ice& operator=(const Ice& other);
		
		~Ice();
};

#endif