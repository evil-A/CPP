/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 04:22:30 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/12 06:24:52 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string const &src) : Form("RobotomyRequestForm", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
: Form(src.getName(), src.getSignGrade(), src.getExecuteGrade()), _target(src._target)
{

}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &ass)
{
	this->_target = ass._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

void	RobotomyRequestForm::action(void)const
{
	std::cout << "Some drilling noises" << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << this->_target << " robotomized succesful" << std::endl;
	else
		std::cout << this->_target << " robotomized failed"  << std::endl;
}

Form const	*RobotomyRequestForm::createForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}
