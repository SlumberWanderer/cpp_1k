#pragma once

#include <iostream>

class Vector2D {
private:
    float x, y;

public:
    Vector2D(float x = 0.0f, float y = 0.0f): x(x), y(y) {}

    float getX() const { return x; }
    float getY() const { return y; }

    void setX(float val) { x = val; }
    void setY(float val) { y = val; }

    Vector2D operator+(const Vector2D& other) const {
        return Vector2D(this->x + other.x, this->y + other.y);
    }

    Vector2D operator-(const Vector2D& other) const {
        return Vector2D(this->x - other.x, this->y - other.y);
    }

    float operator*(const Vector2D& other) const {
        return (this->x * other.x) + (this->y * other.y);
    }

    bool operator==(const Vector2D& other) const {
        return (this->x == other.x && this->y == other.y);
    }

    friend std::ostream& operator<<(std::ostream& os, const Vector2D& v) {
        os << "(" << v.x << ";" << v.y << ")";
        return os; 
    }
};

