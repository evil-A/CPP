/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:48:27 by evila-ro          #+#    #+#             */
/*   Updated: 2023/12/28 21:05:12 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) : _range(0), _odd(false), _last_item(0)
{

}

PmergeMe::PmergeMe(PmergeMe const &pm)
{
	_range = pm._range;
	_odd = pm._odd;
	_last_item = pm._last_item;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &pm) {
	_range = pm._range;
	_odd = pm._odd;
	_last_item = pm._last_item;

	return (*this);
}

PmergeMe::~PmergeMe(void)
{

}

void PmergeMe::setOdd(bool d)
{
   	_odd = d;
}

void PmergeMe::setLastItem(int last)
{
	_last_item = last;
}

void PmergeMe::setRange(int range)
{
	_range = range;
}

bool PmergeMe::getOdd(void)
{
	return (_odd);
}

int PmergeMe::getLastItem(void)
{
	return (_last_item);
}

int PmergeMe::getRange(void)
{
	return (_range);
}

bool PmergeMe::checkInput(std::string s1, std::string s2)
{
	if (std::stoi(s1) < 0 || std::stoi(s2) < 0)
	{
		std::cerr << "Wrong Input: Number is less than 0" << std::endl;
		return (false);
	}
	return (true);
}
