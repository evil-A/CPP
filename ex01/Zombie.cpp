/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 00:03:07 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/09 02:16:18 by evila-ro         ###   ########.fr       */
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
	std::cout << name << " ha sucumbido a la muerte definitiva" << std::endl;
}

void	Zombie::announce (void)
{
	std::cout << Zombie::name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::etiqueta (std::string name)
{
	this->name = name;
}
