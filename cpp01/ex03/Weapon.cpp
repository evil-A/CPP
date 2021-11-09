/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 04:08:13 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/09 05:03:50 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//std::string	Weapon::type;

Weapon::Weapon (std::string type)
{
	this->type = type;
}

Weapon::Weapon (void)
{

}

Weapon::~Weapon (void)
{
	std::cout << this->type << " disarmed" << std::endl;
}

void	Weapon::setType (std::string type)
{
	this->type = type;
}

std::string const & Weapon::getType (void) const
{
	return (this->type);
}
