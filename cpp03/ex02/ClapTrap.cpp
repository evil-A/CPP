/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 05:24:05 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/18 05:00:39 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#define TYPE "ClapTrap"

ClapTrap::ClapTrap(void)
{
	this->_name = "noname";
	this->_hit = HIT;
	this->_maxhit = HIT;
	this->_energy = ENERGY;
	this->_dmg = DMG;

	std::cout << "Default constructor invoked" << std::endl;

	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->_hit = HIT;
	this->_maxhit = HIT;
	this->_energy = ENERGY;
	this->_dmg = DMG;

	std::cout << "Constructor invoked with " << this->_name << std::endl;

	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = src;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &ass)
{
	std::cout << "Assignation operator invoked " << ass._name << " from " << this->_name << std::endl;
	this->_name = ass._name;
	this->_hit = ass._hit;
	this->_maxhit = ass._maxhit;
	this->_energy = ass._energy;
	this->_dmg = ass._dmg;

	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor for " << this->_name << " invoked" << std::endl;

	return ;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << TYPE << " " << this->_name << " attacks " << target
	<< ", causing " << this->_dmg << " points of damage!" << std::endl;

	return;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->_hit)
	{
		amount = this->_hit;
		this->_hit = 0;
	}
	else
		this->_hit -= amount;
	std::cout << TYPE << " " << this->_name << " takes "
	<< amount << " points of damage. " << this->_hit
	<< " hit points remaining" << std::endl;

	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
//	std::cout << this->_hit << this->_maxhit << std::endl;
	if (amount + this->_hit >= this->_maxhit)
	{
		amount = this->_maxhit - this->_hit;
		this->_hit = this->_maxhit;
	}
	else
		this->_hit += amount;
	std::cout << TYPE << " " << this->_name << " takes "
	<< amount << " points of reparation. " << this->_hit
	<< " hit points remaining" << std::endl;

	return ;
}
