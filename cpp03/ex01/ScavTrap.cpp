/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:27:38 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/02 15:18:42 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void ) : ClapTrap(100, 50, 20)
{
    std::cout << "ScavTrap Default Constructor" << std::endl;
}

ScavTrap::~ScavTrap( void ) 
{
    std::cout << "ScavTrap Default Destructor" << std::endl;
}

ScavTrap::ScavTrap( std::string pname ) : ClapTrap(pname, 100, 50, 20)
{
    std::cout << "ScavTrap Parameterized Constructor" << std::endl;
}

ScavTrap::ScavTrap( std::string p_name, unsigned int p_hp, unsigned int p_ep, unsigned int p_ad ) : ClapTrap(p_name, p_hp, p_ep, p_ad)
{
    std::cout << "ScavTrap Full Parameterized Constructor" << std::endl;   
}

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap(other)
{
    std::cout << "ScavTrap Copy Constructor" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap Assignment Operator" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return (*this);
}

void        ScavTrap::attack(const std::string& target)
{
    if (checkIfAble("attack"))
    {
        std::cout << "ScavTrap " << name << " attacks ";
        std::cout <<  target << ", causing " << attack_damage; 
        std::cout << " points of damage!" << std::endl;
        energy_points--;
    }
}

void        ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap is now in Gatekeeper mode." << std::endl;
}
