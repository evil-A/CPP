/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 07:09:40 by evila-ro          #+#    #+#             */
/*   Updated: 2022/01/11 07:38:33 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

template <typename A, typename L, typename F>
void	iter(A const &address, L const &large, F const &ft)
{
	for (size_t i = 0; i < large; i++)
		ft(address[i]);
}
