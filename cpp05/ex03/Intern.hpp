/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 05:53:23 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/12 06:30:54 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  INTERN_H
# define INTERN_H

#include "Form.hpp"
#include <iostream>
#include <exception>

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		Intern	&operator=(Intern const &ass);
		~Intern(void);

		class UnknownFormException : public std::exception
		{
			public:
				char const	*what()const throw();
		};

		Form const	*makeForm(std::string const &name, std::string const &target)const throw(Intern::UnknownFormException);

};

#endif
