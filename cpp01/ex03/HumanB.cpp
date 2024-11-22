/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:17:03 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/22 03:37:50 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB() {}

HumanB::~HumanB() {}

HumanB::HumanB(std::string uname)
{
    HumanB::name = uname;
}

void    HumanB::attack( void )
{
    std::cout << HumanB::name << " attacks with their "; 
    std::cout << HumanB::weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &uweapon)
{
    HumanB::weapon = &uweapon;
}
