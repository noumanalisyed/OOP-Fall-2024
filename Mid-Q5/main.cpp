#include <iostream>
#include <string>
using namespace std;

class dayType {
private:
    string day;

    // Helper function to calculate the index of a day
    int getDayIndex() {
        string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        for (int i = 0; i < 7; i++) {
            if (days[i] == day) return i;
        }
        return -1;
    }

public:
    void setDay(string d) { day = d; }

    void printDay() { cout << "Day: " << day << endl; }

    string getDay() { return day; }

    string getNextDay() {
        string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        return days[(getDayIndex() + 1) % 7];
    }

    string getPreviousDay() {
        string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        return days[(getDayIndex() + 6) % 7];  // Add 6 for "negative modulo"
    }

    string addDays(int numDays) {
        string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        return days[(getDayIndex() + numDays) % 7];
    }
};

int main() {
    dayType today;
    today.setDay("Monday");

    today.printDay();
    cout << "Next Day: " << today.getNextDay() << endl;
    cout << "Previous Day: " << today.getPreviousDay() << endl;
    cout << "Day after 4 days: " << today.addDays(4) << endl;
    cout << "Day after 13 days: " << today.addDays(13) << endl;

    return 0;
}
