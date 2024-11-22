/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:18:09 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/22 03:37:43 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"
#include <string>

class HumanB
{
    private:
        std::string name;
        Weapon      *weapon;
    public:
        HumanB();
        HumanB(std::string uname);
        ~HumanB();

        void    attack( void );
        void    setWeapon(Weapon &uweapon);
};

#endif
