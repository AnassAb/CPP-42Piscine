/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:37:02 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/27 18:31:29 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{
    Fixed       a(1.2f);
    Fixed       d(1.2f);
    Fixed       b( Fixed( 5.05f ) / Fixed( 6 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a-- << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    std::cout << --b << std::endl;
    std::cout << b << std::endl;
    std::cout << b-- << std::endl;
    std::cout << b << std::endl;

    std::cout << "max(" << a << ", " << b << ") = " << Fixed::max( a, b ) << std::endl;
    std::cout << "min(" << a << ", " << b << ") = " << Fixed::min( a, b ) << std::endl;

    Fixed       c(a);
    std::cout << "a: "<< a.getRawBits() << std::endl;
    std::cout << "c: "<< c.getRawBits() << std::endl;
    std::cout << "a <= c: rawBits "<< (a.getRawBits() <= c.getRawBits()) << std::endl;
    std::cout << a  << " < " << c  << " : " << (a < c) << std::endl;
    std::cout << a  << " <= " << c  << " : " << (a <= c) << std::endl;
    std::cout << a  << " > " << c  << " : " << (a > c) << std::endl;
    std::cout << a  << " >= " << c  << " : " << (a >= c) << std::endl;
    std::cout << a  << " == " << c  << " : " << (a == c) << std::endl;
    std::cout << a  << " != " << c  << " : " << (a != c) << std::endl;

    std::cout << "a: "<< a.getRawBits() << std::endl;
    std::cout << "d: "<< d.getRawBits() << std::endl;
    std::cout << "a <= d: rawBits "<< (a.getRawBits() <= c.getRawBits()) << std::endl;
    std::cout << a  << " < " << d  << " : " << (a < d) << std::endl;
    std::cout << a  << " <= " << d  << " : " << (a <= d) << std::endl;
    std::cout << a  << " > " << d  << " : " << (a > d) << std::endl;
    std::cout << a  << " >= " << d  << " : " << (a >= d) << std::endl;
    std::cout << a  << " == " << d  << " : " << (a == d) << std::endl;
    std::cout << a  << " != " << d  << " : " << (a != d) << std::endl;
    
    return (0);
}
