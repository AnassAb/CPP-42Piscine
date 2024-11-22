/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:17:08 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/22 00:30:17 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::~Weapon() {}

Weapon::Weapon(std::string utype)
{
    Weapon::type = utype;
}

const std::string&  Weapon::getType()
{
    return (Weapon::type);
}

void                Weapon::setType(std::string utype)
{
    Weapon::type = utype;
}

