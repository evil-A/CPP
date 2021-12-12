/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 04:43:54 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/12 06:27:29 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string const &src) : Form("PresidentialPardonForm", 25, 5), _target(src)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
: Form(src.getName(), src.getSignGrade(), src.getExecuteGrade()), _target(src._target)
{

}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &ass)
{
	this->_target = ass._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

void	PresidentialPardonForm::action(void)const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

Form const	*PresidentialPardonForm::createForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}
