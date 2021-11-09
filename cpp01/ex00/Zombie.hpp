/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:10:36 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/08 23:08:18 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{

public:

	static void	announce(void);

	Zombie (void);
	Zombie (std::string name);
	~Zombie(void);

private:

	static std::string	name;

};

Zombie* newZombie (std::string name);
void	randomChump (std::string name);

#endif
