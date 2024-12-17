#include <iostream>
using namespace std;

class Rational{
public:
    Rational(std::string n){
        name = n;
        numerator  = 0;
        denominator = 1;
        cout<<name<<" = Rational -- default constructor called "<<endl;

    }
    Rational(std::string n,int numerator,int denominator){
        name = n;
        Rational::numerator  = numerator;
        Rational::denominator = denominator;
        cout<<name<<"= Rational -- Overloaded constructor called "<<endl;
        simplyfy();
    }
    void display(){
        std::cout<<name<<" = [ "<<numerator<<"/"<<denominator<<" ] ";
    }
    Rational add(Rational rational){
        int lcm = this->denominator * rational.denominator;
        int c1 = (this->numerator * lcm) / this->denominator;
        int c2 = (rational.numerator * lcm) / rational.denominator;
        return Rational("r3",c1+c2,lcm);
    }
    int getNumerator() const {
        return numerator;
    }

    void setNumerator(int numerator) {
        Rational::numerator = numerator;
    }

    int getDenominator() const {
        return denominator;
    }

    void setDenominator(int denominator) {
        Rational::denominator = denominator;
    }

    ~Rational(){
        cout<<name<<" = Rational -- destructor called "<<endl;
    }
private:
    std::string name;
    int numerator ;
    int denominator ;

    void simplyfy(){
        int min = (numerator < denominator ) ? numerator : denominator;
        int divisor = 2;
        while (divisor <= min){
            if((numerator % divisor == 0) && (denominator % divisor == 0)){
                numerator /= divisor;
                denominator /= divisor;
            }
            else{
                divisor++;
            }
        }
    }
};

int main() {
    {
        Rational r1("r1",2,4);
        Rational r2("r2",6, 9);
        r1.display();
        std::cout<<" + ";
        r2.display();
        Rational r3 = r1.add(r2);
        std::cout<<" = ";
        r3.display();
        std::cout<<std::endl;
    }
    return 0;
}
