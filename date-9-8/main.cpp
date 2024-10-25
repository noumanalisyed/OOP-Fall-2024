
#include "Date.h"
int main() {
    Date d1;
   // d1.print();
    Date d2(27,2,2004);
    d2.print();

    for(int i = 0; i < 10; i++){
        d2.nextDay();
        d2.print();
    }
    return 0;
}
