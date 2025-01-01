//
// Created by Syed Nouman Ali Shah on 21/12/2023.
//

#include "stack.h"

template <class CHAR,class INT>
Stack<CHAR,INT>::Stack(){
    top = NULL;
    size = 0;
}

template <class CHAR,class INT>
void Stack<CHAR,INT>::push(CHAR d,INT r){

    Node<CHAR,INT> * n = new Node<CHAR,INT>(d,r);
    if(top == NULL){
        top = n;
        std::cout<<"Inserting for first time ";
        n->display();
    }
    else{
        n->setNext(top);
        top = n;
        std::cout<<"Inserting for first time ";
        n->display();
    }
    size++;
}

template <class CHAR,class INT>
void Stack<CHAR,INT>::pushResult(CHAR d,INT result){

    Node<CHAR,INT> * n = new Node<CHAR,INT>(d,result);

    if(top == NULL){
        top = n;
    }
    else{
        n->setNext(top);
        top = n;
    }
    size++;
}

template <class CHAR,class INT>
CHAR Stack<CHAR,INT>::getTopElement(){
    return top->getData();
}

template <class CHAR,class INT>
INT Stack<CHAR,INT>::getTopValue(){
    return top->getValue();
}

template <class CHAR,class INT>
void Stack<CHAR,INT>::pop(){
    if(!isEmpty()){
        Node<CHAR,INT> * temp = top;
        top = top->getNext();
        temp->setNext(NULL);
        delete temp;
        temp = NULL;
    }else{
        std::cout<<"Stack Already Empty !!!!"<<std::endl;
    }
    size--;
}

template <class CHAR,class INT>
bool Stack<CHAR,INT>::isEmpty(){
    return (top == NULL);
}

template <class CHAR,class INT>
void Stack<CHAR,INT>::display(){
    Node<CHAR,INT> * temp = top;
    while(temp!= NULL){
        temp->display();
        temp = temp->getNext();
    }
}

template <class CHAR,class INT>
INT Stack<CHAR,INT>::getSize(){
    return size;
}

template <class CHAR,class INT>
Node<CHAR,INT> * Stack<CHAR,INT>::getTop(){
    return top;
}

