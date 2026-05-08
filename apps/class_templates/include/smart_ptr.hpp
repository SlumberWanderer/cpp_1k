#pragma once

#include <iostream>

template <typename T>
class SharedPointer {
private:
    T* ptr_;
    size_t* ref_count_;

    void release() {
        if (ref_count_) {
            (*ref_count_)--;
            if (*ref_count_ == 0) {
                delete ptr_;
                delete ref_count_;
            }
        }
        ptr_ = nullptr;
        ref_count_ = nullptr;
    }

public:
    SharedPointer() : ptr_(nullptr), ref_count_(nullptr) {}

    explicit SharedPointer(T* ptr) : ptr_(ptr) {
        ref_count_ = ptr ? new size_t(1) : nullptr;
    }

    SharedPointer(const SharedPointer& other) : ptr_(other.ptr_), ref_count_(other.ref_count_) {
        if (ref_count_) {
            (*ref_count_)++;
        }
    }

    SharedPointer& operator=(const SharedPointer& other) {
        if (this != &other) {
            release();
            ptr_ = other.ptr_;
            ref_count_ = other.ref_count_;
            if (ref_count_) {
                (*ref_count_)++;
            }
        }
        return *this;
    }

    ~SharedPointer() {
        release();
    }

    T& operator*() const { return *ptr_; }
    T* operator->() const { return ptr_; }
    T* get() const { return ptr_; }
    size_t use_count() const { return ref_count_ ? *ref_count_ : 0; }
};