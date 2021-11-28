/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:48:46 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/19 09:52:23 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CAT_H
# define CAT_H

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &src);
		Cat	&operator=(Cat const &ass);
		~Cat(void);

		void	makeSound(void)const;
};

#endif
