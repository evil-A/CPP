/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 03:31:54 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/09 05:03:45 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

//	std::string name;
//	Weapon	weapon;

HumanA::HumanA (void)
{

}

HumanA::HumanA (std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA (void)
{

}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon << std::endl;
}
