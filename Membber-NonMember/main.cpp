#include <iostream>

class Time{
   friend void setHour(Time &t,int h);
public:
    Time(){

    }
    Time(int h,int m,int s):hour(h),min(m),sec(s){

    }
    void display(){ // Member function
        std::cout<<hour<<":"<<min<<":"<<sec<<std::endl;
    }
    int p {10};
private:
    int hour {0},min {0},sec {0};
};
void setHour(Time &t,int h){ // friend function
    t.hour = h;
}
int main(){ // Non-Member
    Time t;
    t.display();
    //std::cout<<t.p<<std::endl;
    setHour(t,10);
    t.display();
    return 0;
}