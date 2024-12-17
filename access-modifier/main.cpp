#include <iostream>

class Point{
public:
    Point() = default;
    Point(int xAxis,int yAxis){
        setX(xAxis);
        setY(yAxis);
        std::cout<<"Point -- Overloaded Constructor called "<<std::endl;
    }
    void print(){
        std::cout<<"Center [ "<<x<<" , "<<y<<" ] ";
    }
    int getX(){
        return x;
    }
    void setX(int xAxis){
        x = (xAxis >= 0) ? xAxis : 0;
    }
    int getY(){
        return y;
    }
    void setY(int yAxis){
        y = (yAxis >= 0) ? yAxis : 0;
    }
private:
    int x {0},y {0};
};

class Shape{
public:
    Shape():center(0,0){
        //center.x = 10;
        std::cout<<"Shape -- Default Constructor called "<<std::endl;
    }
    Shape(int x,int y):center(x,y){
        std::cout<<"Shape -- Overloaded Constructor called "<<std::endl;
    }
    void draw(){
        std::cout<<"Shape [ ";
        center.print();
        std::cout<<" ] "<<std::endl;
    }
    double area(){
        return 0;
    }

protected:
    Point center;
};

class Circle : public Shape{
public:
    Circle():Shape(0,0){
        std::cout<<"Circle -- Default Constructor called "<<std::endl;
    }
    Circle(float radius,int x,int y):Shape(x,y){
        Circle::radius = radius;
        center.print();
        std::cout<<"Circle -- Overloaded Constructor called "<<std::endl;
    }
    float area(){
        return PI * radius * radius;
    }
    float circumference(){
        return 2 * PI  * radius;
    }
    void draw(){
        Shape::draw();
        std::cout<<" Circle [ radius = "<<radius
            <<", area = "<<area()
            <<", circumference = "<<circumference()
            <<" ] "<<std::endl;
    }

private:
    float radius {0.0f};
    const double PI {3.14589};
};
int main() {
    Shape shape(4,5);
    shape.draw();
    Circle circle(3.4,10,20);

    circle.draw();
    //circle.radius = 3.0;
    return 0;
}
