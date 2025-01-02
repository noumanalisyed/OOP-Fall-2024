#include <iostream>
using namespace std;

/*int add(int x,int y);
float add(float x,float y);
float add(int x,float y);*/

template <class T,class P>
T addition(T x, P y){
    return x + y;
}
int main() {
    long a  = 4, b = 3, c = 0;
    float d = 0;
    float x  = 4.7, y = 3.9, z = 0;
    d = addition(x,b);
    cout<<x<<" + "<<b<<" = "<<d<<endl;
    z = addition(x,y);
    cout<<x<<" + "<<y<<" = "<<z<<endl;

    return 0;
}
/*
int add(int x,int y){
    cout<<"Integer addition called "<<endl;
    return x + y;
}
float add(float x,float y){
    cout<<"Float addition called "<<endl;
    return x + y;
}
float add(int x,float y){
    return (float) x + y;
}*/
