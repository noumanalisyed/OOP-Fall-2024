//
// Created by Syed Nouman Ali Shah on 16/12/2024.
//

#ifndef INHERITANCE_PROJECT_SHAPE_H
#define INHERITANCE_PROJECT_SHAPE_H

#include "Point.h"

class Shape {
public:
    Shape();

    Shape(int x, int y);

    void draw();

    double area();

protected:
    Point center;  // aggregation Strong
};


#endif //INHERITANCE_PROJECT_SHAPE_H
