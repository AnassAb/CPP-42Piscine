/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:21:30 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/28 22:12:11 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __POINT_HPP__
#define __POINT_HPP__

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point( void );
        Point( const float a, const float b );
        Point( const Point& p );
        ~Point( void );
        
        Point& operator=( const Point& p );

        float   getX() const;
        float   getY() const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
