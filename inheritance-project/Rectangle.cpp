//
// Created by Syed Nouman Ali Shah on 16/12/2024.
//

#include "Rectangle.h"

Rectangle::Rectangle(int x, int y, double length, double width)
        : Shape(x, y), length(length), width(width) {
    std::cout << "Rectangle -- Overloaded constructor called " << std::endl;
}

double Rectangle::perimeter() {
    return 2 * (length + width);
}

double Rectangle::area() {
    return length * width;
}

void Rectangle::draw() {
    Shape::draw();
    std::cout << " Rectangle  [ length = " << length << " , width = " << width
              << ", area = " << area()
              << ", perimeter = " << perimeter()
              << " ] " << std::endl;
}