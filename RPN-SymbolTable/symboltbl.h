//
// Created by Syed Nouman Ali Shah on 21/12/2023.
//
#ifndef RPN_SYMBOLTABLE_SYMBOLTBL_H
#define RPN_SYMBOLTABLE_SYMBOLTBL_H
#include "symbol.h"
template <class CHAR,class INT>
class SymolTable{
public:
    SymolTable();
    SymolTable(std::string name,int value);

    void display();
    void insertValue(CHAR name,INT val);
    void deleteValue(CHAR name);
    INT getValue(CHAR name);

private:
    int size;
    int count;
    Symbol<CHAR,int> **symbolTable;
    void init();
};

#endif //RPN_SYMBOLTABLE_SYMBOLTBL_H
