#include <iostream>
#include "Registration.h"
#include "Course.h"
#include "Student.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the
    // <b>lang</b> variable name to see how CLion can help you rename it.
    // Creating courses
    Course math(101, "Mathematics", "MTH101");
    Course physics(102, "Physics", "PHY102");
    Course compSci(103, "Computer Science", "CSC103");

    // Creating students
    Student alice(1, "Alice", "2000-01-01");
    Student bob(2, "Bob", "1999-05-15");
    Student charlie(3, "Charlie", "2001-07-20");

    alice.registerCourse(&math,1,"2024-01-10","Spring");
    bob.registerCourse(&physics,2,"2024-01-11","Spring");
    charlie.registerCourse(&compSci,3,"2024-01-12","Spring");
    // Creating registrations
   // Registration reg1(1, "2024-01-10", "Spring", &math, &alice);
   // Registration reg2(2, "2024-01-11", "Spring", &physics, &bob);
    //Registration reg3(3, "2024-01-12", "Spring", &compSci, &charlie);

    // Establishing bi-directional associations
    //math.addRegistration(&reg1);
    //physics.addRegistration(&reg2);
    //compSci.addRegistration(&reg3);

    //alice.addRegistration(&reg1);
    //bob.addRegistration(&reg2);
    //charlie.addRegistration(&reg3);

    // Displaying registrations for a specific course
    math.displayRegistrations();
    physics.displayRegistrations();

    // Displaying registrations for a specific student
    alice.displayRegistrations();
    bob.displayRegistrations();

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.