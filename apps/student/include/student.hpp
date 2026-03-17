#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    double gpa;
};

template <typename T>
T& findBestStudent(T* students, const int& sz) {
    int bestIndex = 0;
    for (int i = 1; i < sz; i++) {
        if (students[i].gpa > students[bestIndex].gpa) {
            bestIndex = i;
        }
    }
    return students[bestIndex];
}

template <typename T>
void printStudent(const T& student) {
    cout << "Name: " << student.name << ", Age: " << student.age << ", GPA: " << student.gpa << endl;
}

template <typename T>
void printAllStudents(T* students, const int& sz) {
    for (int i = 0; i < sz; i++) {
        cout << i + 1 << ". ";
        printStudent(students[i]);
    }
}