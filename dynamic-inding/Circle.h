//
// Created by Syed Nouman Ali Shah on 26/12/2024.
//

#ifndef DYNAMIC_INDING_CIRCLE_H
#define DYNAMIC_INDING_CIRCLE_H


class Circle : public Shape {
public:
    Circle() = default;

    Circle(int x, int y, float radius);

    virtual void draw() ;

    virtual double area() ;

    double circumference() ;

    string toString();

private:
    float radius{0};
    const float PI{3.14598};
};



#endif //DYNAMIC_INDING_CIRCLE_H
