/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 08:33:26 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/17 10:52:11 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SCALAR_H
# define SCALAR_H

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <math.h>
#include <limits>
#include <fstream>

#define ND "Non displayable"
#define NN "imposible"

class Scalar
{
	private:
		int			_int;
		float		_float;
		char		_char;
		double		_double;
		std::string	_literal;

	public:
		Scalar(void);
		Scalar(std::string const &literal);
		~Scalar(void);

		std::string const	getLiteral(void)const;
		void				setLiteral(std::string const &literal);

//		void	toInt(void);
//		void	toFloat(void);
//		void	toChar(void);
};

std::ostream	&operator<<(std::ostream &output, Scalar const &src);

#endif
