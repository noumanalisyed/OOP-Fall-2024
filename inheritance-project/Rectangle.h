//
// Created by Syed Nouman Ali Shah on 16/12/2024.
//

#ifndef INHERITANCE_PROJECT_RECTANGLE_H
#define INHERITANCE_PROJECT_RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle() = default;

    Rectangle(int x, int y, double length, double width);

    double perimeter();

    double area();

    void draw();

private:
    double length{0.0f};
    double width{0.0f};
};


#endif //INHERITANCE_PROJECT_RECTANGLE_H
