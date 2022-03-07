/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:21:20 by misaev            #+#    #+#             */
/*   Updated: 2022/03/07 13:22:06 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
  return _nbAccounts;
}

int Account::getTotalAmount(void)
{
  return _totalAmount;
}

int Account::getNbDeposits(void)
{
  return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
  return _totalNbWithdrawals;
}


void Account::_displayTimestamp( void ) 
{
    time_t t;
    time(&t);
    struct tm *local = localtime(&t);
    std::cout << "[" << local->tm_year + 1900;
    if (local->tm_mon+1 < 10)
        std::cout << "0";
    std::cout << local->tm_mon+1;
    if (local->tm_mday < 10)
        std::cout << "0";
    std::cout << local->tm_mday << "_";
    if (local->tm_hour < 10)
        std::cout << "0";
    std::cout << local->tm_hour;
    if (local->tm_min < 10)
        std::cout << "0";
    std::cout << local->tm_min;
    if (local->tm_sec < 10)
        std::cout << "0";
    std::cout << local->tm_sec << "] ";
}

Account::~Account()
{
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
  return;
}

Account::Account()
{
  this->_accountIndex = 0;
  this->_amount = 0;
  this->_nbDeposits = 0;
  this->_nbWithdrawals = 0;
}

bool	Account::makeWithdrawal(int withdrawal)
{
  _displayTimestamp();
  this->_nbWithdrawals = 0;
  std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
  if (this->_amount - withdrawal < 0)
  {
    std::cout << ";withdrawal:" << "refused" << std::endl;
    return false;
  }
  else
  {
    this->_amount -= withdrawal;
    this->_totalAmount -= withdrawal;
    this->_nbWithdrawals++;
    this->_totalNbWithdrawals += this->_nbWithdrawals;
    std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return true;
  }
}
  
void Account::makeDeposit(int deposit)
{
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
  std::cout << ";deposit:" << deposit; 
  this->_amount += deposit;
  this->_totalAmount += deposit; 
  this->_nbDeposits++;
  std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
  this->_totalNbDeposits += this->_nbDeposits;
}

void Account::displayStatus(void) const
{
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:";
  std::cout << this->_amount << ";deposit:" << this->_nbDeposits;
  std::cout << ";withdrawals:" << this->_nbWithdrawals;
  std::cout << std::endl;
  return;
} 

void Account::displayAccountsInfos(void)
{
  _displayTimestamp();
  std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
  return;
}

Account::Account(int initial_deposit)
{
  _displayTimestamp();
  this->_amount = initial_deposit;
  this->_accountIndex = _nbAccounts;
  this->_totalAmount += this->_amount;
  this->_nbWithdrawals = 0;
  this->_nbDeposits = 0;
  _nbAccounts++;
  std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
  return;
}

