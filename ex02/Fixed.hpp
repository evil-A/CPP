/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:19:24 by evila-ro          #+#    #+#             */
/*   Updated: 2024/04/15 11:50:14 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					_point;		//fixed point value
		static int const	_frac = 8;	//number of fractional bits, always 8
	
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(int const i);
		Fixed(float const f);

		Fixed(Fixed const &src);

		Fixed&	operator=(Fixed const &ass);
		Fixed	operator+(Fixed const &ass) const;
		Fixed	operator-(Fixed const &ass) const;
		Fixed	operator*(Fixed const &ass) const;
		Fixed	operator/(Fixed const &ass) const;

		bool	operator>(Fixed const &ass) const;
		bool	operator<(Fixed const &ass) const;
		bool	operator>=(Fixed const &ass) const;
		bool	operator<=(Fixed const &ass) const;
		bool	operator==(Fixed const &ass) const;
		bool	operator!=(Fixed const &ass) const;

		Fixed	&operator++(void);	//prefix
		Fixed	operator++(int);	//postfix
		Fixed	&operator--(void);	//prefix
		Fixed	operator--(int);	//postfix

		static Fixed const	&min(Fixed const &a, Fixed const &b);
		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed const	&max(Fixed const &a, Fixed const &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

};

std::ostream	&operator<<(std::ostream &output, Fixed const &fix);

#endif
