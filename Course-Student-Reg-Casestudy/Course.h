//
// Created by Syed Nouman Ali Shah on 05/12/2024.
//

#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>

// Forward declaration
class Registration;

class Course {
private:
    int courseId;
    std::string courseName;
    std::string courseCode;
    std::vector<Registration *> registrations;

public:
    Course(int id, const std::string &name, const std::string &code);
    int getCourseId() const;
    std::string getCourseName() const;
    std::string getCourseCode() const;
    void addRegistration(Registration *reg);
    void displayCourse() const;
    void displayRegistrations() const;
};

#endif
