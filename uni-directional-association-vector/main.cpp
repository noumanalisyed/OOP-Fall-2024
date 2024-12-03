#include <iostream>
#include <vector>

class Book {
private:
    std::string title {""};
    int id;

public:
    Book(){

    }
    Book(int id,const std::string& title) :id(id), title(title) {

    }
    std::string getTitle() const {
        return title;
    }
    void setTitle(std::string title){
        Book::title = title;
    }
    int getId() const {
        return id;
    }
    void setId(int id){
        Book::id = id;
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
        for (Book * book : books) {
            std::cout <<book->getId()<< " - " << book->getTitle() << "\n";
        }
    }
};

int main() {
    Book book1(1000,"The Catcher in the Rye");
    Book book2(1001,"To Kill a Mockingbird");

    Library library;
    library.addBook(&book1);
    library.addBook(&book2);

    library.displayBooks();
    std::cout<<std::endl<<std::endl;
    Book book3(1002,"Lords of the Ring");
    library.addBook(&book3);
    library.displayBooks();
    std::cout<<std::endl<<std::endl;
    book3.setTitle("Harry Potter");
    library.displayBooks();
    return 0;
}

