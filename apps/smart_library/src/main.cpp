#include "library.hpp"

int main() {
    Library myLibrary;

    auto book1 = std::make_shared<Book>("The C++ Programming Language", "Bjarne Stroustrup", 2013);
    auto book2 = std::make_shared<Book>("Clean Code", "Robert Martin", 2008);

    myLibrary.addBook(book1);
    myLibrary.addBook(book2);
    
    myLibrary.addBook(std::make_shared<Book>("Design Patterns", "Gang of Four", 1994));

    myLibrary.showAllBooks();

    return 0;
}