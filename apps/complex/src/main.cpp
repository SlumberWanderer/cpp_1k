#include "math.hpp"

int main() {
    math::Complex z1, z2;

    cout << "z1 (a b): "; cin >> z1.a >> z1.b;
    cout << "z2 (a b): "; cin >> z2.a >> z2.b;

    z1.print("z1");
    z2.print("z2");

    (z1 + z2).print("z1 + z2");
    (z1 - z2).print("z1 - z2");
    (z1 * z2).print("z1 * z2");

    return 0;
}
