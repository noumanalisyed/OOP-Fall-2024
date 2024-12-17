//
// Created by Syed Nouman Ali Shah on 16/12/2024.
//

#include "Circle.h"


Circle::Circle() : Shape(0, 0) {
    std::cout << "Circle -- Default Constructor called " << std::endl;
}

Circle::Circle(float radius, int x, int y) : Shape(x, y),radius(radius) {
    //Circle::radius = radius;
    center.print();
    std::cout << "Circle -- Overloaded Constructor called " << std::endl;
}

float Circle::area() {
    return PI * radius * radius;
}

float Circle::circumference() {
    return 2 * PI * radius;
}

void Circle::draw() {
    Shape::draw();
    std::cout << " Circle [ radius = " << radius
              << ", area = " << area()
              << ", circumference = " << circumference()
              << " ] " << std::endl;
}
