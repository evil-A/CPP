/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 04:08:28 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/09 05:03:52 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{

public:

	Weapon (std::string type);
	Weapon (void);
	~Weapon (void);
	void	setType (std::string type);
	std::string const & getType (void) const;

private:

	std::string	type;

};

#endif
