#include <iostream>
using namespace std;

class Complex{
public:
    Complex(){
        realPart = 0;
        imgPart = 0;
        cout<<"Complex -- default constructor called "<<endl;
    }
    Complex(double realPart, double imgPart){
        this->realPart = realPart;
        Complex::imgPart = imgPart;
        cout<<"Complex -- Overloaded constructor called "<<endl;
    }
    void display(){
        cout<<"[ "<<realPart<<" + "<<imgPart<<"i ]"<<endl;
    }

    double getRealPart() {
        return realPart;
    }

    void setRealPart(double r) {
        realPart = r;
    }

    double getImgPart() {
        return imgPart;
    }
    void setImgPart(double i) {
        imgPart = i;
    }
    Complex add(Complex c){
        double r = realPart + c.realPart;
        double i = imgPart + c.imgPart;
        return Complex(r,i);
    }
private:
    double realPart, imgPart;
};
int main() {
    Complex c1(7,8);
    Complex c2(4,5);
    c1.display();
    c2.display();
    Complex c3 = c1.add(c2);
    c3.display();
    return 0;
}
