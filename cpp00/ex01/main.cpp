/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:50:46 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/02 22:50:10 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <string.h>
#include "Chorbo.hpp"
#include "Contact.hpp"

void	intro(void)
{
	std::cout << "¡Los 90's han vuelto!" << std::endl;
	std::cout << "Actualiza tu Chorboagenda: ADD, SEARCH, EXIT:" << std::endl;
}

void	adding(Agenda *chorbo)
{
	Contact		nuevo;


	nuevo.setparams(chorbo->index);
	chorbo->basca[chorbo->index - 1] = nuevo;

	if (chorbo->index < 8)
		chorbo->index++;
}

std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void		rascar(Agenda *chorbo)
{
	std::string	dice;
	int			indice;

	std::getline(std::cin, dice);
	indice = atoi(dice.c_str());
	if (indice >= 1 && indice <= chorbo->index && chorbo->index > 1)
		chorbo->basca[indice - 1].getparams();
	else
		std::cout << "Yo que sé!" << std::endl;
}

void		searching(Agenda *chorbo)
{
	chorbo->showall();
	rascar(chorbo);
}

void	urgando(std::string input, Agenda *chorbo)
{
	if (input == "ADD")
		adding(chorbo);
	else if (input == "SEARCH")
		searching(chorbo);
}

int	main(void)
{
	std::string	input;
	Agenda	chorbo;

	intro();
	std::getline(std::cin, input);
	while (input != "EXIT")
	{
		urgando(input, &chorbo);
		std::cout << "Actualiza tu Chorboagenda: ADD, SEARCH, EXIT:" << std::endl;
		std::getline(std::cin, input);
	}
	return (0);
}
