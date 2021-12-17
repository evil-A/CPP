/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:30:17 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/17 11:18:57 by evila-ro         ###   ########.fr       */
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
	return (0);
}
