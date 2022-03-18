/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:50:11 by evila-ro          #+#    #+#             */
/*   Updated: 2022/03/16 17:16:41 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <vector>
#include <array>

class	VectorNotFound : public std::exception
{
	public:
		char const	*what() const throw()
		{
			return ("Int not found in the container");
		}
};

template <typename T>
int		*easyfind(T &vector, int num)
{
	typename	T::iterator	it;

	if ((it = std::find(vector.begin(), vector.end(), num)) == vector.end())
		throw VectorNotFound();
	return (&(*it));
}

#endif
