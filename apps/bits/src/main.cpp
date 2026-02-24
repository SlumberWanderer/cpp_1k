#include "bits.hpp"
using namespace std;

int main() {
    int num = 0b10110100;
    cout << "Bit operations" << endl;
    cout << "num = " << num << " | binary = " << toBinary(num) << endl;
    cout << "getBit(num, 2) = " << getBit(num, 2) << endl;
    cout << "setBit(num, 0) = " << setBit(num, 0) << " | binary = " << toBinary(setBit(num, 0)) << endl;
    cout << "clearBit(num, 4) = " << clearBit(num, 4) << " | binary = " << toBinary(clearBit(num, 4)) << endl;
    cout << "toggleBit(num, 5) = " << toggleBit(num, 5) << " | binary = " << toBinary(toggleBit(num, 5)) << endl;

    cout << endl;
    cout << "XOR swap" << endl;
    int a = 42, b = 99;
    cout << "before: a = " << a << ", b = " << b << endl;
    xorSwap(a, b);
    cout << "after:  a = " << a << ", b = " << b << endl;

    cout << endl;
    cout << "Binary converter" << endl;
    int decimal = 173;
    string binary = toBinary(decimal);
    cout << decimal << " -> " << binary << endl;
    cout << binary << " -> " << fromBinary(binary) << endl;

    cout << endl;
    cout << "XOR Caesar cipher" << endl;
    string message = "Hello";
    char key = 'K';
    string encrypted = xorCaesar(message, key);
    string decrypted = xorCaesar(encrypted, key);
    cout << "original:  " << message << endl;
    cout << "key:       " << key << " (" << (int)key << ")" << endl;
    cout << "encrypted: " << encrypted << " (raw bytes)" << endl;
    cout << "decrypted: " << decrypted << endl;

    return 0;
}
