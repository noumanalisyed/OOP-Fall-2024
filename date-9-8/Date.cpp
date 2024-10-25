//
// Created by Syed Nouman Ali Shah on 25/10/2024.
//

#include "Date.h"

Date::Date(){
    day = 1;
    month = 1;
    year = 1900;
}
Date::Date(int d,int m,int y){
    year = y;
    month = (m >= 1 && m <= 12) ? m : 1;
    day = checkDay(d);
}
void Date::setDay(int d){
    day = d;
}
int Date::getDay(){
    return day;
}
void Date::setMonth(int m){
    month = m;
}
int Date::getMonth(){
    return month;
}
void Date::setYear(int y){
    year = y;
}
int Date::getYear(){
    return year;
}
void Date::print(){
    cout<<day<<" / "<<month<<" / "<<year<<endl;
}
int Date::nextDay(){
    day++;
    if((month ==  2 && day == 29)
    && ((year % 4 == 0 && year % 100 != 0)
    || (year % 400 == 0))){
        cout<<"";
    }
    else if(day > daysInMonth[month]){
        day = 1;
        month++;
    }
    if(month > 12){
        month = 1;
        year ++;
    }
}

int Date::checkDay(int d){
    if((month == 2 && d == 29)
    && (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        return d;
    }
    if(d <= daysInMonth[month]){
        return d;
    }
    else{
        return 1;
    }
}

