//
// Created by Syed Nouman Ali Shah on 26/12/2024.
//

#include "Shape.h"

Shape::Shape(int x, int y) : center(x,y) {

}

string Shape::toString(){
    ostringstream output;
    output << fixed << setprecision(2);
    output << center.toString();
    return output.str();
}
