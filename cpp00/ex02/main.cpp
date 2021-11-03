/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:40:32 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/03 23:28:40 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	main(void)
{
	Account	tonga(666);
	Account	tonge(33);
	Account	tongi(123);
	Account::displayAccountsInfos();
	tonga.displayStatus();
	tonge.displayStatus();
	tongi.displayStatus();
	tonga.makeDeposit(666);
	tonge.makeDeposit(33);
	tongi.makeDeposit(123);
	Account::displayAccountsInfos();
	tonga.displayStatus();
	tonge.displayStatus();
	tongi.displayStatus();
	tonga.makeWithdrawal(666);
	tonge.makeWithdrawal(66);
	tongi.makeWithdrawal(247);
	Account::displayAccountsInfos();
	std::cout << Account::getNbAccounts() << std::endl;
	
	return (0);
}
