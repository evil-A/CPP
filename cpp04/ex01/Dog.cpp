/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:29:55 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/21 13:29:11 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal((std::string)"Dog"), brain(new Brain) 
{
	std::cout << "Dog runs in" << std::endl;
}

Dog::Dog(Dog const &src) : Animal((std::string)"Dog"), brain(new Brain)
{
	*this = src;
	std::cout << "Dog cloned" << std::endl;
}

Dog	&Dog::operator=(Dog const &ass)
{
	this->type = ass.type;
	if (this->brain == NULL)
		this->brain = new Brain();
	*this->brain = *ass.brain;		
	std::cout << "Dog cloned" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	if (this->brain != NULL)
		delete this->brain;
	std::cout << "Dog runs out of the kitchen" << std::endl;
}

void	Dog::makeSound(void)const
{
	std::cout << "Woof, woof! I'm hungry" << std::endl;
}

void	Dog::copyBrain(Brain const &src)
{
	if (this->brain == NULL)
		this->brain = new Brain();
	*this->brain = src;
}

Brain const	&Dog::getBrain(void)const
{
	return (*this->brain);
}

void	Dog::setI(std::string const &idea)
{
//	if (this->brain == NULL)
//		this->brain = new Brain();
	if (this->brain)
		this->brain->setIdea(idea);
}

void	Dog::getI(void)const
{
	if (this->brain)
		std::cout << this->brain->getIdea() << std::endl;
}
