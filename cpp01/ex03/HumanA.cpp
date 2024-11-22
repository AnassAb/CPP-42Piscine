/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:17:00 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/22 03:45:28 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::~HumanA () {}

HumanA::HumanA(std::string uname, Weapon &uweapon) : weapon(uweapon)
{
    HumanA::name = uname;
}

void    HumanA::attack( void )
{
    std::cout << HumanA::name << " attacks with their "; 
    std::cout << HumanA::weapon.getType() << std::endl;
}

