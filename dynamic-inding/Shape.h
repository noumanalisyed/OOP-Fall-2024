//
// Created by Syed Nouman Ali Shah on 26/12/2024.
//

#ifndef DYNAMIC_INDING_SHAPE_H
#define DYNAMIC_INDING_SHAPE_H


class Shape {
public:
    Shape() = default;

    Shape(int x, int y) ;

    virtual void draw() = 0;

    virtual double area() = 0;

    string toString();
private:
    Point center;
};


#endif //DYNAMIC_INDING_SHAPE_H
