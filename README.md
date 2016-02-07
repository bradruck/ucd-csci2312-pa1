## CSCI 2312: Programming Assignment 1

_working with objects_

* * *

C++ lets us program with _objects_. We describe objects in C++ by declaring and defining _classes_. We _declare_ our class's structure in a header file, just like in C, and _define_ it (that is, write the code that actually does the work) in a corresponding source code file.

Here is a sample header file <tt>Point.h</tt> that describes an object that represents a point in three-dimensional Euclidean space:

```c++
// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double x, y, z;

public:
    // Constructors
    Point();                                // default constructor
    Point(double x, double y, double z);    // three-argument constructor

    // Destructor
    ~Point();

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;
    double distanceTo(const Point &, const Point &) const;
};
```

We can _instantiate_, or create an instance of, our class anywhere in the rest of our code by calling any of the constructors we have defined:

```
Point myPoint;                          // Calls Point::Point().
Point(double x, double y, double z);    // Calls three-argument constructor Point::Point(double, double, double).
```

There is a _constant_ member function to <tt>Point</tt> called <tt>distanceTo</tt>. This function calculate the distance between two points in a three-dimensional space.


There is a source file <tt>area.cpp</tt> and implement the following function:

   ```c++
   double computeArea(const Point &a, const Point &b, const Point &c);
   ```
This funcion uses Heron's Formula to calculate the triangular area defined by the three points and returns it as a double-precision floating point number.

This program was written, compiled and run on CLion, you can just go to Run-->Build. The project already supplies a CMakeLists.txt file, which is read by the cross-platform build tool [CMake](https://cmake.org/). CLion uses CMake to create a makefile for your architecture. CMake uses the directives in the CMakeLists.txt and works with the specific build tool for your platform to create the makefile.

   ```
cmake_minimum_required(VERSION 3.3)
project(ucd_csci2312_pa1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        main.cpp
        area.cpp
        Point.cpp
        Point.h
        PointTests.h
        PointTests.cpp
        ErrorContext.cpp
        ErrorContext.h)

add_executable(ucd_csci2312_pa1 ${SOURCE_FILES})
```

This program is based on a test suite. The test suite is written not against the original assignment but against the finished program. The test suite is in <tt>PointTests.h</tt> and <tt>PointTests.cpp</tt>. <tt>main.cpp</tt> runs the tests.
 
