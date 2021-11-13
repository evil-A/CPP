/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 05:28:11 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/13 08:04:18 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _point(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &cop)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cop;
	//point = cop.point;
	return ;
}

Fixed	&Fixed::operator = (Fixed const &ass)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &ass)
		this->_point = ass.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	this->_point = raw;
	return ;
}

int		Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_point);
}

