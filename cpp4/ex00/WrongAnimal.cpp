/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:38:35 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/19 12:25:38 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("")
{
	std::cout << "WrongAnimal in the WrongNeighborhood" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &src) : type(src)
{
	if (this->type.empty())
		std::cout << "WrongAnimal in the Wrongneighborhood" << std::endl;
	else
		std::cout << this->type << " in da hood" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	*this = src;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &ass)
{
	this->type = ass.type;
	if (this->type.empty())
		std::cout << "WrongAnimal cloned" << std::endl;
	else
		std::cout << this->type << " Cloned" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	if (this->type.empty())
		std::cout << "WrongAnimal left the WrongNieghborhood" << std::endl;
	else
		std::cout << this->type << " left da hood" << std::endl;
}

void	WrongAnimal::makeSound(void)const
{
	if (this->type.empty())
		std::cout << "I'm a poisonous WrongAnimal" << std::endl;
	else
		std::cout << this->type << " is poisonous" << std::endl;
}

std::string const	&WrongAnimal::getType(void)const
{
	return (this->type);
}
