#include<iostream>

class Circle {
public:  // Corrected from "public;"
    double radius;

    Circle(int radius) {
        this->radius = radius;  // Use `this->` to distinguish member variables
    }

    double area() {
        return 3.14159 * radius * radius;  // Missing semicolon added
    }
};

int main() {
    Circle c(5);
    Circle* cPtr = &c;  // Corrected pointer syntax
    std::cout << "Area of circle: " << cPtr->area() << std::endl;  // Added missing semicolon
    return 0;
}

