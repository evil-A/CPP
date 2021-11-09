/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 03:24:26 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/10 00:17:22 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	{
		Weapon	 weaponry = Weapon("long sword +1");

		HumanA	bob("Bob", weaponry);
		bob.attack();
		weaponry.setType("sacred vengefull +4");
		bob.attack();
	}

	{
		Weapon	weaponry = Weapon("chainsaw");

		HumanB	jim("Jim");
		jim.attack();
		jim.setWeapon(weaponry);
		jim.attack();
		weaponry.setType("electrified chainsaw with flametrhower");
		jim.attack();
	}

	return (0);
}
