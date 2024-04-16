/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:07:20 by evila-ro          #+#    #+#             */
/*   Updated: 2024/04/16 10:37:53 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;

	public:
		Point(void);
		~Point(void);
		
		Point(Point const &src);
		Point(Point &src);
		Point(float const x, float const y);
		
		Point&	operator=(Point &ass);
		const Point&	operator=(Point const &ass);

		Fixed const	&get_x(void) const;
		Fixed const	&get_y(void) const;
		

};

#endif
