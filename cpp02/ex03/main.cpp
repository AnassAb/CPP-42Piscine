/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:37:02 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/29 02:28:11 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

void test_case(const char* description, Point a, Point b, Point c, Point point) {
    std::cout << description << ": ";
    if (bsp(a, b, c, point))
        std::cout << "Point is INSIDE the triangle" << std::endl;
    else
        std::cout << "Point is OUTSIDE the triangle" << std::endl;
}

int main() {
    // Create a triangle with vertices at (0,0), (4,0), and (2,4)
    Point a(0, 0);
    Point b(4, 0);
    Point c(2, 4);

    std::cout << "Testing BSP (Binary Space Partitioning) function\n" << std::endl;

    // Test 1: Point clearly inside the triangle
    test_case("Test 1 - Point inside (2,2)", a, b, c, Point(2, 2));

    // Test 2: Point clearly outside the triangle
    test_case("Test 2 - Point outside (5,5)", a, b, c, Point(5, 5));

    // Test 3: Point on a vertex
    test_case("Test 3 - Point on vertex (0,0)", a, b, c, Point(0, 0));

    // Test 4: Point on an edge
    test_case("Test 4 - Point on edge (2,0)", a, b, c, Point(2, 0));

    // Test 5: Point very close to edge from inside
    test_case("Test 5 - Point very close to edge from inside (2, 0.001)", a, b, c, Point(2, 0.001));

    // Test 6: Point very close to edge from outside
    test_case("Test 6 - Point very close to edge from outside (2, -0.001)", a, b, c, Point(2, -0.001));

    // Test 7: Triangle with negative coordinates
    Point neg_a(-2, -2);
    Point neg_b(2, -2);
    Point neg_c(0, 2);
    test_case("Test 7 - Point inside triangle with negative coords (0,0)", neg_a, neg_b, neg_c, Point(0, 0));
    test_case("Test 8 - Point outside triangle with negative coords (-3,-3)", neg_a, neg_b, neg_c, Point(-3, -3));

    // Test 9: Very thin triangle
    Point thin_a(0, 0);
    Point thin_b(0.1, 10);
    Point thin_c(0, 10);
    test_case("Test 9 - Point inside thin triangle (0.05, 5)", thin_a, thin_b, thin_c, Point(0.05, 5));
    test_case("Test 10 - Point outside thin triangle (0.2, 5)", thin_a, thin_b, thin_c, Point(0.2, 5));

    // Test 11: Points very close to vertices
    test_case("Test 11 - Point near vertex (0.001, 0.001)", a, b, c, Point(0.001, 0.001));
    test_case("Test 12 - Point near vertex but outside (4.001, 0.001)", a, b, c, Point(4.001, 0.001));

    // Test 13: Right-angled triangle
    Point right_a(0, 0);
    Point right_b(3, 0);
    Point right_c(0, 3);
    test_case("Test 13 - Point inside right triangle (1, 1)", right_a, right_b, right_c, Point(1, 1));
    test_case("Test 14 - Point outside right triangle (2, 2)", right_a, right_b, right_c, Point(2, 2));

    // Test 15: Almost degenerate triangle (very small area)
    Point deg_a(1, 1);
    Point deg_b(1.001, 1);
    Point deg_c(1, 1.001);
    test_case("Test 15 - Point inside tiny triangle (1.0005, 1.0005)", deg_a, deg_b, deg_c, Point(1.0005, 1.0005));
    test_case("Test 16 - Point outside tiny triangle (1.002, 1.002)", deg_a, deg_b, deg_c, Point(1.002, 1.002));

    return 0;
}
