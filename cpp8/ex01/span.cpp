/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 21:23:34 by evila-ro          #+#    #+#             */
/*   Updated: 2022/03/23 23:46:56 by evila-ro         ###   ########.fr       */
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
	struct timespec	tp;
	clock_gettime(CLOCK_REALTIME, &tp);
	srand(tp.tv_nsec);
	return ((rand() % size) - size / 2);
/*	int	i;

	srand((unsigned)time(0));
	i = (rand() % size) + 1;
	return (std::abs(i));
*/
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

/*	std::vector<int>	sort_copy(this->_vector.size());
	unsigned int		lowest_diff = UINT_MAX;
	unsigned int		diff;

	std::partial_sort_copy(this->_vector.begin(), this->_vector.end(), sort_copy.begin(), sort_copy.end());

	for (std::vector<int>::const_iterator it = sort_copy.begin(), end = sort_copy.end() - 1; it != end; it++)
	{
		diff = (*(it + 1) - *it);
		if (diff < lowest_diff)
			lowest_diff = diff;
	}
*/
	std::vector<long int>copy(_vector.begin(), _vector.end());
	std::sort(copy.begin(), copy.end(), std::less<int>());
	std::vector<long int >::iterator it;
	std::vector<long int>::iterator ite = copy.end();

	long int	diff = LONG_MAX;
	for (it = copy.begin(); it != ite; it++)
	{
		std::vector<long int>::iterator it2;
		for (it2 = it + 1; it2 != ite; it2++)
		{
			if (*it != *it2)
			{
				if (std::abs(*it - *it2) < diff)
					diff = std::abs(*it - *it2);
			}
		}
	}
	return (diff);
}

int		Span::longestSpan(void) const
{
	if (_vector.empty())
		throw Span::VectorEmpty();
	else if (_vector.size() == 1)
		throw Span::VectorLengthOne();
	std::vector<int>copy(_vector.begin(), _vector.end());
	int	mn;
	int	mx;
	int	diff;
	std::sort(copy.begin(), copy.end(), std::less<int>());
	mn = *(copy.begin());
	std::sort(copy.begin(), copy.end(), std::greater<int>());
	mx = *(copy.begin());
	diff = mx - mn;
	return (diff);
}
