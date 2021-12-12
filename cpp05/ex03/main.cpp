/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:05:49 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/12 06:38:24 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << "		RIGHT		" << std::endl << std::endl;
	try
	{
		Intern	eponimo;
	
		eponimo.makeForm("shrubbery creation", "Fistro");
		eponimo.makeForm("robotomy request", "Diodeno de persona");
		eponimo.makeForm("presidential pardon", "Pecador");
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "		WRONG		" << std::endl << std::endl;
	try
	{
		Intern	eponimo;
	
		eponimo.makeForm("al ataquerl", "¡Cobarderl!");
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
