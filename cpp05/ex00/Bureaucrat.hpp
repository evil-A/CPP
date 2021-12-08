/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:16:27 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/06 03:13:55 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <exception>
#include <ostream>

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;//1 - 150

	public:
		Bureaucrat(std::string const &src, int const grade) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException);
		~Bureaucrat(void);
		
		std::string const	&getName(void)const;
		int					getGrade(void)const;
		void				upgrade(void) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException);
		void				downgrade(void) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException);

		class GradeTooHighException : public std::exception
		{
			public:
				char const *what()const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				char const *what()const throw();
		};
};

std::ostream	&operator<<(std::ostream &output, Bureaucrat const &src);

#endif
//Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.
/*
try
{
	do some stuff with bureaucrats
}
catch (std::exception & e)
{
	handle exception
}
*/

