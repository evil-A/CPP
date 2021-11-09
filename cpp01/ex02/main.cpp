/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 02:18:42 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/09 03:23:04 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string one = "HI THIS IS BRAIN";
	std::string *two;
	std::string	&three = one;

	two = &one;

	std::cout << &one << "\tThe string" << std::endl;
	std::cout << two << std::endl;
	std::cout << &three << "\tThe reference" << std::endl;

	std::cout << *two << "\tPointer content" << std::endl;
	std::cout << three << "\tReference content" << std::endl;
	
	return (0);
}
