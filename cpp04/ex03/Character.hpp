/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:49:51 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/28 19:46:06 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	protected:
		std::string	_name;
		AMateria	*_inventory[4];
	
	public:
		Character(void);
		Character(std::string const &src);
		Character(Character const &src);
		Character	&operator=(Character const &ass);
		ICharacter	&operator=(ICharacter const &ass);
		~Character(void);

		std::string const	&getName(void)const;
		void	equip(AMateria *m);
		void	unequip(int index);
		void	use(int index, ICharacter &target);

};

#endif
