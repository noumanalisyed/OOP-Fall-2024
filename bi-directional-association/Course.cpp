//
// Created by Syed Nouman Ali Shah on 03/12/2024.
//

#include "Course.h"


Course::Course(const std::string &name) : name(name) {

}

void Course::addStudent(Student *student) {
    students.push_back(student);
}

void Course::displayStudents() const {
    std::cout << "Students enrolled in " << name << ":\n";
    for (const auto &student: students) {
        std::cout << " - " << student->getName() << "\n";
    }
}

std::string Course::getName() const {
    return name;
}
