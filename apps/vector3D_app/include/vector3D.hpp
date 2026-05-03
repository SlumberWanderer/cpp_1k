#pragma once
#include <iostream>
#include <stdexcept>

class Vector3D {
private:
    double coords_[3];

public:
    explicit Vector3D(double x = 0, double y = 0, double z = 0) {
        coords_[0] = x;
        coords_[1] = y;
        coords_[2] = z;
    }

    double& operator[](int index) {
        if (index < 0 || index >= 3) throw std::out_of_range("Index out of bounds");
        return coords_[index];
    }

    const double& operator[](int index) const {
        if (index < 0 || index >= 3) throw std::out_of_range("Index out of bounds");
        return coords_[index];
    }

    Vector3D operator+(const Vector3D& other) const {
        return Vector3D(coords_[0] + other.coords_[0], coords_[1] + other.coords_[1], coords_[2] + other.coords_[2]);
    }

    Vector3D operator-(const Vector3D& other) const {
        return Vector3D(coords_[0] - other.coords_[0], coords_[1] - other.coords_[1], coords_[2] - other.coords_[2]);
    }

    Vector3D operator*(double scalar) const {
        return Vector3D(coords_[0] * scalar, coords_[1] * scalar, coords_[2] * scalar);
    }

    double operator*(const Vector3D& other) const {
        return coords_[0] * other.coords_[0] + coords_[1] * other.coords_[1] + coords_[2] * other.coords_[2];
    }
};

inline std::ostream& operator<<(std::ostream& os, const Vector3D& v) {
    os << "(" << v[0] << ", " << v[1] << ", " << v[2] << ")";
    return os;
}