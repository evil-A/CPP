/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 23:18:16 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/10 03:53:39 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

static void	check(int const &grade) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Form::Form(void) : _name("NONAME"), _signed(false), _sign(1), _execute(1)
{

}

Form::Form(std::string const &name, int const &sign, int const &execute) :
_name(name), _signed(false), _sign(sign), _execute(execute)
{
	check(this->_sign);
	check(this->_execute);
}

Form::Form(Form const &src) : _name(src._name), _signed(src._signed), _sign(src._sign), _execute(src._execute)
{
	check(this->_sign);
	check(this->_execute);
}

Form	&Form::operator=(Form const &ass)
{
	(void)ass;
	return (*this);
}

Form::~Form(void)
{

}

std::string const	&Form::getName(void)const
{
	return (this->_name);
}

bool const	&Form::getSignature(void)const
{
	return (this->_signed);
}

int	Form::getSignGrade(void)const
{
	return (this->_sign);
}

int	Form::getExecuteGrade(void)const
{
	return (this->_execute);
}

void	Form::beSigned(Bureaucrat const &b) throw(GradeTooLowException)
{
	int	grade = b.getGrade();

	if (grade > this->_sign)
		throw(Form::GradeTooLowException());
	else
		this->_signed = true;
}

void	Form::beExecuted(Bureaucrat const &b) throw(GradeTooLowException)
{
	int	grade = b.getGrade();

	if (!this->_signed)
		throw(Form::NotSignedException());
	else if (grade > this->_execute)
		throw Form::GradeTooLowException();
	else
		std::cout << "Form::execute mothod was called right" << std::endl;
}

char const	*Form::GradeTooLowException::what(void)const throw()
{
	return ("GradeTooLowException");
}

std::ostream	&operator<<(std::ostream &output, Form const &f)
{
	return (output << f.getName() << " with a signature grade of "
	<< f.getSignGrade() << " and an execute grade of "
	<< f.getExecuteGrade() << " and " << f.getSignature() << " signs" << std::endl);
}
