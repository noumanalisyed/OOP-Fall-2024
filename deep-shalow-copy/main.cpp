#include <iostream>

using namespace std;

int addByValue(int x, int y);

int addByRef(int &p, int &q);

int main() {
    int a = 4, b = 6, c = 0;
    int &d = a; //shallow copy
    int *p = &b;
    cout << "a = " << a << " address of a =" << &a << " , d = " << d << " , address of d =" << &d << endl;
    d++;
    cout << "a = " << a << " address of a =" << &a << " , d = " << d << " , address of d =" << &d << endl;
    a++;
    cout << "a = " << a << " address of a =" << &a << " , d = " << d << " , address of d =" << &d << endl;

    c = addByValue(a, b);
    cout << a << " + " << b << " = " << c << endl;
    c = addByRef(a, b);
    cout << a << " + " << b << " = " << c << endl;
    return 0;
}
// parameter 1 int x = a
// parameter 2 int y = b
int addByValue(int x, int y) {
    x++;
    return x + y;
}
// parameter 1 int &p = a
// parameter 2 int &q = b
int addByRef(int &p, int &q) {
    p++;
    return p + q;
}

