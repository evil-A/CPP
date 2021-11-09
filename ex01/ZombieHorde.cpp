/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 00:10:01 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/09 02:16:33 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde (int N, std::string name)
{
	int	i;

	Zombie	*horda = new Zombie[N];
	for (i = 0; N > i; i++)
	{
		horda[N].Zombie::etiqueta(name);//std::stringstream  name1 /   name1 << name << int
	}
	return (horda);
}
