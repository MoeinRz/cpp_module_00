/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrezaei <mrezaei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:49:38 by mrezaei           #+#    #+#             */
/*   Updated: 2023/09/11 14:51:13 by mrezaei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

Account::Account(int initial_deposit)
{
	Account::_nbAccounts = 0;
	Account::_totalAmount = 0;
	Account::_totalNbDeposits = 0;
	Account::_totalNbWithdrawals = 0;
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";created" << std::endl;
	return ;
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::checkAmount() const
{
	return (_amount);
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << \
	";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
	time_t current_time = time(nullptr);
	tm* time = std::localtime(&current_time);
	char buf[16];
	strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", time);
	std::cout << "[" << buf << "] ";
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << \
	";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount()
              << ";deposit:" << deposit << ";amount:" << checkAmount() + deposit
              << ";nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount()
              << ";withdrawal:";
    if (checkAmount() < withdrawal)
	{
        std::cout << "refused" << std::endl;
        return false;
    }
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << withdrawal << ";amount:" << checkAmount() - withdrawal
              << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";closed\n";
	return ;
}
