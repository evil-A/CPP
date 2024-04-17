/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:42:01 by evila-ro          #+#    #+#             */
/*   Updated: 2024/04/17 08:42:52 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed const	pv(Point const p, Point const p1, Point const p2)	//Puntos en el plano
{
	//Extracion de coordenadas
	Fixed	px = p.get_x();
	Fixed	p1x = p1.get_x();
	Fixed	p2x = p2.get_x();
	Fixed	py = p.get_y();
	Fixed	p1y = p1.get_y();
	Fixed	p2y = p2.get_y();

	//Calculo de vectores
	Fixed	v1x = px - p1x;	//v1x y v1y representan el vector que va desde el punto p1 hasta el punto p
	Fixed	v1y = py - p1y;
	Fixed	v2x = px - p2x;	//v2x y v2y representan el vector que va desde el punto p2 hasta el punto p.
	Fixed	v2y = py - p2y;

	//Cálculo del producto vectorial
	return (v1x * v2y - v2x * v1y);
	//orientación relativa de los vectores y la superficie formada por ellos en el plano cartesian
}

bool bsp(Point const a, Point const b, Point const c, Point const _point)
{
    Fixed p1 = pv(_point, a, b);
    Fixed p2 = pv(_point, b, c);
    Fixed p3 = pv(_point, c, a);

    if ((p1 > 0 && p2 > 0 && p3 > 0) || (p1 < 0 && p2 < 0 && p3 < 0)) {
        return true;  // El punto está dentro del triángulo
    }
    return false;     // El punto está fuera del triángulo
}
