/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:28:45 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/28 19:39:34 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual IMateriaSource	&operator=(IMateriaSource const &ass) = 0;
		virtual ~IMateriaSource(void) {};

		virtual void		learnMateria(AMateria *) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
};

#endif
