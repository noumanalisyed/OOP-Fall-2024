#include <iostream>
#include <string>
using namespace std;

class romanType {
private:
    string roman;
    int decimal;

    int romanToDecimal(string roman) {
        // Arrays for Roman symbols and their corresponding values
        char symbols[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int values[] = {1, 5, 10, 50, 100, 500, 1000};
        int total = 0, prev = 0;

        for (int i = roman.size() - 1; i >= 0; i--) {
            // Find the value corresponding to the current Roman symbol
            int curr = 0;
            for (int j = 0; j < 7; j++) {
                if (roman[i] == symbols[j]) {
                    curr = values[j];
                    break;
                }
            }

            // Add or subtract the value based on its relative size
            if (curr < prev) {
                total -= curr;
            } else {
                total += curr;
            }
            prev = curr;
        }
        return total;
    }

public:
    void setRoman(string r) {
        roman = r;
        decimal = romanToDecimal(r);
    }

    void displayRoman() { cout << "Roman Numeral: " << roman << endl; }

    void displayDecimal() { cout << "Decimal Value: " << decimal << endl; }
};

int main() {
    romanType r1, r2, r3;

    r1.setRoman("MCXIV");
    r2.setRoman("CCCLIX");
    r3.setRoman("MDCLXVI");

    r1.displayRoman();
    r1.displayDecimal();

    r2.displayRoman();
    r2.displayDecimal();

    r3.displayRoman();
    r3.displayDecimal();

    return 0;
}
