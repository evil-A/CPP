/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:42:42 by evila-ro          #+#    #+#             */
/*   Updated: 2023/12/22 11:55:00 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		BitcoinExchange bitcoin("data.csv");
		bitcoin.parseInput(av[1]);
	}
	else
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	return (0);
};
