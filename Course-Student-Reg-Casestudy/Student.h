//
// Created by Syed Nouman Ali Shah on 05/12/2024.
//

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include "Course.h"
// Forward declaration
class Registration;

class Student {
private:
    int studentId;
    std::string name;
    std::string dateOfBirth;
    std::vector<Registration *> registrations;

public:
    Student(int id, const std::string &name, const std::string &dob);
    int getStudentId() const;
    std::string getName() const;
    std::string getDateOfBirth() const;
    void addRegistration(Registration *reg);
    void displayStudent() const;
    void displayRegistrations() const;
    void registerCourse(Course * c, int regId, std::string regDate,std::string semester);
};

#endif
