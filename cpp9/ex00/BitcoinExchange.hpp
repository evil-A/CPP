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

        virtual     ~BitcoinExchange(void)

        void		parseInput(std::string const &inputData);
		double		getValue(std::string const &date);//	double GetExchangeRate(const std::string &date);
		bool		checkDate(std::string const &date);
		bool		checkValue(double const &value);
};

#endif