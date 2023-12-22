/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:43:05 by evila-ro          #+#    #+#             */
/*   Updated: 2023/12/22 11:00:17 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange(void)
{

}

BitcoinExchange::BitcoinExchange(std::string const &histo, std::string const &inData)
{
	std::ifstream database(histo);
	if (!database.is_open())
	{
		std::cout << "Cannot read file" << std::endl;
	}

	std::string line;
	while (std::getline(database, line))
	{
		std::istringstream ss(line);
		std::string date;
		std::string value;
		if (std::getline(ss, date, ',') && ss >> value)
		{
			bitExchange[date] = atof(value.c_str());
		}
	}
	database.close();

	this->values = 0;
	parseBit(inData);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	*this = src;
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &ass)
{
	this->bitExchange = ass.bitExchange;
	return (*this);
}

int				BitcoinExchange::parseBit(std::string const &input)
{
	std::ifstream inputFile(input);
	if (!inputFile.is_open())
	{
		std::cout << "Cannot read input file" << std::endl;
	}

	std::string inLine;
	std::string values;
	std::string formatDate;
	std::string inputDate;
	std::string inputValue;

	double nValue;
	std::getline(inputFile, inLine);
	int	size;
	size = inLine.length();
	while (std::getline(inputFile, inLine))
	{
		formatDate = inLine.substr(0, 10);
		if (valiDate(formatDate))
		{
			std::cout << "Error: invalid date: " <<formatDate << std::endl;
			continue;
		}
		values = inLine.substr(11, size);
		if (values == "")
			continue;
		nValue = atof(values.c_str());
		{
			if (nValue < 0 || nValue > 1000)
			{
				std::cout << "Error: invalid quantity: " << nValue << std::endl;
				continue;
			}
		}
		nValue = nValue * prevDate(formatDate);
		std::cout << formatDate << " => " << values << " = " << nValue << std::endl;
	}
	inputFile.close();
	return (0);
}
	
int				BitcoinExchange::valiDate(std::string dates)
{
	int		y, m, d;
	if (dates.length() < 10)
		return (1);
	y = std::stoi(dates.substr(0, 4));
	m = std::stoi(dates.substr(5, 2));
	d = std::stoi(dates.substr(8, 2));
	if (y < 2008 || y > 999 || m < 1 || m > 12 || d < 1 || d > 31 ||
    (d == 31 && (m == 4 || m == 6 || m == 9 || m == 11)) ||
    (m == 2 && (d == 30 || (d == 29 && y % 4 != 0))))
	{
		std::cout << "Wrong date" << std::endl;
		return (1);
	}
	return (0);
}

double			BitcoinExchange::prevDate(std::string formatDate)
{
	std::map<std::string, float>::iterator it = this->bitExchange.begin();
	std::string		prev = it->first;
	while (it != this->bitExchange.end())
	{
		if (formatDate > prev)
			it++;
		if (formatDate <= prev)
			return (this->bitExchange.find(prev)->second);
		prev = it->first;
	}
	return (this->bitExchange.find(prev)->second);
}
