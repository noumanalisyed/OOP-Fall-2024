#include <iostream>

using namespace std;

template<class T>
class Complex {
    friend ostream & operator <<(ostream & out,Complex<T> &c){
        out << "[ " << c.realPart << " + " << c.imgPart << " i ]  ";
        return out;
    }
public:
    Complex() : realPart(0), imgPart(0) {

    }

    Complex(T r, T i) : realPart(r), imgPart(i) {

    }
    Complex<T> add(Complex<T> c){
        T r = this->realPart + c.realPart;
        T i = this->imgPart + c.imgPart;
        return Complex<T>(r,i);
    }
    Complex<T> operator +(Complex<T> c){
        T r = this->realPart + c.realPart;
        T i = this->imgPart + c.imgPart;
        return Complex<T>(r,i);
    }
    void print() {
        cout << "[ " << realPart << " + " << imgPart << " i ]  ";
    }

private:
    T realPart;
    T imgPart;
};

int main() {
    Complex<float> c1(4.4, 5.3);
    Complex<float> c2(7.5, 9.1);
    //c1.print(); //--> cout<<c1;
    cout<<c1;
    //c2.print();
    cout<<c2;
    Complex<float> c3 = c1 + c2;
    //c3.print();
    cout<<c3;
    return 0;
}