//
// Created by Syed Nouman Ali Shah on 26/12/2024.
//
#include "Circle.h"

using namespace std;
Circle::Circle(int x, int y, float radius) : Shape(x, y), radius(radius) {

}

void Circle::draw() {
    cout<<toString();
}

double Circle::area() {
    return PI * radius * radius;
}

double Circle::circumference() {
    return 2 * PI * radius;
}

string Circle:: toString(){
    ostringstream output;
    output << fixed << setprecision(2);
    output << Shape::toString();
    output<<" Radius = "<<radius
    <<" , Circumference = "<<circumference()
    <<", area = "<<area();
    return output.str();
}
