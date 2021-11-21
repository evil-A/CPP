/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 05:09:29 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/21 13:29:03 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain(void);
		Brain(Brain const &src);
		Brain	&operator=(Brain const &ass);
		~Brain(void);

		void				setIdea(std::string const &idea);
		std::string const	&getIdea(void);
};

#endif
