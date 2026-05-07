#pragma once
#include "shape.hpp"

class Circle : public Shape {
private:
    double radius_;

public:
    Circle(double r) : Shape("Circle"), radius_(r) {}

    double area() const override {
        return M_PI * radius_ * radius_; 
    }
};