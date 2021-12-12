/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 04:38:18 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/12 06:21:23 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string	_target;
	protected:
		void	action(void)const;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const &src);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &ass);
		~PresidentialPardonForm(void);

		static Form const	*createForm(std::string const &target);
};

#endif
