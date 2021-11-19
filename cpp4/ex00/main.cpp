/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:10:29 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/19 12:20:15 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal 		*meta = new Animal();
	const Animal		monkey;
	const Animal 		*geta = new Dog();
	const Dog			white_fang;
	const Animal 		*zeta = new Cat();
	const Cat			salem;
	const WrongAnimal	*weta = new WrongAnimal();
	const WrongAnimal	*reta = new WrongCat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << geta->getType() << " " << std::endl;
	std::cout << zeta->getType() << " " << std::endl;
	std::cout << weta->getType() << " " << std::endl;
	std::cout << weta->getType() << " " << std::endl;

	meta->makeSound();
	geta->makeSound();
	zeta->makeSound();
	weta->makeSound();
	reta->makeSound();

	delete meta;
	delete geta;
	delete zeta;
	delete weta;
	delete reta;

	return (0);
}

