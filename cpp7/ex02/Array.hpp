/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 07:51:43 by evila-ro          #+#    #+#             */
/*   Updated: 2022/01/11 08:24:33 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ARRAY_HPP
# define ARRAY_HPP

#include <cstdlib>

template <typename T>
class Array
{
	private:
		T		*_array;
		size_t	_size;
	public:
		Array(void) : _array(new T[0]), _size(0) {};
		Array(unsigned int size) : _array(new T[size]), _size(size) {};
		Array(Array const &src) { *this = src; };
		Array	&operator=(Array const &ass)
		{
			if (this == &ass)
				return (*this);
			if (_size != ass._size)
			{
				_size = ass._size;
				_array = new T[_size];
			}
			for (size_t i = 0; i < ass._size; i++)
				_array[i] = ass._array[i];
			return (*this);
		}
		~Array(void) { delete[] _array; };
		T	&operator[](size_t const &index)
		{
			if (index < 0)
				throw Array::NegativeIndexException();
			else if (this->_size <= index)
				throw Array::OutterLimitsException();
			return (this->_array[index]);
		}
		T const	&operator[](size_t const &index) const
		{
			if (index < 0)
				throw Array::NegativeIndexException();
			else if (this->_size <= index)
				throw Array::OutterLimitsException();
			return (this->_array[index]);
		}

		class NegativeIndexException : public std::exception
		{
			public:
				char const *what() const throw()
				{
					return ("Index can't be a negative number");
				}
		};

		class OutterLimitsException : public std::exception
		{
			public:
				char const *what() const throw()
				{
					return ("You're entering the Outter Limits");
				}
		};
};

#endif
