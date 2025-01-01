//
// Created by Syed Nouman Ali Shah on 21/12/2023.
//

#ifndef RPN_SYMBOLTABLE_SYMBOL_H
#define RPN_SYMBOLTABLE_SYMBOL_H
#include <iostream>
template<class T,class P>
class Symbol {
public:
    Symbol();
    Symbol(T name,P value);

    const T &getName() const ;

    void setName(const T &name) ;

    P getValue() const ;

    void setValue(P value) ;

    Symbol *getNext() const ;

    void setNext(Symbol *next) ;

    friend std::ostream &operator<<(std::ostream &os, const Symbol<T,P> &node);

private:
    T name;
    P value;
    Symbol<T,P> *next;
};

#endif //RPN_SYMBOLTABLE_SYMBOL_H
