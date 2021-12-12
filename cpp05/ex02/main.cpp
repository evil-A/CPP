/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:05:49 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/12 05:50:21 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << "		TOP GRADE		" << std::endl << std::endl;
	try
	{
		Bureaucrat	romano("Pijus Magnificus", 1);

		ShrubberyCreationForm	S("Agojadle al suelo");
		RobotomyRequestForm		R("¿Asi que eres gomano?");
		PresidentialPardonForm	P("Goger");

		romano.signForm(S);
		romano.executeForm(S);
		romano.signForm(R);
		romano.executeForm(R);
		romano.signForm(P);
		romano.executeForm(P);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "		MEDIUM GRADE		" << std::endl << std::endl;
	try
	{
		Bureaucrat	gungan("Jar Jar Binks", 60);

		ShrubberyCreationForm	S("Agojadle al suelo");
		RobotomyRequestForm		R("¿Asi que eres gomano?");
		PresidentialPardonForm	P("Goger");

		gungan.signForm(S);
		gungan.executeForm(S);
		gungan.signForm(R);
		gungan.executeForm(R);
		gungan.signForm(P);
		gungan.executeForm(P);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "		LOW GRADE		" << std::endl << std::endl;
	try
	{
		Bureaucrat	americano("Donald Trump", 140);

		ShrubberyCreationForm	S("Agojadle al suelo");
		RobotomyRequestForm		R("¿Asi que eres gomano?");
		PresidentialPardonForm	P("Goger");

		americano.signForm(S);
		americano.executeForm(S);
		americano.signForm(R);
		americano.executeForm(R);
		americano.signForm(P);
		americano.executeForm(P);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
