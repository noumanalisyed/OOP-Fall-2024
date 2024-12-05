//
// Created by Syed Nouman Ali Shah on 05/12/2024.
//
#include "Student.h"
#include "Registration.h" // Include here for full access to Registration
#include <iostream>

Student::Student(int id, const std::string &name, const std::string &dob)
        : studentId(id), name(name), dateOfBirth(dob) {}

int Student::getStudentId() const { return studentId; }
std::string Student::getName() const { return name; }
std::string Student::getDateOfBirth() const { return dateOfBirth; }
void Student::addRegistration(Registration *reg) { registrations.push_back(reg); }
void Student::displayStudent() const {
    std::cout << "Student ID: " << studentId
              << ", Name: " << name
              << ", DOB: " << dateOfBirth << std::endl;
}
void Student::displayRegistrations() const {
    std::cout << "Registrations for Student " << name << ":" << std::endl;
    for (const auto &reg : registrations) {
        reg->printRegistration();
        std::cout << "---------------------------" << std::endl;
    }
}

void Student::registerCourse(Course * c, int regId, std::string regDate,std::string semester){
    Registration * r = new Registration(regId,regDate,semester,c,this);
    addRegistration(r);
    r->addCourse(*c);
    r->addStudent(*this);
}