//
// Created by Syed Nouman Ali Shah on 13/11/2024.
//

#include "Author.h"

// Constructor
Author::Author(const std::string &authorName, const char *bookTitle) : name(authorName) {
    book = new Book(bookTitle);
}

// Copy Constructor for deep copy
Author::Author(const Author &other) : name(other.name) {
    book = new Book(*other.book); // Deep copy of the book
}

// Assignment Operator for deep copy
Author &Author::operator=(const Author &other) {
    if (this != &other) {
        name = other.name;
        delete book;
        book = new Book(*other.book); // Deep copy of the book
    }
    return *this;
}

// Destructor
Author::~Author() {
    delete book;
}

void Author::printAuthorDetails() const {
    std::cout << "Author: " << name << std::endl;
    book->printTitle();
}