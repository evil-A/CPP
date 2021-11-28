/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:10:29 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/28 14:49:01 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
//	const Animal 		*meta = new Animal();
	const Animal 		*deta = new Dog();
	const Animal 		*ceta = new Cat();

//	meta->makeSound();
	deta->makeSound();
	ceta->makeSound();

//	delete meta;
	delete deta;
	delete ceta;

	return (0);
}

