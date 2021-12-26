/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:52:52 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/26 19:31:08 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(void) : _literal(""), _int(0), _float(0.0f), _double(0.0f), _char(0)
{
//	(void)_int;
	(void)_float;
	(void)_double;
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
	this->_literal = literal;
}

void	Scalar::toInt(void)
{
/*	char	*surplus;

	try
	{
		this->_int = static_cast<int>(std::strtod(this->_literal.c_str(), &surplus));
		if ((this->_int == INT_MIN || this->_int == INT_MAX) && !isdigit(this->_literal.c_str()[0]))
			std::cout << "nan" << std::endl;
		else
			std::cout << "int: " << this->_int << std::endl;	

	}
*/
	try
	{
		this->_int = static_cast<int>(std::stoi(this->_literal));
		std::cout << "int: " << this->_int << std::endl;	
	}
	catch(std::invalid_argument &)
	{
		std::cout << "int: " << NN << std::endl;
	}
	catch (std::out_of_range &)
	{
		std::cout << "int: " << ND << std::endl;
	}
//	catch(std::system_error &)
//	{
//	}
//	{
//		if (errno == ERANGE || *surplus)
//			std::cout << "nan" << std::endl;
//	}
}

void	Scalar::toFloat(void)
{
	try
	{
		this->_float = static_cast<float>(std::stof(this->_literal));
		std::cout << "float: " << this->_float;
	   	if (static_cast<int>(this->_float) == this->_float)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	cat	
}

/*

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



*/
