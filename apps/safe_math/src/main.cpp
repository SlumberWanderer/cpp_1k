#include "exceptions.hpp"

using std::cout;
using std::cin;
using std::endl;

double divide(int a, int b) {
    if (b == 0) {
        throw DivisionByZeroException();
    }
    return static_cast<double>(a) / b;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number (divisor): ";
    cin >> num2;

    try {
        double result = divide(num1, num2);
        cout << "Result: " << result << endl;
    } 
    catch (const MathException& e) {
        std::cerr << "Caught exception: " << e.what() << endl;
    }
    catch (...) {
        std::cerr << "An unknown error occurred." << endl;
    }

    return 0;
}
