#pragma once
#include "shape.hpp"

class Triangle : public Shape {
private:
    double base_, height_;

public:
    Triangle(double b, double h) : Shape("Triangle"), base_(b), height_(h) {}

    double area() const override {
        return 0.5 * base_ * height_;
    }
};