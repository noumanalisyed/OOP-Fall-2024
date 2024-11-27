#include <iostream>
using namespace std;

class Box {
    int length;

public:
    Box(int l) {
        length = l;
    }

    void setLength(int length) {
        this->length = length;
        cout << "Length: " << this->length << endl;
    }

    void setLength(int len, int width) {
        length = len * width;
        cout << "Length * Width: " << length << endl;
    }

    void display() {
        cout << "Length: " << length << endl;
    }
};

int main() {
    Box b1(10);
    b1.setLength(15);
    b1.setLength(5, 7);
    b1.display();
    return 0;
}
