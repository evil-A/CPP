/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 01:41:07 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/12 02:15:36 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Karen.hpp"

int	main(void)
{
	Karen	miss;

	miss.complain("INFO");
	miss.complain("ERROR");
	miss.complain("DEBUG");
	miss.complain("WARNING");
	return (0);
}
