//
// Created by Syed Nouman Ali Shah on 28/11/2023.
//

#include "Calendar.h"



Calendar::Calendar(){
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);
    currentYear = 1900 + tm.tm_year;
    dateObject.setDay( tm.tm_mday);
    dateObject.setMonth(tm.tm_mon);
    dateObject.setYear(currentYear);
    timeObject.setHour(tm.tm_hour);
    timeObject.setMin(tm.tm_min);
    timeObject.setSec(tm.tm_sec);
    noOfDays = 366;
    init();

}
Calendar::Calendar(Date date,Time time):dateObject(date),timeObject(time){
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);
    currentYear = 1900 + tm.tm_year;
    noOfDays = 366;
    init();
}
Calendar::Calendar(int day,int month,int year,int hour,int min,int sec):dateObject(day,month,year),timeObject(hour,min,sec){
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);
    noOfDays = 366;
    currentYear = 1900 + tm.tm_year;
    init();
}

Calendar::Calendar(const Calendar& other) {
    // Copy the necessary data members, if any
    // This is an example; modify as needed
    this->dateObject = other.dateObject;
    this->timeObject = other.timeObject;
    this->dates = other.dates;
    this->noOfDays = other.noOfDays;
    this->currentYear = other.currentYear;
}

// Define the assignment operator (optional)
Calendar& Calendar::operator=(const Calendar& other) {
    /*if (this != &other) {
        // Copy the necessary data members, if any
        // This is an example; modify as needed
    }
    return *this;*/
}

void Calendar::print(){
    cout<<"Current Year "<<currentYear<<" , No of Days in Year = "<<noOfDays-1<<" Default Slot size in minutes = "<<dateObject.getTimeStep()<<endl;
    dateObject.print();
    cout<<"    ";
    //timeObject.print();
    cout<<endl;
   /* for(int i=1; i <= noOfDays; i++){
        dates[i]->print();
    }*/
}
void Calendar::init(){
    int daysPerMonth[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    std::string months[] = {"January","Feburary","March","April","May","June","July","August","September","October","November","December"};
    int day [] = {0,1,2,3,4,5,6,7,8,9,
                   10,11,12,13,14,15,16,17,18,19,20,
                   21,22,23,24,25,26,27,28,29,30,31};

    dates  = new  Date*[noOfDays];
    for (int i = 1; i <= 12; ++i) {
        int days = daysPerMonth[i];
        for(int j = 1; j <= days; j++){
            dates[i] = new Date(day[j], i, 2023);
        }
    }
}