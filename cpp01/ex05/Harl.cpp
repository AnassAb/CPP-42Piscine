/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 03:42:49 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/24 07:13:08 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug( void )
{
    std::cout << "DEBUG: ";
    std::cout << "I love having extra bacon for ";
    std::cout << "my 7XL-double-cheese-triple-pickle-special-ketchup burger. ";
    std::cout << "I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "INFO: ";
    std::cout << "I cannot believe adding extra bacon costs more money. ";
    std::cout << "You didn’t put enough bacon in my burger! ";
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "WARNING: ";
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years ";
    std::cout << "whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "ERROR: ";
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    void (Harl::*actions[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = -1;
    while (++i < 4)
    {
        if (level == levels[i])
        {
            (this->*actions[i])();
            break ;
        }
    }
}
