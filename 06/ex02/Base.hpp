/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 04:30:06 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/11 04:35:47 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BASE_H_
#define _BASE_H_

#include <iostream>
#include <stdint.h>
#include <cmath>

class Base {
	public :
		virtual ~Base() {
		};
};

class A : public Base {
	public :
		~A() {
		};
};

class B : public Base {
	public :
		~B() {
		};
};

class C : public Base {
	public :
		~C() {
		};
};


#endif
