#include <iostream>
using namespace std;

class Time{
public:
    Time(){
        setTime(0,0,0);
    }
    Time(int h,int m,int s){
        setTime(h,m,s);
    }
    void setTime(int h,int m,int s){
        setHour(h);
        setMin(m);
        setSec(s);
    }
    void setHour(int h){
        hour = (h >= 0 && h < 24) ? h : 0;
    }
    void setMin(int m){
        min = (m >= 0 && m < 60) ? m : 0;
    }
    void setSec(int s){
        sec = (s >= 0 && s < 60) ? s : 0;
    }
    int getHour(){
        return hour;
    }
    int getMin(){
        return min;
    }
    int getSec(){
        return sec;
    }
    void printStandard(){
        cout<<((hour < 10 ) || (hour - 12 > 0) ? "0" : "")<<((hour > 12 ) ? hour - 12 : hour)
        <<" : "<<((min < 10) ? "0" : "")<<min<<" : "
        <<((sec < 10) ? "0" : "")<<sec
        << ((hour >= 12 ) ? " PM " : " AM ")<<endl;
    }
    void printUniversal(){
        cout<<((hour < 10) ? "0" : "")<<hour
        <<" : "<<((min < 10) ? "0" : "")<<min<<" : "
        <<((sec < 10) ? "0" : "")<<sec<<endl;
    }
    void tick(){
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

private:

    int hour,min,sec;
};
int main() {
    int hour = 11, min = 59, sec = 55;
    Time t1(hour, min, sec);
    for (int i = 0; i < 6; ++i) {
        t1.printStandard();
        t1.tick();
    }
    return 0;
}
