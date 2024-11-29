/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:30:44 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/28 22:15:09 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>
//(x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0
float triangle_area(Point a, Point b, Point c)
{
    return ((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float t_area = triangle_area(a, b, c);
    float area_1 = triangle_area(point, b, c);
    float area_2 = triangle_area(a, point, c);
    float area_3 = triangle_area(a, b, point);
    float total = area_1 + area_2 + area_3;

    if (total > t_area && total - t_area < 0.0000001f)
        return (1);
    if (total < t_area && t_area - total < 0.0000001f)
        return (1);
    return (0);
}
