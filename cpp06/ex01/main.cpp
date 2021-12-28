/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 20:32:04 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/28 20:49:22 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct	Data
{
	int	i;
}				Data;

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}


int	main(void)
{
	Data	a;
	Data	*b;
	a.i = 666;

	uintptr_t cereal = serialize(&a);

	b = deserialize(cereal);
	std::cout << b->i << std::endl;
	std::cout << b << std::endl;
	std::cout << &a << std::endl;

	return (0);
}
