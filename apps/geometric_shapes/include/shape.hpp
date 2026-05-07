#pragma once
#include <iostream>
#include <string>
#include <cmath>

class Shape {
protected:
    std::string name_;

public:
    Shape(std::string name) : name_(name) {}
    
    virtual double area() const = 0;

    std::string getName() const { return name_; }

    virtual ~Shape() = default;
};