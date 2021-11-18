/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 05:38:10 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/18 08:48:06 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#define TYPE "FragTrap"

FragTrap::FragTrap(void)
{
	this->_hit = HITF;
	this->_maxhit = HITF;
	this->_energy = ENERGYF;
	this->_dmg = DMGF;

	return ;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	this->_hit = HITF;
	this->_maxhit = HITF;
	this->_energy = ENERGYF;
	this->_dmg = DMGF;

	std::cout << this->_name << " is here to chew bubblegum" << std::endl;

	return ;
}

FragTrap::FragTrap(FragTrap const &src) :ClapTrap(src)
{
	std::cout << " Copy connstructor is here" << std::endl;

	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &ass)
{
	this->_name = ass._name;
	this->_hit = ass._hit;
	this->_maxhit = ass._maxhit;
	this->_energy = ass._energy;
	this->_dmg = ass._dmg;

	std::cout << "Assignation operator " << ass._name << " is looking for problems with " << this->_name << std::endl;
	
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << this->_name << " is all out of bubblegum" << std::endl;

	return ;
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << TYPE << " " << this->_name << " attacks " << target
	<< ", causing " << this->_dmg << " points of damage!" << std::endl;

	return;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "                        _    ,-,    _ " << std::endl;
	std::cout << "                 ,--, /: :\\/': :`\\/: :\\ " << std::endl;
	std::cout << "                |`;  ' `,'   `.;    `: | " << std::endl;
	std::cout << "                |    |     |  '  |     |. " << std::endl;
	std::cout << "                | :  |     | pb  |     ||  " << std::endl;
	std::cout << "                | :. |  :  |  :  |  :  | \\  " << std::endl;
	std::cout << "                 \\__/: :.. : :.. | :.. |  )  " << std::endl;
	std::cout << "                      `---',\\___/,\\___/ /'  " << std::endl;
	std::cout << "                           `==._ .. . /'  " << std::endl;
	std::cout << "                                `-::-'  " << std::endl;

	return ;
}
