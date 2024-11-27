#include <iostream>
using namespace std;

class Fibonacci {
private:
    int n;

public:
    Fibonacci(int num) {
        n = num;
    }

    void reset(int num) {
        n = num;
        cout << "Fibonacci sequence reset to " << n << " numbers." << endl;
    }

    void displayFibonacci() {
        int a = 0, b = 1;
        for (int i = 0; i < n; i++) {
            cout << a << " ";
            int temp = b;
            b = a + b;
            a = temp;
        }
        cout << endl;
    }
};

int main() {
    Fibonacci fib(10);
    fib.displayFibonacci();
    fib.reset(8);
    fib.displayFibonacci();
    return 0;
}

