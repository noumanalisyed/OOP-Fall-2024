#include <iostream>

class Complex{
    friend void operator <<(std::ostream & out, Complex &c);
    public:
    Complex() = default;
    Complex(int real,int img):real(real),img(img){
       // std::cout<<"Complex -- Overloaded constructor called"<<std::endl;
    }
    void display(){
        std::cout<<"[ "<<real<<" + "<<img<<" i ] ";
    }
    Complex add(Complex c){
        int real = this->real + c.real;
        int img = this->img + c.img;
        return Complex(real,img);
    }
    Complex operator +(Complex c){
        int real = this->real + c.real;
        int img = this->img + c.img;
        return Complex(real,img);
    }

private:
    int real{0},img{0};
};

void operator <<(std::ostream & out, Complex &c){
    out<<"[ "<<c.real<<" + "<<c.img<<" i ] ";
}
int main() {
    Complex c1(4,5);
    Complex c2(7,9);
    //c1.display();
    std::cout<<c1;
    std::cout<<" + ";
    //c2.display();
    std::cout<<c2;
    std::cout<<" = ";
    Complex c3 = c1 + c2;
    //c3.display();
    std::cout<<c3;
    return 0;
}
