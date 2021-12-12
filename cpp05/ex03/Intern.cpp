/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 05:59:59 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/12 06:30:12 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef Form const	*(*_ptr)(std::string const &);

Intern::Intern(void)
{

}

Intern::Intern(Intern const &src)
{
	(void)src;
}

Intern	&Intern::operator=(Intern const &ass)
{
	(void)ass;
	return (*this);
}

Intern::~Intern(void)
{

}

char const	*Intern::UnknownFormException::what()const throw()
{
	return ("UnkownFormException");
}

Form const	*Intern::makeForm(std::string const &name, std::string const &target)const throw(Intern::UnknownFormException)
{
	std::string	type[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	_ptr		classes[3] = {&ShrubberyCreationForm::createForm, &RobotomyRequestForm::createForm, &PresidentialPardonForm::createForm};

	for (size_t i = 0; i < 3; i++)
		if (!(type[i].compare(name)))
		{
			std::cout << "Intern creates " << name << std::endl;
			return (classes[i](target));
		}
	throw Intern::UnknownFormException();
}
