#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    string species;
    int age;

public:
    // Parameterized constructor
    Animal(string n, string s, int a) : name(n), species(s), age(a) {}

    // Default constructor
    Animal() : name(""), species(""), age(0) {}

    // Setters
    void setName(string n) { name = n; }
    void setSpecies(string s) { species = s; }
    void setAge(int a) { age = a; }

    // Getters
    string getName() { return name; }
    string getSpecies() { return species; }
    int getAge() { return age; }

    // Display animal information
    void display() {
        cout << "Name: " << name << ", Species: " << species << ", Age: " << age << " years" << endl;
    }
};

int main() {
    // Create animal objects
    Animal a1("Lion", "Panthera leo", 5);
    Animal a2;

    // Update and display information for the second animal
    a2.setName("Elephant");
    a2.setSpecies("Elephas maximus");
    a2.setAge(10);

    // Display details
    a1.display();
    a2.display();

    return 0;
}

