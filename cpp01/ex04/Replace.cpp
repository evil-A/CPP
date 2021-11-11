/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 05:36:12 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/11 06:23:06 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string file, std::string s1, std::string s2) : _file(file)
{
	this->_s1 = s1;
	this->_s2 = s2;
}

Replace::~Replace()
{
	std::cout << "Destroy" << std::endl;
}

void	Replace::renew (void)
{
	size_t		pos;
	std::string	text;
	std::string	apptext;
 
	std::ifstream	ifs(this->_file);
	while (std::getline (ifs, text))
	{
		while ((pos = text.find(_s1)) != std::string::npos)
		{
			text.erase(pos, _s1.length());
			text.insert(pos, _s2);
			apptext += text + "\n";
			text.erase(0, _s2.length());
		}
	}
	this->_file += ".replace";
	std::ofstream _refill(this->_file);
	_refill << apptext;
	_refill.close();
}
