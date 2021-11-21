/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:48:46 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/21 13:29:14 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CAT_H
# define CAT_H

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;
	public:
		Cat(void);
		Cat(Cat const &src);
		Cat	&operator=(Cat const &ass);
		~Cat(void);

		void		makeSound(void)const;
		void		copyBrain(Brain const &src);
		Brain const	&getBrain(void)const;
		void		setI(std::string const &idea);
		void		getI(void)const;
};

#endif
