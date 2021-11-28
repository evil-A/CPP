/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:29:20 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/28 20:07:11 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("None")
{

}

AMateria::AMateria(std::string const &type) : _type(type)
{

}

AMateria::AMateria(AMateria const &src) : _type(src._type)
{

}

AMateria	&AMateria::operator=(AMateria const &ass)
{
	(void)ass;
	return (*this);
}

AMateria::~AMateria(void)
{

}

std::string const	&AMateria::getType(void)const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	//void(target);
	std::cout << "Use of materia " << this->_type << std::endl;
}
