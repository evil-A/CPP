/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 00:03:31 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/09 02:16:21 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{

public:

	static void	announce(void);
	void	etiqueta(std::string name);

	Zombie (void);
	Zombie (std::string name);
	~Zombie (void);

private:

	static std::string	name;

};

Zombie* zombieHorde (int N, std::string name);

#endif
