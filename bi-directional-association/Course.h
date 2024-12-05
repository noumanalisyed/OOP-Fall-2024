//
// Created by Syed Nouman Ali Shah on 03/12/2024.
//

#ifndef BI_DIRECTIONAL_ASSOCIATION_COURSE_H
#define BI_DIRECTIONAL_ASSOCIATION_COURSE_H

#include <iostream>
#include "Student.h"
class Student;
class Course {
private:
    std::string name;
    std::vector<Student*> students;

public:
    Course(const std::string& name) ;

    void addStudent(Student* student);
    void displayStudents() const;

    std::string getName() const ;
};



#endif //BI_DIRECTIONAL_ASSOCIATION_COURSE_H
