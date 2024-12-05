//
// Created by Syed Nouman Ali Shah on 05/12/2024.
//
#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <string>
#include "Course.h"
#include "Student.h"

class Course;   // Forward declaration to avoid circular dependency
class Student;  // Forward declaration

class Registration {
private:
    int registrationId;
    std::string registrationDate;
    std::string semester;
    Course *course;   // Pointer to associated Course
    Student *student; // Pointer to associated Student

public:
    Registration(int regId, const std::string &regDate, const std::string &sem, Course *c, Student *s);
    int getRegistrationId() const;
    std::string getRegistrationDate() const;
    std::string getSemester() const;
    void printRegistration() const;
    void addStudent(Student s);
    void addCourse(Course c);
};

#endif
