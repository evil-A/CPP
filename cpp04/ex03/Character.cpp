/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:04:31 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/28 19:49:25 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Noname"), _inventory()
{

}

Character::Character(std::string const &src) : _name(src), _inventory()
{

}

Character::Character(Character const &src) : _name(src._name), _inventory()
{
	*this = src;
}

Character	&Character::operator=(Character const &ass)
{
	this->_name = ass._name;
	for (size_t i = 0; i < 4; i++)
		this->_inventory[i] = ass._inventory[i];
	return (*this);
}

ICharacter	&Character::operator=(ICharacter const &ass)
{
	return ((*this = *(Character const *)&ass));
}

Character::~Character(void)
{

}

std::string const	&Character::getName(void)const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	size_t	i;

	if (!m)
		return ;
	for (i = 0; this->_inventory[i]; i++)
		if (i == 4)
			return ;
	this->_inventory[i] = m;
}

void	Character::unequip(int index)
{
	this->_inventory[index] = NULL;
}

void	Character::use(int index, ICharacter &target)
{
	if (index < 4 && this->_inventory[index])
		this->_inventory[index]->use(target);
}
