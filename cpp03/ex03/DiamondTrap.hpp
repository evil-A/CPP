/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 06:02:49 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/18 08:33:53 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
//#define HITF 100
//#define ENERGYF 100
//#define DMGF 30

class DiamondTrap : public ScavTrap, public FragTrap 
{
	private:
		std::string		_name;

	public:
		DiamondTrap(std::string const &name);
		DiamondTrap(DiamondTrap const &src);
		~DiamondTrap(void);

		DiamondTrap	&operator=(DiamondTrap const &ass);

		void	attack(std::string const &target);
		void	whoAmI(void);
};

#endif
