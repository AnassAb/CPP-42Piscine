/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 02:07:16 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/20 03:02:33 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include "Account.hpp"
#include <ctime>
#include <sstream>

Account::Account ( int initial_deposit )
{
    _amount = initial_deposit;
}

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals <<std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _amount += deposit;
    _nbDeposits += 1;
    _totalNbDeposits += 1;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal > _amount)
        return (false);
    _amount -= withdrawal;
    _nbWithdrawals += 1;
    _totalNbWithdrawals += 1;
    return (true);
}

int		Account::checkAmount( void ) const
{
    return (_amount);
}

// void	Account::displayStatus( void ) const
// {

// }

void	Account::_displayTimestamp( void )
{
    std::time_t now = std::time(nullptr);
    std::tm* tm_now = std::localtime(&now);

    std::stringstream timestamp;
    timestamp << std::put_time(tm_now, "%Y%m%d_%H%M%S");

    std::cout << "[" << timestamp.str() << "] " << std::endl;
}
