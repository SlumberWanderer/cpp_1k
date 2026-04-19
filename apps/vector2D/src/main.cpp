#include "vector2D.hpp"

using std::cout;
using std::endl;

int main() {
    Vector2D a(2.0, 3.0);
    Vector2D b(4.0, 6.0);    

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Sum:  " << (a + b) << endl;
    cout << "Scalar Product: " << (a * b) << endl;

    if(a == b) cout << "a equals b" << endl;
    else cout << "a is not equal to b" <<endl;

    return 0;
}