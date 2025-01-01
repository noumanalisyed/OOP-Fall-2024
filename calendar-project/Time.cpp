//
// Created by Syed Nouman Ali Shah on 28/11/2023.
//
#include "Time.h"
Time::Time(int hour,int min,int sec){
        setTime(hour,min,sec);
        dayChanged = false;
}
void Time::setTime(int hour,int min,int sec){
    dayChanged= false;
    setHour(hour);
    setMin(min);
    setSec(sec);

}
void Time::setHour(int hour){
    Time::hour = (hour >= 0 && hour < 24) ? hour : hour - 24;
    if(hour >= 24)
        dayChanged = true;
}
void Time::setMin(int min){
    Time::min = (min >= 0 && min < 60) ? min : min - 60;
    if(min >= 60)
        Time::hour++;
}
void Time::setSec(int sec){
    Time::sec = (sec >= 0 && sec <= 60) ? sec : sec - 60;
    if(sec >= 60)
        Time::min++;
}
void Time::checkMinute(int s){
    /*if(s >= 60){
        Time::min = Time::min + 1;
    }*/
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
void Time::printMilitaryTime(){
        std::cout<<((hour < 10) ? "0" : "" )
        <<hour<<":"<<((min < 10) ? "0" : "")<<min<<":"
        <<((sec < 10) ? "0" : "" )<<sec<<endl;
}
void Time::printStandard(){
        string AMPM = (hour < 12) ? " AM" : " PM";
        std::cout<<((hour < 10) ? "0" : "" )<<((hour > 12 ) ? hour % 12: hour)<<":"
        <<((min < 10) ? "0" : "")<<min<<":"
        <<((sec < 10) ? "0" : "" )<<sec<<AMPM
        <<" Day Changed : "<<dayChanged<<std::endl;
}
void Time::print(){
        std::cout<<hour<<":"<<min<<":"<<sec<<"   Day Changed : "<<dayChanged<<std::endl;;
}
/*Time Time::add(Time t){
        Time result;
        if(result.sec + this->sec + t.sec >= 60){
            result.sec = result.sec + this->sec + t.sec - 60;
            result.min++;
        }
        else{
            result.sec = result.sec + this->sec + t.sec;
        }
        if(result.min + this->min + t.min >= 60){
            result.min = result.min + this->min + t.min - 60;
            result.hour++;
        }
        else{
            result.min = result.min + this->min + t.min;
        }
        if(result.hour + this->hour + t.hour >= 24){
            result.hour = result.hour + this->hour + t.hour  - 24;
            dayChanged = true;
        }
        else{
            result.hour = result.hour + this->hour + t.hour;
        }
        return result;
}*/
Time Time::operator +(Time t){
        Time result;
        if(result.sec + this->sec + t.sec > 60){
            result.sec = result.sec + this->sec + t.sec - 60;
            result.min++;
        }
        else{
            result.sec = result.sec + this->sec + t.sec;
        }
        if(result.min + this->min + t.min > 60){
            result.min = result.min + this->min + t.min - 60;
            result.hour++;
        }
        else{
            result.min = result.min + this->min + t.min;
        }
        if(result.hour + this->hour + t.hour > 24){
            result.hour = result.hour + this->hour + t.hour  - 24;
            dayChanged = true;
        }
        else{
            result.hour = result.hour + this->hour + t.hour;
        }
        return result;
}
Time Time::operator +(int sec){
    Time result;
    int min = sec / 60;
    sec = sec % 60;
    
    if(result.sec + this->sec + sec > 60){
        result.sec = result.sec + this->sec + sec - 60;
        result.min++;
    }
    else{
        result.sec = result.sec + this->sec + 0;
    }
    if(result.min + this->min + min > 60){
        result.min = result.min + this->min + min - 60;
        result.hour++;
    }
    else{
        result.min = result.min + this->min + min;
    }
    if(result.hour + this->hour + 0 > 24){
        result.hour = result.hour + this->hour + 0  - 24;
    }
    else{
        result.hour = result.hour + this->hour + 0;
    }
    return result;
}

void operator << (ostream &stream,Time &t){
    stream<<t.hour<<":"<<t.min<<":"<<t.sec<<std::endl;
}
void displayTime(Time &t){
    std::cout<<t.hour<<":"<<t.min<<":"<<t.sec<<std::endl;
}