/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:39:58 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/03 13:16:49 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ) : hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap Default Constructor" << std::endl;
}

ClapTrap::ClapTrap( std::string pname ) : name(pname), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap Parameterized Constructor" << std::endl;
}

ClapTrap::ClapTrap( std::string pname, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage ) :
    name(pname), hit_points(hitPoints), energy_points(energyPoints), attack_damage(attackDamage)
{
    std::cout << "ClapTrap Enhanced Parameterized Constructor" << std::endl;
}


ClapTrap::ClapTrap( const ClapTrap &other ) : 
    name(other.name),
    hit_points(other.hit_points),
    energy_points(other.energy_points),
    attack_damage(other.attack_damage)
{
    std::cout << "ClapTrap Copy Constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Default Destructor" << std::endl;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap &other )
{
    std::cout << "ClapTrap Assignment Operator" << std::endl;
    if (this != &other)
    {
        name = other.name;
        hit_points = other.hit_points;
        energy_points = other.energy_points;
        attack_damage = other.attack_damage;
    }
    return (*this);
}

int        ClapTrap::checkIfAble( std::string opr ) const
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
        std::cout <<  target << ", causing " << attack_damage; 
        std::cout << " points of damage!" << std::endl;
        energy_points--;
    }
}

void        ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > hit_points)
        hit_points = 0;
    else
        hit_points -= amount;
    std::cout << "ClapTrap " << name << " took ";
    std::cout << amount << " points of damage!" << std::endl;
    hit_points -= attack_damage * amount;
}

void           ClapTrap::beRepaired(unsigned int amount)
{
    if (checkIfAble("repair"))
    {
        std::cout << "Trap " << name << " repaired himself and got ";
        std::cout << amount << " hits points back!" << std::endl;
        energy_points--;
        hit_points += amount;
    }
}

std::string    ClapTrap::getName( void ) const
{
    return (name);
}
