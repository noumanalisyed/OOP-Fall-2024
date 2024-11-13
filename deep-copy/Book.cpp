//
// Created by Syed Nouman Ali Shah on 13/11/2024.
//

#include "Book.h"

// Constructor
Book::Book(const char *bookTitle) {
    title = new char[strlen(bookTitle) + 1];
    strcpy(title, bookTitle);
}

// Copy Constructor for deep copy
Book::Book(const Book &other) {
    title = new char[strlen(other.title) + 1];
    strcpy(title, other.title);
}

// Assignment Operator for deep copy
Book &Book::operator=(const Book &other) {
    if (this != &other) {
        delete[] title;
        title = new char[strlen(other.title) + 1];
        strcpy(title, other.title);
    }
    return *this;
}

// Destructor
Book::~Book() {
    delete[] title;
}

void Book::printTitle() const {
    std::cout << "Book Title: " << title << std::endl;
}
