/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 08:29:48 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/24 11:23:52 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_HPP__
#define __FIXED_HPP__

class Fixed
{
    private:
        int n;
        static const int f_bits = 8;
    public:
        Fixed();
        Fixed( const Fixed& f );
        Fixed& operator=( const Fixed& f );
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits( int const raw );
};

#endif
