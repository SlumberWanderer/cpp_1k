#pragma once

#include <iostream>
#include <string>

struct Contact {
    std::string firstName;
    std::string lastName;
    std::string phoneNumber;

    void display() const {
        std::cout << firstName << " " << lastName << " | Tel: " << phoneNumber << std::endl;
    }
};