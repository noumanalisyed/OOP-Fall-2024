//
// Created by Syed Nouman Ali Shah on 28/11/2023.
//

#include "Date.h"
int Date::daysPerMonth[monthsPerYear + 1] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
std::string Date::months[] = {"January","Feburary","March","April","May","June","July","August","September","October","November","December"};
int Date::maxHoursDaily = 24;
int Date::maxMinutesInHour = 60;

Date::Date(){
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);
    day = tm.tm_mday;
    month = tm.tm_mon;
    year += tm.tm_year;
    setTimeStep(30);
    setSlotSize(((getMaxHoursDaily() * getMaxMinutesInHour())/ getTimeStep()));
    timeSlots = new Time * [slotSize];
    changedTime.setMin(timeStep);
    init();
    /* timeObject.setHour(tm.tm_hour);
     timeObject.setMin(tm.tm_min);
     timeObject.setSec(tm.tm_sec);*/
}
int Date::getMaxHoursDaily(){
    return maxHoursDaily;
}
int Date::getMaxMinutesInHour(){
    return maxMinutesInHour;
}
Time **Date::getTimeSlots() const {
    return timeSlots;
}

void Date::setTimeSlots(Time **timeSlots) {
    Date::timeSlots = timeSlots;
}

void Date::setSlotSize(int slotSize) {
    Date::slotSize = slotSize;
}

void Date::setTimeStep(int timeStep) {
    Date::timeStep = timeStep;
}

const int Date::getMonthsPerYear() {
    return monthsPerYear;
}

int *Date::getDaysPerMonth1() {
    return daysPerMonth;
}

string *Date::getMonths() {
    return months;
}

const Time &Date::getStartingTime() const {
    return startingTime;
}

void Date::setStartingTime(const Time &startingTime) {
    Date::startingTime = startingTime;
}

const Time &Date::getChangedTime() const {
    return changedTime;
}

void Date::setChangedTime(const Time &changedTime) {
    Date::changedTime = changedTime;
}

void Date::init(){
    for(int i = 0; i < slotSize; i++){
        timeSlots[i] = new Time(startingTime.getHour(),startingTime.getMin(),startingTime.getSec());
        startingTime = startingTime + changedTime;
        timeSlots[i]->printStandard();
    }
}
int Date::getSlotSize(){
    return slotSize;
}
int Date::getTimeStep(){
    return timeStep;
}
Date::Date(int day,int month,int year) {
    if ( month > 0 && month <= monthsPerYear ) // validate the month
        Date::month = month;
    else
        throw std::invalid_argument( "month must be 1-12" );

    Date::year = year; // could validate yr
    Date::day = checkDay( day ); // validate the day

    // output Date object to show when its constructor is called
    std::cout << "Date object constructor for date ";
    print();
    setTimeStep(30);
    setSlotSize(((getMaxHoursDaily() * getMaxMinutesInHour())/ getTimeStep()));
    timeSlots = new Time * [slotSize];
    changedTime.setMin(timeStep);
    init();
    std::cout << std::endl;

}

int Date::getDay() {
    return day;
}

int Date::getMonth() {
    return month;
}

void Date::print(){
    std::cout<<day<<"/"<<month<<"/"<<year<<"  --  "<<endl;

}

int Date::getYear(){
    return year;
}

void Date::setMonth(int month){
    Date::month = month;
}

void Date::setDay(int day){
    Date::day = day;
}

void Date::setYear(int year){
    Date::year = year;
}

int Date::checkDay(int testDay)
{
    //static const int daysPerMonth[ monthsPerYear + 1 ] =
       //     { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // determine whether testDay is valid for specified month
    if ( testDay > 0 && testDay <= daysPerMonth[ month ] )
        return testDay;

    // February 29 check for leap year
    if ( month == 2 && testDay == 29 && ( year % 400 == 0 ||
                                          ( year % 4 == 0 && year % 100 != 0 ) ) )
        return testDay;

    throw std::invalid_argument( "Invalid day for current month and year" );
} // end function checkDay

int Date::getDaysPerMonth(int month){
    return daysPerMonth[month];
}