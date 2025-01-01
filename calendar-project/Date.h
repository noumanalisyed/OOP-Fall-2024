//
// Created by Syed Nouman Ali Shah on 28/11/2023.
//

#ifndef CALENDAR_PROJECT_DATE_H
#define CALENDAR_PROJECT_DATE_H

#include "Time.h"

class Date {
public:
    Date();
    Date(int day,int month,int year) ;


    int getDay() ;

    int getMonth() ;

    int getYear();

    void setMonth(int month);

    void setDay(int day);

    void setYear(int year);

    void print();

    int getDaysPerMonth(int month);
    int checkDay( int testDay );
    int getSlotSize();
    int getTimeStep();

    Time **getTimeSlots() const;

    void setTimeSlots(Time **timeSlots);

    void setSlotSize(int slotSize);

    void setTimeStep(int timeStep);

    static const int getMonthsPerYear();

    static int *getDaysPerMonth1();

    static string *getMonths();

    const Time &getStartingTime() const;

    void setStartingTime(const Time &startingTime);

    const Time &getChangedTime() const;

    void setChangedTime(const Time &changedTime);
    static int getMaxHoursDaily();
    static int getMaxMinutesInHour();
private:
    Time **timeSlots;
    int slotSize;
    int timeStep;
    static const int monthsPerYear = 12;
    int day{1},month{1},year{1900};
    static int daysPerMonth[] ;
    static std::string months[monthsPerYear + 1];
    Time startingTime;
    Time changedTime;
    void init();
    static int maxHoursDaily;
    static int maxMinutesInHour;
};

#endif //CALENDAR_PROJECT_DATE_H
