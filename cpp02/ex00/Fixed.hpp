/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 05:28:48 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/12 09:09:22 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{

	private:

		int					point;
		static int const	frac;

	public:

		Fixed(void);//fixed point balue to 0
		~Fixed(void);
		//copy constructor
		//assignation operator overload
		int		getRawBits(void);
		void	setRawBits(int const raw);
};

#endif
