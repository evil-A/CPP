/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:38:44 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/16 08:12:22 by evila-ro         ###   ########.fr       */
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

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &ass)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &ass)
		this->_point = ass.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &ass)const
{
	std::cout << "Addition operator called with " << this->toFloat();
	std::cout << " and " << ass.toFloat() << std::endl;

	return (this->toFloat() + ass.toFloat());
}

Fixed	Fixed::operator-(Fixed const &ass)const
{
	std::cout << "Subtraction operator called with " << this->toFloat();
	std::cout << " and " << ass.toFloat() << std::endl;

	return (this->toFloat() - ass.toFloat());
}

Fixed	Fixed::operator*(Fixed const &ass)const
{
	std::cout << "Multiplication operator called with " << this->toFloat();
	std::cout << " and " << ass.toFloat() << std::endl;

	return (this->toFloat() * ass.toFloat());
}

Fixed	Fixed::operator/(Fixed const &ass)const
{
	std::cout << "Division operator called with " << this->toFloat();
	std::cout << " and " << ass.toFloat() << std::endl;

	return (this->toFloat() / ass.toFloat());
}

bool	Fixed::operator>(Fixed const &ass)const
{
	std::cout << "Comparison > operator called with " << this->toFloat();
	std::cout << " and " << ass.toFloat() << std::endl;

	if (this->toFloat() > ass.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &ass)const
{
	std::cout << "Comparison >= operator called with " << this->toFloat();
	std::cout << " and " << ass.toFloat() << std::endl;

	if (this->toFloat() >= ass.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &ass)const
{
	std::cout << "Comparison < operator called with " << this->toFloat();
	std::cout << " and " << ass.toFloat() << std::endl;

	if (this->toFloat() < ass.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &ass)const
{
	std::cout << "Comparison <= operator called with " << this->toFloat();
	std::cout << " and " << ass.toFloat() << std::endl;

	if (this->toFloat() <= ass.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &ass)const
{
	std::cout << "Comparison == operator called with " << this->toFloat();
	std::cout << " and " << ass.toFloat() << std::endl;

	if (this->toFloat() == ass.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &ass)const
{
	std::cout << "Comparison <= operator called with " << this->toFloat();
	std::cout << " and " << ass.toFloat() << std::endl;

	if (this->toFloat() != ass.toFloat())
		return (true);
	return (false);
}

Fixed	&Fixed::operator++(void)
{
	this->_point = this->_point + 1;

	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->_point = this->_point - 1;

	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	current(*this);

	this->_point = this->_point + 1;

	return (current);
}

Fixed	Fixed::operator--(int)
{
	Fixed	current(*this);

	this->_point = this->_point - 1;

	return (current);
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
}

float	Fixed::toFloat(void)const
{
	return (this->_point / (float)(1 << Fixed::_frac));
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream	&operator<<(std::ostream &output, Fixed const &fix)
{
	output << fix.toFloat();
	return (output);
}
