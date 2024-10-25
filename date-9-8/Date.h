//
// Created by Syed Nouman Ali Shah on 25/10/2024.
//

#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date{
public:
    Date();
    Date(int d,int m,int y);
    void setDay(int d);
    int getDay();
    void setMonth(int m);
    int getMonth();
    void setYear(int y);
    int getYear();
    void print();
    int nextDay();
private:
    int day;
    int month;
    int year;
    int daysInMonth [13] = {
            0, 31,28,31,30,
            31,30,31,31,30,
            31,30,31
    };

    int checkDay(int d);
};


#endif //DATE
