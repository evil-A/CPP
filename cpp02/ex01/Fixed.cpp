/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 08:53:55 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/14 03:35:54 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
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

Fixed::Fixed(Fixed const &cop)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cop;
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
}

int		Fixed::getRawBits(void)const
{
	return (this->_point);
}

int		Fixed::toInt(void)const
{
	return (this->_point >> Fixed::_frac);
	//return (static_cast<int>(this->_point));//c++11
}

float	Fixed::toFloat(void)const
{
	return (this->_point / (float)(1 << Fixed::_frac));
	//return (static_cast<float>(this->_point));//c++11
}

//An overload to the « operator that inserts a floating point representation of the fixed point value into the parameter output stream.
std::ostream	&operator << (std::ostream &output, Fixed const &fix)
{
	return (output << fix.toFloat());
}
