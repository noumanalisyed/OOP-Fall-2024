//
// Created by Syed Nouman Ali Shah on 02/02/2024.
//

#include "event.h"

Event::Event():eventDate(),eventStartTime(),eventEndTime(){
    name = "default";
    noOfSlots = 0;;
    vtrCalendar = NULL;
}
Event::Event(std::string name,Date eventDate,Time eventStartTime,Time eventEndTime){

}
void Event::print(){
    std::cout<<"Name :"<<name<<"\nSlots : "<<noOfSlots<<"\nDate : ";
    eventDate.print();
    std::cout<<"\nStart Time :";
    eventStartTime.print();
    std::cout<<"\nEnd Time :";
    eventEndTime.print();
}