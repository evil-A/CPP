/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 23:00:10 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/10 00:17:15 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include <string>

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB
{

public:


	HumanB (std::string name);
	~HumanB (void);
	void	attack(void);
	void	setWeapon(Weapon &weapon);

private:
	
	Weapon	*_weapon;
	std::string _name;

};

#endif
