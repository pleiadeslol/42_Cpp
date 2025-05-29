/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:22:13 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/05/29 13:23:03 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _database(other._database) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    if (this != &other) {
        _database = other._database;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::trimWhitespace(std::string& str) {
    size_t start = 0;
    while (start < str.length() && std::isspace(str[start])) {
        start++;
    }
    
    size_t end = str.length();
    while (end > start && std::isspace(str[end - 1])) {
        end--;
    }
    
    str = str.substr(start, end - start);
}

bool BitcoinExchange::isValidDate(const std::string& date) {
    if (date.length() != 10) return false;
    if (date[4] != '-' || date[7] != '-') return false;
    
    for (int i = 0; i < 10; i++) {
        if (i != 4 && i != 7 && !std::isdigit(date[i])) {
            return false;
        }
    }
    
    std::string yearStr = date.substr(0, 4);
    std::string monthStr = date.substr(5, 2);
    std::string dayStr = date.substr(8, 2);
    
    int year = std::atoi(yearStr.c_str());
    int month = std::atoi(monthStr.c_str());
    int day = std::atoi(dayStr.c_str());
    
    if (year < 1000 || month < 1 || month > 12 || day < 1 || day > 31) {
        return false;
    }
    
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        daysInMonth[1] = 29;
    }
    
    return day <= daysInMonth[month - 1];
}

bool BitcoinExchange::isValidValue(const std::string& value) {
    if (value.empty()) return false;
    
    bool hasDecimal = false;
    size_t start = 0;
    
    if (value[0] == '-') {
        start = 1;
    }
    
    for (size_t i = start; i < value.length(); i++) {
        if (value[i] == '.') {
            hasDecimal = true;
        } else if (!std::isdigit(value[i])) {
            return false;
        }
    }
    
    return true;
}

float BitcoinExchange::findClosestRate(const std::string& date) {
    std::map<std::string, float>::iterator it = _database.lower_bound(date);
    
    if (it != _database.begin()) {
        if (it != _database.end() && it->first == date) {
            return it->second;
        }
        --it;
        return it->second;
    }
    
    return _database.begin()->second;
}

bool BitcoinExchange::loadDatabase(const std::string& filename) {
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: could not open database file." << std::endl;
        return false;
    }
    
    std::string line;
    std::getline(file, line);
    
    while (std::getline(file, line)) {
        size_t commaPos = line.find(',');
        if (commaPos != std::string::npos) {
            std::string date = line.substr(0, commaPos);
            std::string valueStr = line.substr(commaPos + 1);
            
            float value = std::atof(valueStr.c_str());
            _database[date] = value;
        }
    }
    
    file.close();
    return true;
}

void BitcoinExchange::processInputFile(const std::string& filename) {
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }
    
    std::string line;
    std::getline(file, line);
    
    while (std::getline(file, line)) {
        size_t pipePos = line.find('|');
        
        if (pipePos == std::string::npos) {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        
        std::string date = line.substr(0, pipePos);
        std::string valueStr = line.substr(pipePos + 1);
        
        trimWhitespace(date);
        trimWhitespace(valueStr);
        
        if (!isValidDate(date)) {
            std::cout << "Error: bad input => " << date << std::endl;
            continue;
        }
        
        if (!isValidValue(valueStr)) {
            std::cout << "Error: bad input => " << valueStr << std::endl;
            continue;
        }
        
        float value = std::atof(valueStr.c_str());
        
        if (value < 0) {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }
        
        if (value > 1000) {
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }
        
        float rate = findClosestRate(date);
        float result = value * rate;
        
        std::cout << date << " => " << value << " = " << result << std::endl;
    }
    
    file.close();
}
