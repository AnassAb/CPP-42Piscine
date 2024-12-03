/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 21:39:36 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/03 13:43:03 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::~Cat( void )
{
    std::cout << "Cat: Default Destructor" << std::endl;
}

Cat::Cat( void ) : Animal("Cat")
{
    std::cout << "Cat: Default Constructor" << std::endl;
}

Cat::Cat( std::string ptype ) : Animal(ptype)
{
    std::cout << "Cat: Parameterized Constructor" << std::endl;
}

Cat::Cat( const Cat& other ) : type(other.type)
{
    std::cout << "Cat: Copy Constructor" << std::endl;
}

Cat&  Cat::operator=( const Cat& other )
{
    std::cout << "Cat: Assignement Operator" << std::endl;
    if (this != &other)
        type = other.type;
    return (*this);
}

void    Cat::makeSound( void ) const
{
    std::cout << "Meow Meow..." << std::endl;
}
