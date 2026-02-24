#pragma once
#include <iostream>
#include <string>
using namespace std;

int getBit(int num, int pos) {
    return (num >> pos) & 1;
}

int setBit(int num, int pos) {
    return num | (1 << pos);
}

int clearBit(int num, int pos) {
    return num & ~(1 << pos);
}

int toggleBit(int num, int pos) {
    return num ^ (1 << pos);
}

void xorSwap(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

string toBinary(int num) {
    string result = "";
    for (int i = 7; i >= 0; i--)
        result += (char)('0' + getBit(num, i));
    return result;
}

int fromBinary(const string& bits) {
    int result = 0;
    for (char c : bits)
        result = result * 2 + (c - '0');
    return result;
}

string xorCaesar(const string& text, char key) {
    string result = text;
    for (char& c : result)
        c ^= key;
    return result;
}
