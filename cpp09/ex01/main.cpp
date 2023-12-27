/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:09:48 by evila-ro          #+#    #+#             */
/*   Updated: 2023/12/27 22:14:08 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Wrong input" << std::endl;
        return (1);
    }
    try
    {
		int result;
        result = RPN::solve(av[1]);
		std::cout << "Result: " << result << std::endl;
	}
    catch (std::exception &e)
    {
		std::cerr << "Exception: " << e.what() << std::endl;
		return (1);
	}

    return (0);
};
