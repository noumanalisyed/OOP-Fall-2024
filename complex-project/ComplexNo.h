//
// Created by Syed Nouman Ali Shah on 25/10/2024.
//

//#ifndef OOP_FALL_2024_COMPLEXNO_H
//#define OOP_FALL_2024_COMPLEXNO_H
#ifndef COMPLEXNO_H
#define COMPLEXNO_H
#include <iostream>
using namespace std;

class ComplexNo{
public:
    ComplexNo();
    ComplexNo(double realPart, double imgPart);
    void display();
    double getRealPart() ;
    void setRealPart(double r);
    double getImgPart();
    void setImgPart(double i);
    ComplexNo add(ComplexNo c);
    ComplexNo sub(ComplexNo c);
private:
    double realPart, imgPart;
};


#endif //COMPLEXNO_H
