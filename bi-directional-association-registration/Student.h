//
// Created by Syed Nouman Ali Shah on 03/12/2024.
//
#ifndef BI_DIRECTIONAL_ASSOCIATION_STUDENT_H
#define BI_DIRECTIONAL_ASSOCIATION_STUDENT_H
#include <iostream>
#include "Registration.h"
#include <vector>
class Student {
private:
    int studentId;
    std::string name;
    std::string dateOfBirth;
    std::vector<Registration*> registrations;
public:
    Student(int id, const std::string& name, const std::string& dob);
    int getStudentId() const;
    std::string getName() const ;
    std::string getDateOfBirth() const ;
    void addRegistration(Registration* reg) ;
    void displayStudent() const ;
    void displayRegistrations() const ;
};
#endif //BI_DIRECTIONAL_ASSOCIATION_STUDENT_H
