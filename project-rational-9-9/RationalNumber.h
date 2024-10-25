//
// Created by Syed Nouman Ali Shah on 25/10/2024.
//

#ifndef OOP_FALL_2024_COMPLEXNUMER_H
#define OOP_FALL_2024_COMPLEXNUMER_H

#include <iostream>
using namespace std;

class RationalNumber{
public:
    RationalNumber();
    RationalNumber(int n,int d);
    void print();
    int getNumerator();
    void setNumerator(int n);
    int getDenominator();
    void setDenominator(int d);
    ~RationalNumber();

    RationalNumber add(RationalNumber r);
    RationalNumber sub(RationalNumber r);
    RationalNumber mul(RationalNumber r);
    RationalNumber div(RationalNumber r);
private:
    int numerator;
    int denominator;

    void simplify();
};


#endif //OOP_FALL_2024_COMPLEXNUMER_H
