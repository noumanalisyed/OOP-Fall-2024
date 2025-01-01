//
// Created by Syed Nouman Ali Shah on 21/12/2023.
//

#include "node.h"

template <class CHAR,class INT>
Node<CHAR,INT>::Node(CHAR d){
    data = d;
    value = 0;
    next = NULL;
}

template <class CHAR,class INT>
Node<CHAR,INT>::Node(CHAR d,INT r){
    data = d;
    value = r;
    next = NULL;
}
template <class CHAR,class INT>
void Node<CHAR,INT>::setData(CHAR d){
    data = d;
}

template <class CHAR,class INT>
CHAR Node<CHAR,INT>::getData(){
    return data;
}

template <class CHAR,class INT>
void Node<CHAR,INT>::setValue(INT r){
    value = r;
}

template <class CHAR,class INT>
INT Node<CHAR,INT>::getValue(){
    return value;
}

template <class CHAR,class INT>
void Node<CHAR,INT>::setNext(Node<CHAR,INT>* n){
    next = n;
}

template <class CHAR,class INT>
Node<CHAR,INT>* Node<CHAR,INT>::getNext(){
    return next;
}

template <class CHAR,class INT>
void Node<CHAR,INT>::display(){
    std::cout<<data<<" -- "<<value<<std::endl;
}