/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:19:40 by evila-ro          #+#    #+#             */
/*   Updated: 2022/03/16 17:16:39 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	int	*find;
	std::vector<int> arr1;

	try
	{
		arr1.push_back(10);
		arr1.push_back(20);
		find = easyfind(arr1, 10);
		std::cout << "Number found " << *find << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

/*	try
	{
	
		std::vector<int> arr2(10, -1);
		find = easyfind(arr2, 3);
		std::cout << "Number found " << *find << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
*/
	return (0);
}
