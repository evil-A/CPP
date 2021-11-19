/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:13:02 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/19 12:26:44 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal((std::string)"WrongCat")
{
	std::cout << "WrongCat climbs to the kitchen roof" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	*this = src;
}

WrongCat	&WrongCat::operator=(WrongCat const &ass)
{
	this->type = ass.type;
	std::cout << "WrongCat cloned" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat jumps off the roof" << std::endl;
}

void	WrongCat::makeSound(void)const
{
	std::cout << "If I'm a WrongCat, I'm wrong" << std::endl;
}
