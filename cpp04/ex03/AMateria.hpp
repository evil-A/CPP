/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:06:57 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/28 20:07:14 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	
	protected:
		std::string const	_type;
		AMateria(void);

	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &src);
		AMateria	&operator=(AMateria const &src);
		virtual	~AMateria(void);

		std::string const	&getType(void)const;

		virtual AMateria	*clone(void)const = 0;
		virtual void		use(ICharacter &target);
};

#endif
