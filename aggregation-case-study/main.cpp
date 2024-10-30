#include <iostream>
using namespace std;

class Point {
public:
    Point(){
        setX(0);
        setY(0);
        cout<<"Point -- Default Constrcutor called "<<endl;
    }
    Point(float x,float y){
        setX(x);
        setY(y);
        cout<<"Point -- Overloaded Constrcutor called "<<endl;
    }
    void setX(float a){
        Point::x = (a >= 0) ? a : 0;
    }
    void setY(float b){
        Point::y = (b >= 0 ) ? b : 0;
    }
    float getX(){
        return x;
    }
    float getY(){
        return y;
    }
    void print(){
        cout<<"Point : [ "<<x<<" , "<<y<<" ] ";
    }
private:
    float x,y;
};

class Circle{
public:
    Circle():center(){
        radius = 0;
        cout<<"Circle -- Default Constrcutor called "<<endl;
    }
    Circle(float x,float y,float radius):center(x,y){
        Circle::radius = radius;
        cout<<"Circle -- Default Constrcutor called "<<endl;
    }
    void print(){
        center.print();
        cout<<"Radius :  [ "<<radius<<" ] ";
        cout<<"Area :  [ "<<area()<<" ] ";
        cout<<"CircumFerence :  [ "<<circumference()<<" ] ";
    }
    float area(){
        return float(22/7) * radius * radius;
    }
    float circumference(){
        return 2 * float(22/7) * radius;
    }
private:
    float radius;
    Point center;
};
int main() {
    Circle c(10,20,5.9);
    c.print();
    //cout<<p.getX()<<" , "<<p.getY()<<endl;
    return 0;
}
