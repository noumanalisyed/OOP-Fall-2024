//
// Created by Syed Nouman Ali Shah on 25/10/2024.
//

#include "Time.h"

Time::Time(){
        setTime(0,0,0);
}
Time::Time(int h,int m,int s){
        setTime(h,m,s);
}
void Time::setTime(int h,int m,int s){
        setHour(h);
        setMin(m);
        setSec(s);
}
void Time::setHour(int h){
        hour = (h >= 0 && h < 24) ? h : 0;
}
void Time::setMin(int m){
        min = (m >= 0 && m < 60) ? m : 0;
}
void Time::setSec(int s){
        sec = (s >= 0 && s < 60) ? s : 0;
}
int Time::getHour(){
        return hour;
}
int Time::getMin(){
        return min;
}
int Time::getSec(){
        return sec;
}
void Time::printStandard(){
    cout<<((hour < 10 ) || (hour - 12 > 0) ? "0" : "")<<((hour > 12 ) ? hour - 12 : hour)
        <<" : "<<((min < 10) ? "0" : "")<<min<<" : "
        <<((sec < 10) ? "0" : "")<<sec
        << ((hour >= 12 ) ? " PM " : " AM ")<<endl;
}
void Time::printUniversal(){
    cout<<((hour < 10) ? "0" : "")<<hour
        <<" : "<<((min < 10) ? "0" : "")<<min<<" : "
        <<((sec < 10) ? "0" : "")<<sec<<endl;
}
void Time::tick(){
    sec ++;
    if( sec > 59){
        sec = 0;
        min ++;
    }
    if(min > 59){
        min = 0;
        hour ++;
    }
    if(hour > 23){
        hour = 0;
    }
}
