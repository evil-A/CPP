/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:01:15 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/28 19:52:46 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void	MateriaSource::replace(MateriaSource const &src)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_materias[i])
		{
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (src._materias[i])
			this->_materias[i] = src._materias[i]->clone();
	}
}

MateriaSource::MateriaSource(void) : _materias()
{

}

MateriaSource::MateriaSource(MateriaSource const &src) : _materias()
{
	*this = src;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &src)
{
	this->replace(src);
	return (*this);
}

IMateriaSource	&MateriaSource::operator=(IMateriaSource const &src)
{
	return ((*this = *(MateriaSource const *)&src));
}

MateriaSource::~MateriaSource(void)
{
	for (size_t i = 0; i < 4; i++)
		if (this->_materias[i])
		{
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	size_t	i;

	if (!materia)
		return ;
	for (i = 0; this->_materias[i]; i++)
		if (i == 4)
			return ;
	this->_materias[i] = materia;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < 4; i++)
		if (this->_materias[i] && this->_materias[i]->getType().compare(type) == 0)
			return (this->_materias[i]);
	return (NULL);
}
