/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:52:52 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/17 10:59:52 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(void) : _literal(NULL), _int(0), _float(0.0f), _double(0.0f), _char(0)
{

}

Scalar::Scalar(std::string const &literal) : _literal(NULL), _int(0), _float(0.0f), _double(0.0f), _char(0)
{

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
	this->_double = std::strtod(literal.c_str(), NULL);
	std::cout << this->_double << this->_literal <<  std::endl;
}
