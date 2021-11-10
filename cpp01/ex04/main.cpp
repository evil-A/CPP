/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 00:24:28 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/10 05:39:38 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong!" << std::endl;
		return (1);
	}
	std::ifstream	file(argv[1]);
	if (!file)
	{
		std::cout << "File corrupted" << std::endl;
		return (1);
	}
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);
	std::string		part0;
	std::string		part1;
	

//		file >> part0 >> s1 >> part1;
//		std::cout << part0 << part1 << std::endl;

	return (0);
}
