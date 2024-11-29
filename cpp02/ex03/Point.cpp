/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:21:15 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/28 22:12:44 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point( void ) : x(0), y(0)
{
}

Point::Point( const float a, const float b ): x(a), y(b)
{
}

Point::Point( const Point& p )
{
    *this = p;
}

Point::~Point( void )
{
}

Point&  Point::operator=( const Point& p )
{
    ( void ) p;
    return (*this);
}

float   Point::getX() const
{
    return (x.toFloat());
}

float   Point::getY() const
{
    return (y.toFloat());
}
