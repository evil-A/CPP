/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:23:38 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/02 22:49:27 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->index = 0;
	this->name = "";
	this->lastname = "";
	this->nick = "";
	this->phone = "";
	this->secret = "";
	return ;
}

Contact::Contact(int index, std::string name, std::string lastname, std::string nick, std::string phone, std::string secret)
{
	this->index = index;
	this->name = name;
	this->lastname = lastname;
	this->nick = nick;
	this->phone = phone;
	this->secret = secret;

	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::setparams(int index)
{
	std::string	entrada;

	this->index = index;
	std::cout << "Rellena los campos de tu contacto:" << std::endl;
	std::cout << "Nombre: ";
	std::getline(std::cin, entrada);
	this->name = entrada;
	std::cout << "Apellido: ";
	std::getline(std::cin, entrada);
	this->lastname = entrada;
	std::cout << "Mote: ";
	std::getline(std::cin, entrada);
	this->nick = entrada;
	std::cout << "Telefono: ";
	std::getline(std::cin, entrada);
	this->phone = entrada;
	std::cout << "Secreto: ";
	std::getline(std::cin, entrada);
	this->secret = entrada;
	return ;
}

int			Contact::getindex()
{
	return (this->index);
}

std::string	Contact::getname()
{
	return (this->name);
}

std::string	Contact::getlastname()
{
	return (this->lastname);
}
std::string	Contact::getnick()
{
	return (this->nick);
}

void	Contact::getparams(void)
{
	std::cout << this->name << std::endl;
	std::cout << this->lastname << std::endl;
	std::cout << this->nick << std::endl;
	std::cout << this->phone << std::endl;
	std::cout << this->secret << std::endl;
}
