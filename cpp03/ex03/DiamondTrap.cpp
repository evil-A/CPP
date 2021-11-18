/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 06:11:17 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/18 08:48:30 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#define TYPE "DiamondTrap"

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), _name(name)
{
	this->_hit = HITF;
	this->_maxhit = HITF;
	this->_energy = ENERGYS;
	this->_dmg = DMGF;

	std::cout << this->_name << " is here to chew bubblegum" << std::endl;

	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) :ClapTrap(src)
{
	std::cout << "Copy connstructor is here" << std::endl;

	*this = src;

	return ;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &ass)
{
	this->_name = ass._name;
	this->_hit = ass._hit;
	this->_maxhit = ass._maxhit;
	this->_energy = ass._energy;
	this->_dmg = ass._dmg;

	std::cout << "Assignation operator " << ass._name << " is looking for problems with " << this->_name << std::endl;
	
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << this->_name << " is all out of bubblegum" << std::endl;

	return ;
}

void	DiamondTrap::attack(std::string const &target)
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << this->_name << " " << this->ClapTrap::_name << std::endl;

	return ;
}

