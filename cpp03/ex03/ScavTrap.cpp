/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 08:07:29 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/18 08:47:52 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#define TYPE "ScavTrap"

ScavTrap::ScavTrap(void)
{
	this->_hit = HITS;
	this->_maxhit = HITS;
	this->_energy = ENERGYS;
	this->_dmg = DMGS;

	return ;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	this->_hit = HITS;
	this->_maxhit = HITS;
	this->_energy = ENERGYS;
	this->_dmg = DMGS;

	std::cout << this->_name << " is here to chew bubblegum" << std::endl;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << " Copy connstructor is here" << std::endl;

	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &ass)
{
	this->_name = ass._name;
	this->_hit = ass._hit;
	this->_maxhit = ass._maxhit;
	this->_energy = ass._energy;
	this->_dmg = ass._dmg;

	std::cout << "Assignation operator " << ass._name << " is looking for problems with " << this->_name << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_name << " is all out of bubblegum" << std::endl;

	return ;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << TYPE << " " << this->_name << " is here to kick "
	<< target << "'s ass" << std::endl;

	return ;	
}

void	ScavTrap::guardGate(void)
{
	std::cout << TYPE << " " << this->_name << "'s put its sunglasses on and entered in Gate keeper mode" << std::endl;

	return ;	
}
