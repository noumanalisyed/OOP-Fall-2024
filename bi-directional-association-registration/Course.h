//
// Created by Syed Nouman Ali Shah on 03/12/2024.
//
#ifndef BI_DIRECTIONAL_ASSOCIATION_COURSE_H
#define BI_DIRECTIONAL_ASSOCIATION_COURSE_H
#include <iostream>
#include "Registration.h"
class Course {
private:
    int courseId;
    std::string courseName;
    std::string courseCode;
    std::vector<Registration *> registrations;
public:
    Course(int id, const std::string& name, const std::string& code);
    int getCourseId() const ;
    std::string getCourseName() const ;
    std::string getCourseCode() const ;
    void addRegistration(Registration* reg) ;
    void displayCourse() const ;
    void displayRegistrations() const;
};
#endif //BI_DIRECTIONAL_ASSOCIATION_COURSE_H
