/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:01:51 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/25 18:12:01 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIASOURCE_H_
#define _MATERIASOURCE_H_

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource {
	private :
		AMateria* materias[4];
	public :
		MateriaSource();
		MateriaSource(const MateriaSource& value);
		MateriaSource& operator=(const MateriaSource& other);
		void	learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
		~MateriaSource();
};

#endif