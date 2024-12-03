/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 21:33:20 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/03 13:42:40 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::~Animal( void )
{
    std::cout << "Animal: Default Destructor" << std::endl;
}

Animal::Animal( void )
{
    std::cout << "Animal: Default Constructor" << std::endl;
}

Animal::Animal( std::string ptype ) : type(ptype)
{
    std::cout << "Animal: Parameterized Constructor" << std::endl;
}

Animal::Animal( const Animal& other ) : type(other.type)
{
    std::cout << "Animal: Copy Constructor" << std::endl;
}

Animal&  Animal::operator=( const Animal& other )
{
    std::cout << "Animal: Assignement Operator" << std::endl;
    if (this != &other)
        type = other.type;
    return (*this);
}

std::string    Animal::getType( void ) const
{
    return (type);
}

void    Animal::makeSound( void ) const
{
    std::cout << "Some Animal Sound..." << std::endl;
}
