#include <iostream>

class Time {
    friend void setTime(Time &t,int hour,int min, int sec);
    friend void display(Time &t);
public: // Access Modifier
    Time() = default;
    Time(int hour,int min, int sec){
        Time::hour = (hour >= 0 && hour < 24) ? hour : 12;
        Time::min = (min >= 0 && min < 60) ? min : 0;
        Time::sec = (sec >= 0 && sec < 60) ? sec : 12;
    }

private: // Access Modifier
    int hour{12},min{0},sec{0};
};
//friend function
void setTime(Time &t,int hour,int min, int sec){
    t.hour = (hour >= 0 && hour < 24) ? hour : 12;
    t.min = (min >= 0 && min < 60) ? min : 0;
    t.sec = (sec >= 0 && sec < 60) ? sec : 12;
}
void display(Time &t){
    std::cout<<t.hour<<":"<<t.min<<":"<<t.sec<<std::endl;
}

int main() { // Non-Member
    Time t;
    //t.hour = 10;
    display(t);
    setTime(t,12,34,56);
    display(t);
    return 0;
}
