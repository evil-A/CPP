/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:52:52 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/28 18:16:09 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(void) : _literal(""), _int(0), _float(0.0f), _double(0.0f), _char(0)
{
//	(void)_int;
//	(void)_float;
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
	catch(std::invalid_argument &)
	{
		std::cout << "float: " << NN << std::endl; 
	}
	catch(std::out_of_range &)
	{
		std::cout << "float: " << ND << std::endl;
	}
}


void	Scalar::toDouble(void)
{
	try
	{
		this->_double = static_cast<double>(std::stof(this->_literal));
		std::cout << "double: " << this->_double;
	   	if (static_cast<int>(this->_double) == this->_double)
			std::cout << ".0";
		std::cout << std::endl;
	}
	catch(std::invalid_argument &)
	{
		std::cout << "double: " << NN << std::endl; 
	}
	catch(std::out_of_range &)
	{
		std::cout << "double: " << ND << std::endl;
	}
}

void	Scalar::toChar(void)
{
	int	c;

	if (this->_literal.length() == 1 && !isdigit(static_cast<int>(this->_literal.c_str()[0])))
		std::cout << "char: " << static_cast<char>(this->_literal.c_str()[0]) << std::endl;
	else
	{
		try
		{
			c = static_cast<int>(std::stoi(this->_literal));
			if (isprint(c))
				std::cout << "char: " << "'" << static_cast<char>(c) << "'" << std::endl;
			if (c < 32 || c > 126)
				std::cout << "char: " << ND << std::endl;
		}
		catch(std::invalid_argument &)
		{
			std::cout << "char: " << NN << std::endl;
		}
		catch(std::out_of_range &)
		{
			std::cout << "char: " << ND << std::endl;
		}
	}
	return ;
}
