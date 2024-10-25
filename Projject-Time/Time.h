//
// Created by Syed Nouman Ali Shah on 25/10/2024.
//
#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

class Time{
public:
    Time();
    Time(int h,int m,int s);
    void setTime(int h,int m,int s);
    void setHour(int h);
    void setMin(int m);
    void setSec(int s);
    int getHour();
    int getMin();
    int getSec();
    void printStandard();
    void printUniversal();
    void tick();

private:
    int hour,min,sec;
};


#endif //OOP_FALL_2024_TIME_H
