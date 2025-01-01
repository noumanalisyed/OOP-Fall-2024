#include <iostream>
using namespace std;
template <class type1,class type2>
type1 addDifferentType(type1 num1,type2 num2){
    return num1 + num2;
}
template <class type>
type addSameType(type num1,type num2){
    return num1 + num2;
}
int main() {
    float x = 4.9, z;
    int y = 7;
    long value1 = 88, value2 = 12,value3;
    z = addDifferentType(x,y);
    cout<<x<<" + "<<y<<" = "<<z<<endl;
    value3 = addSameType(value1,value2);
    cout<<value1<<" + "<<value2<<" = "<<value3<<endl;

    return 0;
}
