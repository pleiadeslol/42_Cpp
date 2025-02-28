/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:15:59 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/04 15:28:56 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_H_
#define _HARL_H_

#include <iostream>

enum	Level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
};

class Harl {
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		void	complain(int level);
};

#endif
