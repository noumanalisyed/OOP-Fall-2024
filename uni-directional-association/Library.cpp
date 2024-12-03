//
// Created by Syed Nouman Ali Shah on 02/12/2024.
//

#include "Library.h"

Library::Library(){
    //count = 0;
    books = new Book*[size];
}
void Library::addBook(Book* book) {
    books[count++] = book;
}

void Library::displayBooks() const {
    std::cout << "Books in the library:\n";
    for (int i = 0; i < size ; i++) {
        if(books[i] != NULL) {
            std::cout << " - " <<books[i]->getId()<<" , "<<books[i]->getTitle() << "\n";
        }
    }
}