/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 21:23:34 by evila-ro          #+#    #+#             */
/*   Updated: 2022/03/18 20:08:02 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : _size(0)
{
	std::cout << "Default constuctor called" << std::endl;
}

Span::~Span(void)
{
	std::cout << "Default destructor called" << std::endl;
}

Span::Span(size_t numbers) : _size(numbers)
{
	std::cout << "Constructor called" << std::endl;
}

void	Span::addNumber(int number)
{
	if (_vector.size() == _size)
		throw Span::VectorFull();
	_vector.push_back(number);
}

static int	randomInt(size_t  size)
{
	int	i;

	srand((unsigned)time(0));
	i = (rand() % size) + 1;
	return (i);
}

void	Span::fill(void)
{
	size_t	start;

	start = _vector.size();
	while (start < _size)
	{
		usleep(50);
		_vector.push_back(randomInt(_size));
		start++;
	}
}

int		Span::shortestSpan(void) const
{
	if (_vector.empty())
		throw Span::VectorEmpty();
	else if (_vector.size() == 1)
		throw Span::VectorLengthOne();
	std::vector<int>copy = _vector;
	std::sort(copy.begin(), copy.end(), std::less<int>());
	return *(copy.begin());
}

int		Span::longestSpan(void) const
{
	if (_vector.empty())
		throw Span::VectorEmpty();
	else if (_vector.size() == 1)
		throw Span::VectorLengthOne();
	std::vector<int>copy = _vector;
	std::sort(copy.begin(), copy.end(), std::greater<int>());
	return *(copy.begin());
}
