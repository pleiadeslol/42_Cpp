/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:13:09 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/15 00:21:51 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BITCOINEXCHANGE_H_
#define _BITCOINEXCHANGE_H_

#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include <cstring>

void	check_value(std::string val);
void	parse_value(std::string val, float* value);
void	parse_input(std::ifstream *infile, std::multimap<std::string, float>*csv);
void	fill_map(std::ifstream *csv_file, std::multimap<std::string, float>*csv);

#endif