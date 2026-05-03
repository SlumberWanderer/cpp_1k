#include "app.hpp"

using std::cout;
using std::endl;

int main() {
    cout << "Testing Vector3D Functions" << endl;
    
    Vector3D v1(1.0, 2.0, 3.0);
    Vector3D v2(4.0, 5.0, 6.0);

    cout << "Vector v1: " << v1 << endl;
    cout << "Vector v2: " << v2 << endl;

    cout << "v1 + v2 = " << (v1 + v2) << endl;
    cout << "v2 - v1 = " << (v2 - v1) << endl;
    cout << "v1 * 5 = " << (v1 * 5.0) << endl;

    double dot_product = v1 * v2;
    cout << "Dot product (v1 * v2) = " << dot_product << endl;

    cout << "Accessing v1 via []: x = " << v1[0] << ", y = " << v1[1] << ", z = " << v1[2] << endl;
    
    cout << endl;

    cout << "Testing Matrix Functions" << endl;

    Matrix m1(2, 2);
    m1(0, 0) = 1.0; m1(0, 1) = 2.0;
    m1(1, 0) = 3.0; m1(1, 1) = 4.0;

    Matrix m2(2, 2);
    m2(0, 0) = 2.0; m2(0, 1) = 0.0;
    m2(1, 0) = 1.0; m2(1, 1) = 2.0;

    cout << "Matrix M1:" << endl << m1;
    cout << "Matrix M2:" << endl << m2;

    cout << "M1 + M2:" << endl << (m1 + m2);
    cout << "M1 - M2:" << endl << (m1 - m2);
    cout << "M1 * M2:" << endl << (m1 * m2);

    cout << "Rectangular multiplication (2x3 * 3x2):" << endl;
    Matrix rectA(2, 3);
    Matrix rectB(3, 2);

    for(int i = 0; i < 2; ++i) 
        for(int j = 0; j < 3; ++j) rectA(i, j) = 1.0;
        
    for(int i = 0; i < 3; ++i) 
        for(int j = 0; j < 2; ++j) rectB(i, j) = 2.0;

    cout << (rectA * rectB);

    return 0;
}