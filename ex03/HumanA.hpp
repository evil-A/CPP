/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 03:38:07 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/09 05:03:47 by evila-ro         ###   ########.fr       */
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

	std::string name;
	Weapon	*weapon;

	HumanA (void);
	HumanA (std::string name, Weapon &weapon);
	~HumanA (void);
	void	attack(void);

private:

};

#endif
