//
// Created by Syed Nouman Ali Shah on 26/12/2024.
//

#ifndef DYNAMIC_INDING_POINT_H
#define DYNAMIC_INDING_POINT_H
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

class Point {
public:
    Point() = default;

    Point(int x, int y);

    void setPoint(int x, int y);

    void setX(int x);

    int getX();

    void setY(int y);

    int getY();

    string toString() const;

private:
    int x{0};
    int y{0};
};


#endif //DYNAMIC_INDING_POINT_H
