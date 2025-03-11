/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 05:16:56 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/11 17:33:08 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename T1>
void	iter(T *arr, int size, void (*fun)(T1))
{
	for (int i = 0; i < size; i++)
        fun(arr[i]);
}