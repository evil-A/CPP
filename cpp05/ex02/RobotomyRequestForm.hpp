/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 04:56:15 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/11 04:59:44 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm :  public Form
{
	private:
		std::string	_target;
	protected:
		void	action(void)const;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const &src);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &ass);
		~RobotomyRequestForm(void);
};

#endif
