/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:29:07 by evila-ro          #+#    #+#             */
/*   Updated: 2024/04/14 11:43:10 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"


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

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(i << this->_frac);
	return ;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)roundf(f * (1 << this->_frac)));
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed&	Fixed::operator=(Fixed const &ass)
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

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
   return (this->_point);	
}

int		Fixed::toInt(void) const
{
	return (this->_point >> Fixed::_frac);
}

float	Fixed::toFloat(void) const
{
	return (this->_point / (float)(1 << Fixed::_frac));
}

std::ostream	&operator<<(std::ostream &output, Fixed const &fix)
{
	return (output << fix.toFloat());
}

