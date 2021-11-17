/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 06:35:35 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/17 10:01:16 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap 		verde("Verde");
	ScavTrap		rojo("Rojo");
//	ScavTrap 		rosa(rojo);

//	rosa = ScavTrap("Rosa");

	verde.attack("Rojo");
	rojo.attack("Verde");
//	rosa.attack("Rojo");

//	verde.takeDamage(2);
//	rojo.takeDamage(11);
	verde.beRepaired(2);
//	verde.beRepaired(2);
//	rojo.beRepaired(11);

	return (0);
}
