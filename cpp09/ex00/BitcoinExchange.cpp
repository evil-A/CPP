/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:43:05 by evila-ro          #+#    #+#             */
/*   Updated: 2023/12/27 21:57:58 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string const &histoSheet)
{
	std::ifstream file(histoSheet.c_str());
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::string::size_type pos = line.find(',');
		if (pos == std::string::npos)
		{
			std::cout << "Error: Wrong format in database => " << line << std::endl;
			continue;
		}

		std::string date = line.substr(0, pos);
		std::string val = line.substr(pos + 1);

		double dval;
		std::istringstream pvalue(val);
		if (!(pvalue >> dval))
		{
			std::cout << "Error: Wrong format in database => " << val << '\n';
			continue;
		}

		dataSheet[date] = dval;
	}
}

double BitcoinExchange::getValue(std::string const &date)
{
	std::map<std::string, double>::iterator it = dataSheet.lower_bound(date);
	if (it->first != date && it != dataSheet.begin())
		--it;
	if (it != dataSheet.end())
		return it->second;
	else if (!dataSheet.empty())
		return it->second;
	return -1.0;
}

bool BitcoinExchange::isDate(std::string const &date)
{
	std::string::size_type pos1 = date.find('-');
	std::string::size_type pos2 = date.rfind('-');

	if (pos1 == std::string::npos || pos1 == pos2)
		return false;

	std::string years = date.substr(0, pos1);	//0, 4
	std::string months = date.substr(pos1 + 1, pos2 - pos1 - 1);		//5, 8
	std::string days = date.substr(pos2 + 1);	//9

	int year, month, day;
	std::istringstream yss(years), mss(months), dss(days);

	if (!(yss >> year) || !(mss >> month) || !(dss >> day))
		return false;
	if (year < 1970 || year > 2024 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day > 30)
			return false;
	}
	if (month == 2)
	{
		bool Leap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
		if ((Leap && day > 29) || (!Leap && day > 28))
		{
			return false;
		}
	}

	return true;
}

bool BitcoinExchange::isValue(double const &value)
{
	if (value < 0 || value > 1000)
	{
		std::cout << "Error: " << value << " is out of limits." << std::endl;;
		return false;
	}
	return true;
}

void BitcoinExchange::parseBit(std::string const &inputData)
{
	std::ifstream file(inputData.c_str());
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::istringstream ss(line);
		std::string date;
		double value;
		char pos;

		if (!(ss >> date >> pos >> value))
		{
			std::cout << "Error: Cannot parse line => " << line << std::endl;;
			continue;
		}
		if (pos != '|')
		{
			std::cout << "Error: Not a '|' delimiter in line => " << line << std::endl;;
			continue;
		}
		if (!isDate(date))
		{
			std::cout << "Error: Wrong date format in line => " << line << std::endl;
			continue;
		}
		if (!isValue(value))
		{
			continue;
		}
		double exchange = getValue(date);
		if (exchange == -1.0)
		{
			std::cout << "Error: No date available => " << date << std::endl;
			continue;
		}
		std::cout << date << " => " << value << " = " << value * exchange << std::endl;
	}
}

BitcoinExchange::~BitcoinExchange()
{

}
