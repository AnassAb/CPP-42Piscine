/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 21:45:36 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/03 13:43:08 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::~Dog( void )
{
    std::cout << "Dog: Default Destructor" << std::endl;
}

Dog::Dog( void ) : Animal("Dog")
{
    std::cout << "Dog: Default Constructor" << std::endl;
}

Dog::Dog( std::string ptype ) : Animal(ptype)
{
    std::cout << "Dog: Parameterized Constructor" << std::endl;
}

Dog::Dog( const Dog& other ) : type(other.type)
{
    std::cout << "Dog: Copy Constructor" << std::endl;
}

Dog&  Dog::operator=( const Dog& other )
{
    std::cout << "Dog: Assignement Operator" << std::endl;
    if (this != &other)
        type = other.type;
    return (*this);
}

void    Dog::makeSound( void ) const
{
    std::cout << "Woof Woof..." << std::endl;
}
