/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 08:29:48 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/24 11:47:57 by aabidar          ###   ########.fr       */
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
        Fixed& operator=( const Fixed& f );
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

#endif
