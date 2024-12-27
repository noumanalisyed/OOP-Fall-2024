//
// Created by Syed Nouman Ali Shah on 26/12/2024.
//
#include "Rectangle.h"

Rectangle::Rectangle(int x, int y, float length, float width)
: Shape(x, y) {
    Rectangle::length = (length >= 0 && length <= 20) ? length : 0;
    Rectangle::width = (width >= 0 && width <= 20) ? width : 0;
}

void Rectangle::draw() {
    cout << toString();
}

double Rectangle::area() {
    return length * width;
}

double Rectangle::perimeter() {
    return 2 * (length + width);
}

string Rectangle::toString(){
    ostringstream output;
    output << fixed << setprecision(2);
    output << Shape::toString();
    output<<" length = "<<length
          <<", width = "<<width
          <<" , Perimeter  = "<<perimeter()
          <<", area = "<<area();
    return output.str();
}
