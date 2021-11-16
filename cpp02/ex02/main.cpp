/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:38:55 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/16 08:45:13 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Fixed.hpp"

int main(void)
{
	Fixed			a;
	Fixed const		b(Fixed(5.05f) + Fixed(2));
	Fixed const		c(Fixed(5.05f) - Fixed(2));
	Fixed const		d(Fixed(5.05f) * Fixed(2));
	Fixed const		e(Fixed(5.05f) / Fixed(2));
	Fixed			f(666);
	

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "e : " << e << std::endl;
	if (b > c)
		std::cout << "Higher" << std::endl;
	if (c < b)
		std::cout << "Lower" << std::endl;
	if (b >= c)
		std::cout << "Higher or equal" << std::endl;
	if (c <= b)
		std::cout << "Lower or equal" << std::endl;
	if (c == c)
		std::cout << "Equal" << std::endl;
	if (c != b)
		std::cout << "Not equal" << std::endl;

	std::cout << "Min " << b << " " << c << " " << (Fixed::min(b, c)) << std::endl;
	std::cout << "Max " << b << " " << c << " " << (Fixed::max(b, c)) << std::endl;
	std::cout << "Const min " << b << " " << c << " " << (Fixed::min(b, c)) << std::endl;
	std::cout << "Const max " << b << " " << c << " " << (Fixed::max(b, c)) << std::endl;

	std::cout << a << "++ " << a++ << a << std::endl;
	std::cout << a << "-- " << a-- << a << std::endl;
	std::cout << a << "-- " << a-- << a << std::endl;
	std::cout << f << "++ " << f++ << f << std::endl;
	std::cout << f << "-- " << f-- << f << std::endl;
	return (0);
}
