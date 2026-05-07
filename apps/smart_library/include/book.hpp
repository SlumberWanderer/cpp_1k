#pragma once
#include <string>
#include <iostream>

class Book {
private:
    std::string title_;
    std::string author_;
    int year_;

public:
    Book(std::string title, std::string author, int year)
        : title_(title), author_(author), year_(year) {}

    void display() const {
        std::cout << "Title: " << title_ << " | Author: " << author_ << " | Year: " << year_ << std::endl;
    }

    ~Book() {
        std::cout << "Log: Book '" << title_ << "' destroyed." << std::endl;
    }
};