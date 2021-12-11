/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 04:11:37 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/11 04:54:52 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery Creation Form", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &src) : Form("Shrubbery Creation Form", 145, 137, _target(src)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src.getName(),
src.getSignGrade(), src.getExecuteGrade(),  _target(stc._target)
{

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ass)
{
	this->_target = src._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

void	ShrubberyCreationForm::action(void)const throw(std::exception, std::string)
{
	std::ostream	out;
	std::ifstream	input;
	std::string		line;
	input.exceptions(std::ifstream::badbit);
	input.open("trees.txt");
	if (!input.is_open())
		throw std::string("Cannot open trees.txt");
	out.exceptions(std::ofstream::badbit);
	outopen(this->_target + "_shrubbery", std::ios::trunc);
	while (std::getline(input, line))
		out << line << std::endl;
	input.close();
	out.close();
}
