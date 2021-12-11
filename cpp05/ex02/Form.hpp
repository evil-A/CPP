/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:55:04 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/11 04:11:18 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FORM_H
# define FORM_H

#include <iostream>
#include <exception>
#include <ostream>

class Bureaucrat;

class Form
{

	private:
		std::string const	_name;
		bool				_signed;
		int const			_sign;
		int const			_execute;
	protected:
		virtual void	action(void) const = 0;
	public:
		Form(void);
		Form(std::string const &_name, int const &sign, int const &_execute);
		Form(Form const &src);
		Form	&operator=(Form const &ass);
		~Form(void);

		class GradeTooLowException : public std::exception
		{
			public:
				char const	*what() const throw();
		};

		std::string const	&getName(void)const;
		bool const			&getSignature(void)const;
		int					getSignGrade(void)const;
		int					getExecuteGrade(void)const;
		void				beSigned(Bureaucrat const &b) throw (Form::GradeTooLowException);
		void				beExecuted(Bureaucrat const &b) throw (Form::GradeTooLowException);
};

std::ostream	&operator<<(std::ostream &output, Form const &f);

#endif
