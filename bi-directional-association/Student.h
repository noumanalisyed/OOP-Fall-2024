//
// Created by Syed Nouman Ali Shah on 03/12/2024.
//

#ifndef BI_DIRECTIONAL_ASSOCIATION_STUDENT_H
#define BI_DIRECTIONAL_ASSOCIATION_STUDENT_H

#include <iostream>
#include "Course.h"
#include <vector>
class Student {
private:
    std::string name;
    std::vector<Course*> courses;

public:
    Student(const std::string& name);

    void enroll(Course* course) ;

    void displayCourses() const ;

    std::string getName() const ;
};


#endif //BI_DIRECTIONAL_ASSOCIATION_STUDENT_H
