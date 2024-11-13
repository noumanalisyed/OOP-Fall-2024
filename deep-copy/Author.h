//
// Created by Syed Nouman Ali Shah on 13/11/2024.
//

#ifndef DEEP_COPY_AUTHOR_H
#define DEEP_COPY_AUTHOR_H

#include "Book.h"
class Author {
private:
    std::string name;
    Book* book;

public:
    // Constructor
    Author(const std::string& authorName, const char* bookTitle);

    // Copy Constructor for deep copy
    Author(const Author& other);

    // Assignment Operator for deep copy
    Author& operator=(const Author& other) ;

    // Destructor
    ~Author() ;

    void printAuthorDetails() const ;
};



#endif //DEEP_COPY_AUTHOR_H
