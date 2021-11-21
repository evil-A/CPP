/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:29:55 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/19 09:54:12 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal((std::string)"Dog") 
{
	std::cout << "Dog runs into the kitchen" << std::endl;
}

Dog::Dog(Dog const &src)
{
	*this = src;
}

Dog	&Dog::operator=(Dog const &ass)
{
	this->type = ass.type;
	std::cout << "Dog cloned" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog runs out of the kitchen" << std::endl;
}

void	Dog::makeSound(void)const
{
	std::cout << "Woof, woof! I'm hungry" << std::endl;
}
