
#include "Library.h"
// Class representing a Book with a dynamically allocated title.

// Class representing an Author who has a Book.

// Class representing a Library that has multiple Authors.


int main() {
    // Creating authors
    Book b1("Harry Potter");
    Book b2("The Lord of the Rings");
    Book * b3 = NULL;

    Author author1("J.K. Rowling", &b1);
    Author author2("J.R.R. Tolkien", &b2);
    Author author3("Deitel & Deitel", "C++ How to Program");
    Author author4("Peter Jacobs", b3);

    // Creating a library and adding authors
    Library library;
    library.addAuthor(author1);
    library.addAuthor(author2);
    library.addAuthor(author3);
    library.addAuthor(author4);

    // Printing library details
    library.printLibraryDetails();

    return 0;
}
/*
 *
Explanation of the Code
    Book Class:

        Uses dynamic memory for the title attribute.
        Implements a copy constructor and assignment operator to perform a deep copy.
        Frees memory in the destructor.

    Author Class:

        Contains a dynamically allocated Book object.
        Implements a copy constructor and assignment operator to deeply copy the Book.
        Destructor deletes the Book object to prevent memory leaks.

    Library Class:

        Holds multiple Author objects in a std::vector.
        When adding authors, the vector will use the Author copy constructor
        to ensure deep copying.


 Key Points

    Deep Copy in Copy Constructor:
         Both Book and Author have copy constructors to allocate new memory
         and copy the contents rather than the address.


    Assignment Operator Overloading:
        For deep copy, the assignment operators delete existing memory and
        then allocate new memory for the copied object.

    Destructors:
        Used to free any dynamically allocated memory to avoid memory leaks.
 */
