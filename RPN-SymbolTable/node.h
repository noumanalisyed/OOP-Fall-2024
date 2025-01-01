//
// Created by Syed Nouman Ali Shah on 21/12/2023.
//

#ifndef RPN_SYMBOLTABLE_NODE_H
#define RPN_SYMBOLTABLE_NODE_H
#include<iostream>
template <class CHAR,class INT>
class Node
{
public:
    Node() = default;

    Node(CHAR d);
    Node(CHAR d,INT r);
    void setData(CHAR d);
    CHAR getData();
    void setValue(INT r);
    INT getValue();
    void setNext(Node<CHAR,INT>* n);
    Node<CHAR,INT>* getNext();
    void display();
private:
    CHAR data {0};
    INT value {0};
    Node<CHAR,INT> *next {NULL};
};


#endif //RPN_SYMBOLTABLE_NODE_H
