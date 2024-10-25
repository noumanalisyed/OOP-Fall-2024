//
// Created by Syed Nouman Ali Shah on 25/10/2024.
//

    #include "ComplexNo.h"

    ComplexNo::ComplexNo(){
        realPart = 0;
        imgPart = 0;
        cout<<"Complex -- default constructor called "<<endl;
    }
    ComplexNo::ComplexNo(double realPart, double imgPart){
        ComplexNo::realPart = realPart;
        ComplexNo::imgPart = imgPart;
        cout<<"Complex -- Overloaded constructor called "<<endl;
    }
    void ComplexNo::display(){
        cout<<"[ "<<realPart<<" + "<<imgPart<<"i ]"<<endl;
    }

    double ComplexNo::getRealPart() {
        return realPart;
    }

    void ComplexNo::setRealPart(double r) {
        realPart = r;
    }

    double ComplexNo::getImgPart() {
        return imgPart;
    }
    void ComplexNo::setImgPart(double i) {
        imgPart = i;
    }
    ComplexNo ComplexNo::add(ComplexNo c){
        double r = realPart + c.realPart;
        double i = imgPart + c.imgPart;
        return ComplexNo(r,i);
    }
    ComplexNo ComplexNo::sub(ComplexNo c){
        double r = realPart - c.realPart;
        double i = imgPart - c.imgPart;
        return ComplexNo(r,i);
    }
