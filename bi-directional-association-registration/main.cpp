
#include "Student.h"
#include "Course.h"
#include "Registration.h"

// Driver program
int main() {
    // Creating courses
    Course math(101, "Mathematics", "MTH101");
    Course physics(102, "Physics", "PHY102");
    Course compSci(103, "Computer Science", "CSC103");

    // Creating students
    Student alice(1, "Alice", "2000-01-01");
    Student bob(2, "Bob", "1999-05-15");
    Student charlie(3, "Charlie", "2001-07-20");

    // Creating registrations
    //Registration reg1(1, "2024-01-10", "Spring", &math, &alice);
    //Registration reg2(2, "2024-01-11", "Spring", &physics, &bob);
    //Registration reg3(3, "2024-01-12", "Spring", &compSci, &charlie);

    // Establishing bi-directional associations
    /*math.addRegistration(&reg1);
    physics.addRegistration(&reg2);
    compSci.addRegistration(&reg3);

    alice.addRegistration(&reg1);
    bob.addRegistration(&reg2);
    charlie.addRegistration(&reg3);
*/
    // Displaying registrations for a specific course
    math.displayRegistrations();
    physics.displayRegistrations();

    // Displaying registrations for a specific student
    alice.displayRegistrations();
    bob.displayRegistrations();

    return 0;
}