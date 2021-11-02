/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chorbo.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:22:08 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/02 22:50:13 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Chorbo.hpp"

std::string	truncate(std::string);

Agenda::Agenda(void) : index(1)
{
	return ;
}


Agenda::~Agenda(void)
{
	return ;
}

void	Agenda::showall(void)
{
	int	i;

	i = 0;
	while (i < 8 && this->basca[i].getindex())
	{

		std::cout << this->basca[i].getindex() << "|";
		std::cout << std::setw(10);
		std::cout << truncate(this->basca[i].getname()) << "|";
		std::cout << std::setw(10);
		std::cout << truncate(this->basca[i].getlastname()) << "|";
		std::cout << std::setw(10);
	 	std::cout << truncate(this->basca[i].getnick()) << std::endl;
		i++;
	}
	return ;
}
