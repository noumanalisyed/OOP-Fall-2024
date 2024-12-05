//
// Created by Syed Nouman Ali Shah on 04/12/2024.
//

#ifndef BI_DIRECTIONAL_ASSOCIATION_REGISTRATION_H
#define BI_DIRECTIONAL_ASSOCIATION_REGISTRATION_H
#include <vector>
#include "Course.h"
#include "Student.h"
//class Course;
//class Student;
class Registration {
private:
    int registrationId;
    std::string registrationDate;
    std::string semester;
    Course* course;       // Pointer to associated Course
    Student* student;     // Pointer to associated Student

public:
    Registration(int regId, const std::string& regDate, const std::string& sem, Course* c, Student* s);
    int getRegistrationId() const ;
    std::string getRegistrationDate() const ;
    std::string getSemester() const ;
    void displayRegistration() const;
};


#endif //BI_DIRECTIONAL_ASSOCIATION_REGISTRATION_H
