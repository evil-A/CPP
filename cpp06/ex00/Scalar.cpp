/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:52:52 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/17 12:33:02 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(void) : _literal(""), _int(0), _float(0.0f), _double(0.0f), _char(0)
{
	(void)_int;
	(void)_float;
	(void)_char;
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
	if (errno == ERANGE)
		std::cout << ND << std::endl;
	else if (*surplus)
		std::cout << NN << std::endl;
	else
		std::cout << this->_double << " " << this->_literal <<  std::endl;
}
/*
void	Scalar::toInt(void)
{
	if (this->_double == "nan" || this->_double == "nanf")
		std::cout << NN << std::endl;
	else
	{
		this->_int = static_cast<int>(this->_double);
	}
}

void	Scalar::toFloat(void)
{
	if (this->_double == "nan" || this->_double == "nanf")
		std::cout << NN << std::endl;
	else
	{
		this->_float = static_cast<float>(this->_double);
	}
}

void	Scalar::toChar(void)
{
	//character imprimible
	if (this->_double == "nan" || this->_double == "nanf")
		std::cout << NN << std::endl;
	else if ()
	else
	{
		this->_int = static_cast<int>(this->_double);
	}
}*/
