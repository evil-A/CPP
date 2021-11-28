/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:34:17 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/28 17:42:42 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &src);
		Cure	&operator=(Cure const &ass);
		~Cure(void);

		AMateria	*clone(void)const;
		void		use(ICharacter &target);
};

#endif
