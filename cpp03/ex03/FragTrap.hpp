/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 05:37:23 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/18 08:10:14 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"
#define HITF 100
#define ENERGYF 100
#define DMGF 30

class FragTrap : virtual public ClapTrap
{
	protected:
		FragTrap(void);
	public:
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &src);
		~FragTrap(void);

		FragTrap	&operator=(FragTrap const &ass);

		void	attack(std::string const &target);
		void	highFivesGuys(void);
};

#endif
