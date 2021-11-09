/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 03:38:07 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/10 00:17:19 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include <string>

#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA
{

public:

	HumanA (std::string name, Weapon &weapon_ref);
	~HumanA (void);
	void	attack(void);

private:

	std::string _name;
	Weapon	&_weapon;

};

#endif
