#include <iostream>

class Box {
public:
    double length, width;

    // Constructor
    Box(double length, double width) {  // Use `double` for accurate data type matching
        this->length = length;  // Corrected initialization with `this->`
        this->width = width;
    }

    double area() {  // Fixed return type to double
        return length * width;
    }

    void printBox() {  // Missing function definition
        std::cout << "Box dimensions: " << length << " x " << width << std::endl;
    }
};

int main() {
    Box b1(10.4, 20.8);
    std::cout << "Area of Box: " << b1.area() << std::endl;
    b1.printBox();  // Added to call the function
    return 0;
}
