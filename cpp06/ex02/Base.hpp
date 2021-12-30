/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 21:13:06 by evila-ro          #+#    #+#             */
/*   Updated: 2021/12/30 20:07:44 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BASE_H
# define BASE_H

#include <iostream>
#include <cstdlib>
#include <unistd.h>

class Base
{
	public:
		virtual ~Base(void);
};

#endif

Base	*generate(void);// that randomly instanciates A, B or C and returns the instance as a Base pointer.
void	identify(Base *p);//that displays "A", "B" or "C" accord- ing to the real type of p.
void	identify(Base &p);//You should never use a pointer inside this function. that displays "A", "B" or "C" according to the real type of p.
