//
// Created by Bradley Ruck on 2/3/16.
//

#include <cmath>

#include "Point.h"
#include "ErrorContext.h"
#include "PointTests.h"

double computeArea(const Point & p1, const Point & p2, const Point & p3) {
    Point p;
    double a, b, c;
    double area;

    // Here we calculate the three line lengths defined by the three points, i.e. the three sides of the triangle
    a = p.distanceTo(p1, p2);

    b = p.distanceTo(p1, p3);

    c = p.distanceTo(p2, p3);

    // This calculates the area of the triangle defined by the three sides
    area = 0.25 * sqrt((4 * pow(a, 2.0) * pow(b, 2.0)) - pow((pow(a, 2.0) + pow(b, 2.0) - pow(c, 2.0)), 2.0));

    return area;
};

