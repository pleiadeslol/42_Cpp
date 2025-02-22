/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:31:42 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/22 16:51:26 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGCAT_H_
#define _WRONGCAT_H_

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {
	public :
		WrongCat();
		WrongCat(const WrongCat& value);
		WrongCat& operator=(const WrongCat& other);
		void	makeSound() const;
		~WrongCat();
};

#endif
