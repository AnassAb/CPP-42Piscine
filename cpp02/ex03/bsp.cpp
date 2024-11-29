/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:30:44 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/29 01:47:10 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
// #include <cmath>

float ft_abs(float x) {
    if (x < 0)
        return -x;
    return x;
}

float triangle_area(Point a, Point b, Point c)
{
    float area = (a.getX() * (b.getY() - c.getY()) + 
                 b.getX() * (c.getY() - a.getY()) + 
                 c.getX() * (a.getY() - b.getY())) / 2.0;
    return ft_abs(area);  // Return absolute value of area
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float t_area = triangle_area(a, b, c);
    float area_1 = triangle_area(point, b, c);
    float area_2 = triangle_area(a, point, c);
    float area_3 = triangle_area(a, b, point);
    
    // Check if point is on any vertex
    if ((point.getX() == a.getX() && point.getY() == a.getY()) ||
        (point.getX() == b.getX() && point.getY() == b.getY()) ||
        (point.getX() == c.getX() && point.getY() == c.getY()))
        return false;
    
    // Sum of sub-areas should equal the total area
    float total = area_1 + area_2 + area_3;
    
    // Use a small epsilon for floating point comparison
    const float EPSILON = 0.0001f;
    return ft_abs(total - t_area) < EPSILON && area_1 > 0 && area_2 > 0 && area_3 > 0;
}
