#include <iostream>
using namespace std;

template <class T>
T add (T x, T y){
    return x + y;
}
template <class T,class P>
T add (T x, P y){
    return x + y;
}
int main() {
    int x = 7, y = 4;
    int c = 0;

    c = add(x,y);
    cout<<x<<" + "<<y<<" = "<<c<<endl;
    float  a = 7.5, b = 4.9;
    float d = 0;

    d = add(a,b);
    cout<<a<<" + "<<b<<" = "<<d<<endl;


    return 0;
}
