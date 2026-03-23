#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>

using namespace std;

struct Phone {
    string model;
    int year;
    int ram;
    int storage;
    double price;
};

void printPhone(const Phone& p) {
    cout << p.model << " | " << "Year: " << p.year << " | RAM: " << p.ram << "GB | Storage: " << p.storage << "GB | $" << p.price << endl;
}