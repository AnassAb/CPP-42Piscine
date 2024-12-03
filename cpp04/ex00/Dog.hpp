/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:34:09 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/03 13:47:29 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include <string>

class Dog : public Animal
{
    protected:
        std::string type;
    public:
        virtual ~Dog( void );
        Dog( void );
        Dog( std::string ptype );
        Dog( const Dog& other );

        Dog&            operator=( const Dog& other );
        virtual void            makeSound( void ) const;
};

#endif
