#pragma once
#include <iostream>
#include <string>
using namespace std;

struct distro {
    string name;
    string based_on;
    string release_date;
    int packages;
};

ostream& operator<<(ostream& os, const distro& d)
{
    os << "{" << d.name << " | based on: " << d.based_on << " | released: " << d.release_date << " | packages: " << d.packages << "}";
    return os;
}