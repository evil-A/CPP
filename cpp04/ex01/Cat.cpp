/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:52:45 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/21 12:37:55 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal((std::string)"Cat"), brain(new Brain)
{
	std::cout << "Cat climbs on top" << std::endl;
}

Cat::Cat(Cat const &src) : Animal((std::string)"Cat"), brain(new Brain)
{
	*this = src;
	std::cout << "Cat cloned" << std::endl;
}

Cat	&Cat::operator=(Cat const &ass)
{
	if (this->brain == NULL)
		this->brain = new Brain();
	*this->brain = *ass.brain;
	std::cout << "Cat cloned" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	if (this->brain != NULL)
		delete this->brain;
	std::cout << "Cat jumps off the roof" << std::endl;
}

void	Cat::makeSound(void)const
{
	std::cout << "Meow, meow! Get of my way" << std::endl;
}

void	Cat::copyBrain(Brain const &src)
{
	if (this->brain == NULL)
		this->brain = new Brain();
	*this->brain = src;
}

Brain const	&Cat::getBrain(void)const
{
	return (*this->brain);
}

void	Cat::setI(std::string const &idea)
{
	if (this->brain)
		this->brain->setIdea(idea);
}

void	Cat::getI(void)const
{
	if (this->brain)
		std::cout << this->brain->getIdea() << std::endl;
}
