/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:42:42 by evila-ro          #+#    #+#             */
/*   Updated: 2023/12/27 21:57:56 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cout << "Error: Wrong number of arguments." << std::endl;
		return 1;
	}

	BitcoinExchange memo("data.csv");
	memo.parseBit(argv[1]);

	return (0);
}
