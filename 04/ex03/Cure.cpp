/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:28:30 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/24 18:29:26 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(const Cure& value) : AMateria(value) {
}

Cure& Cure::operator=(const Cure& other) {
	(void)other;
	return (*this);
}

Cure* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure() {
}
