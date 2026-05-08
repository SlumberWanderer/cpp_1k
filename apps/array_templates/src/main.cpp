#include "sorting_templates.hpp"

int main() {
    int iArr[] = {44, 12, 67, 1, 8};
    int iSize = sizeof(iArr) / sizeof(iArr[0]);

    std::cout << "Initial: " << iArr << std::endl;
    std::cout << "Max: " << findMax(iArr, iSize) << " | Min: " << findMin(iArr, iSize) << std::endl;
    sortArray(iArr, iSize);
    std::cout << "Sorted: " << iArr << std::endl << std::endl;

    double dArr[] = {2.5, 9.1, 0.4, 3.3};
    int dSize = sizeof(dArr) / sizeof(dArr[0]);

    std::cout << "Initial: " << dArr << std::endl;
    std::cout << "Max: " << findMax(dArr, dSize) << " | Min: " << findMin(dArr, dSize) << std::endl;
    sortArray(dArr, dSize);
    std::cout << "Sorted: " << dArr << std::endl;

    return 0;
}