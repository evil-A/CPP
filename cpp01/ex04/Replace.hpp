/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 05:28:23 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/10 05:39:30 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

class	Replace
{

private:
	std::ifstream	_file;
	std::ofstream	_refill;
	std::string		_s1;
	std::string		-s2;

public:

	Replace (std::string file, std::string s1, std::string s2);
	~Replace (void);
	void	renew (void);

};

#endif
