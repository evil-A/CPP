/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:43:33 by evila-ro          #+#    #+#             */
/*   Updated: 2023/12/27 21:58:00 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <algorithm>

class BitcoinExchange
{
    private:
	    std::map<std::string, double> dataSheet;
        BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const &src);

    public:
	    BitcoinExchange(std::string const &histoSheet);
        ~BitcoinExchange(void);
        
		void		parseBit(std::string const &inputData);
		double		getValue(std::string const &date);
		bool		isDate(std::string const &date);
		bool		isValue(double const &value);
};

#endif
