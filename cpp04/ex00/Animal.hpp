/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:27:16 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/03 13:42:26 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        virtual ~Animal( void );
        Animal( void );
        Animal( std::string ptype );
        Animal( const Animal& other );

        Animal&         operator=( const Animal& other );
        std::string     getType( void ) const;
        virtual void    makeSound( void ) const;
};

#endif
