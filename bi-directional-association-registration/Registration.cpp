//
// Created by Syed Nouman Ali Shah on 04/12/2024.
//

#include "Registration.h"
Registration::Registration(int regId, const std::string& regDate, const std::string& sem, Course* c, Student* s)
        : registrationId(regId), registrationDate(regDate), semester(sem), course(c), student(s) {}

int Registration::getRegistrationId() const {
    return registrationId;
}
std::string Registration::getRegistrationDate() const {
    return registrationDate;
}
std::string Registration::getSemester() const {
    return semester;
}

void Registration::displayRegistration() const {
    std::cout << "Registration ID: " << registrationId
              << ", Date: " << registrationDate
              << ", Semester: " << semester << std::endl;
    if (course) {
        std::cout << "Course Info: ";
        course->displayCourse();
    }
    if (student) {
        std::cout << "Student Info: ";
        student->displayStudent();
    }
}