#pragma once

#include <iostream>
#include <stdexcept>

template <typename T, size_t N>
class StaticArray {
private:
    T data_[N];

public:
    T& operator[](size_t index) {
        if (index >= N) throw std::out_of_range("Index out of bounds");
        return data_[index];
    }

    const T& operator[](size_t index) const {
        if (index >= N) throw std::out_of_range("Index out of bounds");
        return data_[index];
    }

    size_t size() const { return N; }
};