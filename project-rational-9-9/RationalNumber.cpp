//
// Created by Syed Nouman Ali Shah on 25/10/2024.
//

#include "RationalNumber.h"

    RationalNumber::RationalNumber(){
        numerator = 0;
        denominator = 1;
        // cout<<"RationalNumer -- "<<" Default constructor called"<<endl;
    }
    RationalNumber::RationalNumber(int n,int d){
        numerator = n;
        setDenominator(d);
        simplify();
        //cout<<"RationalNumer --  Default constructor called"<<endl;
    }
    void RationalNumber::print(){
        cout<<numerator<<" / "<<denominator<<"   ";
    }
    int RationalNumber::getNumerator(){
        return numerator;
    }
    void RationalNumber::setNumerator(int n){
        numerator = n;
    }
    int RationalNumber::getDenominator(){
        return denominator;
    }
    void RationalNumber::setDenominator(int d){
        denominator = (d > 0 ) ? d : 1;
    }
    RationalNumber::~RationalNumber(){
        // cout<<"RationalNumer --  Default destructor called"<<endl;
    }

    RationalNumber RationalNumber::add(RationalNumber r){
        int lcm = this->denominator * r.denominator;
        int n1 = (this->numerator * lcm ) / this->denominator;
        int n2 = (r.numerator * lcm) / r.denominator;
        return RationalNumber (n1+n2 , lcm);
    }
    RationalNumber RationalNumber::sub(RationalNumber r){
        int lcm = this->denominator * r.denominator;
        int n1 = (this->numerator * lcm ) / this->denominator;
        int n2 = (r.numerator * lcm) / r.denominator;
        return RationalNumber (n1-n2 , lcm);
    }
    RationalNumber RationalNumber::mul(RationalNumber r){
        int n = this->numerator * r.numerator;
        int d = this->denominator * r.denominator;
        return RationalNumber (n , d);
    }
    RationalNumber RationalNumber::div(RationalNumber r){
        int n = this->numerator * r.denominator;
        int d = this->denominator * r.numerator;
        return RationalNumber (n , d);
    }

    void RationalNumber::simplify(){
        int min = (numerator < denominator ) ? numerator : denominator;
        int div = 2;
        while (div <= min){
            if(numerator % div == 0 && denominator % div == 0){
                numerator = numerator / div;
                denominator = denominator / div;
            }
            else{
                div ++;
            }
        }
    }