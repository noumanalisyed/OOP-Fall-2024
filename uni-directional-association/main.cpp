#include <iostream>

class Book {
private:
    std::string title {""};
    int id {0};
public:
    Book(){
    }
    Book(int id, const std::string& title){
        Book::id = id;
        Book::title = title;
    }

    std::string getTitle() const {
        return title;
    }
    int getId(){
        return id;
    }
};

class Library {
private:
    Book ** books; // Library has many books
    int count {0};
    int size {10};
public:
    Library(){
        //count = 0;
        books = new Book*[size];
    }
    void addBook(Book* book) {
        books[count++] = book;
    }

    void displayBooks() const {
        std::cout << "Books in the library:\n";
        for (int i = 0; i < size ; i++) {
            if(books[i] != NULL) {
                std::cout << " - " <<books[i]->getId()<<" , "<<books[i]->getTitle() << "\n";
            }
        }
    }
};

int main() {
    Book book1(1000,"The Catcher in the Rye");
    Book book2(1001, "To Kill a Mockingbird");

    Library library;
    library.addBook(&book1);
    library.addBook(&book2);

    library.displayBooks();
    std::cout<<std::endl<<std::endl;
    Book book3(1002,"The Lord of the Ring");
    library.addBook(&book3);
    library.displayBooks();
    return 0;
}
