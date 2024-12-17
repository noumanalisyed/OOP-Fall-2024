//
// Created by Syed Nouman Ali Shah on 16/12/2024.
//

#ifndef INHERITANCE_PROJECT_CIRCLE_H
#define INHERITANCE_PROJECT_CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
public:
    Circle();

    Circle(float radius, int x, int y);

    float area();

    float circumference();

    void draw();

private:
    float radius{0.0f};
    const double PI{3.14589};
};


#endif //INHERITANCE_PROJECT_CIRCLE_H
