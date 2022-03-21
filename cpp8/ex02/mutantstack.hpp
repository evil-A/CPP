/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:19:48 by evila-ro          #+#    #+#             */
/*   Updated: 2022/03/20 19:56:14 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <string.h>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>() {};
		~MutantStack()
		{
			std::cout << " Default destructor called" << std::endl;
		};
		typedef typename	std::stack<T>::container_type::iterator iterator;
		iterator	begin(void)
		{
			return (this->c.begin());
		}
		iterator	end(void)
		{
			return (this->c.end());
		}
};

#endif
