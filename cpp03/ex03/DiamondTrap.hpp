/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 21:32:50 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/03 13:29:24 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap( void );
        ~DiamondTrap( void );
        DiamondTrap( std::string pname );
        DiamondTrap( const DiamondTrap& other);

        DiamondTrap&    operator=( const DiamondTrap& other );
        void            attack( const std::string& target );
        void            whoAmI( void );
};

#endif
