//
// Created by Syed Nouman Ali Shah on 21/12/2023.
//

#include "symbol.h"

template<class T,class P>
Symbol<T,P>::Symbol(){
    name = '\0';
    value = 0;
    next = NULL;
}

template<class T,class P>
Symbol<T,P>::Symbol(T name,P value){
    Symbol::name = name;
    Symbol::value = value;
    Symbol::next = NULL;
}

template<class T,class P>
const T & Symbol<T,P>::getName() const {
    return name;
}

template<class T,class P>
void Symbol<T,P>::setName(const T &name) {
    Symbol::name = name;
}

template<class T,class P>
P Symbol<T,P>::getValue() const {
    return value;
}

template<class T,class P>
void Symbol<T,P>::setValue(P value) {
    Symbol::value = value;
}

template<class T,class P>
Symbol<T,P> * Symbol<T,P>::getNext() const {
    return next;
}

template<class T,class P>
void Symbol<T,P>::setNext(Symbol<T,P> *next) {
    Symbol::next = next;
}

template<class T,class P>
std::ostream &operator<<(std::ostream &os, const Symbol<T,P> &node) {
    os << "name: " << node.name << " value: " << node.value;
    return os;
}