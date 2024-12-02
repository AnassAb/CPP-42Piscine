/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:27:38 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/02 15:26:31 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( void )
{
    ClapTrap::hit_points = 100;
    ClapTrap::energy_points = 100;
    ClapTrap::attack_damage = 30;
    std::cout << "FragTrap Default Constructor" << std::endl;
    std::cout << "\tName: void" << std::endl;
    std::cout << "\tHP: " << hit_points << std::endl;
    std::cout << "\tEP: " << energy_points << std::endl;
    std::cout << "\tAD: " << attack_damage << std::endl;
}

FragTrap::~FragTrap( void ) 
{
    std::cout << "FragTrap Default Destructor" << std::endl;
}

FragTrap::FragTrap( std::string pname ) : ClapTrap(pname)
{
    ClapTrap::hit_points = 100;
    ClapTrap::energy_points = 100;
    ClapTrap::attack_damage = 30;
    std::cout << "FragTrap Parameterized Constructor" << std::endl;
    std::cout << "\tfName: " << name << std::endl;
    std::cout << "\tfHP: " << hit_points << std::endl;
    std::cout << "\tfEP: " << energy_points << std::endl;
    std::cout << "\tfAD: " << attack_damage << std::endl;
}

FragTrap::FragTrap( const FragTrap& other ) : ClapTrap(other)
{
    std::cout << "FragTrap Copy Constructor" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap Assignment Operator" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return (*this);
}

void        FragTrap::attack(const std::string& target)
{
    if (checkIfAble("attack"))
    {
        std::cout << "FragTrap " << name << " attacks ";
        std::cout <<  target << ", causing " << attack_damage; 
        std::cout << " points of damage!" << std::endl;
        energy_points--;
    }
}

void        FragTrap::highFivesGuy( void )
{
    std::cout << "FragTrap wants to High Five You, YES?" << std::endl;
}
