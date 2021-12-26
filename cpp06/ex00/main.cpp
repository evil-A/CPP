/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:30:17 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/26 20:25:06 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Scalar.hpp"

int	terror(void)
{
	std::cout << "Wrong arguments" << std::endl;
	return (-1);
}

int	main(int argc, char const **argv)
{
	Scalar	input;
	if (argc != 2)
		return (terror());
	input.setLiteral(static_cast<std::string>(argv[1]));
//	input.toChar();
	input.toInt();
	input.toFloat();
	input.toDouble();

	return (0);
}
