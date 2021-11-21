/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 08:37:57 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/21 13:27:53 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("")
{
	std::cout << "Animal in the kitchen" << std::endl;
}

Animal::Animal(std::string const &src) : type(src)
{
	if (this->type.empty())
		std::cout << "Animal in the kitchen" << std::endl;
	else
		std::cout << this->type << " at the table" << std::endl;
}

Animal::Animal(Animal const &src)
{
	*this = src;
}

Animal	&Animal::operator=(Animal const &ass)
{
	this->type = ass.type;
	if (this->type.empty())
		std::cout << "Cloned Animal" << std::endl;
	else
		std::cout << "Cloned " << this->type << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	if (this->type.empty())
		std::cout << "Animal was tasty" << std::endl;
	else
		std::cout << this->type << " was tasty" << std::endl;
}

void	Animal::makeSound(void)const
{
	if (this->type.empty())
		std::cout << "Do you want it burned or bloody as hell?" << std::endl;
	else
		std::cout << this->type << " ready to eat" << std::endl;
}

std::string const	&Animal::getType(void)const
{
	return (this->type);
}

/*void	Animal::setI(std::string const &idea)
{
	if (this->brain)
		this->brain->setIdea(idea);
}

void	Animal::getI(void)const
{
	if (this->brain)
		std::cout << this->brain->getIdea() << std::endl;
}*/
