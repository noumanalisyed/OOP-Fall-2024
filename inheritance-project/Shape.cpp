//
// Created by Syed Nouman Ali Shah on 16/12/2024.
//

#include "Shape.h"

Shape::Shape() : center(0, 0) {
    //center.x = 10;
    std::cout << "Shape -- Default Constructor called " << std::endl;
}

Shape::Shape(int x, int y) : center(x, y) {
    std::cout << "Shape -- Overloaded Constructor called " << std::endl;
}

void Shape::draw() {
    std::cout << "Shape [ ";
    center.print();
    std::cout << " ] " << std::endl;
}

double Shape::area() {
    return 0;
}
