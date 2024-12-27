
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"


int main() {
    //Shape p;
    Shape *s[2];
    Circle circle(10, 20, 4.9);
    Rectangle rectangle(10, 40, 7.9, 5.6);
    s[0] = &circle;
    s[1] = &rectangle;

    for (int i = 0; i < 2; ++i) {
        s[i]->draw();
        cout << "Area = " << s[i]->area() << endl;
    }


    return 0;
}
