#pragma once
#include <vector>
#include <memory>
#include "book.hpp"

class Library {
private:
    std::vector<std::shared_ptr<Book>> books_;

public:
    void addBook(const std::shared_ptr<Book>& book) {
        books_.push_back(book);
    }

    void showAllBooks() const {
        std::cout << "Library Collection" << std::endl;
        for (const auto& book : books_) {
            book->display();
        }
        std::cout << std::endl;
    }
};