/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 23:45:48 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/09 02:16:16 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	i;

	Zombie	*horda = zombieHorde(3, "All flesh must be eaten");
	if (!horda)
		return (-1);

	for (i = 0; i < 3; i++)
		horda[i].announce();

	delete[] horda;
	return (0);
}
