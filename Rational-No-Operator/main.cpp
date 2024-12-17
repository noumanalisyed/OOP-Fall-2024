#include <iostream>

class Rational{
   friend std::ostream& operator <<(std::ostream & out, Rational &r);
public:
    Rational() = default;
    Rational(int numerator, int denominator):numerator(numerator),denominator(denominator){

    }
    /*void display(){
        std::cout<<numerator<<"/"<<denominator<<" ";
    }*/
    /*Rational add(Rational r){
        int lcm = denominator * r.denominator;
        int c1 = (lcm * numerator)/denominator;
        int c2 = (lcm * r.numerator)/r.denominator;
        return Rational(c1+c2,lcm);
    }*/
    Rational operator +(Rational r){
        int lcm = denominator * r.denominator;
        int c1 = (lcm * numerator)/denominator;
        int c2 = (lcm * r.numerator)/r.denominator;
        return Rational(c1+c2,lcm);
    }
private:
    int numerator {0};
    int denominator {1};
};

std::ostream& operator <<(std::ostream & out, Rational &r){
    out<<r.numerator<<"/"<<r.denominator<<" ";
    return out;
}

int main() {
    Rational r1(4,5);
    Rational r2(7,9);
    //r1.display();   // cout<<r1;
    std::cout<<r1;
    std::cout<<" + ";
    //r2.display();   // cout<<r2;
    std::cout<<r2;
    std::cout<<" = ";
   // Rational r3 = r1.add(r2); // r1 + r2;
    Rational r3 = r1 + r2; // r1 + r2;
    //r3.display();   // cout<<r3;
    std::cout<<r3;
    return 0;
}
