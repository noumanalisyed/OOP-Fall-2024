#include<iostream>
using namespace std;

class Rectangle {
private:
    double length, width;

public:
    Rectangle() : length(1.0), width(1.0) {}

    Rectangle(double l, double w) {
        setDimensions(l, w);
    }

    void setDimensions(double l, double w) {
        if (l >= 1 && l <= 20 && w >= 1 && w <= 15) {
            length = l;
            width = w;
        } else {
            cout << "Invalid dimensions!" << endl;
        }
    }

    double getArea() {
        return length * width;
    }

    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(10, 5);

    r1.setDimensions(12, 6);
    cout << "Area of r1: " << r1.getArea() << endl;
    cout << "Area of r2: " << r2.getArea() << endl;

    return 0;
}

