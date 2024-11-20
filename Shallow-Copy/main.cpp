#include <iostream>
using namespace std;

class Box{
private :
    int length;
    int width;
    int height;
    int * array;
    string name;

public:
    Box(string n){
        name = n;
        length = width = height =0;
        array = 0;
        cout<<"Box -- Default constructor called "<<endl;
    }
    Box(string name,int length,int width,int height){
        Box::name = name;
        Box::length = length;
        Box::width = width;
        Box::height = height;
        cout<<"Box -- Overloaded constructor called "<<endl;
        array = new int[10];
        init();
    }
    Box(string name,Box const &b){
        Box::name = name;
        Box::length = b.length;
        Box::width = b.width;
        Box::height = b.height;
        cout<<"Box -- Copy constructor called "<<endl;
        Box::array = b.array;  // shallow copy.
        /*Box::array = new int[10];
        for(int i =0; i < 10; i++){
            Box::array[i] = b.array[i];
        }*/
    }
    void init(){
        for (int i = 0; i < 10; ++i) {
            array[i] = 10 + i * 10;
        }
    }
    void displayArray(){
        for (int i = 0; i < 10; ++i) {
            cout<<array[i]<<"  ";
        }
        cout<<endl;
    }
    void display(){
        cout<<"Box Name = "<<name<<" -- ";
        cout<<"Box [ Length = "<<length
        <<" , Width = "<<width
        <<" , Height = "<<height<<"] "<<endl;
        if (array != 0) {
            cout<<"Address of str = "<<array<<endl;
            displayArray();
        }
    }

    void setLenght(int length){
        Box::length = (length >= 0) ? length : 0;
    }
    int getLength(){
        return length;
    }
    void setArrayElement(int data,int index){
        array[index] = data;
    }

};
int main() {
    Box b1("b1");
    Box b2("b2",10,20,30);
    b2.displayArray();
    Box b3("b3",b2);
    b3.displayArray();
    b3.setArrayElement(43,7);
    b2.displayArray();
    b3.displayArray();
    cout<<"B2 length =  "<<b2.getLength()<<endl;
    cout<<"B3 length =  "<<b3.getLength()<<endl;
    b3.setLenght(85);
    cout<<"B2 length =  "<<b2.getLength()<<endl;
    cout<<"B3 length =  "<<b3.getLength()<<endl;
    /*b1.display();
    b2.display();
    b3.display();
    b2.setLenght(12);
    b2.setArrayElement(83,5);
    b2.display();
    b3.display();*/
    return 0;
}
