//
// Created by Syed Nouman Ali Shah on 02/12/2024.
//

#ifndef UNI_DIRECTIONAL_ASSOCIATION_LIBRARY_H
#define UNI_DIRECTIONAL_ASSOCIATION_LIBRARY_H

#include "Book.h"

class Library {
private:
    Book ** books; // Library has many books
    int count {0};
    int size {10};
public:
    Library();
    void addBook(Book* book);
    void displayBooks() const;
};



#endif //UNI_DIRECTIONAL_ASSOCIATION_LIBRARY_H
