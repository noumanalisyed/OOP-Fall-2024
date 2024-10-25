#include "Time.h"
int main() {
    int hour = 11, min = 59, sec = 55;
    Time t1(hour, min, sec);
    for (int i = 0; i < 6; ++i) {
        t1.printStandard();
        t1.tick();
    }
    return 0;
}
