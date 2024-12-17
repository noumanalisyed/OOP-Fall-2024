//
// Created by Syed Nouman Ali Shah on 16/12/2024.
//

#ifndef INHERITANCE_PROJECT_POINT_H
#define INHERITANCE_PROJECT_POINT_H

#include <iostream>

class Point {
public:
    Point() = default;

    Point(int xAxis, int yAxis);

    void print();

    int getX();

    void setX(int xAxis);

    int getY();

    void setY(int yAxis);

private:
    int x{0}, y{0};
};


#endif //INHERITANCE_PROJECT_POINT_H
