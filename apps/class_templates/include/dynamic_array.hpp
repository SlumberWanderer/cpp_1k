#pragma once

#include <iostream>

template <typename T>
class DynamicArray {
private:
    T* data;
    size_t size;

public:
    DynamicArray() : data(nullptr), size(0) {}

    explicit DynamicArray(size_t n) : size(n) {
        data = new T[size]();
    }

    ~DynamicArray() {
        delete[] data;
    }

    DynamicArray(const DynamicArray&) = delete;
    DynamicArray& operator=(const DynamicArray&) = delete;

    DynamicArray(DynamicArray&& other) noexcept : data(other.data), size(other.size) {
        other.data = nullptr;
        other.size = 0;
    }

    DynamicArray& operator=(DynamicArray&& other) noexcept {
        if (this != &other) {
            delete[] data;
            data = other.data;
            size = other.size;
            other.data = nullptr;
            other.size = 0;
        }
        return *this;
    }

    T& operator[](size_t index) {
        return data[index];
    }

    const T& operator[](size_t index) const {
        return data[index];
    }

    size_t getSize() const {
        return size;
    }
};