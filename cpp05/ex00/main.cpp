/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:05:49 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/06 03:13:49 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "	----	Right creation	----	" << std::endl;
	try
	{
		Bureaucrat romano("Cesar", 1);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat gungan("JarJar Binks", 150);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "	----	Wrong creations	----	" << std::endl;
	try
	{
		Bureaucrat americano("Trump", 0);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat español("Fraga", 200);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "	----	Upgrade	----	" << std::endl;
	try
	{
		Bureaucrat romano("Cesar", 1);
		romano.upgrade();
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat gungan("JarJar Binks", 150);
		gungan.upgrade();
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "	----	Downgrade	----	" << std::endl;
	try
	{
		Bureaucrat romano("Cesar", 1);
		romano.downgrade();
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat gungan("JarJar Binks", 150);
		gungan.downgrade();
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
