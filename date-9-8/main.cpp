#include <iostream>
using namespace std;

class Date{
public:
    Date(){
        day = 1;
        month = 1;
        year = 1900;
    }
    Date(int d,int m,int y){
        year = y;
        month = (m >= 1 && m <= 12) ? m : 1;
        day = checkDay(d);
    }
    void setDay(int d){
        day = d;
    }
    int getDay(){
        return day;
    }
    void setMonth(int m){
        month = m;
    }
    int getMonth(){
        return month;
    }
    void setYear(int y){
        year = y;
    }
    int getYear(){
        return year;
    }
    void print(){
        cout<<day<<" / "<<month<<" / "<<year<<endl;
    }
    int nextDay(){
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
private:
    int day;
    int month;
    int year;
    int daysInMonth [13] = {
            0, 31,28,31,30,
            31,30,31,31,30,
            31,30,31
    };

    int checkDay(int d){
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


};
int main() {
    Date d1;
   // d1.print();
    Date d2(27,2,2004);
    d2.print();

    for(int i = 0; i < 10; i++){
        d2.nextDay();
        d2.print();
    }
    return 0;
}
