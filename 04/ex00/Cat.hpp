/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:47:21 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/13 22:36:17 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_H_
#define _CAT_H_

#include "Animal.hpp"

class	Cat : public Animal {
	public :
		Cat();
		Cat(const Cat& value);
		Cat& operator=(const Cat& other);
		void	makeSound() const;
		~Cat();
};

#endif
