/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:52:52 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/24 19:23:33 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(void) : _literal(""), _int(0), _float(0.0f), _double(0.0f), _char(0)
{
//	(void)_int;
	(void)_float;
//	(void)_char;
}

Scalar::~Scalar(void)
{

}

std::string const	Scalar::getLiteral(void)const
{
	return (this->_literal);
}

void	Scalar::setLiteral(std::string const &literal)
{
	char	*surplus;

	this->_literal = literal;
	this->_double = std::strtod(literal.c_str(), &surplus);

//Configurar mandonga
//  0 ... char ND
// NN char and int imposible
// Float nan = nanf
// double nan = nan
	if (errno == ERANGE)
		std::cout << "out of range" << std::endl;
//	else if (*surplus)  //imprime f al introducir floats
//		std::cout << surplus << std::endl;
	else
		std::cout << this->_double << " " << this->_literal <<  std::endl;
}

void	Scalar::toInt(void)
{
	int	i = static_cast<int>(this->_double);
	if (this->_double > INT_MAX || this->_double < INT_MIN || isinf(this->_double) || isnan(this->_double))
		std::cout << NN << std::endl;
	else
	{
		this->_int = i;
		std::cout << this->_int << std::endl;
	}
}

void	Scalar::toChar(void)
{
	if (this->_literal.length() == 1)
	{
		this->_char = static_cast<char>(this->_double);
		//this->_char = this->_literal.c_str()[0];
		if (this->_char < 32 || this->_char > 126)
			std::cout << ND << std::endl;
		else

			std::cout << this->_char << std::endl;
	}
	else if (this->_literal.length() > 1)
		std::cout << NN << std::endl;
}

/*
void	Scalar::toChar(void)
{
	std::string	lit = this->_literal;
	char		c;

	if (lit.length() > 1)
	{
		std::cout << NN << std::endl;
		return ;
	}
	c = lit.c_str()[0];
	if (c < 32 || c > 126)
	{
		std::cout << ND << std::endl;
		return ;
	}
	else
		std::cout << c << std::endl;

}

void	Scalar::toFloat(void)
{
	
}

*/
