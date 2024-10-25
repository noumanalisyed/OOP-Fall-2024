#include "RationalNumber.h"

int main() {
    {
        RationalNumber r1(3,9);
        RationalNumber r2(4,16);
        r1.print();
        cout<<" + ";
        r2.print();
        RationalNumber r3 = r1.add(r2);
        cout<<" = ";
        r3.print();
        cout<<endl<<endl;
        r1.print();
        cout<<" - ";
        r2.print();
        RationalNumber r4 = r1.sub(r2);
        cout<<" = ";
        r4.print();
    }
    return 0;
}
