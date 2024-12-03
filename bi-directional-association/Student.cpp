//
// Created by Syed Nouman Ali Shah on 03/12/2024.
//

#include "Student.h"

Student::Student(const std::string& name) : name(name) {}

void Student::enroll(Course* course) {
    courses.push_back(course);
    course->addStudent(this); // Bidirectional association
}

void Student::displayCourses() const {
    std::cout << name << " is enrolled in:\n";
    for (const auto& course : courses) {
        std::cout << " - " << course->getName() << "\n";
    }
}

std::string Student::getName() const {
    return name;
}