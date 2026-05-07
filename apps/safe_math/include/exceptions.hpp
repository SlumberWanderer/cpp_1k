#pragma once
#include <exception>
#include <string>
#include <iostream>

class MathException : public std::exception {
protected:
    std::string message_;
public:
    MathException(const std::string& msg) : message_(msg) {}
    
    const char* what() const noexcept override {
        return message_.c_str();
    }
};

class DivisionByZeroException : public MathException {
public:
    DivisionByZeroException() : MathException("Error: Division by zero is not allowed!") {}
};