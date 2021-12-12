/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 08:33:26 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/12 08:39:03 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SCALAR_H
# define SCALAR_H

#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <limits>
#include <fstream>

class Scalar
{
	private:
		int		_int;
		float	_float;
		char	_char;
		double	_double;
		char	*_str;

	public:
		Scalar(void);
		Scalar(std::string const &src);
		Scalar(Scalar const &src);
		Scalar	&operator=(Scalar const &ass);
		~Scalar(void);

		void	toInt(void);
		void	toFloat(void);
		void	toChar(void);
};

std::ostream	&operator<<(std::ostream &output, Scalar const &src);

#endif
