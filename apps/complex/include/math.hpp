#pragma once
#include <iostream>
using namespace std;

namespace math {

    struct Complex {
        double a, b;

        Complex(double a = 0, double b = 0) : a(a), b(b) {}

        Complex operator+(const Complex& z) const {
            return Complex(a + z.a, b + z.b);
        }

        Complex operator-(const Complex& z) const {
            return Complex(a - z.a, b - z.b);
        }

        Complex operator*(const Complex& z) const {
            return Complex(a * z.a - b * z.b,
                           a * z.b + b * z.a);
        }

        void print(const char* label) const {
            cout << label << " = " << a;
            if (b >= 0) cout << " + " << b << "i" << endl;
            else        cout << " - " << -b << "i" << endl;
        }
    };

} 