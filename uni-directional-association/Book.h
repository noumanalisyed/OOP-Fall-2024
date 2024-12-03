//
// Created by Syed Nouman Ali Shah on 02/12/2024.
//

#ifndef UNI_DIRECTIONAL_ASSOCIATION_BOOK_H
#define UNI_DIRECTIONAL_ASSOCIATION_BOOK_H

#include<iostream>

class Book {
private:
    std::string title {""};
    int id {0};
public:
    Book();
    Book(int id, const std::string& title);

    std::string getTitle() const ;
    int getId();
};


#endif //UNI_DIRECTIONAL_ASSOCIATION_BOOK_H
