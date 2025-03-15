/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:22:13 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/15 01:26:06 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	check_value(std::string val) {
	for (int i = 0; i < (int)val.length(); i++)
	{
		if (!isdigit(val[i]) && !isspace(val[i]))
		{
			if (val[i] != '-' && val[i] != '.')
				std::cout << "Error: bad input => " << val[i] << std::endl;
			break ;
		}
	}
}

void	parse_value(std::string val, float* value) {
	std::string	val2;
	check_value(val);
	std::istringstream iss(val);
	while (std::getline(iss, val2, '\0'))
		*value = std::atof(val2.c_str());
}

void	fill_map(std::ifstream *csv_file, std::multimap<std::string, float>*csv) {
	std::string	line;
	std::string	date;
	std::string	val;
	float	value;
	
	while (std::getline(*csv_file, line))
	{
		std::istringstream	iss(line);
		if (std::getline(iss, date, ','))
		{
			if (std::getline(iss, val))
			{
				value = std::atof(val.c_str());
				csv->insert(std::make_pair(date, value));
			}
		}
	}
}

void	get_value(std::string val, float* value, float* value1, int* flag)
{
	parse_value(val, value);
	if (*value <= 1000.00 && *value >= 0)
	*value1 = *value;
	else if (*value > 1000.00)
	{
		std::cout << "Error: number too large." << std::endl;
		flag += 1;
	}
	else if (*value < 0)
	{
		std::cout << "Error: number isn't positive." << std::endl;
		flag += 1;
	}
}

float	get_result(std::multimap<std::string, float>*csv, std::string date)
{
	float mul = 0;
	std::map<std::string, float>::iterator it = csv->lower_bound(date);
	it--;
	if (it != csv->begin() && it != csv->end())
	{
		std::map<std::string, float>::iterator prev = it;
		prev--;
		mul = (date.compare(prev->first) < 0) ? (prev--)->second : it->second;
	}
	else
	mul = it->second;
	return (mul);
}

void	parse_data(std::string date, int* flag)
{
	std::string year, month, day;
	int mt = 0;
	std::istringstream iss(date);
	if (std::getline(iss, year, '-'))
	{
		if (year.length() != 4)
		{
			std::cout << "Error: bad input => " << year << std::endl;
			flag += 1;
		}
		for (int i = 0; i < (int)year.length(); i++)
		{
			if (!isdigit(year[i]) && !isspace(year[i]))
			{
				std::cout << "Error: bad input => " << year << std::endl;
				*flag = 1;
				break;
			}
		}
		if (std::getline(iss, month, '-') && !(*flag))
		{
			for (int i = 0; i < (int)month.length(); i++)
			{
				if (!isdigit(month[i]) && !isspace(month[i]))
				{
					std::cout << "Error: bad input => " << month << std::endl;
					*flag = 1;
					break;
				}
				mt = std::atoi(month.c_str());
				if (mt <= 0 || mt > 12)
				{
					std::cout << "Error: bad input => " << month << std::endl;
					*flag = 1;
					break;
				}
			}
			if (std::getline(iss, day, ' ') && !(*flag))
			{
				for (int i = 0; i < (int)day.length(); i++)
				{
					if (!isdigit(day[i]) && !isspace(day[i]))
					{
						std::cout << "Error: bad input => " << day << std::endl;
						*flag = 1;
						break;
					}
					int dy = std::atoi(day.c_str());
					if (dy <= 0 || dy > 31)
					{
						std::cout << "Error: bad input => " << day << std::endl;
						*flag = 1;
						break;
					}
					else if ((dy == 29 && mt == 02 && std::atoi(year.c_str()) % 4 != 0) || (mt == 02 && dy > 29))
					{
						std::cout << "Error: bad input => " << date << std::endl;
						*flag = 1;
						break;
					}
				}
			}
		}
	}
}

void	parse_input(std::ifstream *infile, std::multimap<std::string, float>*csv) {
	std::string line, date, val;
	float value = 0, value1 = 0;
	
	std::getline(*infile, line);
	while (std::getline(*infile, line))
	{
		int flag = 0;
		std::istringstream iss(line);
		if (std::getline(iss, date, '|'))
		{
			parse_data(date, &flag);
			if (std::getline(iss, val))
				get_value(val, &value, &value1, &flag);
			else
			{
				std::cout << "Error: bad input => " << date << std::endl;
				flag += 1;
			}
		}
		if (flag == 0)
			std::cout << date << " => " << value1 << " = " << value1 * get_result(csv, date) << std::endl;
	}
}
