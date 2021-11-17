/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 08:07:29 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/17 10:00:05 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit = 100;
	this->_energy = 50;
	this->_dmg = 20;

	std::cout << this->_name << " is here to chew bubblegum" << std::endl;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << " Copy connstructor is here" << std::endl;

	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &ass)
{
	std::cout << "Assignation operator " << ass._name << " is looking for problems with " << this->_name << std::endl;
	this->_name = ass._name;
	this->_hit = ass._hit;
	this->_energy = ass._energy;
	this->_dmg = ass._dmg;

	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_name << " is all out of bubblegum" << std::endl;

	return ;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->_name << " is here to kick "
	<< target << "'s ass" << std::endl;

	return ;	
}
