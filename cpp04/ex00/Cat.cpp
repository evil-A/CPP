/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:52:45 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/19 12:17:18 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal((std::string)"Cat")
{
	std::cout << "Cat climbs to the kitchen roof" << std::endl;
}

Cat::Cat(Cat const &src)
{
	*this = src;
}

Cat	&Cat::operator=(Cat const &ass)
{
	this->type = ass.type;
	std::cout << "Cat cloned" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat jumps off the roof" << std::endl;
}

void	Cat::makeSound(void)const
{
	std::cout << "Meow, meow! Get of my way" << std::endl;
}
