//
// Created by Syed Nouman Ali Shah on 26/12/2024.
//

#include "Point.h"
Point::Point(int x,int y){
    setPoint(x,y);
}
void Point::setPoint(int x,int y){
    setX(x);
    setY(y);
}
void Point::setX(int x){
    Point::x = (x >= 0) ? x : 0;
}
int Point::getX(){
    return x;
}
void Point::setY(int y){
    Point::y = (y >= 0) ? y : 0;
}
int Point::getY(){
    return y;
}
string Point::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "Point [ x : " << x
           << " , y : " << y<<" ] ";
    return output.str();
}