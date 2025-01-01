#include <iostream>
using namespace std;

class Asset{
public:
    int a;
    void print(){
        cout<<"a = "<<a<<endl;
        cout<<"I am in Asset Print()"<<endl;
    }
};
class Vehicle{
public:
    int a;
    void print(){
        cout<<"a = "<<a<<endl;
        cout<<"I am in Vehicle Print()"<<endl;
    }
};
class CompanyCar:public Asset,public Vehicle{
public:
    int x;
};

int main() {
    CompanyCar obj;
    obj.Asset::a = 10;
    obj.Asset::print();
    obj.Vehicle::a = 20;
    obj.Vehicle::print();
    return 0;
}
