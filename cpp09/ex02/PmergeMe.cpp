/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:48:27 by evila-ro          #+#    #+#             */
/*   Updated: 2023/12/29 00:23:58 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) : _size(0), _odd(false), _last(0)
{

}

PmergeMe::PmergeMe(PmergeMe const &src)
{
	this->_size = src._size;
	this->_odd = src._odd;
	this->_last = src._last;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &ass)
{
	this->_size = ass._size;
	this->_odd = ass._odd;
	this->_last = ass._last;

	return (*this);
}

PmergeMe::~PmergeMe(void)
{

}

void PmergeMe::setOdd(bool d)
{
   this->_odd = d;
}

void PmergeMe::setLast(int last)
{
	this->_last = last;
}

void PmergeMe::setSize(int size)
{
	this->_size = size;
}

bool PmergeMe::getOdd(void)
{
	return (this->_odd);
}

int PmergeMe::getLast(void)
{
	return (this->_last);
}

int PmergeMe::getSize(void)
{
	return (_size);
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
