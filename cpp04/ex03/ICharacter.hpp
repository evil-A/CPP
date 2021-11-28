/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:43:30 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/28 19:42:26 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>

class AMateria;

class ICharacter
{
	public:
		virtual ICharacter	&operator=(ICharacter const &ass) = 0;
		virtual ~ICharacter() {};

		virtual std::string const	&getName()const = 0;
		virtual void	equip(AMateria *m) = 0;
		virtual void	unequip(int index) = 0;
		virtual void	use(int index, ICharacter &target) = 0;
};

#endif
