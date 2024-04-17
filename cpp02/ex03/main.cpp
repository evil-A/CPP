/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 03:16:15 by evila-ro          #+#    #+#             */
/*   Updated: 2024/04/17 08:42:49 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const _point);

int		main(void)
{

	Point	a(1, 0);
	Point	b(2, 2);
	Point	c(3.5f, 0);
	Point	p(2, 0.5f);
	//Point	p(1, 1);
	//Point	p(3.5f, 0);

	std::cout << std::endl;
	std::cout << "point a: x=" << a.get_x() << ", y=" << a.get_y() << std::endl;
	std::cout << "point b: x=" << b.get_x() << ", y=" << b.get_y() << std::endl;
	std::cout << "point c: x=" << c.get_x() << ", y=" << c.get_y() << std::endl;
	std::cout << "point p: x=" << p.get_x() << ", y=" << p.get_y() << std::endl;
	bsp(a, b, c, p) ? std::cout << "true\n" : std::cout << "false\n";

	return (0);

};
