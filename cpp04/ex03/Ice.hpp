/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:31:36 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/28 16:47:27 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &src);
		Ice	&operator=(Ice const &ass);
		~Ice(void);

		AMateria	*clone(void)const;
		void		use(ICharacter &target);
};

#endif
