#include "Integer.h"

int main()
{
    Integer Int1(15);
    Integer Int2 = Int1;
    Int2.setValue(300);
    Integer Int3;
    Int3.setValue(60);
    cout << "the value of Int1 is " << Int1 << endl
         << "the value of Int2 is " << Int2 << endl
         << "the value of Int3 is " << Int3 << endl
         << "Int1 + Int2 = " << (Int1 + Int2) << endl
         << "Int1 - Int2 = " << (Int1 - Int2) << endl
         << "Int1 * Int2 = " << (Int1 * Int2) << endl;
    return 0;
}