/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 07:17:26 by evila-ro          #+#    #+#             */
/*   Updated: 2022/01/11 07:37:59 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

static void	ft_int(int const &src)
{
	std::cout << src << std::endl;
}

static void	ft_float(float const &src)
{
	std::cout << src << std::endl;
}

static void	ft_double(double const &src)
{
	std::cout << src << std::endl;
}

static void	ft_char(char const &src)
{
	std::cout << src << std::endl;
}

static void	ft_str(std::string const &src)
{
	std::cout << src << std::endl;
}

int		main(void)
{
	std::cout << "****    Int array    ****" << std::endl;
	int	intA[2] = {21, 42};
	::iter(intA, sizeof(intA) / sizeof(int), ft_int);

	std::cout << "****    Float array    ****" << std::endl;
	float	floatA[2] = {-1.7f, 4.2f};
	::iter(floatA, sizeof(floatA) / sizeof(float), ft_float);

	std::cout << "****    Double array    ****" << std::endl;
	double	doubleA[2] = {-1.7, 4.2};
	::iter(doubleA, sizeof(doubleA) / sizeof(double), ft_double);

	std::cout << "****    Char array    ****" << std::endl;
	char	charA[2] = {'H', 'l'};
	::iter(charA, sizeof(charA) / sizeof(char), ft_char);

	std::cout << "****    String array    ****" << std::endl;
	std::string	strA[2] = {"Hell", "Raiser"};
	::iter(strA, sizeof(strA) / sizeof(std::string), ft_str);

	return (0);
}
