/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 04:11:37 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/12 06:27:39 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &src) : Form("ShrubberyCreationForm", 145, 137), _target(src)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src.getName(),
src.getSignGrade(), src.getExecuteGrade()),  _target(src._target)
{

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ass)
{
	this->_target = ass._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

void	ShrubberyCreationForm::action(void)const throw(std::exception, std::string)
{
	std::ofstream	output;
	std::ifstream	input;
	std::string		line;
	input.exceptions(std::ifstream::badbit);
	input.open("trees.txt");
	if (!input.is_open())
		throw std::string("Cannot open trees.txt");
	output.exceptions(std::ofstream::badbit);
	output.open(this->_target + "_shrubbery", std::ios::trunc);
	while (std::getline(input, line))
		output << line << std::endl;
	input.close();
	output.close();
}

Form const	*ShrubberyCreationForm::createForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}
