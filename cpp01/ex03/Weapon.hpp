/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:18:19 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/22 03:25:25 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string utype);
        ~Weapon();

        const std::string&  getType();
        void                setType(std::string utype);
};

#endif
