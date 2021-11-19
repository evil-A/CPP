/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 08:00:54 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/19 09:18:56 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	type;//type.empty()

	public:
		Animal(void);
		Animal(std::string const &src);
		Animal(Animal const &src);
		Animal	&operator=(Animal const &ass);
		virtual ~Animal(void);

		virtual void		makeSound(void)const;
		std::string const	&getType(void)const;
};

#endif
