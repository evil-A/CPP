/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 06:27:06 by evila-ro          #+#    #+#             */
/*   Updated: 2022/01/11 06:40:37 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

template <typename T>
T	min(T const &x, T const &y)
{
	return (x < y ? x : y); 
}

template <typename T>
T	max(T const &x, T const &y)
{
	return (x > y ? x : y);
}

template <typename T>
void	swap(T &x, T &y)
{
	T	aux;

	aux = x;
	x = y;
	y = aux;
}
