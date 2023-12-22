/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:43:33 by evila-ro          #+#    #+#             */
/*   Updated: 2023/12/22 08:00:40 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>



 class BitcoinExchange
{
	private:
		std::map<std::string, float>	bitExchange;
		double							values;
		BitcoinExchange(void);
	
	public:
		virtual			~BitcoinExchange(void);
		
		BitcoinExchange(std::string const &histo, std::string const &inData);

		BitcoinExchange(BitcoinExchange const &src);
		BitcoinExchange	&operator=(BitcoinExchange const &ass);

		int				parseBit(std::string const &input);
		int				valiDate(std::string dates);
		double			prevDate(std::string formatDate);

};

#endif
