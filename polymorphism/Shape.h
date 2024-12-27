//
// Created by Syed Nouman Ali Shah on 26/12/2024.
//

#ifndef DYNAMIC_INDING_SHAPE_H
#define DYNAMIC_INDING_SHAPE_H
#include "Point.h"

class Shape {
public:
    Shape() = default;

    Shape(int x, int y) ;

    string toString();

    virtual void draw() = 0; // pure virtual function

    virtual double area() = 0; // pure virtual function

private:
    Point center;
};


#endif //DYNAMIC_INDING_SHAPE_H
