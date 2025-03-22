/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 02:46:43 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/22 00:54:06 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PMERGEME_H_
#define _PMERGEME_H_

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <stdexcept>

void	mergeInsertSortVector(std::vector<int>& arr);
void	mergeInsertSortDeque(std::deque<int>& arr);
std::vector<int>	parseArguments(int argc, char* argv[]);

#endif