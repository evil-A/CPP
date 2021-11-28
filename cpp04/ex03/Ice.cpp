/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:35:23 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/28 19:51:03 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{

}

Ice::Ice(Ice const &src) : AMateria("ice")
{
	*this = src;
}

Ice	&Ice::operator=(Ice const &ass)
{
	(void)ass;
	return (*this);
}

Ice::~Ice(void)
{

}

AMateria	*Ice::clone(void)const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<  std::endl;
}
