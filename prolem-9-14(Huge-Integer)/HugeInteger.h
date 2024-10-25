//
// Created by Syed Nouman Ali Shah on 24/10/2024.
//

#ifndef PROLEM_9_14_HUGE_INTEGER__HUGEINTEGER_H
#define PROLEM_9_14_HUGE_INTEGER__HUGEINTEGER_H
#include<iostream>
using namespace std;

class HugeInteger{
public:
    HugeInteger(int s = 40);
    HugeInteger(int s, string data);
    HugeInteger add(HugeInteger h);
    void input(string data);
    void display();
private:
    int size;
    int capacity;
    int digits[40];
    void init();
};


#endif //PROLEM_9_14_HUGE_INTEGER__HUGEINTEGER_H
