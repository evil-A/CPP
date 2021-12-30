/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 17:50:17 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/30 20:04:28 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	size_t	i;
	Base	*base = NULL;

	srand(time(NULL));
	i = rand() % 3;

	try
	{
		switch(i)
		{
			case 0:
				base = dynamic_cast<Base *>(new A);
				break;
			case 1:
				base = dynamic_cast<Base *>(new B);
				break;
			case 2:
				base = dynamic_cast<Base *>(new C);
				break;
		}
		return (base);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (NULL);
	}
}

void	identify(Base *p)
{
	try
	{
		if (dynamic_cast<A *>(p))
			std::cout << "A" << std::endl;
		else if (dynamic_cast<B *>(p))
			std::cout << "B" << std::endl;
		else if (dynamic_cast<C *>(p))
			std::cout << "C" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	identify(Base &p)
{
	try
	{
		if (dynamic_cast<A *>(&p))
			std::cout << "A" << std::endl;
		else if (dynamic_cast<B *>(&p))
			std::cout << "B" << std::endl;
		else if (dynamic_cast<C *>(&p))
			std::cout << "C" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
	
int	main(void)
{
	Base	*p1;
	Base	*p2;

	p1 = generate();
	sleep(2);
	p2 = generate();

	std::cout << "Base pointer"<< std::endl;
	identify(p1);
	identify(p2);

	std::cout << "Base reference" << std::endl;
	identify(*p1);
	identify(*p2);

	delete p1;
	delete p2;
	return (0);
}
