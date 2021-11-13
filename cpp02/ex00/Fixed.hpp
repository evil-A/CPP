/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 05:28:48 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/13 08:04:15 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{

	private:

		int					_point;//fixed point value
		static int const	_frac = 8;//number of fractional bits. Always 8

	public:

		Fixed(void);//fixed point balue to 0
		~Fixed(void);
		Fixed(Fixed const &cop);//copy constructor // se asigna al crear
		Fixed &operator = (Fixed const &ass);//assignation operator overload //se asigna despues
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
};

#endif
