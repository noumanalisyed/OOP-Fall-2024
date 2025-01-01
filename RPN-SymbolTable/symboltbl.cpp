//
// Created by Syed Nouman Ali Shah on 21/12/2023.
//

#include "symboltbl.h"

template <class CHAR, class INT>
SymolTable<CHAR,INT>::SymolTable(){
    count = 0;
    size = 20;
    symbolTable = new Symbol<CHAR,INT>*[size];
    init();
}
template <class CHAR,class INT>
SymolTable<CHAR,INT>::SymolTable(std::string name,int value){
    count = 0;
    size = 20;
    symbolTable = new Symbol<CHAR,INT>*[size];
    init();
}
template <class CHAR,class INT>
void SymolTable<CHAR,INT>::display(){
    for (int i = 0; i < count; ++i) {
        std::cout<<symbolTable[i]->getName()<<" - "<<symbolTable[i]->getValue()<<std::endl;
    }
}
template <class CHAR,class INT>
void SymolTable<CHAR,INT>::insertValue(CHAR name,INT val){
    symbolTable[count]->setName(name);
    symbolTable[count]->setValue(val);
    count++;
}

template <class CHAR,class INT>
void SymolTable<CHAR,INT>::deleteValue(CHAR name){
    int i = 0;
    while(i < count) {
        if(symbolTable[i]->getName() == name) {
            symbolTable[i]->setName('\0');
            symbolTable[i]->setValue(0);
        }
        i++;
    }
    count--;
}
template <class CHAR,class INT>
INT SymolTable<CHAR,INT>::getValue(CHAR name){
    int index = -1;
    int i = 0;
    while(i < count) {
        if(symbolTable[i]->getName() == name) {
            index = i;
            break;
        }
        i++;
    }
    if(index != -1)
        return symbolTable[index]->getValue();
    else
        return index;
}
template <class CHAR,class INT>
void SymolTable<CHAR,INT>::init(){
    for (int i = 0; i < size; ++i) {
        symbolTable[i] = new Symbol<CHAR,INT>();
    }
}



