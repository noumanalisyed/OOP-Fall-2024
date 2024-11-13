//
// Created by Syed Nouman Ali Shah on 13/11/2024.
//

#include "Library.h"

// Add an author to the library
void Library::addAuthor(const Author &author) {
    authors.push_back(author); // Calls the copy constructor for deep copy
}

// Print details of all authors in the library
void Library::printLibraryDetails() const {
    for (const auto &author: authors) {
        author.printAuthorDetails();
        std::cout << "----------------------" << std::endl;
    }
}
