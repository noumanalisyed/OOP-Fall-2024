
#include "Student.h"
#include "Course.h"
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
