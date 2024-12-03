//
// Created by Syed Nouman Ali Shah on 02/12/2024.
//

#include "Book.h"
Book::Book(){
}
Book::Book(int id, const std::string& title):id(id),title(title){
    //Book::id = id;
    //Book::title = title;
}

std::string Book::getTitle() const {
    return title;
}
int Book::getId(){
    return id;
}