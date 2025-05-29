/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:13:09 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/05/29 13:21:56 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cctype>

class BitcoinExchange {
private:
    std::map<std::string, float> _database;
    
    bool isValidDate(const std::string& date);
    bool isValidValue(const std::string& value);
    float findClosestRate(const std::string& date);
    void trimWhitespace(std::string& str);

public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& other);
    BitcoinExchange& operator=(const BitcoinExchange& other);
    ~BitcoinExchange();
    
    bool loadDatabase(const std::string& filename);
    void processInputFile(const std::string& filename);
};

#endif