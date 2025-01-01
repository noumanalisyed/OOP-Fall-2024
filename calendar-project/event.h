//
// Created by Syed Nouman Ali Shah on 02/02/2024.
//

#ifndef EVENT_H
#define EVENT_H
#include <string>
#include "Calendar.h"

class Event {

public:
    Event();
    Event(std::string name,Date eventDate,Time eventStartTime,Time eventEndTime);
    void print();
private:
    std::string name;
    int noOfSlots;
    Calendar *vtrCalendar;
    Date eventDate;
    Time eventStartTime;
    Time eventEndTime;
};
#endif //EVENT_H
