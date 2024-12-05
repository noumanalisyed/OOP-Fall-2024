#include <iostream>
using namespace std;

class Complex{
public:
        Complex(string n){
            name = n;
            realPart =0;
            imgPart = 0;
            cout<<name<<" = Complex -- Default constructor called "<<endl;
        }
        Complex(string n,double r,double i){
            name = n;
            realPart =r;
            imgPart = i;
            cout<<name<<" = Complex -- Overloaded constructor called "<<endl;
        }
        void print(){
            cout<<name<<" = [ "<<realPart<<" + "<<imgPart<<" i ]"<<endl;
        }
        void setComplex(double r,double i){
            realPart = r;
            imgPart = i;
        }
        void setRealPart(double  r){
            realPart = r;
        }
        void setImgPart(double  i){
            imgPart = i;
        }
        int getRealPart(){
            return realPart;
        }
        int getImgPart(){
            return imgPart;
        }
        Complex add(Complex c){
            int r = this->realPart + c.realPart;
            int i = this->imgPart + c.imgPart;
            return Complex("c3",r,i);
        }
private:
    double realPart;
    double imgPart;
    string name;
};

int main()
{
    Complex c1("c1");
    Complex c2("c2",4,5);
    cout<<"Size of C1 = "<< sizeof(c1)<<" bytes"<<endl;
    cout<<"Size of C2 = "<< sizeof(c2)<<" bytes"<<endl;
    c1.print();
    c2.print();
    c1.setComplex(6,7);
    c1.print();
    Complex c3 = c1.add(c2);
    c3.print();
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.