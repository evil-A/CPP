/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 03:22:05 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/11 04:54:54 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SHRUYBBERYCREATIONFORM_H
# define SHRUYBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : public From
{
	private:
		std::string		_target;
	protected:
		void	action(void)const throw(std::exception, std::string);
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm	&operator=(ShrubberyForm const & ass);
		~ShrubberyCreationForm(void);
};

#endif
