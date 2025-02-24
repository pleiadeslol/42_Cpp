/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:13:43 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/24 18:18:44 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default") {
}

AMateria::AMateria(std::string const & type) : _type(type) {
}

AMateria::AMateria(const AMateria& value) : _type(value._type) {
}

AMateria& AMateria::operator=(const AMateria& other) {
	(void)other;
	return (*this);
}

std::string const & AMateria::getType() const {
	return (_type);
}

void AMateria::use(ICharacter& target) {
	
}

AMateria::~AMateria() {
}

