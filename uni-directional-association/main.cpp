
#include "Library.h"

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
