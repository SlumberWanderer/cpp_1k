#pragma once
#include <iostream>
#include <random>
using namespace std;

struct student {
    int id;
    int age;
    int grade;
    int attendance;
};

ostream& operator<<(ostream& os, const student& s)
{
    os << "student " << s.id
       << " | age: "        << s.age
       << " | grade: "      << s.grade
       << " | attendance: " << s.attendance << "%";
    return os;
}
