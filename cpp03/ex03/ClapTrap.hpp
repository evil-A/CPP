/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:33:42 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/18 08:00:05 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#define HIT 10
#define ENERGY 10
#define DMG 0

class ClapTrap
{

	protected:

		std::string 	_name;
		unsigned int	_hit;
		unsigned int	_maxhit;
		unsigned int	_energy;
		unsigned int	_dmg;
		ClapTrap(void);

	public:

		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap const &src);
		ClapTrap	&operator=(ClapTrap const &ass);
		virtual	~ClapTrap(void);

		virtual void	attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif
