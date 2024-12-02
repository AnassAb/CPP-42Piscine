/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 21:32:35 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/02 20:15:34 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( void )
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 30;
    std::cout << "DiamondTrap Default Constructor" << std::endl;
    std::cout << "\tName: void" << std::endl;
    std::cout << "\tHP: " << hit_points << std::endl;
    std::cout << "\tEP: " << energy_points << std::endl;
    std::cout << "\tAD: " << attack_damage << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
    std::cout << "DiamondTrap Default Destructor" << std::endl;
}

DiamondTrap::DiamondTrap( std::string pname ) : 
    ClapTrap(pname + "_clap_name"), ScavTrap(pname), FragTrap(pname)
{
    name = pname;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 30;

    std::cout << "DiamondTrap Parameterized Constructor" << std::endl;
    std::cout << "\tName: " << name << std::endl;
    std::cout << "\tHP: " << hit_points << std::endl;
    std::cout << "\tEP: " << energy_points << std::endl;
    std::cout << "\tAD: " << attack_damage << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other) : 
    name(other.name)
{
    std::cout << "DiamondTrap Copy Constructor" << std::endl;
}

DiamondTrap&    DiamondTrap::operator=( const DiamondTrap& other )
{
    std::cout << "DiamondTrap Assignement Operator" << std::endl;
    if (this != &other)
        (*this).name = other.name;
    return (*this);
}

void            DiamondTrap::attack( const std::string& target )
{
    ScavTrap::attack(target);
}

void            DiamondTrap::whoAmI( void )
{
    std::cout << "DiamondTrap Name: " << name;
    std::cout << " | ClapTrap Name: " << ClapTrap::name;
    std::cout << std::endl;
}
