/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:47:57 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/06 03:13:53 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &src, int const grade) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException) : _name(src), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();

	std::cout << this->_name << " bureaucrat of level " << this->_grade << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << this->_name << " is being fired" << std::endl;
}

char const	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException launched");
}

char const	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException launched");
}

std::string const	&Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::upgrade(void) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException)
{
	if (this->_grade < 2)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::downgrade(void) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException)
{
	if (this->_grade > 149)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

std::ostream	&operator<<(std::ostream &output, Bureaucrat const &src)
{
	return (output << src.getName() << ", bureaucrat grade " << src.getGrade());
}
