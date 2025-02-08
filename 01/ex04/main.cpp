/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:32:41 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/08 17:03:22 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

bool	err_args(int ac)
{
	if (ac != 4)
		return (std::cerr << "Wrong number of args" << std::endl, true);
	return (false);
}

void	replace_file(std::string &filename, std::string	&s1, std::string &s2)
{
	std::ifstream	file(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "Can't open " << filename << std::endl;
		return ;
	}
	std::stringstream	buff;
	buff << file.rdbuf();
	file.close();
	std::string content = buff.str();
	if (content.empty())
	{
		std::cerr << filename << " is empty" << std::endl;
		return ;
	}
	size_t	pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.replace(pos, s1.length(), s2);
		pos += s2.length();
	}
	std::string	replace = filename + ".replace";
	std::ofstream	outfile(replace.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Can't open " << replace << std::endl;
		return ;
	}
	outfile << content;
	outfile.close();
}

int	main(int ac, char **av)
{
	if (err_args(ac))
		return (1);
	std::string	filename = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	replace_file(filename, s1, s2);
	return (0);
}
