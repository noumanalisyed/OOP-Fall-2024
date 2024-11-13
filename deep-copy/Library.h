//
// Created by Syed Nouman Ali Shah on 13/11/2024.
//

#ifndef DEEP_COPY_LIBRARY_H
#define DEEP_COPY_LIBRARY_H
#include "Author.h"
class Library {
private:
    std::vector<Author> authors;

public:
    // Add an author to the library
    void addAuthor(const Author& author) ;

    // Print details of all authors in the library
    void printLibraryDetails() const ;
};


#endif //DEEP_COPY_LIBRARY_H
