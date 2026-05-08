#pragma once
#include <iostream>
#include <algorithm>

template <typename T, size_t N>
typename std::enable_if<!std::is_same<T, char>::value, std::ostream&>::type
operator<<(std::ostream& os, const T (&arr)[N]) {
    os << "[ ";
    for (size_t i = 0; i < N; ++i) {
        os << arr[i] << (i == N - 1 ? "" : ", ");
    }
    os << " ]";
    return os;
}

template <typename T>
T findMax(T arr[], int size) {
    T maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    return maxVal;
}

template <typename T>
T findMin(T arr[], int size) {
    T minVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) minVal = arr[i];
    }
    return minVal;
}

template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) std::swap(arr[j], arr[j + 1]);
        }
    }
}