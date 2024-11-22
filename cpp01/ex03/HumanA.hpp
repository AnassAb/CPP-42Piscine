/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:17:30 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/22 03:45:34 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include "Weapon.hpp"
#include <string>

class HumanA
{
    private:
        std::string name;
        Weapon      &weapon;
    public:
        HumanA(std::string uname, Weapon &uweapon);
        ~HumanA();

        void    attack( void );
};

#endif
