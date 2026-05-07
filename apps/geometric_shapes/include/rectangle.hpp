#pragma once
#include "shape.hpp"

class Rectangle : public Shape {
private:
    double width_, height_;

public:
    Rectangle(double w, double h) : Shape("Rectangle"), width_(w), height_(h) {}

    double area() const override {
        return width_ * height_; 
    }
};