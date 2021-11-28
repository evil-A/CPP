/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:37:42 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/28 18:40:49 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{

}

Cure::Cure(Cure const &src) : AMateria("cure")
{
	*this = src;
}

Cure	&Cure::operator=(Cure const &src)
{
	(void)src;
	return (*this);
}

Cure::~Cure(void)
{

}

AMateria	*Cure::clone(void)const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
