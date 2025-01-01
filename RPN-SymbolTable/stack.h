//
// Created by Syed Nouman Ali Shah on 21/12/2023.
//

#ifndef RPN_SYMBOLTABLE_STACK_H
#define RPN_SYMBOLTABLE_STACK_H
#include "node.h"
template <class CHAR,class INT>
class Stack
{
public:
    Stack();
    void push(CHAR d,INT r);
    void pushResult(CHAR d,INT result);
    CHAR getTopElement();
    INT getTopValue();
    void pop();
    bool isEmpty();
    void display();
    INT getSize();
    Node<CHAR,INT> * getTop();
private:
    Node<CHAR,INT> * top;
    int size;
};

#endif //RPN_SYMBOLTABLE_STACK_H
