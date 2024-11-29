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

Point::Point( const float a, const float b ) : x(a), y(b)
{
}

Point::Point( const Point& p ) : x(p.x), y(p.y)
{
}

Point::~Point( void )
{
}

Point&  Point::operator=( const Point& p )
{
    // Since x and y are const, we can't modify them
    // This is a limitation of the class design
    (void)p;
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
