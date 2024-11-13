//
// Created by Syed Nouman Ali Shah on 13/11/2024.
//

#ifndef DEEP_COPY_BOOK_H
#define DEEP_COPY_BOOK_H
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Book {
private:
    char* title;

public:
    // Constructor
    Book(const char* bookTitle) ;

    // Copy Constructor for deep copy
    Book(const Book& other) ;

    // Assignment Operator for deep copy
    Book& operator=(const Book& other) ;

    // Destructor
    ~Book() ;

    void printTitle() const ;
};
#endif //DEEP_COPY_BOOK_H
