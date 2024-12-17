//
// Created by Syed Nouman Ali Shah on 16/12/2024.
//

#include "Point.h"

Point::Point(int xAxis, int yAxis) {
    setX(xAxis);
    setY(yAxis);
    std::cout << "Point -- Overloaded Constructor called " << std::endl;
}

void Point::print() {
    std::cout << "Center [ " << x << " , " << y << " ] ";
}

int Point::getX() {
    return x;
}

void Point::setX(int xAxis) {
    x = (xAxis >= 0) ? xAxis : 0;
}

int Point::getY() {
    return y;
}

void Point::setY(int yAxis) {
    y = (yAxis >= 0) ? yAxis : 0;
}

