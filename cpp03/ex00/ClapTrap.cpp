/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:39:58 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/30 21:08:31 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ) : hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "Default Constructor is Called!" << std::endl;
}

ClapTrap::ClapTrap( std::string pname ) : name(pname), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "Default Parameterized Constructor is Called!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &other )
{
    std::cout << "Default Copy Constructor is Called!" << std::endl;
    (*this) = other;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default Destructor is Called!" << std::endl;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap &other )
{
    std::cout << "Default Copy Assignement Operator is Called!" << std::endl;
    if (this != &other)
    {
        name = other.name;
        hit_points = other.hit_points;
        energy_points = other.energy_points;
        attack_damage = other.attack_damage;
    }
    return (*this);
}

int        ClapTrap::checkIfAble( std::string opr )
{
    if (hit_points == 0 || energy_points == 0)
    {
        std::cout << "ClapTrap " << name << " can't ";
        std::cout << opr << " --no energy/hit points" << std::endl;
        return (0);
    }
    return (1);
}

void        ClapTrap::attack(const std::string& target)
{
    if (checkIfAble("attack"))
    {
        std::cout << "ClapTrap " << name << " attacks ";
        std::cout <<  target << ", causing " << 10; 
        std::cout << " points of damage!" << std::endl;
        energy_points--;
    }
}

void        ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " took ";
    std::cout << amount << " points of damage!" << std::endl;
    attack_damage += amount;
}

void           ClapTrap::beRepaired(unsigned int amount)
{
    if (checkIfAble("repair"))
    {
        std::cout << "ClapTrap " << name << " repaired himself and got ";
        std::cout << amount << " hits points back!" << std::endl;
        energy_points--;
        hit_points += amount;
    }
}

std::string    ClapTrap::getName( void ) const
{
    return (name);
}

