/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:10:29 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/21 13:29:09 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	unsigned int	zoo;
	unsigned int	i;

	zoo = 4;
	Animal	*animals[zoo];
	Dog	cujo;
	Dog	cerberus;

	cerberus = cujo;

	for (i = 0; i < zoo/2; i++)
		animals[i] = new Dog();
	for (i = zoo/2; i < zoo; i++)
		animals[i] = new Cat();


	cujo.setI("Puta mierda");
	cujo.getI();
	
	cerberus.getI();
	cerberus = cujo;
	cerberus.getI();

	

	for (i = 0; i < zoo; i++)
		delete	animals[i];

	return (0);	
}	
	
/*
// Now, Dog and cat will have a private Brain* attribute.

 //Upon construction Dog and Cat will initialize their Brain* with a new Brain(); Upon destruction Dog and Cat will delete their Brain.

// Your main will create and fill an Array of Animal half of it will be Dog and the other half will be Cat.

 //Before exit, your main will loop over this array and delete every Animal. You must delete directly Cat and Dog as an Animal.

 A copy of a Cat or Dog must be "deep". Your test should show that copies are deep!

 Constructors and destructors of each class must have specifics output. The appropriate destructors must be called.
*/
