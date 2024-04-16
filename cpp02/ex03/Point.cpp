/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:18:55 by evila-ro          #+#    #+#             */
/*   Updated: 2024/04/16 10:40:17 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::~Point(void)
{

}

Point::Point() : _x(0), _y(0)
{

}

Point::Point(Point const &src) : _x(src.get_x()), _y(src.get_y())
{

}

Point::Point(Point &src) : _x(src.get_x()), _y(src.get_y())
{

}

Point::Point(float const x, float const  y) : _x(Fixed(x)), _y(Fixed(y))
{

}

Point&	Point::operator=(Point &ass)
{
	return (ass);
}

const Point&	Point::operator=(Point const &ass)
{
	return (ass);
}

Fixed const	&Point::get_x(void) const
{
	return (_x);
}

Fixed const	&Point::get_y(void) const
{
	return (_y);
}
