
#include "Circle.h"
#include "Rectangle.h"

int main() {
    Shape shape(4, 5);
    shape.draw();
    Circle circle(3.4, 10, 20);

    circle.draw();
    std::cout << "Hello ";
    //circle.radius = 3.0;
    Rectangle rectangle(40, 40, 8.9, 5.6);
    std::cout << "Area of Rectangle = " << rectangle.area() << std::endl;
    std::cout << "Perimeter of Rectangle = " << rectangle.perimeter() << std::endl;
    rectangle.draw();

    return 0;
}

