/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 10:54:33 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/21 13:29:00 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
	std::cout << "Brain ready" << std::endl;
}

Brain::Brain(Brain const &src)
{
	*this = src;
}

Brain	&Brain::operator=(Brain const &src)
{
	for  (int i = 0; i < 100; i++)
		this-> ideas[i] = src.ideas[i];
	std::cout << "Brain clonated" << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Devoured brain" << std::endl;
}

void	Brain::setIdea(std::string const &idea)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

std::string const &Brain::getIdea(void)
{
	return (this->ideas[0]);
}
