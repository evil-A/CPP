/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:38:31 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/16 08:34:36 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FIXED_H
# define FIXED_H

#include <fstream>

class Fixed
{
	private:

		int					_point;
		static int const	_frac = 8;

	public:

		Fixed(void);
		~Fixed(void);
		Fixed(int const i);
		Fixed(float const f);
		Fixed(Fixed const &src);

		Fixed	&operator=(Fixed const &ass);
		Fixed	operator+(Fixed const &ass)const;
		Fixed	operator-(Fixed const &ass)const;
		Fixed	operator*(Fixed const &ass)const;
		Fixed	operator/(Fixed const &ass)const;
		bool	operator>(Fixed const &ass)const;
		bool	operator<(Fixed const &ass)const;
		bool	operator>=(Fixed const &ass)const;
		bool	operator<=(Fixed const &ass)const;
		bool	operator==(Fixed const &ass)const;
		bool	operator!=(Fixed const &ass)const;
		Fixed	&operator++(void);//prefix
		Fixed	operator++(int);//postfix
		Fixed	&operator--(void);//prefix
		Fixed	operator--(int);//postfix
		static Fixed const	&min(Fixed const &a, Fixed const &b);
		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed const	&max(Fixed const &a, Fixed const &b);
		static Fixed		&max(Fixed &a, Fixed &b);

		void	setRawBits(int const raw);
		int		getRawBits(void)const;
		float	toFloat(void)const;
		int		toInt(void)const;

};

std::ostream	&operator<<(std::ostream &output, Fixed const &fix);

#endif
