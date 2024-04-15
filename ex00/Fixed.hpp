/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:19:24 by evila-ro          #+#    #+#             */
/*   Updated: 2024/04/12 13:00:25 by evila-ro         ###   ########.fr       */
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
		Fixed(Fixed const &src);
		Fixed&	operator=(Fixed const &ass);

		int		getRawBits(void)const;
		void	setRawBits(int const raw);

};

#endif
