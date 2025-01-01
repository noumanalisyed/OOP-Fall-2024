//
// Created by Syed Nouman Ali Shah on 26/12/2024.
//

#ifndef DYNAMIC_INDING_RECTANGLE_H
#define DYNAMIC_INDING_RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle() = default;

    Rectangle(int x, int y, float length, float width) ;

    string toString();
    double perimeter() ;

    virtual void draw() ;

    virtual double area() ;

private:
    float length{0.0f};
    float width{0.0f};
};



#endif //DYNAMIC_INDING_RECTANGLE_H
