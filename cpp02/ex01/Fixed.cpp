/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 08:29:44 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/27 09:36:04 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : n(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& f )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed::Fixed( const int i ) : n(roundf((float)i * (float)(1 << Fixed::f_bits)))
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float f ) : n(roundf((float)f * (float)(1 << Fixed::f_bits)))
{
   std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& f )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &f)
        return (*this);
    this->n = f.n;
    return (*this);
}

std::ostream& operator<< (std::ostream &os, const Fixed &f)
{
    os << f.toFloat();
    return (os);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (n);
}

void Fixed::setRawBits( int const raw )
{
    n = raw;
}

float Fixed::toFloat( void ) const
{
    return ((float) Fixed::n / (float)(1 << Fixed::f_bits));
}

int Fixed::toInt( void ) const
{
    return (n >> f_bits);
}

