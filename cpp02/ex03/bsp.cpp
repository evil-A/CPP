/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:42:01 by evila-ro          #+#    #+#             */
/*   Updated: 2024/04/16 12:40:02 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed const	pv(Point const p, Point const p1, Point const p2)
{
	Fixed	px = p.get_x();
	Fixed	p1x = p1.get_x();
	Fixed	p2x = p2.get_x();
	Fixed	py = p.get_y();
	Fixed	p1y = p1.get_y();
	Fixed	p2y = p2.get_y();

	Fixed	v1x = px - p1x;
	Fixed	v1y = py - p1y;
	Fixed	v2x = px - p2x;
	Fixed	v2y = py - p2y;

	return (v1x * v2y - v2x * v1y);
}

bool	bsp(Point const a, Point const b, Point const c, Point const _point)
{
	Fixed	zero = Fixed();
	Fixed	p1 = pv(_point, a, b);
	Fixed	p2 = pv(_point, b, c);
	Fixed	p3 = pv(_point, c, a);

	if (zero > p1 && zero > p1 && zero > p2 && zero > p3)
	{
		return (true);
	}
	if (zero < p1 && zero < p1 && zero < p2 && zero < p3)
	{
		return (true);
	}
	return (false);
}
