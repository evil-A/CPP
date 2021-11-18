/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 08:06:35 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/18 08:09:45 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"
#define HITS 100
#define ENERGYS 50
#define DMGS 20

class ScavTrap : virtual public ClapTrap
{
	protected:
		ScavTrap(void);

	public:
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);
		
		ScavTrap	&operator=(ScavTrap const &ass);

		void	attack(std::string const &target);
		void	guardGate(void);
};

#endif
