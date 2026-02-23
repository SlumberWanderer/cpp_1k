#pragma once
#include <iostream>
using namespace std;

struct SmallStruct {
    int age;
    double salary;
};

struct LargeStruct {
    int age;
    double salary;
    char grade;
    bool isActive;
    float score;
};

struct PointerStruct {
    int*    pAge;
    double* pSalary;
    char*   pName;
    bool*   pActive;
};
