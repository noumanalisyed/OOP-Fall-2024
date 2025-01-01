#include <iostream>
using namespace std;

template <class T>
class RationalNumber{
public:
    RationalNumber(){
        RationalNumber<T>::numerator = 0;
        RationalNumber<T>::denominator = 0;
    }
    RationalNumber(T n,T d){
        RationalNumber<T>::numerator = n;
        RationalNumber<T>::denominator = (d > 0 )? d : 1;
    }
    void setNumerator(T n){
        RationalNumber<T>::numerator = n;
    }
    void setDenominator(T d){
        RationalNumber<T>::denominator = d;
    }
    T getNumerator(){
        return numerator;
    }
    T getDenominator(){
        return denominator;
    }
    void print(){
        cout<<numerator<<" / "<<denominator<<"  ";
    }
    RationalNumber<T> add (RationalNumber<T> r){
        T lcm = this-> denominator * r.denominator;
        T n1 = this-> numerator * lcm / this->denominator;
        T n2 = r.numerator * lcm / r.denominator;
        return RationalNumber<T>(n1+n2,lcm);
    }

private:
    T numerator;
    T denominator;

};
int main() {
    RationalNumber<int> r1 (4,5);
    RationalNumber<int> r2 (9,8);
    RationalNumber<double> r3 (9.8,4.5);
    r1.print();
    cout<<" + ";
    r2.print();
    RationalNumber<int> r4 = r1.add(r2);
    cout<<" = ";
    r4.print();
    return 0;
}
