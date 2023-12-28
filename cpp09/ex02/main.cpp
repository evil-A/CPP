/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:49:15 by evila-ro          #+#    #+#             */
/*   Updated: 2023/12/29 00:23:56 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int argc, char **argv)
{
	if (argc < 3)
	{
		std::cout << "Wrong input" << std::endl;
		return (1);
	}
	
	PmergeMe pm;
	pm.setSize(argc - 1);
	pm.setOdd(false);
	if ((argc - 1) % 2 != 0)
		pm.setOdd(true);
	std::string lastS(argv[argc - 1]);
	int last = std::stoi(lastS);
	if (last < 0)
	{
		std::cout << "Negative number" << std::endl;
		return (1);
	}
	pm.setLast(last);

	std::cout << "Before : ";
	for (int i = 1; i < argc; ++i)
		std::cout << argv[i] << " ";

	// Vector
	std::vector<std::pair<unsigned int, unsigned int> > vec;
	for (int i=1; i < argc - 1; i+=2)
	{
		std::string arg1(argv[i]);
		std::string arg2(argv[i + 1]);
		if (isdigit(arg1[0]))
		{
			if (!(pm.checkInput(arg1, arg2)))
				return (1);
			vec.push_back(std::make_pair(std::stoi(arg1), std::stoi(arg2)));
		}
	}
	std::vector<unsigned int> vec_a, vec_b;
	pm.timedSort(vec, vec_a, vec_b, 'v');
	
	// Deque
	std::deque<std::pair<unsigned int, unsigned int> > dq;
	for (int i=1; i < argc - 1; i+=2)
	{
		std::string arg1(argv[i]);
		std::string arg2(argv[i + 1]);
		if (isdigit(*argv[i]))
		{
			if (!pm.checkInput(arg1, arg2))
				return (1);
			dq.push_back(std::make_pair(std::stoi(arg1), std::stoi(arg2)));
		}
	}
	std::deque<unsigned int> dq_a, dq_b;
	pm.timedSort(dq, dq_a, dq_b, 'd');

	return (0);
}
