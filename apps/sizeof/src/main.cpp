#include "structs.hpp"

int main() {
    cout << "Primitive types" << endl;
    cout << "bool = " << sizeof(bool) << " bytes" << endl;
    cout << "char = " << sizeof(char) << " bytes" << endl;
    cout << "unsigned char = " << sizeof(unsigned char) << " bytes" << endl;
    cout << "short = " << sizeof(short) << " bytes" << endl;
    cout << "unsigned short = " << sizeof(unsigned short) << " bytes" << endl;
    cout << "int = " << sizeof(int) << " bytes" << endl;
    cout << "unsigned int = " << sizeof(unsigned int) << " bytes" << endl;
    cout << "long = " << sizeof(long) << " bytes" << endl;
    cout << "unsigned long = " << sizeof(unsigned long) << " bytes" << endl;
    cout << "long long = " << sizeof(long long) << " bytes" << endl;
    cout << "unsigned long long = " << sizeof(unsigned long long) << " bytes" << endl;
    cout << "float = " << sizeof(float) << " bytes" << endl;
    cout << "double = " << sizeof(double) << " bytes" << endl;
    cout << "long double = " << sizeof(long double) << " bytes" << endl;
    cout << "wchar_t = " << sizeof(wchar_t) << " bytes" << endl;

    cout << endl;
    cout << "Struct sizes" << endl;
    cout << "SmallStruct { int, double } = " << sizeof(SmallStruct) << " bytes" << endl;
    cout << "LargeStruct { int, double, char, bool, float } = " << sizeof(LargeStruct) << " bytes (includes alignment padding)" << endl;

    cout << endl;
    cout << "Pointer to struct" << endl;
    SmallStruct obj;
    SmallStruct* ptr = &obj;
    cout << "SmallStruct = " << sizeof(SmallStruct) << " bytes" << endl;
    cout << "SmallStruct* ptr = " << sizeof(ptr) << " bytes (pointer size, platform-dependent)" << endl;
    cout << "*ptr = " << sizeof(*ptr) << " bytes (dereferenced = struct size)" << endl;

    cout << endl;
    cout << "Struct with pointer fields" << endl;
    cout << "int* = " << sizeof(int*) << " bytes" << endl;
    cout << "double* = " << sizeof(double*) << " bytes" << endl;
    cout << "char* = " << sizeof(char*) << " bytes" << endl;
    cout << "bool* = " << sizeof(bool*) << " bytes" << endl;
    cout << "PointerStruct = " << sizeof(PointerStruct) << " bytes (4 pointers x " << sizeof(void*) << " bytes)" << endl;

    return 0;
}
