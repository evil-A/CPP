/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 06:35:35 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/17 08:01:25 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap 		verde("Verde");
	ClapTrap		rojo("Rojo");
	ClapTrap 		amarillo;
	ClapTrap 		rosa(rojo);

	amarillo = verde;

	verde.attack("Rojo");
	rojo.attack("Verde");
	rosa.attack("Rojo");

	verde.takeDamage(2);
	rojo.takeDamage(11);
	verde.beRepaired(2);
	verde.beRepaired(2);
	rojo.beRepaired(11);

	return (0);
}
