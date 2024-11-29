/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 08:29:44 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/29 02:56:08 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : n(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& f )
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed::Fixed( const int i ) : n(roundf((float)i * (float)(1 << Fixed::f_bits)))
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float f ) : n(roundf((float)f * (float)(1 << Fixed::f_bits)))
{
//    std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& f )
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this == &f)
        return (*this);
    this->n = f.n;
    return (*this);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<< (std::ostream &os, const Fixed &f)
{
    os << f.toFloat();
    return (os);
}


int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
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

bool Fixed::operator>( const Fixed& other ) const
{
    return (getRawBits() > other.getRawBits());
}

bool Fixed::operator>=( const Fixed& other ) const
{
    return (getRawBits() >= other.getRawBits());
}

bool Fixed::operator<( const Fixed& other ) const
{
    return (getRawBits() < other.getRawBits());
}

bool Fixed::operator<=( const Fixed& other ) const
{   
    return (getRawBits() <= other.getRawBits());
}

bool Fixed::operator==( const Fixed& other ) const
{
    return (getRawBits() == other.getRawBits());
}

bool Fixed::operator!=( const Fixed& other ) const
{
    return (getRawBits() != other.getRawBits());
}

Fixed Fixed::operator+( const Fixed& other )
{
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed Fixed::operator-( const Fixed& other )
{
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed Fixed::operator*( const Fixed& other )
{
   return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/( const Fixed& other )
{
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++( void )
{
    setRawBits(getRawBits() + 1);
    return (*this);
}

Fixed Fixed::operator++( int )
{
    Fixed temp = *this;
    ++(*this);
    return (temp);
}

Fixed& Fixed::operator--( void )
{
    setRawBits(getRawBits() - 1);
    return (*this);
}

Fixed Fixed::operator--( int )
{
    Fixed temp = *this;
    --(*this);
    return (temp);
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
    if (f1 < f2)
        return (f1);
    return (f2);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
    if (f1 < f2)
        return (f1);
    return (f2);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}
