//
// Created by Syed Nouman Ali Shah on 28/11/2023.
//

#ifndef CALENDAR_PROJECT_TIME_H
#define CALENDAR_PROJECT_TIME_H
#include <iostream>
using namespace std;

class Time{
    friend void displayTime(Time &t);
    friend void operator << (ostream &stream,Time &t);
private:
    int hour {0};
    int min {0};
    int sec {0};
    bool dayChanged {false};
public:
    Time() = default;
    Time(int hour,int min,int sec);
    void setTime(int hour,int min,int sec);
    void setHour(int hour);
    void setMin(int min);
    void setSec(int sec);
    int getHour();
    int getMin();
    int getSec();
    void printMilitaryTime();
    void printStandard();
    void print();
    Time add(Time t);
    Time operator +(Time t);
    Time operator +(int m);
    void checkMinute(int s);
};






#endif //CALENDAR_PROJECT_TIME_H
