//
// Created by Syed Nouman Ali Shah on 28/11/2023.
//

#ifndef CALENDAR_PROJECT_CALENDAR_H
#define CALENDAR_PROJECT_CALENDAR_H
#include "Time.h"
#include "Date.h"
#include <iomanip>
#include <ctime>

class Calendar {
public:
    static Calendar& getInstance() {
        static Calendar instance; // Guaranteed to be destroyed, instantiated on first use
        return instance;
    }
    void print();
    void init();

private:
    // Private copy constructor to prevent copying
    Calendar(const Calendar&);

    // Private assignment operator to prevent assignment
    Calendar& operator=(const Calendar&);
    Calendar();
    Calendar(Date d,Time t);
    Calendar(int day,int month,int year,int hour,int min,int sec);

    Date dateObject;
    Time timeObject;
    Date **dates ;
    int noOfDays;
    int currentYear;

};


#endif //CALENDAR_PROJECT_CALENDAR_H
