/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 00:24:28 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/11 06:23:04 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include "Replace.hpp"

int		terror(int argc, char **argv)
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
	return (0);
}

int	main(int argc, char **argv)
{
	
	if (terror(argc, argv))
		return (1);
	Replace	doc(argv[1], argv[2], argv[3]);
	doc.renew();

	return (0);
}
