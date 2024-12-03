/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:32:11 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/03 13:47:22 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include <string>

class Cat : public Animal
{
    protected:
        std::string type;
    public:
        virtual ~Cat( void );
        Cat( void );
        Cat( std::string ptype );
        Cat( const Cat& other );

        Cat&            operator=( const Cat& other );
        virtual void            makeSound( void ) const;
};

#endif
