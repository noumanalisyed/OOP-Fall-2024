#include <iostream>
using namespace std;

#include "ComplexNo.h"

int main() {
    ComplexNo c1(7,8);
    ComplexNo c2(4,5);
    c1.display();
    c2.display();
    ComplexNo c3 = c1.add(c2);
    c3.display();
    ComplexNo c4 = c1.sub(c2);
    c4.display();
    return 0;
}
