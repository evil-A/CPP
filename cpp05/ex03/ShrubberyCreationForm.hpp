/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 03:22:05 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/12 06:20:45 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SHRUYBBERYCREATIONFORM_H
# define SHRUYBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string		_target;
	protected:
		void	action(void)const throw(std::exception, std::string);
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const & ass);
		~ShrubberyCreationForm(void);

		static Form const	*createForm(std::string const &target);
};

#endif
