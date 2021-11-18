/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 06:35:35 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/18 09:02:40 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap 		verde("Verde");
	DiamondTrap			rojo("Rojo");
//	DiamondTrap 		rosa(rojo);

//	rosa = DiamondTrap("Rosa");

	verde.attack("Rojo");

	verde.takeDamage(2);
	rojo.beRepaired(111);

	verde.guardGate();
	verde.highFivesGuys();
	verde.whoAmI();

	return (0);
}
