#include <iostream>
class Person {
private:
    std::string name;
    int age;

public:
    void setDetails(std::string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person* p = new Person();  // Corrected syntax for dynamic allocation
    p->setDetails("Alice", 25);
    p->display();
    delete p;  // Avoid memory leak
    return 0;
}

