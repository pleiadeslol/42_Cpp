/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:10:00 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/05/29 13:24:43 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Error: Could not open file." << std::endl;
        return 1;
    }
    
    BitcoinExchange exchange;
    
    if (!exchange.loadDatabase("data.csv")) {
        return 1;
    }
    
    exchange.processInputFile(argv[1]);
    
    return 0;
}
