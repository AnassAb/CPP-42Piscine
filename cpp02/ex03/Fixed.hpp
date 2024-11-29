/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 08:29:48 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/29 02:49:01 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <ostream>

class Fixed
{
    private:
        int n;
        static const int f_bits = 8;
    public:
        Fixed();
        Fixed( const Fixed& f );
        Fixed( const int i );
        Fixed( const float f );
        ~Fixed();

        Fixed&  operator=( const Fixed& f );
        
        bool    operator<( const Fixed& other ) const;
        bool    operator>( const Fixed& other ) const;
        bool    operator>=( const Fixed& other ) const;
        bool    operator<=( const Fixed& other ) const;
        bool    operator==( const Fixed& other ) const;
        bool    operator!=( const Fixed& other ) const;

        Fixed   operator+( const Fixed& f );
        Fixed   operator-( const Fixed& f );
        Fixed   operator*( const Fixed& f );
        Fixed   operator/( const Fixed& f );

        Fixed&  operator++( void );
        Fixed&  operator--( void );
        Fixed   operator++( int );
        Fixed   operator--( int );
        
        static  Fixed&  min(Fixed& f1, Fixed& f2);
        static  const Fixed&  min(const Fixed& f1, const Fixed& f2);
        static  Fixed&  max(Fixed& f1, Fixed& f2);
        static  const Fixed&  max(const Fixed& f1, const Fixed& f2);

        int     getRawBits(void) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream& operator<< (std::ostream &os, const Fixed &f);

#endif
