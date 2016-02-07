//
// Created by Bradley Ruck on 2/3/16.
//

#include <cmath>
#include "Point.h"

Point::Point(){
    x = 0.;
    y = 0.;
    z = 0.;
}

Point::Point(double newX, double newY, double newZ){
    x = newX;
    y = newY;
    z = newZ;
}

Point::~Point() {

}

void Point::setX(double newX){
    x = newX;
}

void Point::setY(double newY){
    y = newY;
}

void Point::setZ(double newZ){
    z = newZ;
}

double Point::getX() const{
    return x;
}

double Point::getY() const{
    return y;
}

double Point::getZ() const{
    return z;
}

double Point::distanceTo(const Point & p1, const Point & p2) const{

    // Here we calculate the length of a line between two, 3-dimensional points
    double distance;
    distance = sqrt(pow((p1.getX() - p2.getX()), 2.0) + pow((p1.getY() - p2.getY()), 2.0) + pow((p1.getZ() - p2.getZ()), 2.0));
    return distance;
}

