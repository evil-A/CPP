/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 08:22:11 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/14 03:35:56 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <fstream>

class Fixed
{

	private:

		int					_point;//converts it to the correspondant fixed(8) point value.
		static int const	_frac = 8;

	public:

	Fixed(void);
	~Fixed(void);
	Fixed(int const i);
	Fixed(float const f);
	Fixed(Fixed const &cop);
	Fixed	&operator = (Fixed const &ass);

	void	setRawBits(int const raw);
	int		getRawBits(void)const;
	float	toFloat(void)const;
	int		toInt(void)const;

};

std::ostream	&operator<<(std::ostream &output, Fixed const &fix);
//An overload to the « operator that inserts a floating point representation of the fixed point value into the parameter output stream.

#endif
