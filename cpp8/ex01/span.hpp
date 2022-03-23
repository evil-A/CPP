/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:42:44 by evila-ro          #+#    #+#             */
/*   Updated: 2022/03/23 23:46:59 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <unistd.h>
#include <time.h>

class Span
{
	private:
		size_t				_size;
		std::vector<int>	_vector;
	public:
		Span(void);
		~Span(void);
		Span(size_t numbers);

		void	addNumber(int number);
		void	fill(void);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		//Exceptions
		class VectorFull: public std::exception
		{
			public:
				char const	*what() const throw()
				{
					return ("Vector full");
				}
		};

		class VectorEmpty : public std::exception
		{
			public:
				char const	*what() const throw()
				{
					return ("Vector is empty");
				}
		};

		class VectorLengthOne : public std::exception
		{
			public:
				char const	*what() const throw()
				{
					return ("Vector length is one");
				}
		};
};

#endif
