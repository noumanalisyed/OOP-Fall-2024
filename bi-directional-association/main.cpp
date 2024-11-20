#include <iostream>
#include <string>
#include <vector>

class Student; // Forward declaration

class Course {
private:
    std::string name;
    std::vector<Student*> students;

public:
    Course(const std::string& name) : name(name) {}

    void addStudent(Student* student);
    void displayStudents() const;

    std::string getName() const {
        return name;
    }
};

class Student {
private:
    std::string name;
    std::vector<Course*> courses;

public:
    Student(const std::string& name) : name(name) {}

    void enroll(Course* course) {
        courses.push_back(course);
        course->addStudent(this); // Bidirectional association
    }

    void displayCourses() const {
        std::cout << name << " is enrolled in:\n";
        for (const auto& course : courses) {
            std::cout << " - " << course->getName() << "\n";
        }
    }

    std::string getName() const {
        return name;
    }
};

void Course::addStudent(Student* student) {
    students.push_back(student);
}

void Course::displayStudents() const {
    std::cout << "Students enrolled in " << name << ":\n";
    for (const auto& student : students) {
        std::cout << " - " << student->getName() << "\n";
    }
}

int main() {
    Student alice("Alice");
    Student bob("Bob");

    Course math("Mathematics");
    Course physics("Physics");

    alice.enroll(&math);
    bob.enroll(&math);
    alice.enroll(&physics);

    math.displayStudents();
    physics.displayStudents();

    alice.displayCourses();
    bob.displayCourses();

    return 0;
}
