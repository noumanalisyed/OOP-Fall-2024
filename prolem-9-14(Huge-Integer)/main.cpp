#include <iostream>
using namespace std;

#include "HugeInteger.h"

int main() {
    HugeInteger h1;
    h1.display();
    HugeInteger h2(40,"8899");
    h2.display();
    h1.input("247");
    h1.display();
    HugeInteger h3 = h1.add(h2);
    h3.display();
    return 0;
}
