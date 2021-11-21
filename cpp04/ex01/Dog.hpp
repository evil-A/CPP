/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:20:17 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/21 12:38:28 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  DOG_H
# define DOG_H

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;
	public:
		Dog(void);
		Dog(Dog const &src);
		Dog	&operator=(Dog const &ass);
		~Dog(void);

		void		makeSound(void)const;
		void		copyBrain(Brain const &src);
		Brain const	&getBrain(void)const;
		void		setI(std::string const &idea);
		void		getI(void)const;
};

#endif
