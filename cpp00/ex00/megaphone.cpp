/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:38:50 by evila-ro          #+#    #+#             */
/*   Updated: 2021/10/29 18:17:42 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	size_t	i;
	size_t	j;
	
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
			for (j = 0; argv[i][j]; j++)
				std::cout << (char)std::toupper(argv[i][j]);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
