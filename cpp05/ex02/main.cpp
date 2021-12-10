/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:05:49 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/07 00:16:25 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "	----	Form creations	____	" << std::endl;
	try
	{
		Form	circular("A38", 3, 8);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form	circular("B00", 0, 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form	circular("C2200", 2, 200);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "	----	Form signing 	____	" << std::endl;

	Bureaucrat		romano("Cesar", 2);
	Form			circular("A38", 3, 8);
	romano.signForm(circular);
	std::cout << romano << std::endl;
	std::cout << circular << std::endl;


	Bureaucrat		gungan("Jar Jar Binks", 150);
	Form			triangular("B38", 3, 8);
	gungan.signForm(triangular);
	std::cout << gungan << std::endl;
	std::cout << triangular << std::endl;


	Bureaucrat		americano("Trump", 5);
	Form			cuadrada("C58", 5, 8);
	americano.signForm(cuadrada);
	std::cout << americano << std::endl;
	std::cout << cuadrada << std::endl;

	return (0);
}
