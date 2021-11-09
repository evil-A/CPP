/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:24:33 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/08 23:25:11 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	Zombie::name;

Zombie::Zombie (void)
{

	this->name = "noname";

}

Zombie::Zombie (std::string name)
{

	this->name = name;
	std::cout << name << " está nomuerto" << std::endl;

}

Zombie::~Zombie (void)
{
	std::cout << this->name << " is destroyed." << std::endl;
}

void Zombie::announce (void)
{
	std::cout << Zombie::name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

