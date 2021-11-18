/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 06:35:35 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/18 05:55:24 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap 		verde("Verde");
	FragTrap		rojo("Rojo");
	FragTrap 		rosa(rojo);

	rosa = FragTrap("Rosa");

	verde.attack("Rojo");

	verde.takeDamage(2);
	rojo.beRepaired(111);

	verde.highFivesGuys();

	return (0);
}
