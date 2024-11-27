#include<iostream>

class Point {
public:
    int x, y;

    Point() {  // Constructor moved to public
        x = 0;
        y = 0;
    }

    Point(int px, int py) {
        x = px;  // Fixed assignment
        y = py;
    }

    void display() {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p1;
    Point p2(10, 20);
    p1.display();  // Corrected object access
    p2.display();
    return 0;
}

