#include <iostream>
#include <vector>

class Book {
private:
    std::string title {""};

public:
    Book(){

    }
    Book(const std::string& title) : title(title) {

    }
    std::string getTitle() const {
        return title;
    }
    void setTitle(std::string title){
        Book::title = title;
    }
};

class Library {
private:
    std::vector<Book*> books; // Library has many books

public:
    void addBook(Book* book) {
        books.push_back(book);
    }

    void displayBooks() const {
        std::cout << "Books in the library:\n";
        for (const auto& book : books) {
            std::cout << " - " << book->getTitle() << "\n";
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
    Book book3("Lords of the Ring");
    library.addBook(&book3);
    library.displayBooks();
    book3.setTitle("Harry Potter");
    library.displayBooks();
    return 0;
}

