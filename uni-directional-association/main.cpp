#include <iostream>
#include <vector>

class Book {
private:
    std::string title;
public:
    Book(){
        title = "";
    }
    Book(const std::string& title) : title(title) {}

    std::string getTitle() const {
        return title;
    }
};

class Library {
private:
    Book** books; // Library has many books
    int size {0};
public:
    Library(){
        books = new Book*[10];
    }
    void addBook(Book* book) {
        books[size] = book;
        size++;
    }

    void displayBooks() const {
        std::cout << "Books in the library:\n";
        for (int i = 0; i < size ; i++) {
            if(books[i] != NULL) {
                std::cout << " - " << books[i]->getTitle() << "\n";
            }
        }
    }
};

int main() {
    Book book1("The Catcher in the Rye");
    Book book2("To Kill a Mockingbird");

    Library library;
    library.addBook(&book1);
    library.addBook(&book2);

    library.displayBooks();

    return 0;
}
