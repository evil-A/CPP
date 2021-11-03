/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:07:02 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/03 23:28:43 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <chrono>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account( int initial_deposit )
{

	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;

	this->_accountIndex = -1 + this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	
	return ;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;

}

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;

}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > this->_amount)
	{
	Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return (0);
	}
	else
	{
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount - withdrawal << ";nb_withdrwals:" << this->_nbWithdrawals << std::endl;
	return (1);
	}
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int		Account::checkAmount( void ) const
{
	if (this->_amount >= 0)
		return (1);
	else
		return (0);
}

void	Account::_displayTimestamp( void )
{
	time_t	tim;
	tm		local;

	tim = time(0);
	local = *localtime(&tim);
	std::cout << "[" << (local.tm_year + 1900);
	std::cout << std::setfill('0') << std::setw(2) << local.tm_mon;
	std::cout << std::setw(2) << local.tm_mday << "_";
	std::cout << std::setfill('0') << std::setw(2) << local.tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << local.tm_min;
	std::cout << std::setfill('0') << std::setw(2) << local.tm_sec << "] ";
}
